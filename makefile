all: main.cpp Foto/foto.h
	g++ main.cpp -o main -lboost_system -Wall

clean:
	rm -rf main
