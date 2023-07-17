#include <stdio.h>
int main()
{
// label:
//     printf("We are inside label\n");
//     goto end;
//     printf("Hello Ansh\n");
//     goto label;
// end:
//     printf("We are at end");



int i,j,num;
for (i = 0; i<8; i++)
{
printf("%d\n",i);
for(j=0; j < 8; j++)
{
    printf("Enter the number.enter 0 to exit\n");
    scanf("%d\n",&num);
    if(num==0){
    goto end;
    }
}



}
end:
    return 0;
}
