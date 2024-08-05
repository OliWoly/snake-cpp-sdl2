#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }


    cout << "testtest123" << endl;
    SDL_Quit();
    return 0;
}