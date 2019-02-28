all: main.cpp Foto/foto.h Slide.o
	g++ main.cpp Slide.o -o main -lboost_system -Wall

Slide.o: Slide/Slide.cc Slide/Slide.h
	g++ Slide/Slide.cc Slide/Slide.h -c

clean:
	rm -rf main
	rm -rf */*.gch

exec:
	./main < a_example.txt > salida0
	./main < b_lovely_landscapes.txt > salida1
	./main < c_memorable_moments.txt > salida2
	./main < d_pet_pictures.txt > salida3
	./main < e_shiny_selfies.txt > salida4
