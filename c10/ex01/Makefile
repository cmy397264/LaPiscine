CC = cc -Wall -Werror -Wextra
CFLAG = 

TARGET = ft_cat
OBJS = main.o
SRCS = main.c

$(TARGET) : $(OBJS)
	$(CC) -c $(SRCS)
	$(CC) -o $@ $(OBJS)

all : $(TARGET)

clean : 
	rm -f $(OBJS) 
fclean : clean
	rm -f $(TARGET)
