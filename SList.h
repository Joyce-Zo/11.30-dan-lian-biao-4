#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SLT;

void SLtPrint(SLT*phead);

void SLtPushBack(SLT** pphead, SLTDateType x);

void SLtPushFront(SLT** pphead, SLTDateType x);

void SLtPopBack(SLT** pphead);

void SLtPopFront(SLT** pphead);

SLT* SListFind(SLT* plist, SLTDateType x);

void SListInsert(SLT** pphead, SLT* pos, SLTDateType x);

void SListInsertAfter(SLT* pos, SLTDateType x);

void SListEraseAfter(SLT* pos);