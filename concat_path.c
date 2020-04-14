#include "lb_shell.h"
/**
 * concat_path - concat the path with de command
 * @path: wherever
 * @commands: wherever
 * Return: void
 */

void concat_path(char **path_cut)
{
	int i;

	i = 0;
	//char *concat;
	while(path_cut[i] != NULL)
	{
		printf("why %d", i);
		printf("\n concat path_cut %s \n", path_cut[i]);
		//concat = _strcat(path_cut[i], "/");
		//concat = _strcat(concat, *commands);
		//concat = "";
		i++;
	}
	//printf("\n concat final %s \n", *commands);
}
