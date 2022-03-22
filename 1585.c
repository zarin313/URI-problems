#include<stdio.h>
#include<math.h>
int main(){
    int n,i,a,b,c;
    float area;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        area=4*((a*b)/8.0);

        c=trunc(area);
        printf("%d cm2\n",(int)c);
    }
return 0;
}
