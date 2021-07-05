#include <bits/stdc++.h>

std::pair<int32_t, int32_t> MinMax(std::vector<int32_t> array, int32_t N) {
    /* initialize minimum & maximum value */
    int32_t minimum{array[0]}, maximum{array[0]};

    /* determine minimum & maximum */
    if (N >= 2) {
        for (int32_t i{1};i < N;i++) {
            if (array[i] > maximum) {
                /* update maximum */
                maximum = array[i];
            } else if (array[i] < minimum) {
                /* update minimum */
                minimum = array[i];
            }
        }
    }
    return {maximum, minimum};
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get size_of_array */
    int32_t N;std::cin >> N;

    /* get array_elements */
    std::vector<int32_t> array(N);
    for (int32_t i{0};i < N;i++) {
        std::cin >> array.at(i);
    }

    /* determine minimum & maximum element */
    auto min_max{MinMax(array, N)};

    /* print appropriate message */
    std::cout << min_max.first << " ";
    std::cout << min_max.second << "\n";

    return 0;
}