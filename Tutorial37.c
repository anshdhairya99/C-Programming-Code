#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
    struct student harry, ravi, ansh;
    harry.id = 813;
    ravi.id = 724;
    ansh.id = 777;
    harry.marks = 734;
    ravi.marks = 829;
    ansh.marks = 979;
    // harry.marks = 734;
    //  ravi.marks = 297;
    // ansh.marks = 799;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    ansh.fav_char = 'p';

    printf("harry got %d marks\n", harry.marks);
    printf("ravi got %d marks\n", ravi.marks);
    printf("ansh got %d marks\n", ansh.marks);
    return 0;
}

// print all the information of given employer.

// #include<stdio.h>
// struct employer
// {
// int name;
// int id; // Only this we can find that.
// int address;
// int salary;
// char fav_char;
// };
// int main()
// {
// struct employer dhuriya,kalishanker,rakesh,shivashish,anil;
// dhuriya.id = 2354768;
// kalishanker.id = 8765654;
// rakesh.id = 7689051;
// shivashish.id = 567876;
// anil.id = 67854312;
// dhuriya.fav_char= 'p';
// kalishanker.fav_char = 'p';
// rakesh.fav_char= 'p';
// shivashish.fav_char ='p';
// anil.id = 'p';

// printf("dhuriya got %d id\n",dhuriya.id);
// printf("kalishanker got %d id\n",kalishanker.id);
// printf("rakesh got %d id\n",rakesh.id);
// printf("shivashish got %d id\n",shivashish.id);
// // printf("anil got %d id\n",anil.id);
// return 0;
// }
