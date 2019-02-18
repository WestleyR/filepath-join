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
```

Compile with `-I deps` flag:

```
gcc -I deps -o output ...
```

Output:

```
hello/world
/home/user/dir/cool/things
somthing+plus+otherthings
string seprated by-spaces
one/two/three/four/five/six/seven/eight/nine/ten/elevan/twelve
```

<br>
