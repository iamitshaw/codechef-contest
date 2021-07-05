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
        /* get number of switches */
        int32_t N;std::cin >> N;

        /* if number_of_factor(switch_position) is even then
         * switches will be at on state at that position */

        /* switches at perfect square position will be at on state */
        for (int32_t i{1};i*i <= N;i++) {
            std::cout << i*i << " ";
        }
        /* move cursor to next-line */
        std::cout << "\n";
    }
    return 0;
}