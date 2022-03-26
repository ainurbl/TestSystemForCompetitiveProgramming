#include <gtest/gtest.h>
#include "../solution_impl.hpp"

TEST(Test_1, Test_1_1) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(1, 1), 2);
}

TEST(Test_1, Test_1_2) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(1, 2), 3);
}

TEST(Test_1, Test_1_1000) {
    auto solver = TSolutionImpl();
    EXPECT_EQ(solver.SolveFor(1, 1000), 1001);
}