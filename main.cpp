#include <conio.h>
#include <stdio.h>
#include <iostream>

void Incrementar(int *p){
    *p=(*p)+1;

}


int main()
{

    int a=10;
    int *p=&a;

    printf("Address of a is %d\n",p);
//FIRST WAY
    Incrementar(&a);
    printf("a+1 is %d\n",a);

    /*
     So, in this example im incrementing the velue of a by
     passing its mamory address as an argumento to the method
     Incrementar which means I'm calling the method by reference

     There are two ways I can pass the address of a

     The first one is the one you can see above, in this I
     pass &a which is directly the memory address of a

     The secod is by storing that memory address in a ponter variable
     of type int, both ways will give the same result since
     Im passing the same exact memory address
     */
 //SECOND WAY (Remember that p is a pointer, and it stores an address
    //so the syntax below is completely valid and perfect)
    Incrementar(p);
    printf("a+1 is %d\n",*p);

    //I can access the value of a by dereferencing the pointer pointing to that variable memory address
    //Or I could just simply print a straight



    //6422036
}
