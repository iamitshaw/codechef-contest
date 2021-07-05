#include <bits/stdc++.h>

int main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get K */
        int32_t K;std::cin >> K;

        int32_t value{1};
        for(int32_t i{1};i<=K;i++) {
            for(int32_t j{1};j<=K;j++) {
                int N=value++;

                /* convert decimal_form of
                 * [N] to binary_form */
                std::vector<int> vector;
                while(N > 0) {
                    vector.push_back(N % 2);
                    N /= 2;
                }

                /* display binary_string of N */
                for(const auto& bit : vector) {
                    std::cout << bit;
                }

                /* separate two binary_string*/
                std::cout << " ";
            }

            /* move cursor to next-line */
            std::cout << "\n";
        }
    }
    return 0;
}