#include<stdio.h>
#include<ctype.h>



int simpleinterest(int p,int t,int r){
    int SI = (p*t*r)/100;
    return SI;
}



int main(){
    int p,t,r;
    scanf("%d %d %d", &p,&t,&r );
    printf("%d",simpleinterest(p,t,r));
    return 0;

}