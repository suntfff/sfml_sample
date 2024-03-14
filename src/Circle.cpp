#include <Circle.hpp>
#include <cmath>
namespace msp{
	Circle::Circle(Point p1, float r,float v, float alfa, int n){
		Setup(p1, r,v,alfa,n);
	}
	void Circle::Setup(Point p1, float r, float v, float alfa, int n){
		this->r = r; x = p1.x; y = p1.y; this->v = v; this->alfa = alfa; this->n = n;
		shape.setOrigin(r, r);
		shape.setRadius(r);
		shape.setPosition(x, y);
		int color_r = rand() % 256;
		int color_g = rand() % 256;
		int color_b = rand() % 256;
		shape.setFillColor(sf::Color(color_r, color_b, color_g, 127));
	}
	sf::CircleShape Circle::Get(){
		return shape;
	}
	
	void Circle::Move(float dt) {
		float vx = v * cos(alfa);
		float vy = v * sin(alfa);
		y += dt * vy;
		x += dt*vx;
		shape.setPosition(x, y);
	}
}