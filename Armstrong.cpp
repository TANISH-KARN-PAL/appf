#include <iostream>
#include <cmath>
int main(){
    int N,a,r,sm=0,ct=0;
    using namespace std;
    cout<<"Enter a number"<<endl;
    cin>>N;
    a=N;
    while(a!=0){
        a/=10;
        ct++;
    }a=N;
    for(int i=0;i<ct;i++){
        r=a%10;
        sm=sm+pow(r,ct);
        a/=10;
    }
   
    if(sm==N)
    cout<<"Armstrong Number"<<endl;
else
cout<<"Not an Armstrong Number"<<endl;
return 0;
}