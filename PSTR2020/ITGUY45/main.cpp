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
        /* get K */
        int32_t K;std::cin >> K;

        /* draw specified pattern */
        int32_t i{1};

        /* draw upper half */
        while (i <= (K + 1)/2) {
            for (int32_t j{1};j < i;j++) {
                std::cout << " ";
            }

            /* after displaying spaces draw star */
            std::cout << "*\n";i += 1;
        }

        /* draw lower half */
        i -= 2;
        while (i >= 1) {
            for (int32_t j{1};j < i;j++) {
                std::cout << " ";
            }

            /* after displaying spaces draw star */
            std::cout << "*\n";i -= 1;
        }
    }
    return 0;
}