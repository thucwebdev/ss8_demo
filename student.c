#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    int age;
    float gpa;
} Student;

int main() {
    // Khởi tạo sẵn 3 sinh viên mẫu
    Student students[3] = {
        {1, "Nguyen Van D", 20, 3.5},
        {2, "Tran Thi B",   19, 3.8},
        {3, "Le Van C",     21, 2.9}
    };

    int n = 3;

    // In tiêu đề bảng
    printf("%-5s %-20s %-5s %-5s\n", "ID", "Name", "Age", "GPA");
    printf("------------------------------------------------\n");

    // In danh sách sinh viên
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-5d %-5.2f\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].gpa);
    }

    return 0;
}


