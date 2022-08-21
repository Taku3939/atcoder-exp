#!/bin/bash

cd `dirname $0`
dir=`pwd`

echo $dir

contest=$1

echo "Create contest contest directory..."
mkdir $contest
cd $contest


echo "Create files."

filelist=("a" "b" "c" "d" "e" "f")

# shellcheck disable=SC2068
for file in ${filelist[@]}
do
    touch ${file}.cpp
    cat ../template.cpp >> ${file}.cpp
    echo "created file: ${file}.cpp"
done

echo "Add executable into CMakeLists.txt"

cd ..

# Write settings into CMakeLists.txt
echo "" >> ./CMakeLists.txt
echo "# Contest $contest" >> ./CMakeLists.txt

# shellcheck disable=SC2068
for file in ${filelist[@]}
do
    echo "add_executable(${contest}_${file} $contest/${file}.cpp)" >> ./CMakeLists.txt
done