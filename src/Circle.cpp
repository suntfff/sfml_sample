#include <Figures.hpp>
namespace msp {
	Circle::Circle(Point p1, float r) {
		Setup(p1, r);
	}
	void Circle::Setup(Point p1, float r) {
		shape.setRadius(r);
		shape.setPosition(p1.x, p1.y);
		shape.setFillColor(sf::Color::Green);
	}
	sf::CircleShape Circle::Get() {
		return shape;
	}
}