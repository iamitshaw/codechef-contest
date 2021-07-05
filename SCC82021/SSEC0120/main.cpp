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
        /* get number_of_nuts */
        int32_t N;std::cin >> N;

        /* get number_of_honey_pots */
        int32_t H;std::cin >> H;

        int32_t max_people{std::max(std::__gcd(N, H), std::__gcd(N-1, H))};

        /* print message */
        std::cout << max_people << "\n";
    }
    return 0;
}