# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 13:58:05 by ajurczyk          #+#    #+#              #
#    Updated: 2025/03/10 16:28:36 by ajurczyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addsuffix .c, ft_printf ft_putchar_printf ft_puthex_printf ft_putnbr_printf ft_putptr_printf ft_putstr_printf ft_putudec_printf ft_additional_printf)
OBJS := $(SRCS:%.c=%.o)

NAME = libftprintf.a
CC = gcc
RM = rm -f
ARNAME = ar rcs $(NAME)
RLNAME = ranlib $(NAME)
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	$(ARNAME) $(OBJS)
	$(RLNAME)
%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re all