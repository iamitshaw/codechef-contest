#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get X */
    int32_t X;std::cin >> X;

    /* get Y */
    int32_t Y;std::cin >> Y;

    /* evaluate total_sum */
    int32_t total_sum{X + Y};

    /* print appropriate message */
    std::cout << total_sum << "\n";
    return 0;
}