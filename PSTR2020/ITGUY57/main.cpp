#include <bits/stdc++.h>

int32_t main(int32_t argc,char* argv[]) {
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
        int64_t i{1}, j{0};
        int64_t value{0};

        for (int32_t l{1};l <= K;l++) {
            for (int32_t m{1};m <= l;m++) {
                std::cout << value << " ";
                value += i;

                /* update value of i & j */
                int64_t temp{j};
                j += i;i = temp;
            }

            /* move cursor to next-line */
            std::cout << "\n";
        }
    }
    return 0;
}