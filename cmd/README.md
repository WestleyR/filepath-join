# filepath-join - The Command

This is the Linux command (`filepath-join`).

## Install:

Install via [clib](https://github.com/clibs/clib):

```
sudo clib install WestleyR/filepath-join/cmd
```

Or clone the repo:

```
cd /tmp
git clone https://github.com/WestleyR/filepath-join

cd /tmp/filepath-join/cmd

make

# optnal
make test

sudo make install
```

<br>

## Usage:

```
  ./filepath-join path path file
  this will output: path/path/file

  ./filepath-join ///path/// //path/ file//
  this will output: /path/path/file

  ./filepath-join /path///other/path ///file
  this will output: /path/other/path/file
```


<br>


## LICENSE

```
The Clear BSD License

Copyright (c) 2019 WestleyR
All rights reserved.

This software is licensed under a Clear BSD License 
```

<br>
