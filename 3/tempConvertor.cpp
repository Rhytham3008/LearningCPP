#include<iostream>
using namespace std;

int main () {
    double fahrenheit;
    double celsius;
    char degree = 176;

    cin >> fahrenheit;
    celsius = (fahrenheit-32)*5/9;

    cout << celsius << "°C";

}