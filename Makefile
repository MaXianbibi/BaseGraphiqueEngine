NAME = B3D
LIBFT = libft/libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -Llib/SDL/lib -lSDL2 -lm
RM = rm -f

SRC_DIR = src/
SRC_FILES = $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ_DIR = objs/
OBJS = $(SRC_FILES:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ || ( $(MAKE) kill_spinner ; exit 1 )

all: $(NAME)

$(NAME): spinner $(OBJS) $(LIBFT)
	@$(CC) $(OBJS) $(LIBFT) $(LDFLAGS) -o $@ || ( $(MAKE) kill_spinner ; exit 1 )
	@$(MAKE) kill_spinner
	@echo "\r\033[33mDONE!\033[0m         "

$(LIBFT):
	@make -C ./libft

clean:
	@$(MAKE) clean -C ./libft
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(NAME)

re: fclean all

spinner:
	@chmod +x ./libft/spinner.sh
	@./libft/spinner.sh &

kill_spinner:
	@pgrep -f ./libft/spinner.sh > /dev/null 2>&1 && pkill -f ./libft/spinner.sh || true

.PHONY: all clean fclean re