# Printf

**Printf** is a project at 42 School that implements a custom version of the `printf` function from `stdio.h` library. The goal is to implement the following convertions:
- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints the address of a pointer in hexadecimal.
- `%d`: Prints a signed decimal integer (base 10).
- `%i`: Prints a signed integer (base 10).
- `%u`: Prints an unsigned decimal integer (base 10).
- `%x`: Prints a hexadecimal number (lowercase).
- `%X`: Prints a hexadecimal number (uppercase).
- `%%`: Prints a percentage sign.

## Functions Overview

- **`ft_printf(const char *str, ...)`**: 
  - The main function of the project.
  - Takes a format string and a variable number of arguments.
  - Initializes `va_list args` using `va_start`.
  - Iterates through the format string, printing characters or calling `ft_verify` when encountering `%`.
  - Returns the total number of printed characters.

- **`ft_verify`**:
  - Checks if the character after `%` is a valid conversion specifier.
  - Calls the corresponding function to process and print the argument.
  - Uses `va_list` to fetch the appropriate argument.
  - Returns the number of characters printed for that conversion.

### Utility Functions

- **`ft_putchar(char c)`**: Prints a single char and returns 1.
- **`ft_putstr(char *s)`**: Prints a string and returns its length.
- **`ft_putbase(long long n, char *base, int div)`**: Converts a number to a given base, prints it, and returns the number of printed characters.
- **`ft_putpointer(unsigned long p)`**: Converts a pointer to a hexadecimal string, prints it, and returns the number of printed characters.

## Compilation and Usage

To test the library, you can simply run:
```shell
make
cc main.c -L. -lftprintf -I. -o test_printf
./test_printf
```
This will compile and run a test program using the `main.c` file, which contains some sample tests.

Alternatively, you can include the library in your own project and use the `ft_printf` function as a drop-in replacement for `printf`.

![Program Demo](https://github.com/user-attachments/assets/fb3918cf-4de6-42af-93ae-5c7a28c0b299)


