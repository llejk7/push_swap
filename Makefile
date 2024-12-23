# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krenken <krenken@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 13:46:22 by krenken           #+#    #+#              #
#    Updated: 2024/09/17 18:51:29 by krenken          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME				= push_swap

# Directories
LIBFT				= ./Libft/libft.a
INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I$(INC)
RM					= rm -f

# Source Files
COMMANDS_DIR		= $(SRC_DIR)commands/
FUNCTIONS_DIR		= $(SRC_DIR)functions/

# Concatenate all source files
SRCS 				= $(wildcard $(COMMANDS_DIR)*.c) $(wildcard $(FUNCTIONS_DIR)*.c)


# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./Libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
# Here is the key change: This pattern rule now handles subdirectories properly
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./Libft

fclean: 			clean
					@$(RM) $(NAME)
					@make fclean -C ./Libft

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re
