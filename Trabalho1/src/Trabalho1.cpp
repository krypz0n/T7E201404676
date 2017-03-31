//============================================================================
// Name        : Trabalho1.cpp
// Author      : Nuno Silva Turma 7 up201404676
// Version     :
// Copyright   : no copyrino
// Description : Trabalho 1
//============================================================================

#include "../Headers/Condutor.h"
#include "../Headers/Linha.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;







int main() {
	Linha asdf;
	Condutor Manuel;
	Manuel.setNome("Manuel SIlva");
	asdf.setID(904);
	string s=Manuel.getNome();
	int t=asdf.getID();
	cout << s << " conduz na " << t <<endl;
	return 0;
}
