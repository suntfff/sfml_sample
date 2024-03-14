#include <SFML/Graphics.hpp>
#include <Circle.hpp>
#include <Game.hpp>
int main()
{
    srand(time(0));
    msp::Game game(1800, 900, "Game!!!");
    game.Setup_Circle();
    game.LifeCycle();
    return 0;
}
