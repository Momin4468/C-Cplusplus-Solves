#include<stdio.h>
int main ()
{
int x=10;
char *ch;
int *p;
p = &x;
ch = (char *) p; // Type Casting and Pointer Conversion
printf (" *ch = %c And *p = %d", *ch,*p); // Output maybe unexpected depending on the compiler.
return 0;
}
