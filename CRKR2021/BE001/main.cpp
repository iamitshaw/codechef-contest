#include <bits/stdc++.h>

int64_t nCr(int64_t N, int64_t R) {
    /* nCr(N, R) = (P/K) */
    int64_t P = 1, K = 1;

    /* nCr(N, R) == nCr(N, N-R) */
    if (N - R <= R) {
        R = N - R;
    }

    if (R != 0) {
        while (R) {
            /* P = N*(N-1)*(N-2)*... */
            /* K = R*(R-1)*(R-2)*... */
            P *= N;K *= R;

            /* for avoiding overflow condition */
            int64_t m = std::__gcd(P, K);

            /* remove common factor */
            P /= m;K /= m;

            /* update N & R */
            N--;R--;
        }
    } else {
        /* nCr(N, 0) = 0 */P = 1;
    }
    return P;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get number_of_problem_in_each_part */
        int64_t N;std::cin >> N;

        /* get number_of_problem to be
         * solved_in_part_A of paper */
        int64_t X;std::cin >> X;

        /* get number_of_problem to be
         * solved_in_part_B of paper */
        int64_t Y;std::cin >> Y;

        /* evaluate total_number_of_ways */
        int64_t total_number_of_ways{nCr(N, X) * nCr(N, Y)};

        /* print message */
        std::cout << total_number_of_ways << "\n";
    }
    return 0;
}