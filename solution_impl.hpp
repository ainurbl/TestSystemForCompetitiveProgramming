//
// Created by intersection on 3/27/22.
//

#ifndef TESTSYSTEMFORCOMPETITIVEPROGRAMMING_SOLUTION_IMPL_HPP
#define TESTSYSTEMFORCOMPETITIVEPROGRAMMING_SOLUTION_IMPL_HPP

#include "solution.hpp"

class TSolutionImpl : public TSolution {
private:
    static constexpr int mod = 1000000009;
    static constexpr int MAX_SIZE = 1005;
    int c[MAX_SIZE][MAX_SIZE]{};
    int s[MAX_SIZE][MAX_SIZE]{};
    int f[MAX_SIZE]{};

    static int mul_mod(int a, int b) {
        return (int) ((a * 1LL * b) % mod);
    }

    void Precalc();

public:
    TSolutionImpl();

    int SolveFor(int n, int m) override;
};


#endif //TESTSYSTEMFORCOMPETITIVEPROGRAMMING_SOLUTION_IMPL_HPP
