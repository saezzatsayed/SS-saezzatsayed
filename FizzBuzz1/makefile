COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
PROGRAM_NAME = FizzBuzz.exe
CPP_FILES = FizzBuzz.cpp 

build:
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_FILES) -o $(PROGRAM_NAME)

unit_test:
	./$(PROGRAM_NAME) test

clean:
	rm -f $(PROGRAM_NAME) *.o