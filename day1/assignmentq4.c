#include <stdio.h>
int main()
{
    int n; 
    int count=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        count++;
        n=n/10;
    }
    
    printf("number of digits in n are %d",count);
    
    
    return 0;
}