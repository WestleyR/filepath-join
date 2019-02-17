# filepath-join

Join multiple file paths with ease!

## Install

Install using [clib](https://github.com/clibs/clib):

```
$ clib install WestleyR/filepath-join
```

## Example

```c
#include <stdio.h>
#include <stdlib.h>
#include "filepath-join/filepath-join.h"

int main() {
    char* path = NULL;

    path = filepath_join("%/%/%", "//hello/", "world", "///dir///");
    printf("%s\n", path);
    free(path);

    path = filepath_join("/%/%/%", "///home///", "user", "///dir///");
    printf("%s\n", path);
    free(path);

    return(0);
}

```

Compile with `-I deps` flag:

```
gcc -I deps -o output ...
```

Output:

```
hello/world/bar
/home/user/dir
```

<br>
