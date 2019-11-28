CXX = g++
CXXFLAGS = -Wall
SRCS = main.cpp Atlys_interface.cpp Computer_interface.cpp FSM_2.cpp List.cpp Log.cpp Node.cpp Stack.cpp
OBJS = ${SRCS:.cpp=.o}

all: linux

linux: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main
	chmod +x main

Atlys_interface: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

Computer_interface: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

Log: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

List: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

Node: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

Stack: $@.cpp $@.h
		$(CXX) $(CXXFLAGS) $@.cpp -c

FSM_2: $@.cpp $@.h
			$(CXX) $(CXXFLAGS) $@.cpp -c

clean:
	rm -rf *.o main
