#include <SDL2/SDL.h>
#include <iostream>
#include <chrono>
#include "player.h"
using namespace std;

int main(int argc, char* argv[]) {
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    // SETUP
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);


    Player p(10, 10, 10, 10);
    SDL_Rect pRect;
    pRect.x = p.getX();
    pRect.y = p.getY();
    pRect.h = p.getH();
    pRect.w = p.getW();

    

    // Apparently Need this event handler on macos!
    // https://stackoverflow.com/questions/65159971/how-to-create-a-window-with-sdl2-on-macos
    bool quit = false;
            // Event handler
            SDL_Event e;
            while( !quit )
            {
                // CLEAN SCREEN
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderClear(renderer);

                






                // Handle inputs
                while( SDL_PollEvent( &e ) != 0 ) // poll for event
                {
                    // User requests quit
                    if( e.type == SDL_QUIT ) // unless player manually quits
                    {
                        quit = true;
                    }

                    // Check for Key-Downs
                    else if(e.type == SDL_KEYDOWN){
                        switch(e.key.keysym.sym){
                            case SDLK_d:
                                p.moveRight();
                                break;
                            
                            case SDLK_ESCAPE:
                                quit = true;
                                break;
                        }
                    }

                    // Check for Key-Ups
                    else if(e.type == SDL_KEYUP){
                        switch(e.key.keysym.sym){
                        }
                    }
                }

                // DRAW A RECT
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_RenderDrawRect(renderer, &pRect);
                SDL_RenderPresent(renderer);






            }// gameloop
    return 0;
}