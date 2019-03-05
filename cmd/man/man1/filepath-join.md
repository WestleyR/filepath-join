filepath-join(1) - join a file path
=============================================

## DESCRIPTION
join a path, and add `/` wherever its nessary. prints output to stdout.

## SYNOPSIS
`filepath-join` <path> <path>...

## EXAMPLES
join a path:

`$` `filepath-join` some/dir/ /other// file/<br>
this will output: `some/dir/other/file`

`$` `filepath-join` path path file<br>
this will output: `path/path/file`

`$` `filepath-join` ///path/// //path/ file//<br>
this will output: `/path/path/file`

`$` `filepath-join` /path///other/path ///file<br>
this will output: `/path/other/path/file`

## NOTES
if the first path starts with a `/`, then the output path will also start with a `/`.
check the examples.

for full tutorial/info/source code, visit: `https://github.com/WestleyR/filepath-join`

## AUTHOR
`WESTLEYR` <westleyr@nym.hush.com>

## COPYRIGHT
`This software is licensed under a Clear BSD License.`<br>
`Copyright (c) 2019 WestleyR, All rights reserved.`

## REPORTING BUGS
<https://github.com/WestleyR/filepath-join> or <westleyr@nym.hush.com>
