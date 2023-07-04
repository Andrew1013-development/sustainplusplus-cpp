GODDRINKSCPP_FLAGS = -L../world-execute-me -I../world-execute-me -lGodDrinksCPP_src
EXTRALARGE_FLAGS = -L./ -I./ -lextraLarge_src
DEBUG_FLAGS = -g3 -O0 -march=native
PRODUCTION_FLAGS = -O3 -march=native -flto
ifeq ($(OS), Windows_NT)
	EXECUTABLE_EXTENSION = exe
else
	EXECUTABLE_EXTENSION = out
endif

all:
	@echo Compiling libraries.....
	g++ -c -o extraLarge_src.o extraLarge_src.cpp -I../world-execute-me -std=c++20 -fPIC
	g++ -shared -o libextraLarge_src.dll extraLarge_src.o
	g++ -shared -o libextraLarge_src.so extraLarge_src.o
	@echo Libraries compiled.

	@echo Compiling programs.....
	g++ -o sustainPlusPlus-debug.$(EXECUTABLE_EXTENSION) extraLarge.cpp $(GODDRINKSCPP_FLAGS) $(EXTRALARGE_FLAGS) $(DEBUG_FLAGS) -std=c++20
	g++ -o sustainPlusPlus.$(EXECUTABLE_EXTENSION) extraLarge.cpp $(GODDRINKSCPP_FLAGS) $(EXTRALARGE_FLAGS) $(PRODUCTION_FLAGS) -std=c++20
	@echo Program compiled.