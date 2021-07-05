#include <bits/stdc++.h>

bool is_prime(const int32_t& number) {
    if (number >= 0 && number <= 1) {
        /* exception case handling */
        return false;
    } else {
        if (number <= 3) {
            /* 2, 3 are prime numbers */
            return true;
        } else if (number % 2 == 0 or number % 3 == 0) {
            /* the algorithm can be improved further by observing that all
             * primes are of the form 6k ± 1, with the exception of 2 & 3 */
            return false;
        } else {
            /* skipping middle five numbers to reduce processing time */
            for (int32_t i{5}; i*i <= number;i += 6) {
                /* if number has single factor other than one and itself
                 * then number doesn't qualify for being a prime number */
                if (number % i == 0 or number % (i + 2) == 0) {
                    /* since, every is_prime number can be
                     * represented in form of (6n ± 1) */
                    return false;
                }
            }
            /* if number is is_prime */
            return true;
        }
    }
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
        /* get firstNumber */
        std::vector<int32_t> firstNumber(4);
        for (int32_t i{0};i <4;i++) {
            std::cin >> firstNumber[i];
        }

        /* get secondNumber */
        std::vector<int32_t> secondNumber(4);
        for(int32_t i{0};i < 4;i++) {
            std::cin >> secondNumber[i];
        }

        /* get total_sum */
        int32_t total_sum{0};
        for (int32_t i{0};i < 4;i++) {
            total_sum += (firstNumber[i] % secondNumber[i]);
        }

        /* print appropriate message */
        if (total_sum <= 1) {
            std::cout << "Access Denied\n";
        } else {
            if (!is_prime(total_sum)) {
                std::cout << "Access Granted\n";
            } else {
                std::cout << "Access Denied\n";
            }
        }
    }
    return 0;
}