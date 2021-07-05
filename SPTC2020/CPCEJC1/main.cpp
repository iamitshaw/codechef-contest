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
        /* get number_of_friends */
        int32_t N;std::cin >> N;

        /* get number_of_pizza_slices */
        int32_t K;std::cin >> K;

        /* check whether pizza will be
         * distributed equally & each
         * friend receive at least 1 */
        if (K % N == 0 && K/N >= 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}