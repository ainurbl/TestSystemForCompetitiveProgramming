#include <gtest/gtest.h>
#include "../solution_impl.hpp"

TEST(Test_2, Test_2_1) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(2, 1), 4);
}

TEST(Test_2, Test_2_3) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(2, 3), 16);
}

TEST(Test_2, Test_2_1000) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(2, 1000), 1002001);
}