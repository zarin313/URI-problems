#include<stdio.h>
#include<math.h>
int main(){
int m,n,count;
double a,b,sum1=0,sum2=0;
char name[1000];
scanf("%d",&m);
int i=1,j;
n=m;
while(n>0){
    count=1;
    scanf("%lf",&a);
    getchar();
    fgets(name, 1000, stdin);
    for(j=0;name[j]!='\0';j++){
        if(name[j]==32) {
                printf("rrr %d\n",count);
                count++;
        }
//printf("%d\n",j);
    }

    printf("day %d: %d kg\n",i,count);
    i++;
    n--;
    sum1=sum1+count;
    sum2=sum2+a;

}
printf("%0.2lf kg by day\nR$ %0.2lf by day\n",sum1/m,sum2/m);
return 0;
}
