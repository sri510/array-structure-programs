/*
Initializing variables of type struct
a = 2, b = 0, c = 1, d = 0
a = 20, b = 21, c = 23, d = 15
*/
#include <stdio.h>
struct Rectangle
{
int a, b, c, d;
};

int main()
{
struct Rectangle R1 = {.b = 0, .c = 1, .a = 2};
struct Rectangle R2 = {.a = 20, .c = 23, .b = 21, .d = 15};

printf ("a = %d, b = %d, c = %d, d = %d\n", R1.a, R1.b, R1.c, R1.d);
printf ("a = %d, b = %d, c = %d, d = %d\n", R2.a, R2.b, R2.c, R2.d);
return 0;
}
