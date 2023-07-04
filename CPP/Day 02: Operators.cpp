#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    
double tip=meal_cost*tip_percent/100;
    double tax=meal_cost*tax_percent/100;
   cout<< (int) round(tax+tip+meal_cost);
}

int main()
{
  
    double meal_cost ;
    int tip_percent , tax_percent ;
    cin >> meal_cost>>tip_percent>>tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

