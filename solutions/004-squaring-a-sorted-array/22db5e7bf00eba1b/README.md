# Squaring a Sorted Array

```markdown
## Squaring a Sorted Array

This implementation solves the "Squaring a Sorted Array" problem. The function `sortedSquares` takes a vector of integers `a` (representing a sorted array) as input and returns a new vector containing the squares of all the elements in `a`, sorted in ascending order.

**Data Structures:**

*   `vector<int>`: The input array `a`.
*   `vector<int> neg`: Stores the squares of negative numbers from the input array.
*   `vector<int> pos`: Stores the squares of positive numbers from the input array.
*   `vector<int> res`: The resulting vector that stores the squares of all numbers in sorted order.

**Algorithm and Control Flow:**

1.  **Separate Negative and Positive Numbers:** The code iterates through the input array `a` to separate the negative and positive numbers into two separate vectors, `neg` and `pos`, respectively. This separates the algorithm concerns into manageable pieces, maximizing efficiency.

2.  **Edge Case Handling:** The code explicitly handles the edge cases where either all numbers in the input array are negative or all numbers are positive. In these cases, it directly calculates the square of each element and returns the resulting vector without further computation. This simplifies the later comparison step, improving efficiency.

3.  **Merging Squares:** The core logic involves merging the squares of negative and positive numbers into a new vector `res`.  It utilizes two pointers, `i` for `neg` and `j` for `pos`, and an index `id` to track the position in the `res` vector.  The `while` loop iteratively compares `neg[i]` and `pos[j]`. The smaller square (either negative or positive) is placed in `res` at the current index `id`, and the corresponding pointer is incremented. The process continues until either all elements from `neg` or `pos` are processed.  Finally, the remaining elements from either `neg` or `pos` are appended to `res`.

**Time Complexity:**

*   **O(n)**, where n is the size of the input array.
    *   Separating positive and negative numbers (`O(n)`).
    *   Calculating the squares (`O(n)`).
    *   Merging the squares (`O(n)`).  The `while` loop iterates through the modified arrays, effectively traversing them once.

**Auxiliary Space Complexity:**

*   **O(n)**, where n is the size of the input array.
    *   `neg` and `pos` vectors each store up to n elements.
    *   The `res` vector also stores n elements.

**Edge Cases and Limitations:**

*   **Empty Input Array:** The code can handle the case where the input array `a` is empty. It concatenates a vector of zero elements.
*   **Arrays with only one element:** The code handles this situation correctly, adding a square once to resultant array.
*   **Non-Sorted Input:** The implementation assumes that the input array `a` is already sorted. If the input array is not sorted, the results will be incorrect. Therefore, the code doesn't incorporate sorting as a preprocessing step.
*   **Integer Overflow:**  For large input values, squaring them might lead to integer overflow. The implementation does not consider handling overflow, and results could be incorrect.  If overflow becomes a concern you might consider using arbitrary precision integer libraries.
*   **Negative Input After Separation**: After separating negative numbers, a test case containing a negative number only can potentially cause issue, although this is already covered by earlier edge cases.
*  **Duplicate Numbers**: If Duplicate numbers exist, code is expected to work efficiently even though conceptually technically the output could be same as existing adjacent element.
```
