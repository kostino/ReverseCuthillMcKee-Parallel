# ReverseCuthillMcKee-Parallel
Implementation of the Reverse Cuthill McKee algorithm in parallel using the OpenMP library in C. 

## System specifics
I am compiling and running in OSX Catalina so to work around apple-installed clang not having OpenMP I did the following:
brew install libomp
Add -lomp -Xpreprocessor in clang compile command
For running in linux i suppose you can remove -Xpreprocessor and -lomp from the Makefile
