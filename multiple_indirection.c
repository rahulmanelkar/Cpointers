#include <stdio.h>

#define LENGTH 3

int data[LENGTH];

int main(int argc, char **argv){
    int *pi;
    int **ppi;
    printf("Multiple indirection\n");

    //initialize the array
    for(int i=0;i<LENGTH;i++){
        data[i] = i;
    }
    for(int i=0;i<LENGTH;i++){
        printf("%d\t",data[i]);
    }

    pi = data; //Pointer to array. Array is just a pointer too
    ppi = &pi; //pointer to the pointer

    for (int i=0;i<LENGTH;i++){
        printf("\nLoop[%d] array address is %p\n",i,data);
        printf("item pointed to by pi is %d\n",*pi); //dereference pi
        printf("item pointed to by ppi is %p\n",*ppi); //dereference ppi 
        printf("item pointed to by double indirection of ppi is %d\n",**ppi); //dereference ppi 
        printf("The address of pi is %p and value of pi is %p\n\n",&pi,ppi);
        pi+=1; //advance pointer pi
    }

}