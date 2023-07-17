#include<stdio.h>
int main()
{     
    int a;
    printf("How many subject you passsed\n");
    printf("Enter 1 if you passed math\n");
    printf("Enter 2 if you pased science\n");
    printf("Enter 3 if you passed the both math and science\n");
    scanf("%d",&a);
if(a==3)
printf("Congratulation You have Won the ₹45 rupees");
else if(a==2||a==1)
printf("Congratulation You have Won the ₹15 rupees");

else
printf("Sorry You do not  Won anything");
return 0;
}

    
