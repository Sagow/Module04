SRCS =  main.cpp\
         Animal.cpp\
         Cat.cpp\
		 Dog.cpp\
		 WrongAnimal.cpp\
		 WrongCat.cpp\

OBJS =  ${SRCS:.cpp=.o}

CC =    c++

FLAGS = -std=c++98

NAME =  ex00

all: ${NAME}

${NAME}:	${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
		$(CC) $(FLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean