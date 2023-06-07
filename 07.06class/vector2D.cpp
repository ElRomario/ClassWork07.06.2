#include "vector2D.h"

Vector2D operator+(const Vector2D& a, const Vector2D& b)
{
	return Vector2D(a.getX() + b.getX(), a.getY() + b.getY());
}

Vector2D operator-(const Vector2D& a, const Vector2D& b)
{
	return{ a.getX() - b.getX(), a.getY() - b.getY() };
}

Vector2D operator*(const Vector2D& a, float n)
{
	return Vector2D(a.getX() * n, a.getY() * n);
}

Vector2D operator*(float n, const Vector2D& a)
{
	return a * n;
}

Vector2D operator/(const Vector2D& a, float n)
{
	return Vector2D(a.getX() / n, a.getY() / n);
}

ostream& operator<<(ostream& out, const Vector2D& vector)
{
	out << '(' << vector.getX() << " ," << vector.getY() << ')';
	return out;
}

istream& operator>>(istream& in, Vector2D& vector)
{
	float x, y;
	in >> x >> y;
	vector.setX(x);
	vector.setY(y);
	return in;
}
