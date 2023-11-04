#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 1;
     /* 
     i keeps the track of the row no. mtlb ye kaunsi row print kr rha hai
     like it is 2 when printing 2nd row and 1 when printing 1st row like that....
     */

    while(i<=n) {
        int j=1;
        while(j<=n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    
}