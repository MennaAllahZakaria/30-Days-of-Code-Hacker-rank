#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
   
    int n;
    cin >> n;
     string s,x;
    map<string,string>mp;
    map<string ,bool>m;
    for ( int i=0;i<n;i++) {
        
       
        cin >>s>>x;
        mp[s]=x;
        m[s]=1;
    }  
   
    while ( cin >>s ){
        
        if ( m[s] ) cout<< s<<"="<<mp[s]<<"\n";
        else cout<<"Not found\n"; 
        
    }
    
    return 0;
}
