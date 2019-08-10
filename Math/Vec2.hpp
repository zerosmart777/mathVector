#pragma once
#include <string>

namespace cw
{

  template<class T>
  class Vec2
  {
  public:
    T x;
    T y;

	Vec2() : x(0), y(0) {}
	Vec2(T x, T y) : x(x), y(y) {}
	Vec2(const Vec2& v) : x(v.x), y(v.y) {}
/*
    Vec2() {};
	Vec2(T x, T y)
	{
		this->x = x;
		this->y = y;
	}
	Vec2(const Vec2& v) {
		this->x = v.x;
		this->y = v.y;
	}
	*/
    ~Vec2() {};

	Vec2& operator=(const Vec2& v)
	{
		x = v.x;
		y = v.y;
		return *this;
	}


	Vec2 operator+(const Vec2& v)
	{
		return Vec2(x + v.x, y + v.y);
	}
	Vec2 operator-(const Vec2& v)
	{
		return Vec2(x - v.x, y - v.y);
	}


	Vec2 operator+(T s)
	{
		return Vec2(x + s, y + s);
	}
	Vec2 operator-(T s)
	{
		return Vec2(x - s, y - s);
	}
	Vec2 operator*(T s)
	{
		return Vec2(x * s, y * s);
	}
	Vec2 operator/(T s)
	{
		return Vec2(x / s, y / s);
	}


	Vec2& operator+=(const Vec2& v)
	{
		x += v.x;
		y += v.y;
		return *this;
	}
	Vec2& operator-=(const Vec2& v)
	{
		x -= v.x;
		y -= v.y;
		return *this;
	}


	Vec2& operator+=(T s)
	{
		x += s;
		y += s;
		return *this;
	}
	Vec2& operator-=(T s)
	{
		x -= s;
		y -= s;
		return *this;
	}
	Vec2& operator*=(T s)
	{
		x *= s;
		y *= s;
		return *this;
	}
	Vec2& operator/=(T s)
	{
		x /= s;
		y /= s;
		return *this;
	}


	Vec2 add(const Vec2& v)
	{
		return Vec2(x + v.x, y + v.y);
	}
	Vec2 subtract(const Vec2& v)
	{
		return Vec2(x - v.x, y - v.y);
	}


	Vec2 add(T s)
	{
		return Vec2(x + s, y + s);
	}
	Vec2 subtract(T s)
	{
		return Vec2(x - s, y - s);
	}
	Vec2 mul(T s)
	{
		return Vec2(x * s, y * s);
	}
	Vec2 divide(T s)
	{
		return Vec2(x / s, y / s);
	}

	T dotProduct(const Vec2& v)
	{
		return ((x * v.x) + (y * v.y));
	}

	T crossProduct(const Vec2& v)
	{
		return ((x * v.y) - (y * v.x));
	}

	float magnitude()
	{
		return std::sqrtf(magnitude_sqr());
	}

	float magnitude_sqr()
	{
		return static_cast<float>(x) * static_cast<float>(x) + static_cast<float>(y) * static_cast<float>(y);
	}

	Vec2& normalize()
	{
		if (magnitude() == 0)
			return *this;
		*this /= magnitude();
		return *this;
	}

  };

  template <class T>
  Vec2<T> operator*(T s, const Vec2<T>& v)
  {
    return Vec2<T>(v.x * s, v.y*s);
  }

  typedef Vec2<int> Vec2i;
  typedef Vec2<float> Vec2f;
  typedef Vec2<double> Vec2d;

}
