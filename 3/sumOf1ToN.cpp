#include<iostream>
using namespace std;

int main () {

    double i;
    double n;
    double sum;
    i = 1;

    cout << "Enter a number" << endl;
    cin >> n;

    while (i <= n){
        sum = sum + i;
        i++;
    }
    cout << sum << " ";


}