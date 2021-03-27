#include<iostream.h>
#include<conio.h>
int AltSum(int A[51][51], int m, int n);
int sum=0;
void main()
{
   clrscr();
   int A[51][51], m, n;
   start:
   cout<<"Enter no. of rows (max. 50): ";
   cin>>m;
   cout<<"Enter no. of columns (max. 50): ";
   cin>>n;
   if (m>50 || n>50)
      {
	 cout<<"Too Large...";
	 getch();
	 clrscr();
	 goto start;
      }
   clrscr();
   cout<<"Enter values row-wise: \n";
   for (int i=0; i<m; i++)
      {
	 for (int j=0; j<n; j++)
	    {
	       cin>>A[i][j];
	    }
      }
   cout<<"The matrix is: \n";
   for (int x=0; x<m; x++)
      {
	 for (int y=0; y<n; y++)
	    {
	       cout<<A[x][y]<<"  ";
	    }
	 cout<<endl;
      }
   AltSum(A, m, n);
   cout<<"Sum= "<<sum;
   getch();
}
int AltSum(int A[51][51], int m, int n)
   {
      if (n%2==0)
	 {
	    for (int a=0; a<m; a++)
	       {
		  for (int b=0; b<n; b++)
		     {
			if (b%2==0)
			   sum=sum+A[a][b];
		     }
	       }
	 }
      else
	 {
	    for (int c=0; c<m; c++)
	       {
		  for (int d=0; d<n; d++)
		     {
			if (((c%2==0)&&(d%2==0))||((c%2!=0)&&(d%2!=0)))
			   sum=sum+A[c][d];
		     }
	       }
	 }
      return sum;
   };