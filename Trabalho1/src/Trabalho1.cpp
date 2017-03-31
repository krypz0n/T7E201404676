//============================================================================
// Name        : Trabalho1.cpp
// Author      : Nuno Silva Turma 7 up201404676
// Version     :
// Copyright   : no copyrino
// Description : Trabalho 1
//============================================================================

#include "tp1.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;


class Linha{
private:
	int ID;
	int frequencia;
	string paragem[];
	int temposParagem[];

public:
									//get's
	int getID() {return ID;}
	int getFrequencia() {return frequencia;}
	int getParagens() {return paragem;} //usar return paragens ou paragens[x]?
	int getTemposParagem() {return temposParagem;}
									//set's
	void setID(int id) {ID=id;}
	void setFrequencia(int f) {frequencia=f;}
	void setParagens(string s,int x) {	paragem[x]=s;}
	void setTemposParagem(int t, int x){temposParagem[x]=t;}
};

class Condutor{
private:
	string nome;
	int ID;
	int horasMaxTurno;
	int horasMaxSemana;
	int horasDescansoTurno;

public:
									//get's
	string getNome(){return nome;}
	int getID() {return ID;}
	int getHorasMaxTurno(){return horasMaxTurno;}
	int getHorasMaxSemana() {return horasMaxSemana;}
	int gethorasDescansoTurno() {return horasDescansoTurno;}

									//set's
	void setNome(string s) {nome=s;}
	void setID(int id) {ID=id;}
	void setHorasMaxTurno(int hMT) {horasMaxTurno=hMT;}
	void setHorasMaxSemana(int hMS) {horasMaxSemana=hMS;}
	void setHorasDescansoTurno(int hDT) {horasDescansoTurno=hDT;}


};




int main() {
	Condutor Condutores[50];
	Condutor Manuel;
	Manuel.setNome("Manuel Silva");
	Condutores[0]=Manuel;
	string s=Condutores[0].getNome();
	cout << s <<endl;
	return 0;
}
