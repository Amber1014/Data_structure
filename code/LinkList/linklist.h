#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;

typedef struct node {         	     //������
	ElemType data;                   //���������
	struct node * link;               //�������
} ListNode;

typedef ListNode * LinkList;		//ָ������ڵ��ָ��	

LinkList createListF(void);
LinkList createListR(void);
ListNode * Find(LinkList, ElemType);
ListNode * Locate(LinkList, int);
bool Insert(LinkList, ElemType, int);
bool Delete(LinkList, int, ElemType &);
int traverse(LinkList);
int Length(LinkList);
int makeEmpty(LinkList);