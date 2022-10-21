#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void
printnode (struct node *temp)
{
  printf ("\n");
  printf ("\n");
  while (temp != NULL)
    {
      printf ("Data is\n");
      printf ("%d\n", temp->data);
      temp = temp->next;
    }
}

void
Max (struct node *m)
{
  int max = 0;
  while (m)
    {
      if (max < (m->data))
	{
	  max = m->data;
	  m = m->next;
	}

    }
  printf ("max is %d\n", max);
}

void
insersion (struct node *temp, int r)
{
  struct node *insert, *nn, *x, *y;
  x = temp;
  insert = (struct node *) malloc (sizeof (struct node));
  int s;
  printf ("Enter data you want to insert\n");
  scanf ("%d", &s);
  insert->data = s;
  insert->next = NULL;
  int count = 0, p;
  printf ("Enter position at which you want to insert\n");
  scanf ("%d", &p);
  if (p == 1)
    {
      y = insert;
      insert->next = temp;
      printnode (y);
    }
  else if (p == (r + 1))
    {
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}

      temp->next = insert;
      printnode (x);
    }
  else
    {
      while (count != (p - 2))
	{
	  count++;
	  temp = temp->next;
	}
      nn = temp->next;
      temp->next = insert;
      insert->next = nn;
      printnode (x);
    }
}

void
sum (struct node *temp)
{
  int sum = 0;
  while (temp)
    {
      sum = sum + temp->data;
      temp = temp->next;
    }
  printf ("\nSum is %d:", sum);
}

void
delete (struct node *temp, int r)
{
  struct node *x, *de;
  int count = 0, p;
  printf ("Enter position at which you want to delete\n");
  scanf ("%d", &p);
  if (p == 1)
    {
      x = temp;
      temp = temp->next;
      free (x);
      printnode (temp);
    }
  else if (p == r)
    {
      x = temp;
      de = temp->next;
      while (de->next != NULL)
	{
	  temp = temp->next;
	  de = de->next;
	}
      temp->next = NULL;
      free (de);
      printnode (x);
    }
  else
    {
      int count = 0;
      x = temp;
      de = temp->next;
      while (count != p - 2)
	{
	  temp = temp->next;
	  de = de->next;
	  count++;
	}
      temp->next = de->next;
      free (de);
      printnode (x);
    }
}

int
main ()
{
  int n, d;
  printf ("Enter no of nodes\n");
  scanf ("%d", &n);
  struct node *head, *new, *temp;
  head = (struct node *) malloc (sizeof (struct node));
  printf ("Enter data\n");
  scanf ("%d", &d);
  head->data = d;
  head->next = NULL;
  temp = head;
  for (int i = 0; i < n - 1; i++)
    {
      new = (struct node *) malloc (sizeof (struct node));
      printf ("Enter data %d\n", i + 1);
      scanf ("%d", &d);
      new->data = d;
      new->next = NULL;
      temp->next = new;
      temp = temp->next;
    }
  int c, b;
  temp = head;
  do
    {
      printf ("\n 1.Max number\n 2.Sum\n 3.Insert\n 4.delete\n 5.Exit\n");
      scanf ("%d", &c);
      switch (c)
	{
	case 1:
	  Max (temp);
	  break;
	case 2:
	  sum (temp);
	  break;
	case 3:
	  insersion (temp, n);
	  break;
	case 4:
	  delete (temp, n);
	  break;
	default:
	  printf ("Enter between 1 to 5\n");

	}
    }
  while (c != 5);
  return 0;
}