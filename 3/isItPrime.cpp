#include<iostream>
using namespace std;
/*

    // My Code which took me half an hour to fix
    int main(){
        int i = 2;
        int n;
        cin>>n;
        bool isNotPrime = false;
        while(i<n && isNotPrime==false){
            if(n%i==0 ){
                isNotPrime = true;
            } else {
                i++;
            }
        }
        if (isNotPrime) {
            cout<<"Not Prime"<<endl;
        } else {
            cout<<"Prime"<<endl;
        }

}
*/

/* 
    Here we initialize the no. which will be 
    entered by the user , then take the input;
    Now we initialize i . In the while loop 
    we loop it until i reaches the value of 1 less
    than the input number if it is a prime no or if
    it finds a factor in b/w the process of reaching
    1 less than the input number.
    Then using a conditional we check if input number
    was divisible by the number i. Then according to
    it, we print that if it is a prime or not.

    // My Code 
    int main() {
        int n;
        cin >> n;
        int i;
        i=2;
        while (n%i!=0 && i<n-1){
            i++;
        }
        if(n%i!=0){
            cout << "It is Prime" << endl;
        } else {
            cout << "It is not a Prime Number" << endl;
        }
    }
*/



