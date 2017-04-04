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
#include <fstream>

using namespace std; //decidir se queremos usar structs ou classes



void outFileTest(){
	ofstream testFile(".\\Files\\testfile.txt");
	//	ofstream testFile("C:\\Users\\AristidesMini\\Desktop\\FEUP\\1o ano\\prog\\eclipsec++\\git\\Trabalho1\\Files\\testfile.txt");
	//	testFile.open("..\\Files\\testfile.txt");
	if(testFile.fail())
	{

		cout << "Erro a abrir ficheiro" << endl;
		exit(1);

	}
	else {

		cout << "funcionou" << endl;
		testFile << "teste" << 5 << endl;
		testFile.close();
	}
}
void readCondutor(string filepath){
	char letter;
	string sletter;
	ifstream openedFile;
	openedFile.open(filepath);
	if(openedFile.fail()){
		cout << "Erro a abrir ficheiro" << endl;
		exit(1);
	}
	else
	{
		for (int i=0;!openedFile.eof();i++) //necessario isto ou size?
		{
			getline(openedFile,sletter);
			newCondutor(sletter);
		}
		cout <<sletter<< endl;
		openedFile.close();
	}


}

void newLinha(/*string nomeLinha*/) //files com tamanho alteravel, ver size e subtrair tamanhO?
{
	Linha nomeLinha;

}

void newCondutor(string info) //files sempre com tamanho constante
{


}

int main() { //fazer funçoes pa ler linhas e condutores txt
	Linha linhas[50];
	Condutor condutores[50];
	readCondutor("..\\Trabalho1\\Files\\condutores.txt");
//	outFileTest();

	//	asdf[0]=asd;
	//	Condutor Manuel;
	//	Manuel.setNome("Manuel Silva");
	//	asdf[0].setID(904);
	//	string s=Manuel.getNome();
	//	int t=asdf[0].getID();
	//	cout << s << " conduz na " << t <<endl;
	return 0;
}
