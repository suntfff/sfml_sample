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
/*    msp::Circle cr[n];
    msp::Rectangle rect[n];
    msp::Line ln[n];
    msp::Triangle_Build();
    for (int i = 0; i < n; i++) {
        msp::Point p1 = { rand() % 2000, rand() % 1000 };
        float r = rand() % (40 - 10 + 1) + 10;
        cr[i].Setup(p1,r);
    }
    for (int i = 0; i < n; i++) {
        msp::Point p1 = { rand() % (40 - 10 + 1) + 10, rand() % (40 - 10 + 1) + 10 };
        msp::Point p2 = { rand() % 2000, rand() % 1000 };
        rect[i].Setup(p1, p2);
    }
    for (int i = 0; i < n; i++) {
        msp::Point p1 = { rand() % 2000, rand() % 1000 };
        msp::Point p2 = { rand() % 2000, rand() % 1000 };
        ln[i].Setup(p1, p2);
    }
    sf::RenderWindow window(sf::VideoMode(2000, 1000), "SFML works!");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (int i = 0; i < n; i++) {
            window.draw(tr[i].Get());
            window.draw(cr[i].Get());
            window.draw(rect[i].Get());
            window.draw(ln[i].Get());
        }
        window.display();
    }*/