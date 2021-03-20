#include<bits/stdc++.h>
using namespace std;

int solve (int n,vector<int> p) {
   // Write your code here
   int  arr[n];
   arr[0]=p[0];
   for(int i=1;i<n;i++){
      arr[i]=p[i];
      for(int j=0;j<i;j++){
         if(p[j]<p[i] && (p[i]%p[j])==0)
            arr[i]=max(arr[i],arr[j]+p[i]);
      }
   }
   int res=0;
   for(int i=0;i<n;i++){
      res=max(res,arr[i]);
      }
   return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i_p=0; i_p<n; i_p++)
    {
    	cin >> p[i_p];
    }

    int out_;
    out_ = solve(n,p);
    cout << out_;
}
/*
Sample Input
6
1 2 3 4 9 8
Sample Output
15

*/
