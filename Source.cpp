#include <doctest.h>
#include "Pakman.cpp"

TEST_CASE() {
	newx = 14
	y = 2
	Place = TileMap[y][newx + 1]
	REQUIRE(Place(' ') == 15)
}

TEST_SUITE_END();
