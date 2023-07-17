#include<stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:

1. Name
2 . Driving Licence no
3 . Route 
4 . Kms
your program should be able to take n=3 as input and your drivers will start inputting their details one by one.
your proram should print details of the drivers in a beautiful fashion.
user structure 
*/
struct Driver 
{
    char name[34];
    char DlNo[45];
    char route[47];
    int kms;
};
int main ()
{
    struct Driver D1,D2,D3;

// THE DETAILS OF THE FIRST DRIVERS 

    printf("Enter the details of Driver No 1\n");

    printf("Enter the name of first\n");
    scanf("%s",&D1.name);    

    printf("Enter the dlNo of first \n");
scanf("%s",&D1.DlNo); 

            printf("Enter the route of first\n");
    scanf("%s",&D1.route);  
            printf("Enter the number of kms of  first Driver\n");
    scanf("%s",&D1.kms);  


// THE DETAILS OF THE SECOND DRIVERS


printf("Enter the details of Driver No 2\n");

    printf("Enter the name of SECOND DRIVER \n");
    scanf("%s",&D2.name);    

    printf("Enter the dlNo of SECOND DRIVER \n");
scanf("%s",&D2.DlNo); 

            printf("Enter the route of SECOND DRIVER\n");
    scanf("%s",&D2.route);  
            printf("Enter the number of kms of  SECONDDriver\n");
    scanf("%s",&D2.kms);    
 

// THE DETAILS OF THE THIRD DRIVERS 


printf("Enter the details of Driver No 3\n");

    printf("Enter the name of THIRD DRIVER \n");
    scanf("%s",&D3.name);    

    printf("Enter the dlNo of THIRD DRIVER \n");
scanf("%s",&D3.DlNo); 

            printf("Enter the route of THIRD DRIVER\n");
    scanf("%s",&D3.route);  
            printf("Enter the number of kms of  THIRD Driver\n");
    scanf("%s",&D3.kms);    

// INFORMATION OF DRIVERS

printf("Printing information of these drivers\n");

printf("For Driver no. 1\nName is %s", D1.name);
printf("DL number is  %s", D1.DlNo);
printf("route is %s\n",D1.route);
printf("kms is %d\n",D1.kms);


printf("For Driver no. 2\nName is %s", D2.name);
printf("DL number is  %s", D2.DlNo);
printf("route is %s\n",D2.route);
printf("kms is %d\n",D2.kms);


printf("For Driver no. 3\nName is %s", D3.name);
printf("DL number is  %s\n", D3.DlNo);
printf("route is %s\n",D3.route);
printf("kms is %d\n",D3.kms);

    return 0;
}