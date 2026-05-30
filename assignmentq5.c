#include<stdio.h>
int main(){
    int n;
    int x=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        x=x+n%10;
        
        n=n/10;
    }
    printf("sum of digits are %d",x);
    
return 0;
}


