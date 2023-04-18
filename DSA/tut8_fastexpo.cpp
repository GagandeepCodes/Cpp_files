#include<iostream>
using namespace std;

int fastExpo(int a, int b ) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            //odd
            res = res*a;
        }
        b = b >> 1;
        a = a * a; 
    }
    return res;
}
long long int power(int a,int b){
    if(b==0){
        return 1;
    }
    long long int ans = power(a,b/2);
    if(b%2){
        return ans*ans*a;
    }
    else{
        return ans*ans;
    }
}

int main() {

    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "Answer is: " << fastExpo(a,b) << endl;

    return 0;
}