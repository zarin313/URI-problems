#include<stdio.h>
int main(){
int n,i,j;
while(scanf("%d",&n)!=EOF){
    int size[n],count=0;
    char l[n];
    for(i=0;i<n;i++){
    scanf("%d %c",&size[i], &l[i]);
    }
    //for(i=0;i<n;i++) printf("%c",l[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

            if(size[i]==size[j] && l[i]!=l[j]){
                size[j]=0;
                l[j]=0;
                count++;
                break;
            }
        }
    }

  printf("%d\n",count);
}


return 0;

}
