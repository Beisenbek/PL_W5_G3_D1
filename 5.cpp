#include <iostream>

using namespace std;


int main(){

	int sum = 0;

	for(int x = 2;x<=100;x = x + 2){
   		sum = sum + x;
	}

	cout << sum << endl;

	return 0;
}

