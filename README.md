# Catch2 CMake template

## Overview

Simple starter project for Catch2 using CMake

## Instructions

### Install Catch2 (if not already installed)

* Clone [Catch2](https://github.com/catchorg/Catch2) repo

```bash
mkdir Catch2 && cd Catch2
git clone https://github.com/catchorg/Catch2.git .
```

* Build and install Catch2

```bash
# default install location
cmake -S . -B build/ -DBUILD_TESTING=OFF
# or custom install location
cmake -S . -B build/ -DBUILD_TESTING=OFF -DCMAKE_INSTALL_PREFIX=<relative/path/to/install>
cmake --build build/ --target install
```

### Clone Catch2-template

```bash
mkdir <project-name> && cd <project-name>
git clone https://github.com/pr0g/Catch2-template.git .
```

* Build Catch2-template

```bash
# if Catch2 is installed to default location
cmake -S . -B build/
# or if Catch2 is installed to custom location
cmake -S . -B build/ -DCMAKE_PREFIX_PATH=<absolute/path/to/install>
cmake --build build/
```

* Run `catch2-template`

```bash
./build/catch2-template
```

* Disconnect the remote

```bash
git remote rm origin
```

### Optional

* Create a new git remote
* Connect repo to new remote

```bash
git remote add origin <repo-address.git>
git push -u origin master
```

### Example Custom Install Layout

Below is an example of how to structure the Catch2-template with the Catch2 library

```bash
# folder structure
|-- new-testing-directory
    |-- catch2
    |-- catch2-install
    |-- catch2-template

# example commands
# create new root level folder
mkdir new-testing-directory && cd new-testing-directory
# create directory for catch2 repo
mkdir catch2 && cd catch2
# clone catch2
git clone https://github.com/catchorg/Catch2.git .
# configure catch2, specifying install location (can be relative path)
cmake -S . -B build/ -DBUILD_TESTING=OFF -DCMAKE_INSTALL_PREFIX=../catch2-install
# build and install catch2 library to custom location (cmake-install folder at root level)
cmake --build build/ --target install
# return to root level folder
cd ..
# create directory for catch2-template
mkdir catch2-template && cd catch2-template
# clone catch2-template
cmake clone https://github.com/pr0g/Catch2-template.git .
# configure catch2-template, specifying search path for installed library
# note: can use $(pwd) trick to use pseudo relative paths :)
cmake -S . -B build/ -DCMAKE_PREFIX_PATH=$(pwd)/../catch2-install/
# build catch2-template
cmake --build build/
# run catch2-template - profit! :)
./build/catch2-template
```
