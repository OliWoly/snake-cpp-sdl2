#include <SDL2/SDL.h>
#include <iostream>
#include <chrono>

using namespace std;

int main(int argc, char* argv[]) {
    int gameLoopFrameCounter = 0;
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    // SETUP
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);
    

    // Apparently Need this event handler on macos!
    // https://stackoverflow.com/questions/65159971/how-to-create-a-window-with-sdl2-on-macos
    bool quit = false;
            // Event handler
            SDL_Event e;
            // While application is running
            while( !quit )
            {



                // CLEAN SCREEN
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderClear(renderer);

                // Need to set up a rectangle object first before I can draw a rectangle
                // To be able to change the position of the rectangle the variables must be assigned to different variables
                // i.e, instead of rect1.x = 250;, should be: rect1.x = rect1posx;
                SDL_Rect rect1;
                rect1.x = 250;
                rect1.y = 150;
                rect1.w = 200;
                rect1.h = 200;

                // DRAW A RECT
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_RenderDrawRect(renderer, &rect1);

                SDL_RenderPresent(renderer);



                rect1.x += 1;






                // Handle events on queue
                while( SDL_PollEvent( &e ) != 0 ) // poll for event
                {
                    // User requests quit
                    if( e.type == SDL_QUIT ) // unless player manually quits
                    {
                        quit = true;
                    }
                }

                gameLoopFrameCounter ++;
                //printf("%i\n", gameLoopFrameCounter);
            }// gameloop
    return 0;
}