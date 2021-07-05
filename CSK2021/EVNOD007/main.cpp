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
        /* get size_of_array */
        int32_t N;std::cin >> N;

        /* get array_elements */
        int32_t element;

        int32_t odd_elements{0};
        int32_t even_elements{0};

        for (int32_t i{0};i < N;i++) {
            std::cin >> element;

            if (element%2 == 0) {
                /* if element is even */
                even_elements += 1;
            } else {
                /* if element is odd */
                odd_elements+= 1;
            }
        }

        /* print appropriate message */
        if (N % 2 == 0) {
            if (odd_elements == N/2 && even_elements == N/2) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        } else {
            if (odd_elements == (N+1)/2 && even_elements == (N-1)/2) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        }
    }
    return 0;
}