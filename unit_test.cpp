#include "gtest/gtest.h"
#include "vTest.hpp"
#include "Ctest.hpp"
#include "rmboothTest.hpp"
#include "ComboTest.c"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
