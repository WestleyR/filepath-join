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
#include "filepath-join/filepath-join.h"

int main() {

    printf("%s\n", filepath_join("%/%/%", "//hello/", "world", "///bar///"));

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
```

<br>
