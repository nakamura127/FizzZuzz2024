#include <stdio.h>

int main() {
    int max;
    
    printf("FizzBuzzを行う最大値を入力してください: ");
    scanf("%d", &max);
    
    for (int i = 1; i <= max; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
