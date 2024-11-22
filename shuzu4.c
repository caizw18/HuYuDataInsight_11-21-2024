#include <stdio.h>

int main()
{
    int sum(int* start, int* end){

        int total = 0;

        while (start < end)
        {
            total += *start;
            start++;
        }
        
        return total;
    }

    int arr[5] = {20, 10, 5, 39, 4};
    printf("%i\n", sum(arr, arr + 5));
    return 0;
}
