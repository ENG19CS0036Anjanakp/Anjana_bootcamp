//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main()
{
int x,h,d,b,volume;
printf("Enter the height,breadth,and depth of tromboloid":\n);
scanf("%d%d%d",&h,&b,&d);
x = ((h*d*b)+(d/b));
volume = (x/3);
printf("The volume of the tromboloid is %d",volume);
return 0;
}
