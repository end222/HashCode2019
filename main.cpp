#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <string.h>
#include <list>

using namespace std;

struct foto
{
	int id;
	char orientacion;
	int numTags;
	list<string> tags;
};

list<foto> listaFotos;

void readInput()
{
	// Se lee la primera linea
	char line[1000];
	cin.getline(line,1000);
	// El delimitador es un espacio en blanco
	char delim[] = " ";
	int i = 0;
	int numeroFotos = atoi(strtok(line, delim));
	while(i < numeroFotos){
		foto fotoameter;
		fotoameter.id = i;
		int j = 0;
		cin.getline(line,1000);
		char orientacion = line[0];
		fotoameter.orientacion = orientacion;
		strtok(line, delim);
		int numTags = atoi(strtok(NULL, delim));
		while(j < numTags){
			fotoameter.tags.push_back(strtok(NULL,delim));
			j++;
		}
		fotoameter.numTags = j;
		listaFotos.push_back(fotoameter);
		i++;
	}
}

int main()
{
	readInput();
	cout << listaFotos.front().tags.front() << endl;
}
