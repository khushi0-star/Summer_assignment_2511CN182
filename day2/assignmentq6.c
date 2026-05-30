#include<stdio.h>
int main(){
    int n;
    int x=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        x=x*10+n%10;
        
        n=n/10;
    }
    printf("rervse of n is %d",x);
    
return 0;
}


