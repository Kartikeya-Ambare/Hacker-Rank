#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a=1,b=1;
    float c=1,d=1;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c ,&d);
    int int_sum = a+b;
    int int_diff = a-b;
    float float_sum = c+d;
    float float_diff = c-d;
    printf("%d %d\n",int_sum,int_diff);
    printf("%0.1f %0.1f", float_sum,float_diff);
    return 0;
}
