#include <bits/stdc++.h>

int main(int32_t argc, char* argv[]) {
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

        /* determine whether any permutation
         * of N is divisible by 5 or not */
        bool is_divisible{false};
        while (N) {
            if ((N % 10 == 0) || (N % 10 == 5)) {
                is_divisible = {true};break;
            } else {
                N /= 10;
            }
        }

        /* print appropriate message */
        std::cout << (is_divisible? "1\n": "0\n");
    }
    return 0;
}