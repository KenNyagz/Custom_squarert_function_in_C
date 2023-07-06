#include<stdio.h>

/*finding square root of a number*/

int main()
{
float  i,n;

printf("Guess a no: ");
scanf("%f`", &n);
for (i=0.01; i*i < n; i=i+0.01)
continue;
printf("the square of n is %f\n",i);

return 0;
}
