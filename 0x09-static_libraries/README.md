## 0x09-static_libraries
### Programs
- .gitignore: to ignore unit tests.
- main.h: header file.
- libmy.a: static library (probabl) comprising functions in the other, previous source code files.
  0. putchar: writes a character to the standard output?
  1. islower: Checks if a passed character is a lowercase characer.
  2. isalpha: Checks if a character is alphabetic.
  3. abs: Returns the absolute value of passed int.
  4. isupper: Checks for uppercase character.
  5. isdigit: Checks if a character is numeric (based on the ASCII table).
  6. strlen: Checks the lenght of a passed string (char array).
  7. puts: Prints out a message to stdout.
  8. strcpy
  9. atoi
  10. strcat
  11. strncat
  12. strncpy
  13. strcmp
  14. memset
  15. memcpy
  16. strchr
  17. strspn
  18. strpbrk
  19. strstr

+ "gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c" to generate the object files (by preprocessing, compiling, and assembling).
+ "ar -rcs libmy.a *.o" to generate the static library - an archive named 'libmy.a' - and index it.

