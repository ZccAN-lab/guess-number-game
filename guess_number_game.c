#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, count = 0;
    srand(time(0)); // 初始化随机种子
    secret = rand() % 100 + 1; // 生成1~100随机数

    printf("=== 猜数字游戏 ===\n");

    do {
        printf("请输入你猜的数字 (1-100): ");
        scanf("%d", &guess);
        count++;

        if (guess > secret) {
            printf("太大了！\n");
        } else if (guess < secret) {
            printf("太小了！\n");
        } else {
            printf("恭喜你！猜对了！共用了 %d 次。\n", count);
        }
    } while (guess != secret);

    return 0;
}
