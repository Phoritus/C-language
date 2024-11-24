#include <stdio.h>

// pointer = a "variable-like" reference that holds a memory address to another variable,arrays etc.
//          some tasks are performed more easily with pointers
//          * = indirection operator (value at address)

void printAge(int *pAge)
{
    printf("Your are %p years old",*pAge);
}

int main()
{
    int age =29;
    int *pAage=NULL;//good practice to assign NULL if declaring a pointer
    pAage = &age;
    
    //printf("address of age: %p\n",age);
    //printf("address of pointer: %p\n",*pAage);

    //printf("value of age: %d\n",age);
    //printf("value at stored in address: %d\n",*pAage);

    printAge(pAage);


    return 0;
}