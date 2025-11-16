#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    // Allocate max possible size: longest string + 1 for carry + 1 for null terminator
    int len = (i > j ? i : j) + 3;
    char* res = (char*)malloc(len * sizeof(char));
    
    // Set null terminator at the end
    res[--len] = '\0';
    
    // Iterate backwards
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        
        carry = sum / 2;
        res[--len] = (sum % 2) + '0';
    }

    // If we didn't use the full buffer (no leading carry), shift the string to the start
    // This ensures the returned pointer matches the malloc'd address (safe for free)
    if (len > 0) {
        memmove(res, res + len, strlen(res + len) + 1);
    }

    return res;
}
