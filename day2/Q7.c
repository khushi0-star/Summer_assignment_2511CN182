#include<stdio.h>
int main(){
    int n;
    int x=1;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        x=x*(n%10);
        
        n=n/10;
    }
    printf("product of digits of n is %d",x);
    
return 0;
}


