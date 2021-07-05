#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* int32_t test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get K */
        int32_t K;std::cin >> K;

        /* draw specified pattern */
        int32_t value{1};
        while (K) {
            for (int32_t j{1};j <= K;j++) {
                std::cout << value++;
            }

            /* move cursor to next-line */
            std::cout << std::endl;

            /* update K */
            K -= 1;
        }
    }
    return 0;
}