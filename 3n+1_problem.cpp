#include<iostream>
using namespace std;

int main(void)
{
	int n;
	while(cin >> n && n > 0) {
		cout << "\n" << n << endl;
		while(n != 1) {
			if(n % 2 != 0) n = 3 * n + 1;
			else n /= 2;
			
			cout << n << endl;
		}
		cout << endl;
	}
	return 0;
}
