#!/bin/sh
# Created by: WestleyR
# email: westleyr@nym.hush.com
# Date: Feb 21, 2019
# https://github.com/WestleyR/filepath-join
# version-1.0.0
#
# This software is licensed under a Clear BSD License.
#

echo "Starting tests..."

exp="hello/world
/home/user/dir/cool/things
somthing+plus+otherthings
string seprated by-spaces
one/two/three/four/five/six/seven/eight/nine/ten/elevan/twelve"

out=`./example`
if [ "$exp" != "$out" ]; then
    echo
    echo "FAIL: test failed."
    echo "unexpected output"
    exit 255
else
    echo "Test passed!"
fi
echo
echo "Test complete!"
# End test.sh
