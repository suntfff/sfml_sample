#pragma once
#include <string>
#include <Figures.hpp>
namespace msp
{
	class Game
	{
		int width;
		int height;
		std::string capture;
		msp::Circle* crl; msp::Rectangle* rect; msp::Line* ln; msp::Triangle* tr;
		int n;
		sf::RenderWindow window;

	public:
		Game(int width, int height, const std::string& capture, int n);
		Game(const Game& other);
		Game& operator = (const Game& other);
		void Setup_Circle();
		void Setup_Rectangle();
		void Setup_Line();
		void Setup_Triangle();
		void LifeCycle();
		~Game();
	};

}