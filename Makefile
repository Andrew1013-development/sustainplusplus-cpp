# C++ libraries
LIBRARY_FLAGS = -L./ -I./
EXTRALARGE_FLAGS = -lextraLarge_src
# C++ arguments
DEBUG_FLAGS = -g3 -O0 -march=native -std=c++20
PRODUCTION_FLAGS = -O3 -march=native -flto -std=c++20
ifeq ($(OS), Windows_NT)
	EXECUTABLE_EXTENSION = exe
	SHARED_LIBRARY_EXTENSION = dll
else
	EXECUTABLE_EXTENSION = out
	SHARED_LIBRARY_EXTENSION = so
endif

all:
	@echo Compiling libraries.....
	g++ -c -o extraLarge_src.o extraLarge_src.cpp -I./ $(PRODUCTION_FLAG) -std=c++20 -fPIC
	g++ -shared -o libextraLarge_src.$(SHARED_LIBRARY_EXTENSION) extraLarge_src.o
	@echo Libraries compiled.

	@echo Compiling programs.....
	g++ -o sustainPlusPlus-debug.$(EXECUTABLE_EXTENSION) extraLarge.cpp $(LIBRARY_FLAGS) $(EXTRALARGE_FLAGS) $(DEBUG_FLAGS) -std=c++20
	g++ -o sustainPlusPlus.$(EXECUTABLE_EXTENSION) extraLarge.cpp $(LIBRARY_FLAGS) $(EXTRALARGE_FLAGS) $(PRODUCTION_FLAGS) -std=c++20
	@echo Program compiled.