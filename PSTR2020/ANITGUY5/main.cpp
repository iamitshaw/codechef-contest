#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case*/
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get size_of_array */
        int32_t N;std::cin >> N;

        /* get array_elements */
        std::vector<int32_t> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i);
        }

        /* determine transition-point */
        int32_t transition_index{0};
        for (int32_t i{0};i < N;i++) {
            if(array.at(i) == 0) {
                transition_index += 1;
            }
        }

        /* print appropriate message */
        std::cout << transition_index << std::endl;
    }
    return 0;
}