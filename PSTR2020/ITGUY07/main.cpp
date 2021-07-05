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
        int64_t N;std::cin >> N;

        /* evaluate N-th term of series */
        int64_t N_th_term{(N*(N-1))/2};

        /* print appropriate message */
        std::cout << N_th_term << "\n";
    }
    return 0;
}