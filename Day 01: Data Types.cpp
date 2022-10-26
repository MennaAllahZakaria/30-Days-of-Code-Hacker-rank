#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
int n;
double x;
string m;
cin >>n>>x;
cin.ignore();
 getline(cin,m);
n+=i;
x+=d;

cout<< n<<"\n"<<fixed << setprecision(1)<<x<<"\n"<<s<<m;
    return 0;
}

