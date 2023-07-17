#include<stdio.h>
int main()
{
    int age;
    printf("Enter the Your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if(age>=18)
    printf("You have vote it");
    else if (age>10)
    printf("You are between the 10 and 18 then you have vote for kids");
    else
    printf("You can not vote");
    return 0;
}


    



