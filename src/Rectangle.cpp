#include <Figures.hpp>
#include <SFML/Graphics.hpp>
namespace msp {
	Rectangle::Rectangle(Point p1, Point p2) {
		Setup(p1, p2);
	}
	void Rectangle::Setup(Point p1, Point p2) {
		shape.setFillColor(sf::Color::Blue);
		shape.setPosition(p1.x, p1.y);
		shape.setSize(sf::Vector2f(p1.x, p1.y));
		shape.setFillColor(sf::Color::Blue);
		shape.setPosition(p2.x, p2.y);
	}
	sf::RectangleShape Rectangle::Get() {
		return shape;
	}
}