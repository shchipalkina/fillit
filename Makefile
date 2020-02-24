# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 03:31:40 by cmilda            #+#    #+#              #
#    Updated: 2019/11/04 04:02:52 by cmilda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isdigit.c ft_memccpy.c ft_memdel.c ft_putchar.c \
ft_putnbr.c ft_sqrt.c ft_strcmp.c ft_strequ.c ft_strlcat.c ft_strncat.c \
ft_strnew.c ft_strstr.c ft_toupper.c ft_isalnum.c ft_isprint.c ft_memchr.c \
ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c ft_strcat.c ft_strcpy.c \
ft_striter.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strsub.c ft_isalpha.c \
ft_itoa.c ft_memcmp.c ft_memset.c ft_putendl.c ft_putstr.c ft_strchr.c \
ft_strdel.c ft_striteri.c ft_strmap.c ft_strncpy.c ft_strrchr.c ft_strtrim.c \
ft_atoi.c ft_isascii.c ft_memalloc.c ft_memcpy.c ft_nbrlen.c ft_putendl_fd.c \
ft_putstr_fd.c ft_strclr.c ft_strdup.c ft_strjoin.c ft_strmapi.c ft_strnequ.c \
ft_strsplit.c ft_tolower.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(FLAGS) -c $(SRC) -I $(INCLUDE)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c 
		gcc $(FLAGS) -o $@ -c $<

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
