#include <stdio.h>
#include <string.h>

void nhapChuoi(char *str) {
    printf("Nhap vao chuoi: ");
    fgets(str, 100, stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void inChuoi(char *str) {
    printf("Chuoi: %s\n", str);
}

void demChuCai(char *str) {
    int count = 0;
    while (*str) {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    printf("So luong chu cai: %d\n", count);
}

void demChuSo(char *str) {
    int count = 0;
    while (*str) {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    printf("So luong chu so: %d\n", count);
}

void demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str) {
        if (!isalpha(*str) && !isdigit(*str)) {
            count++;
        }
        str++;
    }
    printf("So luong ky tu dac biet: %d\n", count);
}

int main() {
    char str[100];
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();

        switch (luaChon) {
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                demChuCai(str);
                break;
            case 4:
                demChuSo(str);
                break;
            case 5:
                demKyTuDacBiet(str);
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
                break;
        }
    } while (luaChon != 6);

    return 0;
}

