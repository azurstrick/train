##
## Makefile for  in /home/samain_c/rendu/Semestre_3/prepare/piscine_tek_2/D06
## 
## Made by carl samain
## Login   <samain_c@epitech.net>
## 
## Started on  Wed Nov 16 23:03:30 2016 carl samain
## Last update Tue Nov 22 09:31:58 2016 carl samain
##

CC		= g++

SRC 		= src/main.c

OBJS		= $(SRC:.c=.o)

RM		= rm -f

NAME 		= my_convert_temp

CFLAGS		+= -W -Wall -Wextra
CFLAGS		+= -I./include

all:		$(LIB) $(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
