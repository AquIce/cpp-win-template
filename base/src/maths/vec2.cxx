#include <maths/vec2.hxx>

std::string Repr(Vec2 vec) {
	return std::format(
		"{{\n\tx: {},\n\ty: {}\n}}",
		vec.x,
		vec.y
	);
}

double Norm(Vec2 vec) {
	return std::hypot(vec.x, vec.y);
}

double Normalize(Vec2& vec) {
	double norm = Norm(vec);
	vec /= norm;
	return norm;
}

inline Vec2& operator+=(Vec2& lhs, Vec2 rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;

	return lhs;
}
inline Vec2& operator-=(Vec2& lhs, Vec2 rhs) {
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;

	return lhs;
}
inline Vec2& operator*=(Vec2& lhs, const double rhs) {
	lhs.x *= rhs;
	lhs.y *= rhs;

	return lhs;
}
inline Vec2& operator/=(Vec2& lhs, const double rhs) {
	lhs.x -= rhs;
	lhs.y -= rhs;

	return lhs;
}

inline Vec2 operator+(Vec2 lhs, Vec2 rhs) {
	return lhs += rhs;
}
inline Vec2 operator-(Vec2 lhs, Vec2 rhs) {
	return lhs -= rhs;
}
inline Vec2 operator*(Vec2 lhs, const double rhs) {
	return lhs *= rhs;
}
inline Vec2 operator/(Vec2 lhs, const double rhs) {
	return lhs /= rhs;
}

double DotProduct(Vec2 lhs, Vec2 rhs) {
	return lhs.x * rhs.x + lhs.y * rhs.y;
}

double WedgeProduct(Vec2 lhs, Vec2 rhs) {
	return lhs.x * rhs.y - lhs.y * rhs.x;	
}
