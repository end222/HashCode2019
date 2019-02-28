#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstring>
#include "../Foto/foto.h"

#ifndef _TUPLAS_HPP_
#define _TUPLAS_HPP_

using namespace std;

const int MAX_DIM_SLIDES = 2;
const int MAX_TAGS = 100;


class Slide {
  private:
    // numero de slides
    int numeroFotos;
    // vector de identificadores de los slides
    int slides[MAX_DIM_SLIDES];
    // vector de los tags
    string tags[MAX_TAGS];

    // NUmero de tags
    int nTags;

  public:

    Slide();
 /*
  * Pre: <<s>> es un slide de
  * Post: Devuelve el identificador de la foto
  */
  int getNumeroSlide();
  int getnTags();
void anadirFoto(foto f);

void anadirTag(string t);


 /*
  * Pre: indice > 0
  * Post: Devuelve el indice de la fotografia guardada en la
  *       posicion <<indice>>
  */
  int getPuesto(int indice);

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
  void mostrarSalida();

};

#endif
