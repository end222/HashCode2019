#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <string.h>
#include <list>

#include "Slide/Slide.h"

using namespace std;

list<foto> listaFotos;
list<Slide> listaSlides;

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
		char* orientacion = strtok(line, delim);
		char trueOrientacion = *orientacion;
		fotoameter.orientacion = trueOrientacion;
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
	bool eraVertical = false;
	while(!listaFotos.empty()){
		Slide s = Slide();
		s.anadirFoto(listaFotos.front());
		eraVertical = (listaFotos.front().orientacion == 'V');
		listaFotos.pop_front();
		while(listaFotos.front().orientacion == 'H'){
			Slide s2 = Slide();
			s2.anadirFoto(listaFotos.front());
			listaFotos.pop_front();
			listaSlides.push_back(s2);
		}
		if(eraVertical)
		{
			s.anadirFoto(listaFotos.front());
			listaFotos.pop_front();
			eraVertical = false;
		}
		listaSlides.push_back(s);
	}

	cout << listaSlides.size() << endl;
	while(!listaSlides.empty()){
		listaSlides.front().mostrarSalida();
		listaSlides.pop_front();
	}
}
