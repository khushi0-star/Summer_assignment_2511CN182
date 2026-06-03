#include <iostream>
using namespace std;
int main()
{
    int n;
    int x=0;
    cout<<"enter n";
    cin>>n;
    int b=n;
    while(n>0){
        x=x*10+n%10;
        
        n=n/10;
    }
    cout<<x;
    if(x==b){
        cout<<"n is palindrome";
    }
    else{
        cout<<"n is not palindrome";
    }
    
    
    
    
    return 0;
}