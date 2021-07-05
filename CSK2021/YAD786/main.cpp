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
        /* get first_string */
        std::string S_I;
        std::cin >> S_I;

        /* get second_string */
        std::string S_II;
        std::cin >> S_II;

        /* determine sum_of_characters for first_string */
        int32_t total_sum_I{0};
        for(const auto& c: S_I) {
            total_sum_I += (int)c;
        }

        /* determine sum_of_characters for second_string */
        int32_t total_sum_II{0};
        for(const auto& c: S_II) {
            total_sum_II += (int)c;
        }

        /* print appropriate message */
        if (total_sum_I == total_sum_II) {
            std::cout << "No One\n";
        } else {
            /* evaluate difference */
            int32_t D{total_sum_II - total_sum_I};

            if (D >= 1 && D <= 10) {
                std::cout << "Rashmi\n";
            } else {
                std::cout << "Mohit\n";
            }
        }
    }
    return 0;
}