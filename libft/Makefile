# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahelper <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 20:23:06 by ahelper           #+#    #+#              #
#    Updated: 2020/11/12 20:23:16 by ahelper          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a
FLAGS =  -Wall -Wextra -Werror
OBJ = ft_atoi.o ft_bzero.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_substr.o ft_isalnum.o ft_isalpha.o ft_strdup.o ft_calloc.o ft_itoa.o ft_split.o ft_strtrim.o ft_strjoin.o ft_putnbr_fd.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_strmapi.o
OPT = -c 
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_strdup.c ft_calloc.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c 
BONUSSRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_strdup.c ft_calloc.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c ft_lstadd_front.c ft_lstsize.c ft_lstnew.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstlast.c
BONUSOBJ = ft_lstadd_front.o ft_lstsize.o ft_lstnew.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o ft_lstlast.o ft_atoi.o ft_bzero.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_substr.o ft_isalnum.o ft_isalpha.o ft_strdup.o ft_calloc.o ft_itoa.o ft_split.o ft_strtrim.o ft_strjoin.o ft_putnbr_fd.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_strmapi.o
all: $(NAME)
$(NAME):
	gcc $(FLAGS) $(OPT) $(SRC)
	ar rc $(NAME) $(OBJ) 
bonus: fclean
	gcc $(FLAGS) $(OPT) $(BONUSSRC)
	ar rc $(NAME) $(BONUSOBJ)
clean:
	rm -f $(BONUSOBJ)  
fclean: clean 
	rm -f $(NAME)	
re: fclean all 
