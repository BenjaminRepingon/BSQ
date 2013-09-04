#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/02 12:14:22 by rbenjami          #+#    #+#              #
#    Updated: 2013/09/04 15:50:56 by espiroux         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME	= bsq 
GCC		= gcc -o $(NAME) -I./includes/ 
GFLAGS	= -Wall -Wextra -Werror

TEST	= test
GCT		= gcc -o $(TEST) -I./includes/

MAINC	=	./main.c
FONCT	=	./srcs/function.c
SQTES	=	./srcs/ft_square_test.c
MPCPY	=	./srcs/ft_map_copy.c
ERROR	=	./srcs/ft_error.c
DISPL	=	./srcs/ft_display.c
CHECK	=	./srcs/ft_check_square.c

all: $(NAME)

$(NAME):$(MAINC)    $(FONCT)    $(SQTES)    $(MPCPY)    $(ERROR)    $(DISPL)    $(CHECK)
	@Echo
	@Echo
	@Echo "MAKE: Starting compilation"
	@Echo
	@Echo
	@Echo
	$(GCC)	$(MAINC)	$(FONCT)	$(SQTES)	$(MPCPY)	$(ERROR)	$(DISPL)	$(CHECK) $(GFLAGS)
	@Echo
	@Echo
	@Echo "MAKE: End of compilation"
	@Echo "		     And the world..."
	@Echo
	@Echo

test:
	$(GCT) $(CHECK) $(FONCT) $(GFLAGS)

clean:
	rm -f $(TEST)
	rm -f $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all	
