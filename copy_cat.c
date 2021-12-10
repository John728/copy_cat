#include "copy_cat.h"

int number_of_files_in_dir(char *path) {

    int file_count = 0;
    DIR * dirp;
    struct dirent * entry;

    // ; 
    if ((dirp = opendir(path)) == NULL) {
        printf("error: could not find path\n");
        return -1;
    }
    // Counts number of files + checks that there is only files and no directories
    while ((entry = readdir(dirp)) != NULL) {
        if (entry->d_type == DT_REG) {
            file_count++;
        }
    }
    closedir(dirp);

    return file_count;
}

int search_for_dup(char *path, int percent_match, int action) {

}

// Check is the content of path_a and path_b are exactly the same. A difference of
// a single bit will cause a file to not match. 
int absolute_match(char *path_a, char *path_b) {}

// Checks every N_bytes of path_a, if they are contained in path_b. If the percentage of 
// N_bytes intervals is contained in path_b is higher than or equal to percentage, it will
// return TRUE(1).
int relative_math(char *path_a, char *path_b, int percentage, int N_bytes) {}

int preform_action(char *path, int action) {

}

int delete_file(char *path) {

}

int bundle_clones(char *path) {

}