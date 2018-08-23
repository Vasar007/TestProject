You are given two sorted arrays that contain only integers. Your task is to find a way to merge them into a single one, sorted in ascending order. Complete the function mergeArrays(arr1, arr2), where arr1 and arr2 are the original sorted arrays.

You don't need to worry about validation, since arr1 and arr2 must be arrays with 0 or more Integers. If both arr1 and arr2 are empty, then just return an empty array.

Note: arr1 and arr2 may be sorted in different orders. Also arr1 and arr2 may have same integers. Remove duplicated in the returned result.

Examples:
```cpp
std::vector<int> arr1 = {1, 2, 3, 4, 5};
std::vector<int> arr2 = {6, 7, 8, 9, 10};
std::vector<int> res = mergeArrays(arr1, arr2);  // {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

std::vector<int> arr3 = {1, 3, 5, 7, 9};
std::vector<int> arr4 = {10, 8, 6, 4, 2};
std::vector<int> res = mergeArrays(arr3, arr4);  // {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

std::vector<int> arr5 = {1, 3, 5, 7, 9, 11, 12};
std::vector<int> arr6 = {1, 2, 3, 4, 5, 10, 12};
std::vector<int> res = mergeArrays(arr5, arr6);  // {1, 2, 3, 4, 5, 7, 9, 10, 11, 12}
```
