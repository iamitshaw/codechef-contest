#include <bits/stdc++.h>

template <typename T>
int32_t digits_count(T number) {
    T temp_number{std::abs(number)};

    /* find out digit_count */
    int32_t total_digits{0};

    if (temp_number == 0) {
        /* zero is a non-negative
         * integer with one digit */
        return 1;
    } else {
        while (temp_number != 0) {
            /* increase total processed digits */
            total_digits++;

            /* eliminate last processed digit */
            temp_number /= 10;
        }
        return total_digits;
    }
}

/* power function */
int32_t powerFunction(int32_t base, ssize_t exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        /* calculate tempValue */
        int32_t tempValue {powerFunction(base, exponent / 2)};

        if (exponent % 2 == 0) {
            /* if exponent is even */
            return tempValue * tempValue;
        } else {
            /* if exponent is odd */
            return base * tempValue * tempValue;
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
        /* get number */
        int32_t N;std::cin >> N;

        /* evaluate digits */
        int32_t digits{digits_count(N)};

        /* check whether N is Armstrong */
        int32_t temp{N};int32_t total_sum{0};
        while (temp) {
            total_sum += powerFunction(temp % 10, digits);
            temp /= 10;
        }

        /* print appropriate message */
        if (total_sum == N) {
            std::cout << "FEELS GOOD\n";
        } else {
            std::cout << "FEELS BAD\n";
        }
    }
    return 0;
}