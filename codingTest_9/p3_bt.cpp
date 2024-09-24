#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<long long> num;
long long singer[3];
int ans = 0;

void input(){
	long long tmp;
	
	cin >> n;
	
	for(int i=0;i<n;i++){

		cin >> tmp;
		num.push_back(tmp);
	}
	
	sort(num.begin(), num.end(), greater<>());
}

void dfs(int k, int idx){
	singer[k] = num[idx];
	
	if(k==2){
		if(singer[0] <= singer[1] + singer[2]){
			ans += 1;
		}
	}
	else{
		for(int i=idx+1;i<num.size();i++){
    	dfs(k+1,i);
		}
	}
}

void solve(){
	for(int i=0;i<n-2;i++){
		dfs(0,i);
	}
}

int main() {
	input();
	solve();
	
	cout << ans;
	
	return 0;
}