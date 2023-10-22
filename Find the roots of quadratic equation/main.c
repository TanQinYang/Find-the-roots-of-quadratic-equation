#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Pls enter the value of a,b,c\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if (b*b-4*a*c>=0)
   {
       printf("%lf\n",(-b+(b*b-4*a*c))/2*a);
       printf("%lf\n",(-b-(b*b-4*a*c))/2*a);
    }
    else
        printf("There aren't any real roots");
    return 0;
}
