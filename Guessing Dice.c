#include <stdio.h>

int main() {
    int userProduct, userSum, userSumOfSq;

    printf("\nWhat is the product of your numbers?\n");
    scanf("%d", &userProduct);

    printf("\nWhat is the sum of your numbers?\n");
    scanf("%d", &userSum);

    userSumOfSq = userProduct;

    int d1, d2, d3, d4;
    int myProduct, mySum, mySumOfSq;

    for(d1 = 1; d1 <= 6; d1++)
    {
        for(d2 = 1; d2 <= 6; d2++)
        {
            for(d3 = 1; d3 <= 6; d3++)
            {
                for(d4 = 1; d4 <= 6; d4++)
                {
                    myProduct = d1 * d2 * d3 * d4;
                    mySum = d1 + d2 + d3 + d4;
                    mySumOfSq = (d1 * d1) + (d2 * d2) + (d3 * d3) + (d4 * d4);

                    if(myProduct == userProduct && mySum == userSum && mySumOfSq != userSumOfSq)
                    {
                        printf("\nYour numbers are %d %d %d %d\n", d1, d2, d3, d4);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}