#include <iostream>

using namespace std;


int main(){

	int n;

	cin >> n;

	int p = 1;

	for(int x = 1; x<=n; x++)
   		p = p * x;

	cout << p << endl;

	return 0;
}

