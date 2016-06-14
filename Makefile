CC=c++ -std=c++11
SRC=main.cpp
OBJ=main.o

.cpp.o:
	$(CC) -c $<
all: $(OBJ)
	$(CC) -o test $(OBJ)
clean:
	@rm -rf *.o test > /dev/null
