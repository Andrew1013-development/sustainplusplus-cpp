# C++ libraries
LIBRARY_FLAGS = = -L./ -I./
EXTRALARGE_FLAGS = -lextraLarge_src
GODDRINKSCPP_FLAGS = -lGodDrinksCPP_src
# C++ arguments
DEBUG_FLAGS = -g3 -O0 -march=native
PRODUCTION_FLAGS = -O3 -march=native -flto
ifeq ($(OS), Windows_NT)
	EXECUTABLE_EXTENSION = exe
else
	EXECUTABLE_EXTENSION = out
endif

all:
	@echo Compiling libraries.....
	g++ -c -o GodDrinksCPP_src.o GodDrinksCPP_src.cpp -I./ $(PRODUCTION_FLAG) -std=c++20 -fPIC
	g++ -shared -o libGodDrinksCPP_src.dll GodDrinksCPP_src.o
	g++ -shared -o libGodDrinksCPP_src.so GodDrinksCPP_src.o
	g++ -c -o extraLarge_src.o extraLarge_src.cpp -I./ $(PRODUCTION_FLAG) -std=c++20 -fPIC
	g++ -shared -o libextraLarge_src.dll extraLarge_src.o
	g++ -shared -o libextraLarge_src.so extraLarge_src.o
	@echo Libraries compiled.

	@echo Compiling programs.....
	g++ -o sustainPlusPlus-debug.$(EXECUTABLE_EXTENSION) extraLarge.cpp $(LIBRARY_FLAGS) $(GODDRINKSCPP_FLAGS) $(EXTRALARGE_FLAGS) $(DEBUG_FLAGS) -std=c++20
	g++ -o sustainPlusPlus.$(EXECUTABLE_EXTENSION) extraLarge.cpp $(LIBRARY_FLAGS) $(GODDRINKSCPP_FLAGS) $(EXTRALARGE_FLAGS) $(PRODUCTION_FLAGS) -std=c++20
	@echo Program compiled.