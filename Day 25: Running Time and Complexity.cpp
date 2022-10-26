#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(long long n){// o(log(n))
  if (n==2 ) return true;
  
  // if n <2 or n is even number and !=2 so n can't be prime :(
  
  if (n<2 || !(n&1)) return false ;
  
   // check from 3 to sqrt(n) if any number can be divisor to n 
   //so n can't be prime :(
          
  for ( int i=3;i*i<=(n);i+=2){
    if ( n%i ==0) return false;
  }
  return true ;
 
}
int main() {    
    int t;
    cin >> t;
    while ( t--){
        long long n;
        cin >> n;
        cout<<(prime(n)?"Prime":"Not prime")<<"\n";
        
    } 
    return 0;
}
