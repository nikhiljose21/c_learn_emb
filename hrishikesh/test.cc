#include "shape.h"
#include <gtest/gtest.h>
namespace {

TEST(pentagon,Test_Pentagon_Valid_inputs) {
    pentagon p(5.0);
    EXPECT_TRUE(p.valid_input()); 
    pentagon p1(0.0);
    EXPECT_FALSE(p1.valid_input()); 
    pentagon p2(-5.0);
    EXPECT_TRUE(p2.valid_input());
}


TEST(pentagon,Test_pentagon_functions) {
    pentagon p(5.0);
  EXPECT_FLOAT_EQ(25, p.perimeter());
  EXPECT_FLOAT_EQ(43.011925, p.area());
}



}
