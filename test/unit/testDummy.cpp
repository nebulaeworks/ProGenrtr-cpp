#include <gtest/gtest.h>

#include "dummy.h"

TEST(dummyTest, doesSomething)
{
    dummy test{};
    EXPECT_EQ(test.doSomething("poo"), "poo");
}
