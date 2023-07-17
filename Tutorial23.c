#include<stdio.h>

int main()
{
int marks[2][4]={{45,234,2,3},
{3,2,3,3}};
//for (int  i = 0; i < 4; i++)
//{
//printf("Enter the value of %d element of the array\n",i);
//scanf("%d,",&marks[1]);
//}
//for (int i = 0; i < 4; i++)
//{
//printf("The value is %d element of the array is %d\n",i,marks[i]);
//}

//2-D Array's

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 4; j++)
{
  //  printf("The value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
//In a matrix form
printf("%d",marks[i][j]);
}
printf("\n");

}


//normal array
//marks[0] = 34;
//printf("Marks of student 1 is %d\n",marks[0]);
//marks[0] = 4;
//marks[1] = 34;
//marks[2] = 44;
//marks[3] = 56;
//marks[4] = 76;
//printf("marks of student 1 is %d\n",marks[0]);

return 0;
}
