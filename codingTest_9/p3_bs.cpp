#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n;
long long num[3005];
long long ans = 0;

void input(){
	cin >> n;
	
	for(int i=0;i<n;i++){

		cin >> num[i];
	}
	
	sort(num, num+n);
}

void solve(){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            long long x = num[i];
            long long y = num[j];

            int cnt = lower_bound(num+j+1,num+n,x+y) - num;
            if(num[cnt] == x+y){
                cnt = cnt - j;
            }
            else {
                cnt = cnt - j - 1;
            }
            ans += cnt;
        }
    }
}

int main(){
    input();
    solve();
    cout << ans;
}