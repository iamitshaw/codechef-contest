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
        /* get record_point */
        int32_t record_point;
        std::cin >> record_point;

        /* get number_of_trains */
        int32_t N;std::cin >> N;

        /* get available_time */
        int32_t t;std::cin >> t;

        /* get coin_on_train_i */
        std::vector<int32_t> coin(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> coin.at(i);
        }

        /* evaluate total_coin_achieved in t_time */
        int32_t total_coin_earned{0};int32_t j{0};

        for (int32_t i{0};i < N;i++) {
            if (j+2 <= t) {
                total_coin_earned += coin.at(i);
                /* using 2 unit of time */j += 2;
            } else if (j+1 <= t) {
                total_coin_earned += std::ceil(coin.at(i)/2.0);
                /* using 1 unit of time */j += 1;
            } else {
                break;
            }
        }

        /* print message */
        if (total_coin_earned > record_point) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}