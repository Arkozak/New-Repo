#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::hex;

int main() {
	//ints
	const int a = 101, c = 12, m = 121;
	int K, InLeng, i, d = 0, f, x, L0, R0, R1, RL;
	string Input;

	//inputs
	cout << "Enter string to encrypt: " << endl;
	getline(cin, Input);

	cout << "Enter key value: " << endl;
	cin >> K;

	//insert " " pad
	InLeng = static_cast<int> (Input.length());
	if (InLeng % 2 != 0) {
		Input.insert(InLeng , " ");
		InLeng++;
	}
	

	//1st loops; 
	for (i = InLeng / 2; i > 0; i--) {
		L0 = static_cast<int> (Input.at(d));
		d++;
		R0 = static_cast<int> (Input.at(d));
		d++;

		//2nd loop
		for (f = 3; f > 0; f--) {

			//3rd loop
			for (x = K; x > 0; x--) { 
				R0 = (a * R0 + c) % m;
			}

			//swap 
			R1 = R0;
			RL = L0;
			L0 = R0;
			// R0 = RL ^ R1;
			if (RL ^ R1)
			{
				R0 = RL;
			}

			K++;
		}

		//output with "0" pad
		if (L0 <= 10) {
			cout << "0" << hex << L0;
		}
		else {
			cout << hex << L0;
		}
		if (R0 < 16) {
			cout << "0" << hex << R0;
		}
		else {
			cout << hex << R0;
		}
	}
	return 0;
}
