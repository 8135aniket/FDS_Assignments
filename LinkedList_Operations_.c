#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};
void printnode(struct node *temp) {
  printf("\n");
  printf("\n");
  int i = 1;
  while (temp != NULL) {
    printf("Data is %d\n", i);
    printf("%d\n", temp->data);
    temp = temp->next;
    i++;
  }
}
void Max(struct node *m) {
  int max = 0;
  while (m) {
    if (max < (m->data)) {
      max = m->data;
      m = m->next;
    }
  }
  printf("max is %d\n", max);
}
void insersion(struct node *temp) {
  struct node *insert, *nn, *x;
  x = temp;
  insert = (struct node *)malloc(sizeof(struct node));
  int s;
  printf("Enter data you want to insert\n");
  scanf("%d", &s);
  insert->data = s;
  insert->next = NULL;
  int count = 0, p;
  printf("Enter position at which you want to insert\n");
  scanf("%d", &p);
  while (count != (p - 2)) {
    count++;
    temp = temp->next;
  }
  nn = temp->next;
  temp->next = insert;
  insert->next = nn;
  printnode(x);
}
void sum(struct node *temp) {
  int sum = 0;
  while (temp) {
    sum = sum + temp->data;
    temp = temp->next;
  }
  printf("\nSum is %d:", sum);
}
int main() {
  int n, d;
  printf("Enter no of nodes\n");
  scanf("%d", &n);
  struct node *head, *new, *temp;
  head = (struct node *)malloc(sizeof(struct node));
  printf("Enter data 1\n");
  scanf("%d", &d);
  head->data = d;
  head->next = NULL;
  temp = head;
  for (int i = 0; i < n - 1; i++) {
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data %d\n", i + 2);
    scanf("%d", &d);
    new->data = d;
    new->next = NULL;
    temp->next = new;
    temp = temp->next;
  }

  temp = head;
  int c;
  do {
    printf("\n 1.Max number\n 2.Sum\n 3.Insert\n 4.Exit\n");
    scanf("%d", &c);
    switch (c) {
    case 1:
      Max(temp);
      break;
    case 2:
      sum(temp);
      break;
    case 3:
      insersion(temp);
      break;
    }
  } while (c != 4);
  return 0;
}
