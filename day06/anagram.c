/*
Q. Find if the given two strings are anagrams

ex: pine, nipe are anagram
Hello , lHeoo not

*/

#include <stdio.h>
#include <string.h>

void sortString(char *);

int main()
{
	char s1[20],s2[20];
	scanf("%s%s",s1,s2);

	if(strlen(s1) == strlen(s2))
	{
		sortString(s1);
		sortString(s2);
		if(strcmp(s1,s2)==0)
			printf("\nAnagram\n");
		else
			printf("\nNot an Anagram\n");
	}
	else
		printf("\nNot an Anagram\n");
	

	return 0;

}

void sortString(char *s1)
{
	int i,j,len=strlen(s1);
	char t;

	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(s1[i]<s1[j])
			{
				t = s1[i];
				s1[i]=s1[j];
				s1[j]=t;
			}
		}
	}

	// printf("\nIn Function: %s\n",s1);
	
}	

/*
	str1 = "abcdefgh"
	k=3
	o/p = cbafedhg
	
*/