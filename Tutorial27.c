#include<stdio.h>
int main()
{
  //char a ='3';
 // char* ptra = &a;
  //printf("%d\n",ptra);
 //ptra--;
 // printf("%d\n",ptra);
 // printf("%d\n", ptra-2);
  
    //
      
int arr[] ={311,2,3,4,5,6,67};
int* arrayptr =arr;
printf("value at position 3 of the array is %d\n",arr[3]);
printf("the address of first element of yhe array is %d\n",&arr[0]);
printf("the aaddress of the first element of the array %d\n",arr);
printf("the address of the first element of the array is %d\n",&arr[1]);
printf("the address of the first element of the array is %d\n",arr + 1);
arrayptr++; // this line through an error. 

printf("value at position 3 of the array is %d\n",arr[3]);
printf("the value at address of first element of yhe array is %d\n",*(&arr[0]));
printf("the value at address of first element of yhe array is %d\n",arr[0]);
arrayptr++;
printf("the value at aaddress of the first element of the array %d\n",*(arr));
printf("the value at address of the first element of the array is %d\n",arr[1]);
printf("the value at address of the first element of the array is %d\n",*(arr + 1));
 






    return 0;
}