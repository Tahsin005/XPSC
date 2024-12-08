// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream xin("input.txt");
	ofstream xout("output.txt");

	map<int, vector<int>> mpp;
	int n; xin >> n;

	for(int i = 0; i < 2*n; i++) {
		int x; xin >> x;
		mpp[x].push_back(i+1);
	}

	for(auto elm: mpp) {
		if (elm.second.size()%2 != 0) {xout << -1; return 0;}
	}
	for(auto elm: mpp) {
		for(int i = 0; i < elm.second.size(); i+=2) {
			xout << elm.second[i] << " " << elm.second[i+1] << "\n";
		}
	}

}
