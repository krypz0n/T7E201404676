/*
 * Condutor.h
 *
 *  Created on: 31 Mar 2017
 *      Author: AristidesMini
 */

#ifndef CONDUTOR_H_
#define CONDUTOR_H_
#include <string>

using namespace std;

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

	void setAll(string s,int id,int hMT,int hMS,int hDT){ nome=s; ID=id; horasMaxTurno=hMT; horasMaxSemana=hMS; horasDescansoTurno=hDT;}

	//construtor
	//para acabar
	//Condutor(string nome,int id,int hMT,int hMS,int hDT);
};



#endif /* CONDUTOR_H_ */
