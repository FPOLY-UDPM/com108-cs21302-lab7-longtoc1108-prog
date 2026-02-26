/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    printf("Nhap username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Loại bỏ ký tự newline

    printf("Nhap password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Loại bỏ ký tự newline

    // Kiểm tra đăng nhập
    if (strcmp(username, "admin") == 0 && strcmp(password, "password123") == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}

