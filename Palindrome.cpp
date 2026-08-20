#include <iostream>
int main(){
    int N;
    using namespace std;
    cout<<"Enter a Number"<<endl;
    cin>>N;
    int a=N,r,sm=0;
    while(a!=0){
        r=a%10;
        a/=10;
        sm=sm*10+r;
    }
    if(sm==N)
    cout<<"Palindrome Number"<<endl;
    else
    cout<<"Not a Palindrome Number"<<endl;
return 0;
}