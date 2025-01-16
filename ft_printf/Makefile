#####################################################
##ARGUMENTS
NAME	= libftprintf.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror


#####################################################
##SOURCES

SRCS	= ft_printf.c ft_format_hub.c ft_conv_c.c ft_conv_d_i.c ft_conv_p.c ft_conv_s.c ft_conv_u.c ft_conv_x.c
OBJS	= $(SRC:.c=.o)
LIBFT_DIR= libft
LIBFT	= $(LIBFT_DIR)/libft.a

#####################################################
##RULES

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) .
	ar -x libft.a
	ar rcs $(NAME) $(OBJS) *.o

$(LIBFT):
	make -C $(LIBFT_DIR)

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -f *.o
	rm -f libft.a
	make -c $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
