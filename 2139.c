#include<stdio.h>
int main(){
int m,d;
while(scanf("%d %d",&m,&d)!=EOF){
        int x;
    if(m==12 && d==24 ) printf("E vespera de natal!\n");
    else if(m==12 && d==25) printf("E natal!\n");
    else if(m==12 && d>25) printf("Ja passou!\n");
    else{
        int arr[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25},x;
        if(d<=25) x=25-d;
        else{
            x=25+arr[m-1]-d;
            m=m+1;
        }
        int rm=0,i;
        for(i=m;i<12;i++){
            rm=arr[i-1]+rm;
        }
        x=rm+x;
        printf("Faltam %d dias para o natal!\n",x);

    }


}


return 0;
}
