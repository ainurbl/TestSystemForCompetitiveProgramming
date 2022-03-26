//
// Created by intersection on 3/27/22.
//

#include "solution_impl.hpp"

int TSolutionImpl::SolveFor(int n, int m) {
    int res = 0;
    for (int n1 = 0; n1 <= n; n1++) {
        for (int k = 0; k <= m; k++) {
            auto tmp = mul_mod(mul_mod(mul_mod(c[n][n1], s[n1][k]), f[k]), c[m][k]);
            res += tmp;
            res %= mod;
        }
    }
    return res;
}

TSolutionImpl::TSolutionImpl() {
    TSolutionImpl::Precalc();
}

void TSolutionImpl::Precalc() {
    f[0] = 1;
    for (int i = 1; i < MAX_SIZE; i++) {
        f[i] = mul_mod(i, f[i - 1]);
    }
    for (auto &i: c) {
        i[0] = 1;
    }
    for (int i = 1; i < MAX_SIZE; i++) {
        for (int j = 1; j < MAX_SIZE; j++) {
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            c[i][j] %= mod;
        }
    }
    for (int n = 0; n < MAX_SIZE; n++) {
        for (int k = 0; k < MAX_SIZE; k++) {
            if (n == k) {
                s[n][k] = 1;
            } else if (n == 0 || k == 0) {
                s[n][k] = 0;
            } else if (n > k) {
                s[n][k] = mul_mod(k, s[n - 1][k]) + s[n - 1][k - 1];
                s[n][k] %= mod;
            } else {
                s[n][k] = 0;
            }
        }
    }
}
