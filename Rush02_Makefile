#Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = rush-02
SRC = main.c
DEPS = stdrush02.h
OBJS = $(SRC:.c=.o)

#Rules
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean:
	rm -f $(TARGET)
re: fclean $(TARGET)
