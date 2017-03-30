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

struct Linha{
	int ID;
	int frequencia;
	string paragens[];
	int temposParagens[];

};

struct Condutor{
	string nome;
	int ID;
	int horasMaxTurno;
	int horasMaxSemana;
	int horasDescansoTurno;
};
void setNome(string n,Condutor c);
void setID(int I);
void sethorasMaxTurno(int hMT);
void sethorasMaxSemana(int hMS);
void sethorasDescansoTurnoDT(int hDT);

void setNome(string n,Condutor c){
	c.nome=n;
}

int main() {
	Condutor Manuel;
	setNome("Manuel Silva",Manuel);

	cout << Manuel.nome  << endl;
	return 0;
}
