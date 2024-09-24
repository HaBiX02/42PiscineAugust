CC=gcc
CFLAGS=-Wextra -Wall
SOURCE=main.c map_solver.c map.c file_io.c math_utils.c string_lib.c
OBJ=$(SOURCE:.c=.o)
EXE=BSQ

all: $(SOURCE) $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

%.o: %.c
	$(CC) $(CFLAGS) $(SOURCE) -o $@

clean:
	rm -rf $(OBJ) $(EXE)
