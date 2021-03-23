#include "catch.hpp"
#include "Shape.hpp"

TEST_CASE("Rectangle ctor requires correct input"){

	REQUIRE_THROWS_AS([&]() { Rectangle r(-5, 12); }(), std::invalid_argument);
	REQUIRE_THROWS_AS([&]() { Rectangle r(5, -12); }(), std::invalid_argument);
}

TEST_CASE("Square ctor requires correct input") {

	REQUIRE_THROWS_AS([&]() { Square s(-17.3); }(), std::invalid_argument);
}

TEST_CASE("Circle ctor requires correct input") {

	REQUIRE_THROWS_AS([&]() { Circle c(-21.7); }(), std::invalid_argument);
}

TEST_CASE("Triangle ctor requires correct input") {

	REQUIRE_THROWS_AS([&]() { Triangle t(-48.12); }(), std::invalid_argument);
}

TEST_CASE("Polygon ctor requires correct input") {

	REQUIRE_THROWS_AS([&]() { Polygon p(-3, 25.9); }(), std::invalid_argument);
	REQUIRE_THROWS_AS([&]() { Polygon p(8, -57.7); }(), std::invalid_argument);
}

TEST_CASE("Spacer ctor requires correct input") {

	REQUIRE_THROWS_AS([&]() { Spacer s(-151.2, 132.3); }(), std::invalid_argument);
	REQUIRE_THROWS_AS([&]() { Spacer s(151.2, -132.3); }(), std::invalid_argument);
}