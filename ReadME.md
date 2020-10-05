# CPP_Project
## Description
This Repository will give you simple cpp project which includes
* classes
* vectors
* lists
* header file
* library 
* unit testing
* cmake use

## Required setup

* Clone this repo :
```git clone https://gitlab.com/Khawaja-Usman-Riaz-Sehgal/Cpp_Project.git```

* Install google test using the following link with one simple change before copying the libgtest.a and libgtest_main.a to your /usr/lib folder cd to lib:
``` https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/```

* Install cmake :
``` sudo apt-get install cmake ```

## Usage
How to use this Repo?

After Cloning the repo and installating the required setup. Follow the following steps to run the code as well as test for them.

* get sub modules into the project using : ```git submodule update --init --remote```
* Create new directory build in Cpp_Project using : ```mkdir Cpp_Project/build ```
* Change directory to Cpp_Project/build using : ```cd Cpp_Project/build ```
* Clear the CMakeCache.txt using : ```rm CMakeCache.txt```
* first of all build cmake using : ```cmake .. ```
* run make using : ```make```
* finally to get output for app use : ```./out```
* output for tests by using : ```./test_out```

File Structure:
* Cpp_Project/
* ├── app
* │   ├── CMakeLists.txt
* │   └── main.cpp
* ├── benchmarks
* │   ├── CMakeLists.txt
* │   └── main.cpp
* ├── CMakeLists.txt
* ├── docker
* ├── Dockerfile
* ├── include
* │   ├── Containers.h
* │   └── XYZ.h
* ├── ReadME.md
* ├── src
* │   ├── CMakeLists.txt
* │   └── Containers.cpp
* ├── test
* │   ├── CMakeLists.txt
* │   └── test.cpp
* └── third_party
* |   ├── benchmark
* |   └── googletest
* ├── .gitignore
* ├── .gitmodules
