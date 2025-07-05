#pragma once

#include <cmath>
#include <format>
#include <string>

typedef struct Vec2 {
	double x;
	double y;
} Vec2;

std::string Repr(Vec2 vec);

double Norm(Vec2 vec);

// Normalizes the vector and returns its original norm
double Normalize(Vec2& vec);

inline Vec2& operator+=(Vec2& lhs, Vec2 rhs);
inline Vec2& operator-=(Vec2& lhs, Vec2 rhs);
inline Vec2& operator*=(Vec2& lhs, const double rhs);
inline Vec2& operator/=(Vec2& lhs, const double rhs);

inline Vec2 operator+(Vec2 lhs, Vec2 rhs);
inline Vec2 operator-(Vec2 lhs, Vec2 rhs);
inline Vec2 operator*(Vec2 lhs, const double rhs);
inline Vec2 operator/(Vec2 lhs, const double rhs);

double DotProduct(Vec2 lhs, Vec2 rhs);
double WedgeProduct(Vec2 lhs, Vec2 rhs);
