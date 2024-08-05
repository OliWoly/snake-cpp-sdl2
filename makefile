all:
	clang++ main.cpp -o main -F/Library/Frameworks -framework SDL2 -rpath /Library/Frameworks

clean:
	rm main
