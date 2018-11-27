// afiniczny.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include "Alfabet.h"
#include "SzyfrAfiniczny.h"

char Znaki[26] = { 'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };

int main()
{
	Alfabet* alfabet = new Alfabet(26);
	alfabet->insertZnaki(Znaki);
	SzyfrAfiniczny* szyfr = new SzyfrAfiniczny(alfabet, 3, 5);
	szyfr->szyfruj("test");
	szyfr->deszyfruj("mtjm");
	system("PAUSE");
    return 0;
}

