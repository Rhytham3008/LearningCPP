#include<iostream>
using namespace std;

int main () {

    double i;
    double n;
    double sum;
    i = 2;
    
    cout << "Enter a number" << endl;
    cin >> n;
    
    while (i <= n){
        sum = sum + i;
        i= i+2;
    }
    cout << sum << " ";


}