#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {
        /* get string */
        std::string s;
        std::cin >> std::ws;
        getline(std::cin,s);

        /* reverse string */
        reverse(s.begin() , s.end());

        /* print appropriate message */
        std::cout << s << "\n";
    }
    return 0;
}