#include<iostream>
#include<ctime>
#include<stdio.h>

using namespace std;

short A[100 + 3], n = 100;
bool outputed = false, check = false;

int main() {
	/*                  Randomize                              */
	srand(time(0));
	/*                  Filling in array                       */
	for (int i = 0; i < n; ++i)
		A[i] = rand() % 100 - 50;

	for (int i = 0; i < n; ++i)
		cout << A[i] << " ";
	cout << endl;
	for (int i = 0; i < n; ++i) {
		if (A[i] > 0 && A[i + 1] < 0 || A[i] < 0 && A[i + 1]>0) {
			if (!outputed) {
				cout << i;
				outputed = true;
			}
			check = true;
		}
		else {
			if (check) {
				cout << i << endl;
				check = false;
			}
		}
	}
}