#include <maths/vec2.hxx>

void newVec2(
	struct Vec2* out,
	size_t x,
	size_t y
) {
	out->x = x;
	out->y = y;
}

std::string Vec2Repr(
	const struct Vec2* const vec
) {
	return std::format(
		"{{\n\tx: {},\n\ty: {}\n}}",
		vec->x,
		vec->y
	);
}
