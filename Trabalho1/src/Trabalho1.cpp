//============================================================================
// Name        : Trabalho1.cpp
// Author      : Nuno Silva Turma 7 up201404676
// Version     :
// Copyright   : no copyrino
// Description : Trabalho 1
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;

struct linha{
	int ID;
	int frequencia;
	string paragens[];
	int temposParagens[];

};

struct condutor{
	string nome;
	int ID;
	int horasMaxTurno;
	int horasMaxSemana;
	int horasDescansoTurno;
};

int main() {
	condutor Manuel;
	Manuel.ID=500;
	Manuel.nome="Manuel Silva";
	cout << Manuel.nome << " " << Manuel.ID << endl;
	return 0;
}
