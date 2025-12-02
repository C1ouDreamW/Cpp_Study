#include <bits/stdc++.h>

using namespace std;

typedef struct {
  int top[2], bot[2];
  int m;
} DBlStack;

void init(Db1Stack *s, int size) { // 初始化
  s->v = (SElemType *)malloc(sizeof(SElemType) * size);
  s->m = size;
  s->top[0] = -1;
  s->bot[0] = 0;
  s->top[1] = size;
  s->bot[1] = size - 1;
}

int IsEmpty(Db1Stack s, int stackNo) { // 判断栈空
  if (stackNo == 0) {
    return s.top[0] == -1;
  } else {
    return s.top[1] == s.m;
  }
}

int IsFull(Db1Stack s) { // 判断栈满
  return s.top[0] + 1 == s.top[1];
}

int Push(Db1Stack *s, SElemType e, int stackNo) { // 进栈
  if (IsFull(*s)) {
    return 0;
  }
  if (stackNo == 0) {
    s->top[0]++;
    s->v[s->top[0]] = e;
  } else {
    s->top[1]--;
    s->v[s->top[1]] = e;
  }
  return 1;
}

int Pop(Db1Stack *s, SElemType *e, int stackNo) { // 出栈
  if (IsEmpty(*s, stackNo)) {
    return 0;
  }
  if (stackNo == 0) {
    *e = s->v[s->top[0]];
    s->top[0]--;
  } else {
    *e = s->v[s->top[1]];
    s->top[1]++;
  }
  return 1;
}
