#include <string>
#include <SDL2/SDL.h>

class Player {
private:
    int x, y;
    int h, w;
    int r, g, b, a;
    

public:
    // Constructor
    Player(int x, int y, int h, int w);

    // Function to move the player 10 units to the right
    void moveRight();
    void reapplyInformationToRenderRectangle(SDL_Rect pRect);

    // Getter functions
    int getX() const;
    int getY() const;
    int getH() const;
    int getW() const;

    // Setter functions
    void setX(int newX);
    void setY(int newY);
    void setH(int newHeight);
    void setW(int newWidth);
};
