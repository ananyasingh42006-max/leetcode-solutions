#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {

    int profit = 0;

    for (int i = 0; i < pricesSize; i++) {

        for (int j = i + 1; j < pricesSize; j++) {

            int currentProfit = prices[j] - prices[i];

            if (currentProfit > profit) {
                profit = currentProfit;
            }
        }
    }

    return profit;
}

int main() {

    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1: %d\n",
           maxProfit(prices1, 6));


    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2: %d\n",
           maxProfit(prices2, 5));


    return 0;
}