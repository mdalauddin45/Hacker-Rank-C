#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    // odd and even number multiple of 2
    // input 8 11 output  eight eleven odd even
    int a, b;
    cin >> a >> b;
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++){
        if(i <= 9){
            cout << arr[i-1] << endl;
        }else{
            if(i % 2 == 0){
                cout << "even" << endl;
            }else{
                cout << "odd" << endl;
            }
        }
    }
    

    return 0;
}