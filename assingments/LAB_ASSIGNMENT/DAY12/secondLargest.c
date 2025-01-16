#include <stdio.h>
#include <limits.h>
int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ensure there are at least two elements to find the second largest
    if (n < 2)
    {
        printf("There must be at least two elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements:\n");

    // Input the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize the largest and second largest
    int largest = arr[0];
    int secondLargest = INT_MIN; //-1; // Initially assume no second largest
                                 // int seccondLargest = INT_MIN; // Alternatively, use INT_MIN for a more robust approach WE have to include #include<climits.h>
                                 //  Find the largest and second largest elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    // Check if a valid second largest element was found
    if (secondLargest == INT_MIN)
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
