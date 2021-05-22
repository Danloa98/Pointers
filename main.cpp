#include <conio.h>
#include <stdio.h>

int main()
{

    int a;
    int *p;
    a=10;
    p=&a;//&a=address of a
    printf("a=%d\n",a);

    *p=12;//dereferencing

    printf("a=%d\n",a);

    int b=20;
    *p=b;//will the address in p change to point b?? NOOO! JEJE
     printf("a=%d\n",a);

   /* printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
*/
     //Now if we want to change the pointer to a different memory address
     //we do the next thing

     int c=44;

     p=&c;
     printf("c=%d\n",*p);


}
