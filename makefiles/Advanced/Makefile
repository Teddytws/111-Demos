

SRCS = ifelse.cpp
OUTPUT = assignment02
OBJS = $(SRCS:.cpp=.o)


all: $(OUTPUT)


$(OUTPUT): $(OBJS)
	g++ $(OBJS) -o $(OUTPUT)

%.o: %.c
	g++ -c $< -o $@

clean: 
	rm -f $(OUTPUT)
	rm -f *.o
