#include <bits/stdc++.h>

using namespace std;



int main()
{

   int n;
cin >> n;
vector<string> v;
string s,x;

while ( n--){
cin >> s>> x;
if ( x.substr(x.size()-10,10)=="@gmail.com")v.push_back(s);


}
sort(v.begin(),v.end());
for ( auto i:v) cout<<i<<"\n";

   
   
   
    return 0;
}

