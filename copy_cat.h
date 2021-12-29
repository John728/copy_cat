#include <dirent.h>
#include <stdio.h>

#define TRUE    1
#define FALSE   0

int absolute_match(char *path_a, char *path_b);
int number_of_files_in_dir(char *path);
int search_for_dup(char *path, int percent_match, int action);
int preform_action(char *path, int action);
int delete_file(char *path);
int bundle_clones(char *path);
