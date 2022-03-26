#include <gtest/gtest.h>
#include "../solution_impl.hpp"

TEST(Test_3, Test_3_1) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(3, 1), 8);
}

TEST(Test_3, Test_3_2) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(3, 2), 27);
}

TEST(Test_3, Test_3_3) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(3, 3), 64);
}