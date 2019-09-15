#include "catch2/catch.hpp"

// dummy test
TEST_CASE("DummyTest", "[dummy]")
{
    const bool something = true;
    CHECK(something);
}
