all: main.cpp Foto/foto.h Slide.o
	g++ main.cpp Slide.o -o main -lboost_system -Wall

Slide.o: Slide/Slide.cc Slide/Slide.h
	g++ Slide/Slide.cc Slide/Slide.h -c

clean:
	rm -rf main
	rm -rf */*.gch
