#include<stdio.h>
int main()
{
   // printf("Lets learn about the pointers\n");
   // int a=88;
   // int  *ptra=&a;
   // int *ptr2 = NULL;

//printf("The address of pointer to a is %p\n", &ptra);
//printf("The address of a is %p\n", &a);
//printf("The addess of a is %p\n", ptra);
//printf("The address of a some garbage is %p\n", ptr2);// This condition only for garbage value.
//printf("The value of a is %d\n", ptra);
//printf("The value of a is %d\n", a);
    int a=123;
    int *ptra=&a;
    int *ptr2 =NULL;
    printf("The adress of pointer to a is %p\n", &ptra);
    printf("The adress of a is %p\n", &a);
    printf("The adress of a is %p\n", ptra);
    printf("The address of a some garbage is %p\n", ptr2);
    printf("The value of a is %d\n",ptra);
    printf("The value of a is %d\n", a);
    return 0;
}
// this is also a program of pointer. how we used the pointer in vs code.