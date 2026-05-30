#include<stdio.h>
int main(){
     int n ,  fact=1;
     printf("enter n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
      fact=fact*i;
     }
     printf("factorial of n is %d",fact);


return 0;
}


