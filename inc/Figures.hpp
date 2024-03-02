#pragma once
#include <SFML/Graphics.hpp>
namespace msp {
	struct Point {
		float x;float y;
	};
	class Triangle {
	   sf::ConvexShape shape;
	public:
		Triangle() = default;
		Triangle(Point p1, Point p2, Point p3, Point p4);
		void Setup(Point p1, Point p2, Point p3, Point p4);
		sf::ConvexShape Get();
	};
	class Circle{
	    sf::CircleShape shape;
	public:
		Circle() = default;
		Circle(Point p1, float r);
		void Setup(Point p1, float r);
		sf::CircleShape Get();
	};
	class Rectangle {
		sf::RectangleShape shape;
	public:
		Rectangle() = default;
		Rectangle(Point p1, Point p2);
		void Setup(Point p1, Point p2);
		sf::RectangleShape Get();
	};
	class Line {
		sf::VertexArray shape;

	public:
		Line() : shape(sf::Lines, 2) {}
		Line(Point p1, Point p2);
		void Setup(Point p1, Point p2);
		sf::VertexArray Get();
	};

}
