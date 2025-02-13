#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int compare_asc(int a, int b) {
    return a - b;  // 오름차순 비교
}

int compare_desc(int a, int b) {
    return b - a;  // 오름차순 비교
}
void test_array(int *tab, int length, int(*f)(int, int), const char* test_name) {
    printf("테스트: %s\n", test_name);
    if (ft_is_sort(tab, length, f)) {
        printf("배열은 정렬되었습니다.\n\n");
    } else {
        printf("배열은 정렬되지 않았습니다.\n\n");
    }
}

int main() {
    int m1[] = {-16483, -198983, -119642, -93747, 20596, 30005, 183374, 222954, 310962, 407940, 419955};
    int length_m1 = 11;
    for (int i=0;i<length_m1;i++)
	    printf("%d ", m1[i]);
    printf("\n");
    test_array(m1, length_m1, compare_asc, "무작위 배열");
}

