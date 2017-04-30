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
/*bool checkfiletype(string file){ //return será true se for condutor ou false se for linha // não é necessario isto pois condutors/linhas ja estao divididos
	//int size=file.size();
	string temps;  		//dentro da checkfile a string é uma compilaçao de 1's e 0's
	string emptystring;
	int z,i=0;

	int h=0;
	cout <<"file dentro da readfile:"<< endl;

				while(h<99)
				{
					cout << file[i] << endl;

					h++;
				}
	while(1)			//ver melhor maneira de fazer isto
	{
		cout << file[i] <<endl;
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
}*/
void newCondutor(string info, int nbr) //files sempre com tamanho constante
{
	Condutor a;
	cout << info << endl;
	string temp= " ", empty=" ";
	int id,seminbr=0;
	for(unsigned int i=0; i<info.size();i++)
	{

		if(info[i]==';')
		{
			switch(seminbr)
			{
			case 0:
				id=atoi(temp.c_str());
				a.setID(id);
			break;
			case 1:

			}


			id=atoi(temp.c_str());
			a.setID(id);
		}


		temp=temp+info[i];
		i++;

	}

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
			getline(openedFile,sletter); //linha a linha
//			cout <<sletter<< endl;
			newCondutor(sletter,i);
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
