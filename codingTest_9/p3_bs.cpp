#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n;
vector<long long> num;
int ans = 0;

void input(){
	long long tmp;
	
	cin >> n;
	
	for(int i=0;i<n;i++){

		cin >> tmp;
		num.push_back(tmp);
	}
	
	sort(num.begin(), num.end());

    for(int i=0;i<n;i++){
        cout << num[i] << " ";
    }
    cout << "\n";
}

void solve(){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int x = num[i];
            int y = num[j];

            int cnt = upper_bound(num.begin(),num.end(),x+y) - num.begin();
            cout << "cnt : " << cnt << "\n";
            cout << "x : " << x << " y : " << y << " k : " << num[cnt] << "\n";
            cnt = cnt - j;
            ans += cnt;
        }
    }
}

int main(){
    input();
    solve();
    cout << ans;
}