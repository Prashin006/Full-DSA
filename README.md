# tuf-dsa-course-cpp
This repository contains the code written by me in C++ following Striver's TakeUForward Sheet's Data Structures and Algorithms Course

**Steps to Execute the code**
- Firstly we need to compile the .cpp files. You can use any compiler but I am using the g++ compiler from GNU tools.
- ```g++ {header_file}.cpp {file_name}.cpp -o main``` to compile the code file into a binary executable
- NOTE that in some cases we have grouped functions like ```printArray``` and ```swap``` into a header file like sorting_functions.h and their definitions are in sorting_functions.cpp. So in order to execute say the file say 03_selection_sort.cpp we need to type the following in terminal
- ```g++ sorting_functions.cpp 03_selection_sort.cpp -o 03_selection_sort``` to compile the files into a single executable
- ```./03_selection_sort``` to execute the binary file and get the output