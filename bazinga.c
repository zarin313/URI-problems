#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i=1;
    while(n!=0)
    {   int s=100,r=100;
        char shel[100],raj[100];
        scanf("%s %s",&shel,&raj);
        //printf("%s %s %d\n",shel,raj,strcmp(shel,"papel"));
        if(strcmp(shel,raj)==0){
            printf("Caso #%i: De novo!\n",i);
        }
        else if(strcmp(shel,"tesoura")==0){
                if(strcmp(raj,"lagarto")==0 || strcmp(raj,"papel")==0) {
                    s=1;
                    r=0;
                }
                else if (strcmp(raj,"Spock")==0 || strcmp(raj,"pedra")==0){
                    s=0;
                    r=1;
                }
           }
        else if(strcmp(shel,"papel")==0){
                if(strcmp(raj,"pedra")==0 || strcmp(raj,"Spock")==0) {
                    s=1;
                    r=0;
                   // printf("Shelly\n");
                }
                else if (strcmp(raj,"tesoura")==0 || strcmp(raj,"lagarto")==0){
                    s=0;
                    r=1;
                }
           }
        else if(strcmp(shel,"pedra")==0){
                if(strcmp(raj,"lagarto")==0 || strcmp(raj,"tesoura")==0) {
                    s=1;
                    r=0;
                }
                else if (strcmp(raj,"papel")==0 || strcmp(raj,"Spock")==0){
                    s=0;
                    r=1;
                }
           }
        else if(strcmp(shel,"lagarto")==0){
                if(strcmp(raj,"Spock")==0 || strcmp(raj,"papel")==0) {
                    s=1;
                    r=0;
                }
                else if (strcmp(raj,"pedra")==0 || strcmp(raj,"tesoura")==0){
                    s=0;
                    r=1;
                }
           }

     else if(strcmp(shel,"Spock")==0){
                if(strcmp(raj,"pedra")==0 || strcmp(raj,"tesoura")==0) {
                    s=1;
                    r=0;
                }
                else if (strcmp(raj,"lagarto")==0 || strcmp(raj,"papel")==0){
                    s=0;
                    r=1;
                }
           }

        if(r==1) printf("Caso #%d: Raj trapaceou!\n",i);
        else if(s==1) printf("Caso #%d: Bazinga!\n",i);
        i++;
        n--;

    }



    return 0;
}
