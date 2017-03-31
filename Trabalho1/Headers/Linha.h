/*
 * Linha.h
 *
 *  Created on: 31 Mar 2017
 *      Author: AristidesMini
 */

#ifndef LINHA_H_
#define LINHA_H_
#include <string>

using namespace std;

class Linha{
private:
	int ID;
	int frequencia;
	string paragem[50]; //colocar isto no constructor, mudar pa vectr?
	int temposParagem[50];//idem

public:
	//get's
	int getID() {return ID;}
	int getFrequencia() {return frequencia;}
	string getParagem(int x) {return paragem[x];} //usar return paragens ou paragens[x]?
	int getTemposParagem(int x) {return temposParagem[x];}

	//set's
	void setID(int id) {ID=id;}
	void setFrequencia(int f) {frequencia=f;}
	void setParagens(string s,int x) {	paragem[x]=s;}
	void setTemposParagem(int t, int x){temposParagem[x]=t;}
};




#endif /* LINHA_H_ */
