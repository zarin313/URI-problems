#include <stdio.h>
int main(){
    int i,j,n,k,l,m,p;
    scanf("%d",&n);
    int r=0;
    while(r<n){
        int arr[9][9],count[10],track[3][3],flag=1,countc[10],countr[10];
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                scanf("%d",&arr[i][j]);
            }

        }

        for(k=0;k<3;k++){
          for(i=0;i<9;i++){
            if(i%3==0){
               // printf("mmm\n");
               for(p=1;p<10;p++) {

                count[p]=0;
              }

            }
            for(j=(k*2)+k;j<=((k*2)+k+2);j++){
                    //printf("%d %d %d\n",k,i,j);
                count[arr[i][j]]++;
            }
            if((i+1)%3==0 && j%3==0){
            for(p=1;p<10;p++) {
  //printf("count[%d]= %d ",p,count[p]);
              }
                for(m=1;m<=9;m++){
                    if(count[m]!=1) {

                        flag=0;
                        break;
                    }
                }
            }
        }

       if (flag==0){
        break;
       }

    }
    if(flag!=0){
    for(i=0;i<9;i++){
        for(j=1;j<=9;j++){
            countc[j]=0;
        }
        for(k=0;k<9;k++){
            countc[arr[i][k]]++;
            if(countc[arr[i][k]]>1){
                flag=0;
                break;
            }
        }
        if (flag==0) break;
    }
    }

    if(flag!=0){

        for(i=0;i<9;i++){
        for(j=1;j<=9;j++){
            countr[j]=0;
        }
        for(k=0;k<9;k++){
            countr[arr[k][i]]++;
            if(countr[arr[k][i]]>1){
                flag=0;
                break;
            }
        }
        if (flag==0) break;
    }
    }
    if(flag!=0) printf("Instancia %d\nSIM\n",r+1);
    else if(flag==0) printf("Instancia %d\nNAO\n",r+1);
    printf("\n");
    r++;
    }

return 0;
}
