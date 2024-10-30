#include <stdio.h>

int main() {
    int num, result = 0, place = 1;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Modified number: 1\n");
        return 0;
    }

    // Process each digit of the number
    while (num > 0) {
        int digit = num % 10;  // Extract the last digit

        // Replace 0 with 1 and 1 with 0
        if (digit == 0) {
            digit = 1;
        } else if (digit == 1) {
            digit = 0;
        }

        // Construct the new number with the replaced digit
        result = result + (digit * place);

        place *= 10;  // Move to the next place value
        num /= 10;    // Remove the last digit
    }

    // Output the modified number
    printf("Modified number: %d\n", result);

    return 0;
}

// Output: 
Enter a number: 10203
Modified number: 11213
