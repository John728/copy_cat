#include "copy_cat.h"

int main(int argc, char *argv[]) {
    
    int a = absolute_match(argv[1], argv[2]);
    printf("%d\n", a);
    return 0;
}
