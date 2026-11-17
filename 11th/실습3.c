#include <stdio.h>

void apply_discount(int *price, int n, int percent) {
    for (int i = 0; i < n; i++) {
        price[i] = price[i] * (100 - percent) / 100;
    }
}

void print_prices(const char *label, int *price, int n) {
    printf("%s : ", label);
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }
    printf("\n");
}

int main(void) {
    int price[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;

    printf("할인율(%%)을 입력하시오 : ");
    scanf_s("%d", &percent);

    print_prices("할인 전", price, 5);
    apply_discount(price, 5, percent);
    print_prices("할인 후", price, 5);

    return 0;
}