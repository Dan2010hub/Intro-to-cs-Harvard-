Data types and variables 

Int
   a. the int data type is used for vaiable that will store integers 
   b.  intergers always take up 4bytes of memory (32 bits) this means the range of values they can store is necessarilty limited to 32bits worth of information

UNSIGNED INT 
    Unsigned int is a qualifier that can be applied to certain types including (int) which effectively doubles the postive range of variables of that type, at the cost of disallowing any negative values 

Char 
    the char data type is used for variables that will store single characters

    characters always take up 1 byte of memory(8 bits) This means the range of value they can store is necessarily limited to 8 bits of information

    ASCII helped developed a mapping of characters like A,B, C etc to numeric values in the postive sides  of the range 

    ASCII = is the dictionary that computer use to turn numbers to ABC
    American Standard Code for Information Interchange


FLoat 
    the float data type is used for variables that will store floating-point values , also known as real numbers 

    floating points values alwasys take up 4 bytes of memory (32bits)
    

double 
    the double data type is used for variables that will store floating point values, also known as real numbers

    the difference is that doubles are double precison they always take up to 8 bytes of memory (64bits)

    with an additional 32 bits of precision relative to a float, double allows us to be specify much more precise real numbers

Bool
    the bool data type is used for variable that will store a Boolean value, more precisely they are capable only of storing one of two values e.g True and  false


String 
    The string data type is used for the varibales that will store a series of characters, which programmers typically call a string 

    strings include things such as words, sentences, paragraphs  and the like


Type 

Void 
    is a type, but not a data type 

    functions can have a void return type, which just means they dont return a value
    the parameter list of a function takes no parameters

    void can be refered to as a place hlder for "nothing" it is more complex than that 

Note: In the Real C no built in string, String is a char [] array of characters, there is no also bool or boolean 
to use bool import this <stdbool.h>

to use the above data type u should include or import this 
#include <cs%0.h>

prittf Specifiers 

%i = integer 
%f = float/double 
%c = char(character)
%s = string
