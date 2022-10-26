#include <bits/stdc++.h>

using namespace std;

int main()
{

int v[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> v[i][j];
        }
    }

int ma=INT_MIN;

for ( int i=1;i<5;i++){
    for ( int j=1;j<5;j++){
        
        int res=v[i][j];
        res+=v[i-1][j-1]+v[i-1][j]+v[i-1][j+1];
        res+=v[i+1][j-1]+v[i+1][j]+v[i+1][j+1];
        
        ma=max(ma,res);
    }
    
}
cout<<ma;

    return 0;
}
