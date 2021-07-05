#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get N */
        int32_t N;std::cin >> N;

        /* determine sum_of_square for series */
        int32_t total_square_sum{2 * ((N*(N-1)*(2*N - 1))/6) + N*N};

        /* print appropriate message */
        std::cout << total_square_sum << std::endl;
    }
    return 0;
}