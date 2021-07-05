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
                    /* since, every prime number can be
                     * represented in form of (6n ± 1) */
                    return false;
                }
            }
            /* if number is prime */
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
        /* get size_of_array */
        int32_t N;std::cin >> N;

        /* get array_elements */
        std::vector<int32_t> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i);
        }

        /* determine total_difference */
        int32_t total_difference{0};
        int32_t left{0}, right{N-1};

        while (left < right) {
            total_difference += std::abs(array[left] - array[right]);
            left += 1;right -= 1;
        }

        /* print appropriate message */
        if (total_difference <= 1) {
            std::cout << "KITKAT\n";
        } else {
            if (is_prime(total_difference)) {
                /* if total_difference is prime */
                std::cout << "KIT\n";
            } else {
                /* if total_difference isn't prime */
                std::cout << "KAT\n";
            }
        }
    }
    return 0;
}