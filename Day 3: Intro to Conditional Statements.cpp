#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
  // n is odd number
   if ( n&1) cout<<"Weird";
  // n is even number
   else {
       if ( n>=2 && n<=5) cout<<"Not Weird";
       else if ( n>=6 && n<=20) cout<< "Weird";
       else cout<<"Not Weird";

   }
    return 0;
}

