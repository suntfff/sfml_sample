#include <Figures.hpp>
#include <SFML/Graphics.hpp>
namespace msp {
	Line::Line(Point p1, Point p2){
		Setup(p1, p2);
	}
	void Line::Setup(Point p1, Point p2)
	{
		shape[0].position = sf::Vector2f(p1.x, p1.y);
		shape[1].position = sf::Vector2f(p2.x, p2.y);
		shape[0].color = sf::Color::White;
		shape[1].color = sf::Color::White;
	}
	sf::VertexArray Line::Get()
	{
		return shape;
	}
}