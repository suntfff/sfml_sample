#include <Game.hpp>
#include <Figures.hpp>
#include <string>
namespace msp {
	Game::Game(int width, int height, const std::string& capture, int n) {
		this->width = width;
		this->height = height;
		this->capture = capture;
		this->n = n;
	}
	Game::Game(const Game& other) {
		this->n = other.n;
		this->crl = new msp::Circle[n]; this->rect = new msp::Rectangle[n]; this->ln = new msp::Line[n]; this->tr = new msp::Triangle[n];
		for (int i = 0; i < n; i++) {
			this->crl[i] = other.crl[i];
			this->rect[i] = other.rect[i];
			this->ln[i] = other.ln[i];
			this->tr[i] = other.tr[i];
		}
	}
	Game& Game::operator = (const Game& other) {
		this->n = other.n;
		delete[] this->crl; delete[] this->rect; delete[] this->ln; delete[] this->tr;
		for (int i = 0; i < n; i++) {
			this->crl[i] = other.crl[i];
			this->rect[i] = other.rect[i];
			this->ln[i] = other.ln[i];
			this->tr[i] = other.tr[i];
		}
		return *this;
	}
	void Game::Setup_Circle() {
		crl = new msp::Circle[n];
		for (int i = 0; i < n; i++) {
			msp::Point p1 = { rand() % 2000, rand() % 1000 };
			float r = rand() % (40 - 10 + 1) + 10;
			crl[i].Setup(p1, r);
		}
	}
	void Game:: Setup_Rectangle() {
		rect = new msp::Rectangle[n];
		for (int i = 0; i < n; i++) {
			msp::Point p1 = { rand() % (40 - 10 + 1) + 10, rand() % (40 - 10 + 1) + 10 };
			msp::Point p2 = { rand() % 2000, rand() % 1000 };
			rect[i].Setup(p1, p2);
		}
	}
	void Game::Setup_Line() {
		ln = new msp::Line[n];
		for (int i = 0; i < n; i++) {
			msp::Point p1 = { rand() % 2000, rand() % 1000 };
			msp::Point p2 = { rand() % 2000, rand() % 1000 };
			ln[i].Setup(p1, p2);
		}
	}
	void Game::Setup_Triangle() {
		tr = new msp::Triangle[n];
		for (int i = 0; i < n; i++) {
			msp::Point p1 = { rand() % 2000, rand() % 1000 };
			msp::Point p2 = { rand() % (100 - 20 + 1) + 20, rand() % (100 - 20 + 1) + 20 };
			msp::Point p3 = { rand() % (100 - 20 + 1) + 20, rand() % (100 - 20 + 1) + 20 };
			msp::Point p4 = { rand() % (100 - 20 + 1) + 20, rand() % (100 - 20 + 1) + 20 };
			tr[i].Setup(p1, p2, p3, p4);
		}
	}
	void Game::LifeCycle() {
		window.create(sf::VideoMode(width, height), capture);
		while (window.isOpen()) {
			sf::Event event;
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear();
			for (int i = 0; i < n; i++) {
				window.draw(crl[i].Get()); window.draw(rect[i].Get()); window.draw(ln[i].Get()); window.draw(tr[i].Get());
			}
			window.display();
		}
	}
	Game::~Game() {
		delete[] crl; delete[] rect; delete[] ln; delete[] tr;
	}
}