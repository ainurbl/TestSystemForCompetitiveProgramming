#include <iostream>
#include "solution_impl.hpp"

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << TSolutionImpl().SolveFor(n, m) << std::endl;
    return 0;
}
