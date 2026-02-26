/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowel_count = 0, consonant_count = 0;

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Đếm nguyên âm và phụ âm
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonant_count++;
        }
    }

    printf("So luong nguyen am: %d\n", vowel_count);
    printf("So luong phu am: %d\n", consonant_count);

    return 0;
}

