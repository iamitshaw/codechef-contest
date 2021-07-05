#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get input_string */
    std::vector<std::string> A;
    std::string input_string;

    /* evaluate number_of_newline_characters in input_string */
    int32_t newline_characters{0};
    int32_t input_newlines{0};

    while (std::getline(std::cin, input_string)) {
        int32_t length{(int)input_string.length()};

        /* linear-search for newline character */
        int32_t index{0};
        for (int32_t i{0};i < length-1;i++) {
            if (input_string[i]=='\\' && input_string[i+1]=='n') {
                newline_characters += 1;
                if (i > 0) {
                    /* if non-empty string exist from index */
                    A.push_back(input_string.substr(index, i-index));
                }
                index = (i+2);
            }
        }

        /* if non-empty string exist at suffix */
        if (index < length) {
            A.push_back(input_string.substr(index, length-index));
        }

        /* update input-lines */
        input_newlines += 1;
    }

    /* print message */
    std::cout << newline_characters << "\n";
    std::cout << input_newlines << "\n";

    /* display output_string */
    for (const auto& s: A) {
        std::cout << s << "\n";
    }
    return 0;
}