CC = cc -Wall -Werror -Wextra
CFLAG = 

TARGET = ft_display_file
OBJS = main.o
SRCS = main.c

$(TARGET) : $(OBJS)
	$(CC) -c $(SRCS)
	$(CC) -o $@ $(OBJS)

all : $(TARGET)

clean : 
	rm  $(OBJS)
fclean : clean
	rm -r $(TARGET)
