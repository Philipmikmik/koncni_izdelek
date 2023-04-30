#ifndef _Game
#define _Game

#include "FPS.h"
#include "Scenes.h"

class Game{
    public:
    RenderWindow *window;
    Event event;
    Cursor hover, normal;
    Font roboto;
    Texture sprites[7];
    Vector2i localMouse;
    FPS fps;
    Text test;

    MazeScene scMaze;
    //Maze maze;

    Game();

    void run();
    void events();
    void startMaze();
};

#endif