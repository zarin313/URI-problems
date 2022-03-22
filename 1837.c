#include<stdio.h>
#include<math.h>
int main(){
int a,b,i,j;
scanf("%d %d",&a,&b);

int p,r,q;
if(a==b) {
    q=1;
    r=0;
}
else if(a==0){
    q=0;
    r=0;
}
else if(a>0 && b>0){
i=1;
while(b*i<=a){
   p=b*i;
   i++;
}
q=i-1;
r=a-(b*q);
}
else if(a>0 && b<0){
    i=1;
    while(((b*i)*(-1))<=a){
        p=b*i;
   i++;

    }
 q=-1*(i-1);
 r=a-(b*q);

}
else if(a<0 && b<0){
    i=1;
//printf("%d, ",b*i);

while(b*i>a){
    //printf("%d, ",b*i);
   p=b*i;
   i++;
}
q=i;
r=a-(b*q);


}


else if(a<0 && b>0){
        i=-1;
//

while(b*i>a){
    //
   // printf("%d, ",b*i);
   p=b*i;
   i--;
}
//printf("%d, ",b*i);
q=i;
r=a-(b*q);

}
printf("%d %d\n",q,r);
return 0;
}
