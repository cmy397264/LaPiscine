CC=cc -Wall -Werror -Wextra
CFLAGS=-I./includes

TARGET=libft.a
OBJS=ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

INC_DIR=./includes
SRC_DIR=./srcs
SRC_OBJS= $(addprefix $(SRC_DIR)/, $(OBJS))

$(TARGET) : $(SRC_OBJS)
	ar rcs $(TARGET) $(SRC_OBJS)

ft_putchar.o : $(INC_DIR)/ft.h $(SRC_DIR)/ft_putchar.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_putchar.c

ft_putstr.o : $(INC_DIR)/ft.h $(SRC_DIR)/ft_putstr.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_putstr.c

ft_swap.o : $(INC_DIR)/ft.h $(SRC_DIR)/ft_swap.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_swap.c

ft_strlen.o : $(INC_DIR)/ft.h $(SRC_DIR)/ft_strlen.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_strlen.c

ft_strcmp.o : $(INC_DIR)/ft.h $(SRC_DIR)/ft_strcmp.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_strcmp.c

all : $(TARGET)

clean :
	rm -rf $(SRC_OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
