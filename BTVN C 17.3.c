#include <stdio.h>
#include <string.h>

void nhapChuoi(char *str);
void inDaoNguocChuoi(char *str);
void demSoTu(char *str);
void soSanhChuoi(char *str1, char *str2);
void inHoaChuCai(char *str);
void themChuoi(char *str1, char *str2);
int main() {
    char str1[200];
    char str2[100];
    int menu;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &menu);
        getchar();

        switch (luaChon) {
            case 1:
                nhapChuoi(str1);
                break;
            case 2:
                inDaoNguocChuoi(str1);
                break;
            case 3:
                demSoTu(str1);
                break;
            case 4:
                printf("Nhap vao chuoi khac: ");
                fgets(str2, 100, stdin);
                size_t len = strlen(str2);
                if (len > 0 && str2[len - 1] == '\n') {
                    str2[len - 1] = '\0';
                }
                soSanhChuoi(str1, str2);
                break;
            case 5:
                inHoaChuCai(str1);
                break;
            case 6:
                printf("Nhap vao chuoi khac: ");
                fgets(str2, 100, stdin);
                len = strlen(str2);
                if (len > 0 && str2[len - 1] == '\n') {
                    str2[len - 1] = '\0';
                }
                themChuoi(str1, str2);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
                break;
        }
    } while (luaChon != 7);

    return 0;
}
void nhapChuoi(char *str) {
    printf("Nhap vao chuoi: ");
    fgets(str, 100, stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void inDaoNguocChuoi(char *str) {
    int len = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void demSoTu(char *str) {
    int count = 0;
    char *token = strtok(str, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    printf("So luong tu: %d\n", count);
}

void soSanhChuoi(char *str1, char *str2) {
    if (strlen(str1) > strlen(str2)) {
        printf("Chuoi ban dau dai hon.\n");
    } else if (strlen(str1) < strlen(str2)) {
        printf("Chuoi moi dai hon.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
}

void inHoaChuCai(char *str) {
    while (*str) {
        printf("%c", toupper(*str));
        str++;
    }
    printf("\n");
}

void themChuoi(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Chuoi sau khi them: %s\n", str1);
}

