#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get size_of_array */
    int32_t N;std::cin >> N;

    /* get size_of_sub_array */
    int32_t M;std::cin >> M;

    /* get array_elements */
    std::vector<int32_t> array(N);
    for (int32_t i{0};i < N;i++) {
        std::cin >> array.at(i);
    }

    /* get maximum_unique_integers in sub_array */
    std::map<int32_t, int32_t> map;int32_t temp_size{0};

    /* create initial sliding window */
    for (int32_t i{0};i < M;i++) {
        auto it{map.find(array.at(i))};
        if (it != map.end()) {
            it->second += 1;
        } else {
            temp_size += 1;
            map.insert({array.at(i), 1});
        }
    }

    int32_t max_unique_integers{temp_size};
    for (int32_t i{M};i < N;i++) {
        /* insert array[i] into map */
        auto it{map.find(array.at(i))};
        if (it != map.end()) {
            it->second += 1;
        } else {
            /* update temp_size of unique_integers */
            temp_size += 1;
            map.insert({array.at(i), 1});
        }

        /* erase array[i-M] from map */
        it = {map.find(array.at(i-M))};

        /* decrease frequency of array[i-M] */
        it->second -= 1;

        if (it->second == 0) {
            map.erase(it);temp_size -= 1;
        }

        /* update maximum_unique_integers */
        if (temp_size > max_unique_integers) {
            max_unique_integers = temp_size;
        }
    }

    /* print message */
    std::cout << max_unique_integers << "\n";
    return 0;
}