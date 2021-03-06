// created by: WestleyR
// email: westleyr@nym.hush.com
// https://github.com/WestleyR/filepath-join
// date: Feb 17, 2019
// version-1.0.0-beta-3
//
// The Clear BSD License
//
// Copyright (c) 2019 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
//#include <stdio.h>

#include "filepath-join.h"

char* removeSlash(char* path) {
    char *newPath = "";
    for (unsigned int i = 0; i < strlen(path); i++) {
        if (path[i] != '/') {

            size_t len = strlen(newPath);
            char *str2 = malloc(len + 1 + 1 );
            strcpy(str2, newPath);
            str2[len] = path[i];
            str2[len + 1] = '\0';

            newPath = str2;
        }
    }
    return(newPath);
}

char* filepath_join(const char *format, ...) {
    char *path = malloc(200 * sizeof(char));
    path[0] = '\0';
//    char* path;
    const char *p;
    va_list argp;
    char *s;
    char slash;

    va_start(argp, format);

    for (p = format; *p != '\0'; p++) {
        if (*p != '%') {
            slash = *p;
            continue;
        }

        s = va_arg(argp, char *);
        s = removeSlash(s);

        if (*s == '\0') {
            break;
        }

        size_t len = strlen(s);
        char *str2 = malloc(len + 1 + 1);

        str2[0] = slash;
        strcat(str2, s);
        str2[len + 1] = '\0';
        strcat(path, str2);
        slash = '\0';
        str2[0] = '\0';
    }
    va_end(argp);
    return(path);
}

//
// End filepath-join.c
//
