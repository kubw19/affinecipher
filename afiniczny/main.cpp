// afiniczny.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include "Alfabet.h"
#include "AffineCipher.h"
#include <string>

using namespace std;

char letters[26] = { 'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };//letters occuring in used alphabet

int a, b, x;
string text;

int main()
{
	Alfabet* alfabet = new Alfabet(26);//creating new alphabet with given size
	alfabet->insertLetters(letters);//inserting letters to our alphabet
	//affineCipher->encrypt("test");
	//affineCipher->decrypt("mtjm");

	cout << "Insert A parameter: ";
	cin >> a;
	cout << "Insert B parameter: ";
	cin >> b;
	AffineCipher* affineCipher = new AffineCipher(alfabet, a, b); //creating new affine cipher with 3 parameters: pointer to alphabet, "A" parameter, "B" parameter. "A" has to be coprime with N and "B" must be in range of (0,N-1) where "N" is size of our alphabet
	while (1) {
		system("cls");
		cout << "A = " << a << "	|	B = " << b << endl;
		cout << "Insert 1 to encrypt, 2 to decrypt, 3 to change parameters: ";
		cin >> x;
		switch (x) {
		case 1: 
			cout << "Insert text: ";
			cin >> text;
			affineCipher->encrypt(text); 
			cout << endl << endl;
			system("PAUSE");
			break;
		case 2: 
			cout << "Insert text: ";
			cin >> text;
			affineCipher->decrypt(text); 
			cout << endl << endl;
			system("PAUSE");
			break;
		case 3: 
			system("cls");
			cout << "Insert A parameter: ";
			cin >> a;
			cout << "Insert B parameter: ";
			cin >> b;
		}
	
	}

	system("PAUSE");
    return 0;
}

