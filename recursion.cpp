#include <bits/stdc++.h>

using namespace std;

void print(int n){
	if(n == 0)return;
	cout << n << " ";
	return print(n - 1);
}

int main(){
	int n;
	cin >> n;
	cout << "print n numbers : \n";
	print(n);	
}
