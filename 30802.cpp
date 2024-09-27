#include<iostream>
using namespace std;

int main(){
    int n;
    int t[6];
    int chunkT;
    int chunkP;
    int ansT = 0;

    cin >> n;
    for(int i=0;i<6;i++){
        cin >> t[i];
    }
    cin >> chunkT >> chunkP;

    for(int i=0;i<6;i++){
        if(t[i] % chunkT == 0){
            ansT += t[i]/chunkT;
        }
        else{
            ansT += t[i]/chunkT + 1;
        }
    }

    cout << ansT << "\n";
    cout << n / chunkP << " " << n % chunkP;
}