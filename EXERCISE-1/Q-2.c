#include <stdio.h>

int main()
{
int i,lastn,number,copy;
int frequency[10]={0,0,0,0,0,0,0,0,0,0};
printf("Enter a number: ");
scanf("%d", &number);
copy=number;
while(copy != 0)
{
    lastn = copy % 10;
    copy /= 10;
    frequency[lastn]++;
}
for(i=0; i<10; i++)
{
    printf("Frequency of %d = %d\n", i, frequency[i]);
}
return 0;
}