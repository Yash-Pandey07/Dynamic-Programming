#include<bits/stdc++.h>
using namespace std;

/*long fib(int n){
     double phi = (1 + sqrt(5)) / 2; 
     return round(pow(phi, n) / sqrt(5));
}*/

long long ara[1000];
int fib(long long n)
{   if (n<=2)return 1;
    if(ara[n]!=0)return ara[n];
    else{
        ara[n]=fib(n-1)+fib(n-2);
        return ara[n];
    }
}

int main(){

 fibonacci
 //cout<<fib(50)<<endl;
 ara[1]=1;
 ara[2]=1;
 long long n;
 while(1){
   cin>>n;
   cout<<fib(n)<<endl;
 }

return 0;  
}
