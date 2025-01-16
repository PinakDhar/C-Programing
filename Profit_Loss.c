#include <stdio.h>

int main() {
    
    float buyingPrice, markedPrice, discount, sellingPrice, profitOrLoss;
    
    printf("Enter the buying price: ");
    scanf("%f", &buyingPrice);
    
    printf("Enter the marked price: ");
    scanf("%f", &markedPrice);
    
    printf("Enter the discount percentage: ");
    scanf("%f", &discount);
    
    sellingPrice = markedPrice - (markedPrice * discount / 100);

    profitOrLoss = sellingPrice - buyingPrice;
    
    if (profitOrLoss > 0) {
        printf("The seller made a profit of %.2f\n", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("The seller incurred a loss of %.2f\n", -profitOrLoss);
    } else {
        printf("There is no profit, no loss. The seller broke even.\n");
    }
    
    return 0;
}
