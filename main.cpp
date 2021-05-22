#include <conio.h>
#include <stdio.h>

int main()
{

//There is a simple way in c++ to declare variables and pointers:

    int a=10;
    int *p;
    p=&a;

    //pointer arithmetic
    printf("Address of p is %d\n",p);
    printf("Size of integer is %d bites\n",sizeof (int));
    printf("Address p+1 is %d\n",p+1);

    //Now, what if we wonder what the value at p+1 is ?? Well lets figure it out

    printf("Value at address p+1 is %d\n",*(p+1));
}
