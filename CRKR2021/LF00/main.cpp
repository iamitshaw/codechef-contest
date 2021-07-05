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
        /* get age_of_chef */
        int32_t A;std::cin >> A;

        /* get number_of_beds */
        int32_t N;std::cin >> N;

        /* get number_of_days_left */
        int32_t d;std::cin >> d;

        /* get number_of_patients of group-A */
        int32_t x;std::cin >> x;

        /* get number_of_patients of group-B */
        int32_t y;std::cin >> y;

        /* get number_of_patients of group-C */
        int32_t z;std::cin >> z;

        int32_t days_required{0};

        /* days after chef will get a bed */
        if ((x + y + z) == N) {
            /* if no their is no vacant bed */
            if (x > 0) {
                days_required += 10;
            } else if (y > 0) {
                days_required += 14;
            } else {
                days_required += 21;
            }
        }

        /* days required to save chef */
        if (A >= 0 && A < 18) {
            days_required += 10;
        } else if (A >= 19 && A <= 50) {
            days_required += 14;
        } else {
            days_required += 21;
        }

        /* print message */
        if (days_required <= d) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}