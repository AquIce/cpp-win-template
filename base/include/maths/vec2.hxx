#pragma once

#include <cstdlib>
#include <format>
#include <string>

struct Vec2 {
	size_t x;
	size_t y;
};

void newVec2(
	struct Vec2* out,
	size_t x,
	size_t y
);

std::string Vec2Repr(
	const struct Vec2* const vec
);
