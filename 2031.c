#include<stdio.h>
#include<string.h>
int main(){
int n,i,j;
char s1[10],s2[10];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%s %s",&s1,&s2);
    //printf("%d\n",strcmp(s1,"pedra"));
    if(strcmp(s1,"ataque")==0){
        if(strcmp(s2,"ataque")==0) printf("Aniquilacao mutua\n");
        else if(strcmp(s2,"pedra")==0) printf("Jogador 1 venceu\n");
        else if(strcmp(s2,"papel")==0) printf("Jogador 1 venceu\n");
    }
    else if(strcmp(s1,"pedra")==0){

        if(strcmp(s2,"papel")==0) printf("Jogador 1 venceu\n");
        else if(strcmp(s2,"pedra")==0) printf("Sem ganhador\n");
        else if(strcmp(s2,"ataque")==0) printf("Jogador 2 venceu\n");
    }
    else if(strcmp(s1,"papel")==0){
        if(strcmp(s2,"papel")==0) printf("Ambos venceram\n");
        else if(strcmp(s2,"ataque")==0) printf("Jogador 2 venceu\n");
        else if(strcmp(s2,"pedra")==0) printf("Jogador 2 venceur\n");
    }



}


return 0;
}
