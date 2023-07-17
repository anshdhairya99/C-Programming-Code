/* function definition to swap the values*/
/* Example of call by reference imp. ex.*/
/*#include<stdio.h>
void swap(int*x,int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
return;
}
int main(){
int a=34,b=74;
printf("%d and %d\n",a,b);
swap(&a,&b);
printf("%d and %d\n",a,b);
return 0;
}*/
/*#include<stdio.h>
void changevalue(int*address)
{
    *address =654;
}
int main()
{
    int a=34,b=54;
    printf("The value of a now is %d\n",a);
    changevalue(&a);
    printf("The value of a now is %d\n",a);
    return 0;
}//

/*Quick Quiz:
Give two number a and b, add them then subtract then assign them a and b using call by refernce.

a = 3
b = 4
a
After running the function, the value of a and b should be:*/
#include<stdio.h>
int main()
{
    int a,b;
printf("Enter the first number value of a");
scanf("%d\n",&a);  
printf("Enter the second number value of b ");
scanf("%d\n",&b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("After the swapping %d and %d\n",a);
    printf("After the swapping %d and %d\n",b);
    
    return 0;

}
