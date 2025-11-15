#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Iterate backwards from the last digit
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            
            // If we incremented without a carry-over, we are done.
            // Allocate memory for the result, copy the array, and return.
            *returnSize = digitsSize;
            int* result = (int*)malloc(digitsSize * sizeof(int));
            for (int j = 0; j < digitsSize; j++) {
                result[j] = digits[j];
            }
            return result;
        }
        // If digit is 9, it becomes 0 and we continue to the next digit (carry 1)
        digits[i] = 0;
    }

    // If the loop completes, it means all digits were 9s (e.g., 99 -> 100).
    // We need an array one size larger.
    *returnSize = digitsSize + 1;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    
    // Set the first digit to 1, and the rest to 0
    result[0] = 1;
    for (int i = 1; i < *returnSize; i++) {
        result[i] = 0;
    }
    
    return result;
}
