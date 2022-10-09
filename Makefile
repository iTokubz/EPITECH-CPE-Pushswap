##
## EPITECH PROJECT, 2020
## PSU_my_ls_2019
## File description:
## Makefile
##

SRC	=	src/pushswap.c	\
		src/algo.c	\
		src/init_list.c	\
		src/init_main_data.c	\
		src/init_var.c	\
		src/main.c	\
		src/error.c	\
		src/utils_algo.c	\
		src/functions.c

CC			=	gcc

CFLAGS		=	 -Wall -Wextra -O2 -pedantic --std=c99 -Llib -lmy -Iinclude -g

OBJS		=	$(SRC:.c=.o)
EXEC 		=	push_swap

all: ${EXEC}

${EXEC}: ${OBJS}
	$(MAKE) -C lib/my
	${CC}  -o ${EXEC} ${OBJS} ${CFLAGS}

clean:
	rm -f ${OBJS}
	make -C lib/my clean

fclean: clean
	rm -f ${EXEC}
	make -C lib/my fclean

re: fclean all