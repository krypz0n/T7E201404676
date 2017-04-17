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
#include <sstream>

using namespace std; //decidir se queremos usar structs ou classes

bool isNumeric(const std::string& s)
{
	std::string::const_iterator it =s.begin();
	while(it!= s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it==s.end();
}


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
void readLinha(string filepath)
{

}
void newLinha(string nomeLinha) //files com tamanho alteravel, ver size e subtrair tamanhO?
{

}
bool checkfiletype(string file){ //return será true se for condutor ou false se for linha
	//int size=file.size();
	string temps;
	string emptystring;
	int z,i=0;
	while(1)			//ver melhor maneira de fazer isto
	{
		if(file[i]==';')
		{
			z=i;
//			cout << "; encontrado" <<endl;
			break;
		}
		if(file[i]==',')
		{
			return false;
		}

		i++;
		if(i==99)
		{
			cout << "File format not compatible" << endl;
			return false;
		}
	}
	for (z=z+2; file[z]!=';';z++)
	{
		temps=temps+file[z];
	}
	if(isNumeric(temps))
	{
		return false;
	}
	else{
		return true;
	}
}
void newCondutor(string info) //files sempre com tamanho constante
{

	cout << info << endl;
}


void readfile(string filepath){
	string sletter;
	ifstream openedFile;
	openedFile.open(filepath);
	if(openedFile.fail()){
		cout << "Erro a abrir ficheiro" << endl;
		exit(1);
	}
	else
	{
		cout << "Ficheiro encontrado, lendo.." << endl;
		for (int i=0;!openedFile.eof();i++) //necessario isto ou size?
		{
			getline(openedFile,sletter);
//			cout <<sletter<< endl;
			if(checkfiletype(sletter))
			{
				cout << "file checkada, condutor" << endl;
				newCondutor(sletter);
			}
			else
			{
				cout << "file checkada, linha" << endl;
				newLinha(sletter);
			}
//			cout << "numero iteraçoes i: "<< i <<endl;
		}

		openedFile.close();
	}


}




int main() { //fazer funçoes pa ler linhas e condutores txt
	Linha linhas[50];
	Condutor condutores[50];
	readfile("..\\Trabalho1\\Files\\condutores.txt");
	//readfile("..\\Trabalho1\\Files\\linhas.txt");  //falta ver como fazer isto

	//	outFileTest();
	return 0;
}
