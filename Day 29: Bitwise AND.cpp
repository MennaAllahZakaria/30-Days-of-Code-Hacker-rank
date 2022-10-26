#include <bits/stdc++.h>

using namespace std;


int bitwiseAnd(int N, int K) {
int ma=INT_MIN;
for ( int i=1;i<=N;i++){
   for ( int j=i+1;j<=N;j++){
       if ((i&j)<K) ma=max(ma,(i&j));   
   }
}

return ma;
}

int main()
{
int t;
cin >>t;
while ( t--){
    
    int n,k;
    cin >>n>>k;
    cout<<bitwiseAnd(n,k)<<"\n";
    
    
}
    return 0;
}
