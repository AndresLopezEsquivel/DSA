CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = main
SRCS = main.cpp node.cpp hash_table.cpp
HEADERS = node.h hash_table.h

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
