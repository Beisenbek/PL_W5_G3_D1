#include <iostream>

using namespace std;


int main(){

	int sum = 0;

	for(int x = 1; x<=100; x++){
   		sum += x*x;
	}

	cout << sum << endl;

	return 0;
}

