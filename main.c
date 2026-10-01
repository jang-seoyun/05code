#include <studio.h>

int main(){
    int num;
    int abs_val;

    printf("정수 하나를 입력하시오 : ");
    scanf("%d", &num);

    if (num < 0) {
        abs_val = -num;
    } else {
        abs_val = num;
    }

    printf("절댓값은 %d입니다.\n", abs_val);

    return 0;
}
