#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


//Char function
int handle_char(va_list args)
{
    char c = va_arg(args, int);     // taking out from va_list
    return write(1, &c, 1);         // outputting a character.
}

//String function
int handle_string(va_list args)
{
    char *s = va_arg(args, char*);  //This function is taking out
    if (!s) s = "(null)";    //from the va_list to make sure it is not null
    int count = 0;
    while (*s)           //until it is null, it will print a character at a time.
    {
        count += write(1, s++, 1);
    }

    return count;
}

// Integer function
int handle_integer(va_list args)
{
    int num = va_arg(args, int);   //This function is taking out from the va_list,
    char buffer[12];      //creating buffers to convert from integer to string 
    int len = snprintf(buffer, sizeof(buffer), "%d", num);  //the writes the string to output.
    return write(1, buffer, len);   
}

//Handle the binary function
int print_binary(int num)
{
    if (num == 0)                //handling the zero cases
    {                       //then outputs directly to return after handling zero cases.
        return write(1, "0", 1);
    }

    char buffer[33];       //creates a buffer that accompanies null terminator
    int index = 0;      

    while (num > 0)
    {                                            //using modulo to get the remainder
        buffer[index++] = (num % 2) + '0';    //adding a 0 to convert to characters then /2 to move to 
        num/= 2;
    }

    int count = 0;
    for (int i = index -1; i >= 0; i--)   //starting from the end of the buffer so we can write a character
    {                                  //at a time and maintain the binary number ordering.
        count += write(1, &buffer[i], 1);
    }
    return count;
}

//Binary function
int handle_binary(va_list args)
{
    int num = va_arg(args, int);  //this function is taking out from the va_list 
    return print_binary(num);         //using the print_binary to process the binary number(s).
}
