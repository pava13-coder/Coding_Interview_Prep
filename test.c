#include <stdio.h>
// to start program from another function than main

#define main custome_parth_main // Method 1:- use define directives and replace the func name

int custome_parth_main()
{
    printf("hello world\r\n");

    return 0;
}