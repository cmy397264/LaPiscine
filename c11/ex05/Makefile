CC = cc
CFLAGS = -Wall -Wextra -Werror -g
TARGET = do-op
SRCS = main.c ft_print.c
OBJS = main.o ft_print.o

$(TARGET) : $(SRCS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean :
	@rm -rf $(OBJS)

fclean : clean
	 @rm -r $(TARGET)
re : fclean $(TARGET)
