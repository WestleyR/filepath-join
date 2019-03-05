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
#include <stdlib.h>

#include <stdio.h>

#include "remove-slash.h"

char* remove_slash(char* path) {
//    int test = 0;
    char *new_path = "";
    for (unsigned int i = 0; i < strlen(path); i++) {

//        if ((path[i] != '/') && (new_path != NULL)) {
//            printf("TRUE\n");
//        }

        if (path[i] != '/') {
            size_t len = strlen(new_path);
            char *str2 = malloc(len + 1 + 1 );
            strcpy(str2, new_path);
            str2[len] = path[i];
            str2[len + 1] = '\0';

            new_path = str2;
        }
    }
//    strcat(new_path, "/");

    return(new_path);
}

//
// End remove-slash.c
//
