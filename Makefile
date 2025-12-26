# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 13:12:48 by fcaval            #+#    #+#              #
#    Updated: 2025/12/26 15:40:28 by fcaval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Fichiers sources de push_swap
SRCS = main.c check.c index_creation.c stack_creation.c operations.c \
base_operations.c
OBJS = $(SRCS:.c=.o)
HEADER = push_swap.h

# Chemins vers les bibliothèques
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Inclusion des headers (-I pour dire où chercher les .h)
INCLUDES = -I. -I$(LIBFT_DIR) -I$(PRINTF_DIR)

# Couleurs
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# ========== RÈGLES ========== #

all: $(NAME)

# Compile les bibliothèques AVANT de compiler push_swap
$(LIBFT):
	@echo "$(GREEN)📚 Compilation de libft...$(RESET)"
	@make -C $(LIBFT_DIR)

$(PRINTF):
	@echo "$(GREEN)📚 Compilation de ft_printf...$(RESET)"
	@make -C $(PRINTF_DIR)

# Compile push_swap en liant avec libft et printf
$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	@echo "$(GREEN)🚧 Compilation de $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)
	@echo "$(GREEN)👌 $(NAME) créé avec succès !$(RESET)"

# Compile les .c en .o avec les includes (et recompile si .h change)
%.o: %.c $(HEADER)
	@echo "$(GREEN)⏳ Compilation de $<...$(RESET)"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "$(RED)🧹 Nettoyage des fichiers objets...$(RESET)"
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(PRINTF_DIR)
	@rm -f $(OBJS)
	@echo "$(RED)👌 Fichiers .o supprimés$(RESET)"

fclean: clean
	@echo "$(RED)🗑️ Suppression de $(NAME) et des bibliothèques...$(RESET)"
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(PRINTF_DIR)
	@rm -f $(NAME)
	@echo "$(RED)👌 $(NAME) supprimé$(RESET)"

re: fclean all

.PHONY: all clean fclean re