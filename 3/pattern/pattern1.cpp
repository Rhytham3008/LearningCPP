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
        int j = 1;// j is the no. of column being printed
        while(j<=n) {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i++;
    }
    
}