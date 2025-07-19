// Straightforward digit analysis — I took each digit and checked if it divides the number.
// Ignored zeroes to avoid divide-by-zero errors.

int findDigit(long long num) {
    long long temp = num;
    int count = 0;

    while (temp != 0) {
        int digit = temp % 10;
        if (digit != 0 && num % digit == 0) {
            count++;
        }
        temp /= 10;
    }

    return count;
}
