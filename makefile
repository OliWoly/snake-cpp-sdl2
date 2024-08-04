main: main.o
	clang++ -o main main.o 

main.o: main.cpp
	clang++ main.cpp -I/Library/Frameworks/SDL2.framework/Headers

clean:
	rm main