#include <stdio.h>
void find(char *a)
{
	int n = strlen(a);
	int count = 0;
	int orig[40] = {0}; 
	int chk[125][10000] = {0};
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		count = 0;
		flag = 0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				if((chk[(int)a[i]][((int)a[i])-((int)'a')])==0)
				{
					orig[((int)a[i])-((int)'a')] = orig[((int)a[i])-((int)'a')]+1;
					flag = 1;	
				}
				// orig[((int)a[i])-((int)'a')] = orig[((int)a[i])-((int)'a')]+1;
			}
		}
		chk[(int)a[i]][((int)a[i])-((int)'a')] = 1;
		if(flag==1)
		{
			printf("%c \t %d\n",a[i],orig[((int)a[i])-((int)'a')]);
		}
		// printf("%d\n",orig[((int)a[i])-((int)'a')]);
	}
}
int main(int argc, char const *argv[])
{
	char a[100000];
	gets(a);
	find(a);
	return 0;
}