#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	int pos;
	cin >> N >> K;
	queue<int> q;
	for(int i = 1; i <= N; i++)
		q.push(i);
	
	cout << '<';
	while(!q.empty()) {
		int cnt = K - 1;
		while(cnt) {
			q.push(q.front());
			q.pop();
			cnt--;
		}
		cout << q.front();
		q.pop();
		if(!q.empty()) cout <<", ";
	}
	cout << '>';
}
