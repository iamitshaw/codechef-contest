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

        /* get M */
        int32_t M;std::cin >> M;

        /* store frequency of each natural_number */
        std::map<int32_t, int32_t> map;
        int32_t element;
        for (int32_t i{0};i < (N + M);i++) {
            std::cin >> element;

            /* check whether element
             * is in map or not */
            auto iterator{map.find(element)};
            if (iterator != map.end()) {
                iterator->second += 1;
            } else {
                map.insert({element, 1});
            }
        }

        /* display balls in third basket */
        for (const auto& item: map) {
            if (item.second >= 2) {
                std::cout << item.first << " ";
            }
        }

        /* move cursor to next-line */
        std::cout << std::endl;
    }
    return 0;
}
