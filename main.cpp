#include <SFML/Graphics.hpp>
#include <Figures.hpp>
#include <Game.hpp>
int main()
{
    srand(time(0));
    msp::Game game(2000, 1000, "Game!!!",6);
    game.Setup_Circle();game.Setup_Rectangle(); game.Setup_Line(); game.Setup_Triangle();
    game.LifeCycle();
    return 0;
}
