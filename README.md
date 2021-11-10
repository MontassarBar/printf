##-printf

#DESCRIPTION

First Holberton School group project (Pair Programming):

_printf is a custom implementation of the C programming function printf.
Similar to the printf (3) - Prints formatted data to stdout


Writes the C string pointed by format to the standard output (stdout). 
If format includes format specifiers (subsequences beginning with %), 
the additional arguments following format are formatted and inserted in the 
resulting string replacing their respective specifiers.


function prototype
int _printf(const char *format, ...);

format
C string that contains the text to be written to stdout.
It can optionally contain embedded format specifiers that are replaced by the values specified in subsequent additional arguments and formatted as requested.


A format specifier follows this prototype: 
%[flags][width][.precision][length]specifier 

Where the specifier character at the end is the most significant component, since 
it defines the type and the interpretation of its corresponding argument:

Implemented format specifiers
## Specifier    | Output                 | Example     |
| :-----------: |:----------------------:| :-----------:|
| c             | Character              | a            |
| s             | String of characters   | print string |
| d or i        | decimal                | 392          |
| %             | A % followed by another| 
                | % character will write | 
                | a single % to the stream


Compilation and testing
We are compiling via:

$ gcc -Wall -Werror -Wextra -pedantic *.c

Authors

Montassar Barbouchi:[I'm an inline-style link with title](https://github.com/MontassarBar"Github link")


Mouna Ben Ali :[I'm an inline-style link with title](https://github.com/MounaBenAli"Github link")

