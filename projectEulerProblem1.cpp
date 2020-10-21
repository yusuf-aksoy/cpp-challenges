//project euler problem 1 solution

#include <iostream>
using namespace std;
int main()
{
	int toplam = 0;
	for (int i = 0; i < 1000; i++) {
		if (i % 5 == 0 || i % 3 == 0) {
			toplam += i;
		}
	}
	cout << "toplam:" << toplam << endl;
	return 0;
}
/*
output:
toplam:233168
*/
