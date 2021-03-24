#include <bits/stdc++.h>
using namespace std;
vector<int> v(1000001);
int find(int node) {
	if(node == v[node]) return node;
	else return find(v[node]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	// initialize
	for(int i = 0; i <= n; i++)
		v[i] = i;
	
	while(m--) {
		int a, b, c;
		cin >> a >> b >> c;
		if(a == 0) {
			int bb = find(b);
			int cc = find(c);
			if(bb < cc) swap(bb, cc);
			v[cc] = bb;
		}
		else if (a == 1) {
			// find
			find(b) == find(c) ? cout << "YES" : cout << "NO" ;
			cout << '\n';
		}
	}
}
