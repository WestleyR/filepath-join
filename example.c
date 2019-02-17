// created by: WestleyR
// email: westleyr@nym.hush.com
// https://github.com/WestleyR/filepath-join
// date: Feb 16, 2019
// version-1.0.0
//
// The Clear BSD License
//
// Copyright (c) 2019 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//


#include <stdio.h>
#include "src/filepath-join.h"


int main() {

    printf("%s\n", filepath_join("%/%/%", "//hello/", "world", "///bar///"));

    return(0);
}

//
// End example
//
