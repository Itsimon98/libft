# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfarina <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:27:29 by sfarina           #+#    #+#              #
#    Updated: 2022/02/09 11:30:18 by sfarina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putchar_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_substr.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_memmove.c \
       	ft_atoi.c \
        ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strncmp.c \
	   ft_memset.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strnstr.c \
	   ft_strrchr.c \

SRCS_B	=  ft_lstiter.c \
	ft_lstnew.c \
	ft_lstmap.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstadd_back.c \
	ft_lstlast.c \
	ft_lstadd_front.c \
	ft_lstsize.c \

OBJS	= $(SRCS:.c=.o)

OBJS_B	= $(SRCS_B:.c=.o)

RM		= rm -f

LIBC	= ar -rcs

FLAGS	= -Wall -Wextra -Werror

INCS	= .

.c.o :

	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS}

	${LIBC} $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(OBJS_B)

	${LIBC} $(NAME) $(OBJS_B)
    
fclean: clean

	$(RM) $(NAME) $(bonus)

clean:

	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all bonus clean fclean re .c.o
