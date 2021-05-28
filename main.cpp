#include <conio.h>
#include <stdio.h>
#include <iostream>

void Incrementar(int *p){
    *p=(*p)+1;

}


int main()
{

    int A[]={1,8,10,3,4};//We are creating an array of 5 elements
    /*
     This is an array of integers, so as we already know, each one of the integers
     will take 4 bytes of memory in tye RAM, so it means that this array A[] takes
     20 bytes on the RAM. We can say A[] takes 20 bytes
    */

    /*
     The way C++'s compiler works allow us to manipulate memory in an array in different ways

     For instance, if we want to access the memory addess of the first elemet on the array we can do it in the next 2 ways:

     */

//1. We just use the name of the array and the output will be the memory address of the first elemento on it
   printf("Memory address of the first element of A[] (1st option) %d\n",A);


   //2. We do it by using pointers or a reference to the first element on the array

   printf("Memory address of the first element of A[] (2nd option) %d\n",&A[0]);


   //2.1 We can also store the adress using a pointer the A[0] address

   int *p=&A[0];
   printf("Memory address of the first element of A[] (2.1nd option) %d\n",p);


   //2.2 And as way 1 we can use the next syntax

   int *p2=A;

   printf("Memory address of the first element of A[] (2.2nd option) %d\n",p2);


   //And finally we can see the value stored at that memory address by dereferencing the pointer


   printf("Value stored at A[0] (1st option) %d\n",*A);
    printf("Value stored at A[0] (2nd option) %d\n",A[0]);
     printf("Value stored at A[0] (3rd option) %d\n",*p);
      printf("Value stored at A[0] (4th option) %d\n",*p2);



//We can do some tricks manipulating the memory address, for example:
      //Using arithmetic pointers

      printf("Memory address of A[1] %d\n",A+1);
      printf("Memory address of A[1] %d\n",&A[1]);
      printf("value stored in A[1] %d\n",*(A+1));
      printf("value stored in A[1] %d\n",A[1]);

//And by dereferencing, as we already know, we can change the value stored at that memory address, easy



}
