#include <stdio.h>
#include <math.h>
int main()
{
int number,count=0,lastnum,firstnum,a;
printf("Enter a number : ");
scanf("%d",&number);
while(number!=0){
    number=number/10;
    count = count +1;
}
lastnum=number%10;
firstnum=number%100;
printf("%d",firstnum);
return 0;
}
