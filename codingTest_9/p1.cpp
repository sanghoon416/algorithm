#include <iostream>
using namespace std;
int main() {
	int n;
	int ans = 0;
	
	cin >> n;
	
	while(n>0){
		n = n/5;
		ans += n;
	}
	
	cout << ans;
	
	return 0;
}

	
	