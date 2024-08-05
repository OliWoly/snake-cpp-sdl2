main: snakeLib.lib
	clang++ main.cpp -o main snakeLib.lib -F/Library/Frameworks -framework SDL2 -rpath /Library/Frameworks

player.o: player.cpp
	clang++ -c player.cpp

snakeLib.lib: player.o
	ar rcs snakeLib.lib player.o

clean:
	rm main
	rm *.lib
