

SRCS =  $(wildcard *.cpp)
OUTPUT = assignment
OBJS = $(SRCS:.cpp=.o)


all: $(OUTPUT)


$(OUTPUT): $(OBJS)
	g++ $(OBJS) -o $(OUTPUT)

%.o: %.cpp
	g++ -c $< -o $@

clean: 
	rm -f $(OUTPUT)
	rm -f *.o
