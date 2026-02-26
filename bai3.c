/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char strings[5][100];

    printf("Nhap vao 5 chuoi:\n");
    for (int i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Loại bỏ ký tự newline
    }

    // Sắp xếp chuỗi theo thứ tự chữ cái
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                swap(strings[j], strings[j + 1]);
            }
        }
    }

    printf("\nChuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

