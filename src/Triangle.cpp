#include <Figures.hpp>
#include <SFML/Graphics.hpp>
namespace msp {
	Triangle::Triangle(Point p1, Point p2, Point p3, Point p4) {
		Setup(p1, p2, p3, p4);
	}
	void Triangle::Setup(Point p1, Point p2, Point p3, Point p4) {
		shape.setPointCount(3);
		shape.setFillColor(sf::Color::Blue);
		shape.setPosition(p1.x, p1.y);
		shape.setPoint(0, sf::Vector2f(p2.x, p2.y));
		shape.setPoint(1, sf::Vector2f(p3.x, p3.y));
		shape.setPoint(2, sf::Vector2f(p4.x, p4.y));
		shape.setFillColor(sf::Color::Red);
	}
	sf::ConvexShape Triangle::Get() {
		return shape;
	}
}