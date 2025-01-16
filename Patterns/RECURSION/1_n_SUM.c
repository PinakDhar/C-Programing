#include <stdio.h>

void sum(int n, int current_sum)
{
    // base case
    if (n == 0)
    {
        printf("%d\n", current_sum); // Print the sum when n is 0
        return;
    }
    sum(n - 1, current_sum + n); // Recursive call with updated sum
}

int main()
{
    int n = 5; // Example input
    sum(n, 0); // Initial call with sum starting at 0
    return 0;
}