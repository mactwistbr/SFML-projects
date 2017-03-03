#pragma once
#include <SFML/Graphics.hpp>
#include "Palhaco.h"

using namespace sf;
using namespace std;

class Game{
public:
    Game();
    Game (string Title, Uint32 Style);
    ~Game();
    void run();

private:
    void handlePlayerInput(Keyboard::Key key, bool isPressed);
    void processEvents();
    void update();
    void render();

    RectangleShape linha1;
    RectangleShape linha2;
    RenderWindow mWindow;
    Palhaco palhaco;
    Game game();

protected:
    bool mIsMovingUp, mIsMovingDown, mIsMovingLeft, mIsMovingRight;
};
