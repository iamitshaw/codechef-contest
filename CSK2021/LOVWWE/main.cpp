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
        /* get A */
        int64_t A;std::cin >> A;

        /* get R */
        int64_t R;std::cin >> R;

        /* get Z */
        int64_t Z;std::cin >> Z;

        /* left-amount */
        A %= Z;R %= Z;

        if (A == 0 || R == 0) {
            std::cout << 0 << std::endl;
        } else {
            /* evaluate maximum_food_item that can
             * be brought by left_amount combined */
            int64_t max_item {(A + R)/Z};

            if (max_item > 0) {
                /* determine minimum sharing amount */
                if (A >= R) {
                    std::cout << R - ((A+R) % Z) << std::endl;
                } else {
                    std::cout << A - (A+R) % Z << std::endl;
                }
            } else {
                /* if no food_item can be brought */
                std::cout << 0 << std::endl;
            }
        }
    }
    return 0;
}