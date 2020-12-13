#pragma once
#include <string.h>
#define MAXSIZE 25

typedef struct date {
	int year;
	int month;
	int day;
};

typedef struct student {
	date birthday;
	
	char name[20];
	double score;
	
};

typedef struct SNode {
	int data;
	int next;
};
SNode Snode, StaticList[MAXSIZE + 1];

typedef struct node {
	char name[20];
	int number;
	struct node* next;
}Node, * LinkList;

LinkList InitList() {
	LinkList head;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	return head;
}

void CreatedByRear(LinkList head) {
	Node* r, * s;
	char name[20];
	int number;
	r = head;
	printf("请输入学生的姓名和学号: \n");
	while (1) {
		scanf("%s", name);
		scanf("%d", &number);
		if (!number) {
			break;
		}
		s = (Node*)malloc(sizeof(Node));
		strcpy(s->name, name);
		s->number = number;
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

void OutPut(LinkList head) {
	Node* p;
	p = head->next;
	while (p) {
		printf("姓名: %s\n", p->name);
		printf("学号: %d\n\n", p->number);
		p = p->next;
	}
}


