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
        /* get array_size */
        int32_t N;std::cin >> N;

        /* get array elements */
        std::vector<int32_t> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i);
        }

        /* evaluate unique integers */
        std::set<int32_t> set;
        for (const auto& item: array) {
            set.insert(item);
        }

        /* print message */
        if ((set.size() - 1) % 2 != 0) {
            std::cout << "Aman\n";
        } else {
            std::cout << "Raju\n";
        }
    }
    return 0;
}