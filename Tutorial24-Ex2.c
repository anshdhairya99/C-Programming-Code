#include<stdio.h>

int main()
{
char input;
float kmsToMiles = 0.621371;
float inchesToFoot = 0.0833333;
float cmsToInches = 0.393701;
float poundTokgs = 0.453592;
float inchesToMeters = 0.0254;
float first,second;

while (1)
{
printf("Enter the input character.q to quit\n 1. kms to miles  2.inches to foot 3. cms to inches  4. pound to kgs  5. inches to meters"); 
}
scanf("%c",input);
switch(input)
{
case 'q':
printf("Quitting the program....");
goto end;
break;
case '1':
printf("Enter quantity in term of first unit\n");
scanf("%f",&first);
second=first=kmsToMiles;
printf("%f kms is equal to %f Miles\n",first,second);
break;
case'2':
printf("Enter quantity in term of first unit\n");
scanf("%f",&first);
second=first=inchesToFoot;
printf("%f Inches is equal to %f Foot\n",first,second);
break;
case'3':
second=first=cmsToInches;
printf("%f cms is equal to %f Inches\n",first,second);
break;
case'4':
second=first=poundTokgs;
printf("%f Pounds is equal to kgs %f\n",first,second);
break;
case'5':
second=first=inchesToMeters;
printf("%f inches is equal to %f meters\n",first,second);
break;

default:
break;
}

end:
return 0;
}





