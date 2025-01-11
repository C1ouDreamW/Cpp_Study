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
    char role[20]; // ��ʽ��Ա���油��Ա
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

// ��ӳ�Ա
void add_member() {
    if (member_count >= MAX_MEMBERS) {
        printf("�޷���Ӹ����Ա��\n");
        return;
    }
    printf("�������Ա������");
    scanf("%s", members[member_count].name);
    printf("�������꼶��");
    scanf("%d", &members[member_count].grade);
    printf("���������");
    scanf("%s", members[member_count].group);
    printf("�������ɫ����ʽ��Ա/�油��Ա����");
    scanf("%s", members[member_count].role);
    printf("������ѧ�ţ�");
    scanf("%d", &members[member_count].student_id);
    member_count++;
    printf("��Ա��ӳɹ���\n");
}

// ��ѯ��Ա
void query_member() {
    int id;
    printf("������Ҫ��ѯ��ѧ�ţ�");
    scanf("%d", &id);
    for (int i = 0; i < member_count; i++) {
        if (members[i].student_id == id) {
            printf("����: %s\n�꼶: %d\n���: %s\n��ɫ: %s\nѧ��: %d\n",
                members[i].name, members[i].grade, members[i].group,
                members[i].role, members[i].student_id);
            return;
        }
    }
    printf("δ�ҵ��ó�Ա��\n");
}

// �޸ĳ�Ա
void modify_member() {
    int id;
    printf("������Ҫ�޸ĵĳ�Աѧ�ţ�");
    scanf("%d", &id);
    for (int i = 0; i < member_count; i++) {
        if (members[i].student_id == id) {
            printf("��������������");
            scanf("%s", members[i].name);
            printf("���������꼶��");
            scanf("%d", &members[i].grade);
            printf("�����������");
            scanf("%s", members[i].group);
            printf("�������½�ɫ��");
            scanf("%s", members[i].role);
            printf("��Ա��Ϣ�޸ĳɹ���\n");
            return;
        }
    }
    printf("δ�ҵ��ó�Ա��\n");
}

// �������
void add_item() {
    if (item_count >= MAX_ITEMS) {
        printf("�޷���Ӹ������ʡ�\n");
        return;
    }
    printf("�������������ƣ�");
    scanf("%s", items[item_count].item_name);
    printf("������������");
    scanf("%d", &items[item_count].quantity);
    item_count++;
    printf("������ӳɹ���\n");
}

// ��ѯ����
void query_item() {
    char name[50];
    printf("������Ҫ��ѯ���������ƣ�");
    scanf("%s", name);
    for (int i = 0; i < item_count; i++) {
        if (strcmp(items[i].item_name, name) == 0) {
            printf("��������: %s\n����: %d\n", items[i].item_name, items[i].quantity);
            return;
        }
    }
    printf("δ�ҵ������ʡ�\n");
}

// �޸�����
void modify_item() {
    char name[50];
    printf("������Ҫ�޸ĵ��������ƣ�");
    scanf("%s", name);
    for (int i = 0; i < item_count; i++) {
        if (strcmp(items[i].item_name, name) == 0) {
            printf("��������������");
            scanf("%d", &items[i].quantity);
            printf("������Ϣ�޸ĳɹ���\n");
            return;
        }
    }
    printf("δ�ҵ������ʡ�\n");
}

// ���˵�
void menu() {
    printf("\nս�ӹ���ϵͳ\n");
    printf("1. ��ӳ�Ա\n");
    printf("2. ��ѯ��Ա\n");
    printf("3. �޸ĳ�Ա\n");
    printf("4. �������\n");
    printf("5. ��ѯ����\n");
    printf("6. �޸�����\n");
    printf("0. �˳�\n");
}

int main() {
    int choice;
    while (1) {
        menu();
        printf("��ѡ�������");
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
            printf("�˳�ϵͳ��\n");
            exit(0);
        default:
            printf("��Ч��ѡ�����������롣\n");
        }
    }
    return 0;
}