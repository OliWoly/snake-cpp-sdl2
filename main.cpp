#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    SDL_RenderDrawPoint(renderer, 640/2, 480/2);
    SDL_RenderPresent(renderer);
    
    // Apparently Need this event handler on macos!
    // https://stackoverflow.com/questions/65159971/how-to-create-a-window-with-sdl2-on-macos
    bool quit = false;
            // Event handler
            SDL_Event e;
            // While application is running
            while( !quit )
            {
                // Handle events on queue
                while( SDL_PollEvent( &e ) != 0 ) // poll for event
                {
                    // User requests quit
                    if( e.type == SDL_QUIT ) // unless player manually quits
                    {
                        quit = true;
                    }
                }
            }



    return 0;
}