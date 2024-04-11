LIBFT_SRC		=	ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_itoa.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_split.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_tolower.c \
					ft_toupper.c
LIBFT_DIR		:=	libft/
LIBFT_SRC		:=	$(addprefix $(LIBFT_DIR), $(LIBFT_SRC))

B_LIBFT_SRC		=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c
B_LIBFT_DIR		:=	libft_bonus/
B_LIBFT_SRC		:=	$(addprefix $(B_LIBFT_DIR), $(B_LIBFT_SRC))

MY_FUNCS_SRC	=	my_arrfree.c \
					my_atoh.c \
					my_intlen.c \
					my_isset.c \
					my_isspace.c \
					my_jointhree.c \
					my_lstdellast.c \
					my_safefree.c \
					my_strcmp.c \
					my_strfreejoin.c \
					my_strndup.c \
					my_strrealloc.c
MY_FUNCS_DIR		:=	my_funcs/
MY_FUNCS_SRC		:=	$(addprefix $(MY_FUNCS_DIR), $(MY_FUNCS_SRC))

GNL_SRC			=	get_next_line.c
GNL_DIR			:=	get_next_line/
GNL_SRC			:=	$(addprefix $(GNL_DIR), $(GNL_SRC))

SRC_DIR			:=	sources/
OBJ_DIR			:=	objects/
INC_DIR			:= 	includes
SRC				:=	$(addprefix $(SRC_DIR), $(LIBFT_SRC) $(B_LIBFT_SRC) $(MY_FUNCS_SRC) $(GNL_SRC))
OBJ				:=	$(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.c=.o))
NAME			:=	libft.a
INCLUDES		:=	-I $(INC_DIR)

DEBUG			:=	-g 
CC				:=	gcc -Wall -Werror -Wextra $(DEBUG)
AR				:=	ar rcs

all: $(NAME)
$(NAME): $(OBJ_DIR) $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(AR) $(NAME)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC)$(INCLUDES) -c $< -o $@
	@echo "$(CC)$< $@"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)$(LIBFT_DIR) $(OBJ_DIR)$(B_LIBFT_DIR) $(OBJ_DIR)$(MY_FUNCS_DIR) $(OBJ_DIR)$(GNL_DIR)

re: clean all

norm:
	@norminette $(SRC) $(INC_DIR) || true

clean:
	@rm -f $(OBJ) $(B_OBJ)
	@rm -f $(NAME) $(B_NAME)

fclean: clean
	@rm -rf $(OBJ_DIR) $(B_OBJ_DIR)

.PHONY: all re norm clean fclean