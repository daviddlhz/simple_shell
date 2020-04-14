#include "lb_shell.h"
/**
 * path_get - get the path
 *
 * Return: PATH
 */
char * path_get(void)
{
	int i;
	char *path = NULL;
	char *get_env;
	char *find_path = NULL;

	i = 0;


	while (environ[i] != NULL)
	{
		get_env = _strdup(environ[i]);

		if (get_env == NULL)
		{
			free(get_env);
			return (NULL);
		}
		find_path = strtok(get_env, DELIMITER_PATH);

		if (_strcmp(find_path, SEARCH_PATH) == 0)
		{
			path = _strstr(environ[i], "/");

		}
		i++;
		free(get_env);
	}
	return (path);
}
