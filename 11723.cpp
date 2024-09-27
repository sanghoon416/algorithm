#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> m;
int n;
int tmp;
string cmd;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL); 

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> cmd;

        if(cmd == "add"){
            cin >> tmp;

            m[tmp] = true;
        }
        else if(cmd == "remove"){
            cin >> tmp;

            m[tmp] = false;
        }
        else if(cmd == "check"){
            cin >> tmp;

            if(m[tmp]){
                cout << "1\n";
            }
            else{
                cout << "0\n";
            }
        }
        else if(cmd == "toggle"){
            cin >> tmp;

            if(m[tmp]){
                m[tmp] = false;
            }
            else{
                m[tmp] = true;
            }
        }
        else if(cmd == "all"){
            for(int i=1;i<=20;i++){
                m[i] = true;
            }
        }
        else if(cmd == "empty"){
            for(int i=1;i<=20;i++){
                m[i] = false;
            }
        }
    }
    
}