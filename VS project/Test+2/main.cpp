#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMBERS 100
#define MAX_ITEMS 100

typedef struct {
    char name[50];
    int grade;
    char group[50];
    char role[20]; // 正式队员或替补队员
    int student_id;
} Member;

typedef struct {
    char item_name[50];
    int quantity;
} Item;

Member members[MAX_MEMBERS];
Item items[MAX_ITEMS];
int member_count = 0;
int item_count = 0;

// 添加成员
void add_member() {
    if (member_count >= MAX_MEMBERS) {
        printf("无法添加更多成员。\n");
        return;
    }
    printf("请输入成员姓名：");
    scanf("%s", members[member_count].name);
    printf("请输入年级：");
    scanf("%d", &members[member_count].grade);
    printf("请输入组别：");
    scanf("%s", members[member_count].group);
    printf("请输入角色（正式队员/替补队员）：");
    scanf("%s", members[member_count].role);
    printf("请输入学号：");
    scanf("%d", &members[member_count].student_id);
    member_count++;
    printf("成员添加成功！\n");
}

// 查询成员
void query_member() {
    int id;
    printf("请输入要查询的学号：");
    scanf("%d", &id);
    for (int i = 0; i < member_count; i++) {
        if (members[i].student_id == id) {
            printf("姓名: %s\n年级: %d\n组别: %s\n角色: %s\n学号: %d\n",
                members[i].name, members[i].grade, members[i].group,
                members[i].role, members[i].student_id);
            return;
        }
    }
    printf("未找到该成员。\n");
}

// 修改成员
void modify_member() {
    int id;
    printf("请输入要修改的成员学号：");
    scanf("%d", &id);
    for (int i = 0; i < member_count; i++) {
        if (members[i].student_id == id) {
            printf("请输入新姓名：");
            scanf("%s", members[i].name);
            printf("请输入新年级：");
            scanf("%d", &members[i].grade);
            printf("请输入新组别：");
            scanf("%s", members[i].group);
            printf("请输入新角色：");
            scanf("%s", members[i].role);
            printf("成员信息修改成功！\n");
            return;
        }
    }
    printf("未找到该成员。\n");
}

// 添加物资
void add_item() {
    if (item_count >= MAX_ITEMS) {
        printf("无法添加更多物资。\n");
        return;
    }
    printf("请输入物资名称：");
    scanf("%s", items[item_count].item_name);
    printf("请输入数量：");
    scanf("%d", &items[item_count].quantity);
    item_count++;
    printf("物资添加成功！\n");
}

// 查询物资
void query_item() {
    char name[50];
    printf("请输入要查询的物资名称：");
    scanf("%s", name);
    for (int i = 0; i < item_count; i++) {
        if (strcmp(items[i].item_name, name) == 0) {
            printf("物资名称: %s\n数量: %d\n", items[i].item_name, items[i].quantity);
            return;
        }
    }
    printf("未找到该物资。\n");
}

// 修改物资
void modify_item() {
    char name[50];
    printf("请输入要修改的物资名称：");
    scanf("%s", name);
    for (int i = 0; i < item_count; i++) {
        if (strcmp(items[i].item_name, name) == 0) {
            printf("请输入新数量：");
            scanf("%d", &items[i].quantity);
            printf("物资信息修改成功！\n");
            return;
        }
    }
    printf("未找到该物资。\n");
}

// 主菜单
void menu() {
    printf("\n战队管理系统\n");
    printf("1. 添加成员\n");
    printf("2. 查询成员\n");
    printf("3. 修改成员\n");
    printf("4. 添加物资\n");
    printf("5. 查询物资\n");
    printf("6. 修改物资\n");
    printf("0. 退出\n");
}

int main() {
    int choice;
    while (1) {
        menu();
        printf("请选择操作：");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            add_member();
            break;
        case 2:
            query_member();
            break;
        case 3:
            modify_member();
            break;
        case 4:
            add_item();
            break;
        case 5:
            query_item();
            break;
        case 6:
            modify_item();
            break;
        case 0:
            printf("退出系统。\n");
            exit(0);
        default:
            printf("无效的选择，请重新输入。\n");
        }
    }
    return 0;
}