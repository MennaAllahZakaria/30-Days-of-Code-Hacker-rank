#include <bits/stdc++.h>

using namespace std;



int factorial(int n) {
  // factorial 0 = 1 
  // factorial n = n * factorial (n-1)
  return (n==0?1:n*factorial(n-1));
}

int main()
{
 
    int n ;
    cin >> n;

    cout <<factorial(n)<< "\n";

    return 0;
}
