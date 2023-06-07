#pragma once
#include <ostream>
#include <istream>
using namespace std;
class Vector2D
{
private:
	float x, y;
public:
	Vector2D(float x, float y) : x{ x}, y { y}{}
	float getX() const { return x; }
	float getY() const { return y; }
	void setX(float x) { this->x = x; }
	void setY(float y) { this->y = y; }
};
Vector2D operator+(const Vector2D& a, const Vector2D& b);
Vector2D operator-(const Vector2D& a, const Vector2D& b);
Vector2D operator*(const Vector2D& a, float n);
Vector2D operator*(float n, const Vector2D& a);
Vector2D operator/(const Vector2D& a, float n);

ostream& operator<<(ostream& out, const Vector2D& vector);
istream& operator >>(istream& in, Vector2D& vector);

