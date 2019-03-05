// created by: WestleyR
// email: westleyr@nym.hush.com
// https://github.com/WestleyR/filepath-join
// date: Mar 5, 2019
// version-1.0.1
//
// The Clear BSD License
//
// Copyright (c) 2019 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//

#include <string.h>
#include <stdio.h>

#include "remove-slash.h"

char path[0];
char *script_name;

void help_menu() {
    printf("USAGE:\n");
    printf("  %s path path file\n", script_name);
    printf("  this will output: path/path/file\n");
    printf("\n");
    printf("  %s ///path/// //path/ file//\n", script_name);
    printf("  this will output: /path/path/file\n");
    printf("\n");
    printf("  %s /path///other/path ///file\n", script_name);
    printf("  this will output: /path/other/path/file\n");
    printf("\n");
    printf("filepath-join version: v1.0.1, Mar 5, 2019\n");
    printf("This software is licensed under a Clear BSD License \n");
    printf("Source code: https://github.com/WestleyR/filepath-join\n");
    return;
}

int main(int argc, char** argv) {
    script_name = argv[0];

    if (argc <= 1) {
        help_menu();
        return(0);
    }

    if (argv[1][0] == '/') {
        strcat(path, "/");
    }

//    char* ptr strok(str, " ");

//    char str[] = "hello/world/foo";
//    char *foo = strtok(str, "/");
//
//    while (foo != NULL) {
//        printf("INFO: %s\n", foo);
//        foo = strtok(NULL, "/");
//    }


    for (int i = 1; i < argc; i++) {
        //printf("INFO: %s\n", strtok(argv[i], "/"));

        char *path_s = strtok(argv[i], "/");

        while (path_s != NULL) {
//            char *path_s = remove_slash(strtok(argv[i], "/"));
//            printf("INFO: %s\n", path_s);

//            if (argc != i+1) {
//                strcat(path, "/");
//            }

            if (path_s == NULL) {
                break;
            }

//            if (path == NULL) {
//                strcat(path, "/");
//            }

//            printf("PATH: %s\n", path);

//            strcat(path_s, "/");

//            printf("PATH_S: %s\n", path_s);
            strcat(path, path_s);

            if (argc != i+1) {
                strcat(path, "/");
            }


            //path_s = remove_slash(strtok(argv[i], "/"));
            path_s = strtok(NULL, "/");
        }

//        char *path_s = remove_slash(strtok(argv[i], "/"));

//        path_s = remove_slash(strtok(argv[i], "/"));

//        path_s = remove_slash(argv[i]);

//        if (argc != i+1) {
//            strcat(path_s, "/");
//        }
//        strcat(path, path_s);

    }

    printf("%s\n", path);
}

//
// End main-filepath-join.c
//
