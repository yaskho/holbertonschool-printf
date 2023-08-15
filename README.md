Project: C - Custom printf

Description:

In this project, I created my own version of the _printf() function, which works like the regular printf() function in the C library.
What I Learned:

How to use variadic functions for flexible arguments
Understanding the inner workings of printf
Organizing multiple files and establishing an effective workflow
Function Prototype:

int _printf(const char *format, ...);
How to Use:

Displays a formatted message on the screen
Returns the count of characters in the message on success, -1 if there's an issue
Use it like this: _printf("message format", arguments...) where the message format can have placeholders and regular text
Examples:

_printf("Hello, Holberton\n") shows "Hello, Holberton" with a new line
_printf("%s", "Hi!") shows "Hi!"
_printf("Count: %d", 42) displays "Count: 42"
