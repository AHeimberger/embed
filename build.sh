#!/bin/bash

DIR_CURRENT=$(readlink -f $(dirname "$0"))
echo "${DIR_CURRENT}"


cd "${DIR_CURRENT}"
echo -e "\n\n - Build Embed"
rm -rf build_embed
mkdir -pv build_embed
cd build_embed
cmake ../src
make


cd "${DIR_CURRENT}"
echo -e "\n\n - Create Embedded Resources"
rm -rf ./src/test/embedded_resources
./build_embed/embed ./example/ -o ./src/test/


cd "${DIR_CURRENT}"
echo -e "\n\n - Build Test"
rm -rf build_test
mkdir -pv build_test
cd build_test
cmake ../src/test
make


echo -e "\n\n - Run Test"
./test