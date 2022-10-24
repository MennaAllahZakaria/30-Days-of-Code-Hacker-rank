#include <bits/stdc++.h>

using namespace std;



int main()
{
  
long long n;
cin >> n;
bitset<64>b(n);

int one=0;
int res=0;
for ( int i=0;i<64;i++){
if ( b[i]==1) one++;
else {

  res=max(res,one);
  one=0;
}

}
cout<<res;
    return 0;
}
