# ft_printf
My own printf

The _printf() function produces output according to a format which is described below.

This function write its output to the stdout, the standard output stream. 

Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:

%c: Prints a single character.

%s: Prints a string of characters.

%d: Prints integers.

%i: Prints integers.

%b: Prints the binary representation of an unsigned decimal.

%u: Prints unsigned integers

%x: Prints the hexadecial representation of an unsigned decimal in lowercase letters

%X:Prints the hexadecial representation of an unsigned decimal in uppercase letters

%r: Prints a reversed string

%R: Prints the Rot13 interpretation of a string

The formula is:

% [ param-no $] flags width [ . precision ] type conversion
or
% [ param-no $] flags width . * [ param-no $] type conversion


For example, in the conversion specifier ‘%-10.8ld’, the ‘-’ is a flag, ‘10’ specifies the field width, the precision is ‘8’, the letter ‘l’ is a type modifier, and ‘d’ specifies the conversion style. (This particular type specifier says to print a long int argument in decimal notation, with a minimum of 8 digits left-justified in a field at least 10 characters wide.)
