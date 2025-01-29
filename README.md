# Algorithm Visualiser
## To Build
Download the required static and dynamic libraries from SFML
https://www.sfml-dev.org/download/sfml/2.6.2/

Paste the library files to the lib folder

Create an output folder and run cmake
### General cmake
```
mkdir out && cd out
cmake .. 
make
```
### For MinGW-32 make
```
mkdir build && cd build
cmake -G "MinGW MakeFiles" ..
mingw32-make
```
### Output folder
Executable file will be generated in the Bin folder
```
cd bin && ./AlgorithmVisualiser
```