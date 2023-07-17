#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of Malloc
//    int*ptr;
//     int n;
//      printf("Enter the size of the array you want to create\n");
//      scanf("%d",&n);

//      ptr = (int *) malloc(n* sizeof (int));
//      for (int i = 0; i < n; i++)
//      {
//         printf("Enter the value no %d of this array\n",i);
//         scanf("%d",&ptr[i]);
//      }
//      for (int i = 0; i < n; i++)
//      {
//         printf("The value at %d of this array is %d\n",i,ptr[i]);
//      } 


   // Use of Calloc


//    int*ptr;
//     int n;
//      printf("Enter the size of the array you want to create\n");
//      scanf("%d",&n);

//      ptr = (int *) calloc(n, sizeof (int));
//      for (int i = 0; i < n; i++)
//      {
//          printf("Enter the value no %d of this array\n",i);
//          scanf("%d",&ptr[i]);
//      }
//     for (int i = 0; i < n; i++)
//       {
//         printf("The value at %d of this array is %d\n",i,ptr[i]);
//      } 
     
// Use of Realloc 



// int*ptr;
//     int n;
//      printf("Enter the size of the  new array you want to create\n");
//      scanf("%d",&n);

//      ptr = (int *)realloc(ptr, n*sizeof (int));
//      for (int i = 0; i < n; i++)
//      {
//          printf("Enter the value no %d of this array\n",i);
//          scanf("%d",&ptr[i]);
//      }
//     for (int i = 0; i < n; i++)
//       {
//         printf("The  new value at %d of this array is %d\n",i,ptr[i]);
//      } 


//Use of Free()

int*ptr;
    int n;
     printf("Enter the size of the  new array you want to create\n");
     scanf("%d",&n);

     free(ptr);
     for (int i = 0; i < n; i++)
     {
         printf("Enter the value no %d of this array\n",i);
         scanf("%d",&ptr[i]);
     }
    for (int i = 0; i < n; i++)
      {
        printf("The  new value at %d of this array is %d\n",i,ptr[i]);
     } 


     
    return 0;
}


// Quiz to use the Free()

//How to effeciently used the free in program. used the free mid of the program.

//Make a array