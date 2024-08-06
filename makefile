main: snakeLib.lib
	clang++ main.cpp -o main snakeLib.lib -F/Library/Frameworks -framework SDL2 -rpath /Library/Frameworks

player.o: player.cpp
	clang++ player.cpp -o player.o -F/Library/Frameworks -framework SDL2 -rpath /Library/Frameworkss

snakeLib.lib: player.o
	ar rcs snakeLib.lib player.o

clean:
	rm main
	rm *.lib
