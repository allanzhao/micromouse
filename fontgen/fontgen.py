import sys, getopt
from PIL import Image

def main(argv):
    options, arguments = getopt.getopt(argv, '')

    if len(arguments) >= 2:
        input_file_name = arguments[0]
        output_file_name = arguments[1]

        image = Image.open(input_file_name)

        if image.size != (128, 128):
            print 'Error: Image must be 128x128 pixels in size.'
            exit()

        rgb_image = image.convert('RGB')

        all_char_bits = []
        for c in range(256):
            start_x = c % 16 * 8
            start_y = c // 16 * 8

            char_bits = []
            for x in range(start_x, start_x + 5):
                column_bits = 0

                for y in range(start_y, start_y + 8):
                    r, g, b = rgb_image.getpixel((x, y))

                    pixel_set = 1 if r == 0 and g == 0 and b == 0 else 0

                    column_bits |= pixel_set << (start_y - y + 7)

                char_bits.append(column_bits)

            all_char_bits.append(char_bits)

        with open(output_file_name, 'w') as output_file:
            output_file.write(
                '/* Automatically generated file, do not edit. */\n'
                '\n'
                '#include <stdint.h>\n'
                '\n')
            
            output_file.write('uint8_t fontPixels[256][5] = {\n')

            for char_bits in all_char_bits:
                output_file.write('    {')

                for column_bits in char_bits:
                    output_file.write('0x%02x, ' % column_bits)

                output_file.write('},\n')

            output_file.write('};\n')


if __name__ == '__main__':
    main(sys.argv[1:])
