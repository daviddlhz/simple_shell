#include "lb_shell.h"
/**
 * path_get - get the path
 *
 * Return: command
 * On error, -1 is returned, and errno is set appropriately.
 */
void path_get(void)
{
	int i, j;
	char *path = NULL;
	char *get_env;
	char *path_cut[MAX_SIZE];
	char *find_path = NULL;

	i = 0;


	while (environ[i] != NULL)
	{
		get_env = _strdup(environ[i]);

		if (get_env == NULL)
		{
			free(get_env);
			//return (NULL);
		}
		find_path = strtok(get_env, DELIMITER_PATH);

		if (_strcmp(find_path, SEARCH_PATH) == 0)
		{
			path = _strstr(environ[i], "/");

		}
		i++;
		free(get_env);
	}

	if (path != NULL)
	{
		j = 0;

		path = strtok(path, DELIMITER_PATH);

		while (path != NULL)
		{
			path_cut[j] = path;
			path = strtok(NULL, DELIMITER_PATH);
			printf("PATH CUT : %s \n", path_cut[j]);
			j++;
		}

	}
	else
	{
		//free(path_cut);
		free(path);
	}
	//return (final_path);
}
