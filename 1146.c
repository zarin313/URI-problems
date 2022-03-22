#include<stdio.h>
int main(){
    int count=0;
    double avg,dis,sum=0;
    char n[1000];
    while(gets(n)){
            //getchar();
            //printf("ccc\n");
        scanf("%lf",&dis);
        sum=sum+dis;
        count++;
    }
    //printf("%d\n",count);

    avg=sum/count;
    printf("%0.1lf\n",avg);
return 0;
}
