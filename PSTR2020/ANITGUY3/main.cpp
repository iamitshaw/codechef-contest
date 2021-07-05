#include <bits/stdc++.h>

/* merge the two sorted sub-arrays - left and right sub-array */
template <typename T>
int64_t merge_subarray(T* array, ssize_t left, ssize_t mid, ssize_t right) {

    /* find the size of left sub-array and right sub-array */
    ssize_t size_of_left_subarray {(mid - left + 1)};
    ssize_t size_of_right_subarray {right - (mid + 1) + 1};

    /* allocate memory for left sub-array and right sub-array  */
    auto* left_subarray = new T[size_of_left_subarray];
    auto* right_subarray = new T[size_of_right_subarray];

    /* copy the content of left sub-array */
    for (ssize_t i{0};i < size_of_left_subarray;i++) {
        left_subarray[i] = array[left + i];
    }

    /* copy the content of right sub-array */
    for (ssize_t i{0};i < size_of_right_subarray;i++) {
        right_subarray[i] = array[mid + 1 + i];
    }

    /* initial index for left sub-array, right
     * sub-array and merged-array respectively */
    ssize_t i{0}, j{0}, k{left};

    /* compute number_of_inversion_count */
    int64_t inversion_count{0};

    /* merge the left_subarray and right_subarray in sorted order */
    while (i < size_of_left_subarray && j < size_of_right_subarray) {
        if (left_subarray[i] <= right_subarray[j]) {
            array[k++] = left_subarray[i++];
        } else {
            array[k++] = right_subarray[j++];

            /* update inversion_count */
            inversion_count += (size_of_left_subarray - i);
        }
    }

    /* if any element of the left sub-array is being
     * unprocessed then copy the remaining elements */
    while (i < size_of_left_subarray) {
        array[k++] = left_subarray[i++];
    }

    /* if any element of the right sub-array is being
     * unprocessed then copy the remaining elements */
    while (j < size_of_right_subarray) {
        array[k++] = right_subarray[j++];
    }

    /* de-allocate the heap memory allocated
     * for left_subarray and right_subarray */
    delete [] left_subarray;
    delete [] right_subarray;

    return inversion_count;
}

/* recursive merge sort algorithm */
template <typename T>
int64_t merge_sort(T* array, ssize_t right_index, ssize_t left_index=0) {
    int64_t inversion_count{0};
    if (left_index < right_index) {
        auto mid_index{left_index + (right_index - left_index)/2};

        /* sort left sub-array array[left_index..mid_index] */
        inversion_count += merge_sort(array, mid_index, left_index);

        /* sort right sub-array array[mid_index+1..right_index] */
        inversion_count += merge_sort(array, right_index, mid_index + 1);

        /* merge two sorted sub-arrays */
        inversion_count += merge_subarray(array, left_index, mid_index, right_index);
    }
    return inversion_count;
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
        /* get N */
        int32_t N;std::cin >> N;

        /* get array_elements */
        auto* array = new int32_t[N];
        for (int32_t i{0};i < N;i++) {
            std::cin >> array[i];
        }

        /* compute total_inversion_count */
        int64_t total_inversion_count{merge_sort(array, N)};

        /* print appropriate message */
        std::cout << total_inversion_count << "\n";

        /* de-allocate heap memory */
        delete [] array;
    }
    return 0;
}