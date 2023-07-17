// solution of tutorial no 41 ......................................
/*#include<stdio.h>
int main()
{
    
    return 0;
}
/*
input :
<h1> This is a heading</h1>

Output :
this is a heading
Input :
<span> This is a heading</span>

Output : 
This is a heading.
*/

#include<stdio.h>
#include<string.h>
void parser(char * string)
{
int in=0;//variable to track we are inside the tag
int index = 0;
for (int i = 0; i< strlen(string);i++){
    if(string[i] == '<'){
in = 1;
continue;
    }
    else if(string[i]=='<')
    {
        in = 0;
        continue;
    }
    if(in==0)
    {
        string[index] = string[i];
        index ++;
    }
}
string[index] = '\0';
}
    int main()
{
    char string[] = "<h1>       this is heading </h1>";
    parser(string);
    printf("This is the heading ~~%s~~",string);
    return 0;
}
/*
input :
<h1> This is a heading</h1>

Output :
this is a heading
Input :
<span> This is a heading</span>

Output : 
This is a heading.
*/
