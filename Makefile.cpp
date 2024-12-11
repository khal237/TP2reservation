
# The Makefile must be in the root directory of the project where the source files are located.
#
# Usage (in a terminal in the root directory of the project):
# make			# Compile and link all .cpp files
# make clean	# Clean up the build directory
#
# -----------------------------------------------------------
# Modify the following lines to fit your project
# SRC_FILES is the list of source files to compile, files are separated by a space.
# Do not put .h files into the source files!
SRC_FILES  = main.cpp Date.cpp 
#
# APP is the name of the executable, the executable will be generated into the bin directory
APP        = app
#
# Choose your compiler - Use g++ on Linux, Windows and clang++ on Mac OS X
CXX        = clang++
# Compiler options - Wall for all warnings, std=c++17 for C++17
CXXFLAGS   = -Wall  -std=c++17
#
# -----------------------------------------------------------
# Do not modify the following lines, unless you know what you are doing
# -----------------------------------------------------------
# Dependency flags - Include .d files generated by the compiler
DEPFLAGS   = -MMD
# Linker flags - No flags
LDFLAGS    =
# Build directory
BUILDIR    = build
# Object files - All .o files generated from the source files
OBJ_FILES  = $(patsubst %.cpp, $(BUILDIR)/%.o, $(SRC_FILES))
# Executable - The name of the executable into the bin directory
BINDIR	   = bin
# Target - The path to the executable
TARGET     = $(BINDIR)/$(APP)
# Dependencies - All .d files generated by the compiler
DEPS	   = $(OBJ_FILES:.o=.d)

all: $(TARGET)

# Link object files to executable into the bin directory
$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJ_FILES)

# Compile source files to object files into the build directory
$(BUILDIR)/%.o: %.cpp
	@mkdir -p $(BUILDIR)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

# Clean up the build directory
clean:
	rm -rf $(BUILDIR)
	rm -rf $(BINDIR)

# Include the dependencies generated by the compiler
-include $(DEPS)

# Phony targets
.PHONY: all clean
