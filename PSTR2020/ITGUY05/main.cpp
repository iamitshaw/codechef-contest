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
        int32_t value{1}, number_of_spaces{-1};
        for (int32_t i{1};i < K;i++) {
            std::cout << value;value += 1;
            for (int32_t j{1};j <= number_of_spaces;j++) {
                std::cout << " ";
            }

            /* if second_element can't be placed */
            if (number_of_spaces >= 0) {
                std::cout << value;value += 1;
            }

            /* update number_of_spaces */
            number_of_spaces += 1;
            std::cout << "\n";
        }

        /* display last_row of pattern */
        for (int32_t i{1};i <= K;i++) {
            std::cout << value;value += 1;
        }

        /* move cursor to next-line */
        std::cout << "\n";
    }
    return 0;
}