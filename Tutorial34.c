/* example of strings in c
#include<stdio.h>
int main()
{
// DECLARE and initialized string
char str[] = "Code with harry";
printf("%s",str);
    return 0;
}*/

//#include<stdio.h>
//int main()
//char name[322];
//printf("Enter your name:");
//gets(name);
//printf("My name is %s",name);
//return 0;
//}
/* #include<stdio.h>
void printstr(char str[])
{
    int i =0;
    while(str[i]!='\0')
    {
            printf("%c",str[i]);
            i++;
        }
        printf("\n");
    }
    int main()
    {
        //char str[] = {'a','n','s','h','\0'};
        //char str[6] = "ansh";
        char str[34];
        gets(str);
        printf("Using custom function printstr\n");
        printstr(str);
        printf("Using printf %s\n",str);
        printf("Using puts:\n");
        puts(str);
        return 0;
    }*/
#include<stdio.h>
void printstr(char str[])
{
    int i;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
    {
    //char str[] = {'a','n','s','h','\0'};
    //char str[6] = "ansh";
    char str[34];
    gets(str);
    printf("Using custom function printstr\n");
    //printstr(str); charcter by character 
    printf("Using printf %s\n",str);
    printf("Using puts:\n");
    puts(str);
    return 0;
}
