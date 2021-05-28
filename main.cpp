#include <conio.h>
#include <stdio.h>
#include <iostream>

int SumOfElements(int* A, int size){
    int i, sum=0;

    printf("Size of A=%d size of A[0]=%d\n",sizeof (A), sizeof (A[0]));
    for(i=0; i<size; i++){
        sum+=A[i];
    }


return sum;
}

int main()
{


    int A[]={1,2,3,4,5};
    int ArraySize=sizeof (A)/sizeof (A[0]);
     printf("Size of A=%d size of A[0]=%d \n",sizeof (A), sizeof (A[0]));
    printf("La suma de los elementos en A es: %d ",SumOfElements(A, ArraySize));

}
