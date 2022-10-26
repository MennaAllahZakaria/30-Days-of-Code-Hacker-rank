#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    
  int actDay,actMonth,actYear,expDay,expMonth,expYear;
  
    cin >>actDay>>actMonth>>actYear>>expDay>>expMonth>>expYear;
    
     int fine;
     
     if ( expYear<actYear)
            fine=10000;
     else if ( expYear<=actYear && expMonth<actMonth) 
            fine = 500*abs(actMonth-expMonth);
     else if ( expYear<=actYear && expMonth<=actMonth && expDay<actDay ) 
            fine = 15*abs(expDay-actDay);
     else 
             fine =0;
    
     cout<<fine;
    return 0;
}
