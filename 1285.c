#include<stdio.h>
int main(){
int n,m,i,j,count[11];
while(scanf("%d %d",&n,&m)!=EOF){
    int c=0;
    for(i=n;i<=m;i++){
        for(j=0;j<10;j++) count[j]=0;
        int tmp=i,d,flag=0;
        while(tmp!=0){
            d=tmp%10;

           count[d]++;
           //printf("count %d %d",d,count[d]);
           tmp=tmp/10;
        }
        for(j=0;j<10;j++){
            if(count[j]>=2) {
                flag=1;
            }
             //printf("count %d",count[j]);

        }
        if(flag==0) c++;

    }
   printf("%d\n",c);
}


}
