#include<stdio.h>
int main(){
    int p,j1,j2,r,a;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    int sum=j1+j2;
    if((p==1 && sum%2==0) || r==1){

            if(r==1 && a==0) printf("Jogador 1 ganha!\n");
            else if(r==1 && a==1) printf("Jogador 2 ganha!\n");
            else printf("Jogador 1 ganha!\n");
    }
    else if((p==0 && sum%2!=0) || r==1){
            if(r==1 && a==0) printf("Jogador 1 ganha!\n");
            else if(r==1 && a==1) printf("Jogador 2 ganha!\n");
            else printf("Jogador 1 ganha!\n");
    }
    else{
        printf("Jogador 2 ganha!\n");
    }

return 0;
}
