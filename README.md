# Custom printf function

## Files and functions
* **_putchar.c**:
  * int _putchar(char c) - function to print char

* **_strlen.c**:
  * int _strlen(char *string) - gets string length

* **get_bin.c**:
  * int _bin(va_list bin) - function to print binary

* **get_char.c**:
  * int ch(va_list character) - function to return char

* **get_hex.c**:
  * int _hex_str(unsigned int n, unsigned int hex, char alpha) - converts the number from base 10 to hex

* **get_int.c**:
  * int _int(va_list integ) - function to print integers

* **get_oct.c**:
  * int _oct(va_list octo) - function to print octal

* **get_rot13.c**:
  * int _rot13(va_list rot) - prints rot13 version

* **get_str.c**:
  * int str(va_list *s) - prints string to stdout

* **get_unsigned.c**:
  * int _ui(va_list unsign) - unsigned int print to stdout

* **holberton.h**: header file

* **man_3_printf**: _printf man page

* **printf.c**: main custom _printf function
  * int print_op(const char *format, fmt_t *print_arr, va_list list) - function to check which specifier to print
  * int _printf(const char *format, ...) - prints output according to format