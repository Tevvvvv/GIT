#include<stdio.h>

int main()
{
//This is the line causing issue in the conflict branch
printf("Far Thee Well!\n");

//This is the line causing issue in the master branch
//This is the second line causing issue in the <*master/conflict> branch
return 0;
}


