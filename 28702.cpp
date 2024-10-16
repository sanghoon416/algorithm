#include<iostream>
#include<string>
using namespace std;

int main(){
    string ansStr = "";
    int ansInt = 0;

    for(int i=0;i<3;i++){
        string str;
        
        cin >> str;

        if(str[0] == 'F' || str[0] == 'B'){
            continue;
        }
        else{
            int num = stoi(str);

            num = num + 3 - i;

            if(num % 3 == 0 && num % 5 == 0){
                ansStr = "FizzBuzz";
            }
            else if(num % 3 == 0){
                ansStr = "Fizz";
            }
            else if(num % 5 == 0){
                ansStr = "Buzz";
            }
            else{
                ansInt = num;
            }
        }
    }

    if(ansInt == 0){
        cout << ansStr;
    }
    else{
        cout << ansInt;
    }
}