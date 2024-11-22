#Compiler.
CXX = g++
#which version of the compiler to be used and some extra warnings when compiling
CXXFLAGS = -Wall -Wextra -std=c++23
#name of the executable file
TARGET = main
#sourcecode files to compile
SRCS = main.cpp player.cpp game.cpp

#create object files from cpp.
OBJS = $(SRCS:.cpp=.o)

#defualt when u run make without other commands. create main
#compile and link everything.
all: $(TARGET)

#linkin all the cpp files to main file 
# $ to make it refer to identify OBJS
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

#compile the o files to objekt files without linkin the flies to main
# % wildcard insted of writing all the file names befor the suffix .o .cpp this % refers to it
%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#remove main and all o files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean