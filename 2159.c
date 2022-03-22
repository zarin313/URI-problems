#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double max,min;
    scanf("%d",&n);
    max=n/log(n);
    min=1.25506*(n/log(n));
    printf("%0.1lf %0.1lf\n",max,min);

return 0;

}
