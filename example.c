// created by: WestleyR
// email: westleyr@nym.hush.com
// https://github.com/WestleyR/filepath-join
// date: Feb 17, 2019
// version-1.0.1
//
// The Clear BSD License
//
// Copyright (c) 2019 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//

#include <stdlib.h>
#include <stdio.h>

#include "src/filepath-join.h"


int main() {
    char* path = NULL;

    // typical use:
    path = filepath_join("%s/%s", "//hello/", "world");
    printf("%s\n", path);
    free(path);

    // more uses:
    path = filepath_join("/%/%/%/%/%", "///home///", "user", "///dir///", "cool", "things");
    printf("%s\n", path);
    free(path);

    // use '+' instead of '/':
    path = filepath_join("%+%+%", "///somthing///", "plus", "///otherthings///");
    printf("%s\n", path);
    free(path);

    // seprate string by spaces:
    path = filepath_join("% % %", "///string///", "seprated////", "///by-spaces///");
    printf("%s\n", path);
    free(path);

    // unlimited!:
    path = filepath_join("%/%/%/%/%/%/%/%/%/%/%/%", "///one///", "two////", "///three///", "four", "five", "six", "seven", "eight", "nine", "ten", "elevan", "twelve");
    printf("%s\n", path);
    free(path);

    return(0);
}

//
// End example
//
