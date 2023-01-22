#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   // input 1 2 7
   // output 10
   // sum of input 1 2 7 = 10
    string s;
    int n;
    cin >> s >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout << s << " " << n << endl;
    


    return 0;
}
