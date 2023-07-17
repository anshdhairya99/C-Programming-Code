#include <stdio.h>

int b = 34; // this is the global value . since it is declared in main().
int func1(int b1)
{
    static int myvar = 98;
    printf("the value of myvar is %d\n",myvar);
   // printf("the value of b inside func1 is %d\n",b);
    myvar ++;
   // printf("The address of b inside func1 is %d\n",&b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
   // printf("the address of b inside main is %d\n",&b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    printf("The value of func1 is %d\n", val);
    return 0;
}