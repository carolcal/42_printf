# Printf

**Printf** is a project at 42 School that implements a function similar to printf function from `stdio.h` library. The goal is to implement the following convertions:
  - %c Prints a single character.
  - %s Prints a sting.
  - %p Prints the address of a pointer in hexadecimal.
  - %d Prints a decimal number (base 10).
  - %i Prints a int (base 10).
  - %u Prints a decimal number (base 10) without signal.
  - %x Prints an hexadecimal number (base 16) in lower case.
  - %X Prints an hexadecimal number (base 16) in upper case.
  - %% Prints percentage.

## Functions Overview

- **`ft_printf(const char *str, ...)`**: 
  - The core function of this project, `ft_printf` receives the string and the variables.
  - Initializes `va_list args` using `va_start` function.
  - Loops throw the string printing each char or and calling `ft_verify` function when char is `%`.
  - Returns the number of printed characters

- **`ft_verify`**:
  - Verify if the next character is in the list of convertions and calling the respective function responsible to convert and print its argument. The va_list type makes sure that the program will always call for the next argument on the list.
  - Receives from each function the number of printed chars and returns it to the main function.

### Utility Functions

- **`ft_putchar(char c)`**: Prints a single char and returns 1.
- **`ft_putstr(char *s)`**: Prints a string and returns its size.
- **`ft_putbase(long long n, char *base, int div)`**: Converts a number to a given base, prints it and returns its size.
- **`ft_putpointer(unsigned long p)`**: Receives a long, converts it to hexadecimal base, prints it and returns its size

## Compilation and Usage

Just run make command on the terminal
```shell
make
```
