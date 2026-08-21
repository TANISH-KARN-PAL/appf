//Tell whether a number is prime number or not
#include <iostream>
int main(){
    int N,ct=0;
    using namespace std;
    cout<<"Enter a number"<<endl;
    cin>>N;
    if(N>0){
        for(int i=1;i<=N;i++){
            if(N%i==0)
            ct++;
        }}
        if(ct==2)
        {cout<<"Prime Number"<<endl;}
    else
   { cout<<"Not a Prime Number"<<endl;}

    
    return 0;
}