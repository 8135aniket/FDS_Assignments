/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int count = 0, row, col,k;
  printf ("Enter rows\n");
  scanf ("%d", &row);
  printf ("Enter columns\n");
  scanf ("%d", &col);
  int a[row][col];
  printf ("Enter matrix\n");
  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  scanf ("%d", &a[i][j]);
	  if (a[i][j] == 0)
	    {
	      count++;
	    }
	    else {
	        k++;
	    }
	}
    }
  if (count > (row * col / 2))
    {
      printf ("Sparse\n");
      int s[k][3],p=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]!=0){
                s[p][0]=i;
                s[p][1]=j;
                s[p][2]=a[i][j];
                p++;
            }
        }
    }
  printf("\t R \t C \t v");
  for(int i=0;i<k;i++){
      printf("\t %d \t %d \t %d",s[1][0],s[i][1],s[i][2]);
      printf("\n");
  }
    }
  else
    {
      printf ("Not sparse\n");
    }
    


  return 0;
}
