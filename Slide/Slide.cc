#include <iostream>
#include <cstring>
#include <iomanip>
#include "Slide.h"

using namespace std;


Slide::Slide(){
	// numero de slides
    numeroFotos = 0;

    // NUmero de tags
    nTags = 0;
}

  /*
   * Pre: <<s1>> es un slide de
   * Post: Devuelve el identificador de la foto
   */
int Slide::getNumeroSlide(){
      // Retorna el numero de slides del Slide
      return this->numeroFotos;
}

void Slide::anadirFoto(foto f){
	this->slides[this->numeroFotos] = f.id;
	this->numeroFotos++;	
}

void Slide::anadirTag(string t){
	this->tags[this->nTags] = t;
	this->nTags++;
}

int Slide::getnTags(){
      // Retorna el numero de slides del Slide
      return this->nTags;
}

/*
   * Pre: indice > 0
   * Post: Devuelve el indice de la fotografia guardada en la
           posicion <<indice>>
   */
int Slide::getPuesto(int indice){
     return this->slides[indice];
}

  /*
   * Pre: <<s>> es un slide de fotografias
   * Post Ha mostrado por pantalla el contenido del Slide con
   *        el siguiente formato
   *        Si tiene una unica fotografia
   *        3    --> numero de slides en el slideshadow
   *        0    --
   *        3    --> numero de slides en el slideshadow
   *        1 2  --> identificadores de las dos fotoagrafias separados por
   *                 espacio
   */
void Slide::mostrarSalida(){
     // Muestreo del numero de Slides
     cout << this->slides[0];
     // Si es compuesta el slide
     if (this->numeroFotos > 1){
        // MUestreo del segundo SLide
        cout << " " << this->slides[1];
     }
     // Salto de linea
     cout << endl;
}
