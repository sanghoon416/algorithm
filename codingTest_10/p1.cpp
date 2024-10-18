#include <iostream>
using namespace std;

int main() {
	long long ans = 0;
	int n;
	int h[100005];
	int cnt = 1;
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> h[i];
	}
	
	for(int i=1;i<=n;i++){
		ans += (h[i] / 10) * 4;
		h[i] = h[i] % 10;
		
		while(h[i] > 0){
			ans += 1;
			cnt = ((cnt-1)%4)+1;
			h[i] -= cnt;
			cnt += 1;
		}
	}
	
	cout << ans;
}