#include <bits/stdc++.h>

using namespace std;


int numOfSwaps(vector<int>&v){
    int res=0;
    for (int i = 0; i < v.size(); i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    
    for (int j = 0; j < v.size() - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (v[j] > v[j + 1]) {
            swap(v[j], v[j + 1]);
            numberOfSwaps++;
        }
    }
    res+=numberOfSwaps;
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}
    
    return res;
    
}

int main()
{
   
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }   
    cout<<"Array is sorted in "<<numOfSwaps(v)<<" swaps.\n";
    cout<<"First Element: "<<v[0]<<"\n";
    cout<<"Last Element: "<<v[n-1]<<"\n";

    return 0;
}

