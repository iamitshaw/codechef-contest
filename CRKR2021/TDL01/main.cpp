#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_tasks */
    int32_t N;std::cin >> N;

    /* get time for mundane tasks */
    int32_t X;std::cin >> X;

    int32_t productive_time{24 - X};

    std::vector<int32_t> time_for_ith_task(N);
    for (int32_t i{0};i < N;i++) {
        std::cin >> time_for_ith_task.at(i);
    }

    /* evaluate total_time_required */
    int32_t total_time_required{0};
    for (const auto& time: time_for_ith_task) {
        total_time_required += time;
    }

    /* print message */
    if (total_time_required <= productive_time) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}