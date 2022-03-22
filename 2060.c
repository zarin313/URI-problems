#include<Stdio.h>
int main(){
int n,m,i,two=0,three=0,four=0,five=0;
       scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&m);
            if(m%2==0) two++;
            if(m%3==0) three++;
            if(m%4==0) four++;
            if(m%5==0) five++;
        }
        printf("%d Multiplo(s) de 2\n",two);
        printf("%d Multiplo(s) de 3\n",three);
        printf("%d Multiplo(s) de 4\n",four);
        printf("%d Multiplo(s) de 5\n",five);

return 0;
}
