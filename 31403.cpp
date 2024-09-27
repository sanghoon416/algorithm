#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    cout << a + b - c << "\n";

    int cnt = b;
    while(cnt != 0){
        a *= 10;
        cnt /= 10;
    }

    cout << a + b - c;
}