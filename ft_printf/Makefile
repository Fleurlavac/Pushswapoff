# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/10 08:53:52 by fcaval            #+#    #+#              #
#    Updated: 2025/12/23 14:00:36 by fcaval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFTDIR)
NAME = libftprintf.a

PRINT_SRCS = ft_print.c ft_tools.c ft_putnbr_land.c

LIBFTDIR = ../libft
LIBFT = $(LIBFTDIR)/libft.a

PRINT_OBJS = $(PRINT_SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(NAME): $(PRINT_OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(PRINT_OBJS)

clean:
	$(RM) $(PRINT_OBJS)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re