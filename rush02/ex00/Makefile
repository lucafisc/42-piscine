# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sobahram <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:04:44 by sobahram          #+#    #+#              #
#    Updated: 2022/10/29 15:16:48 by sobahram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
DICTIONARY = numbers.dict

$(NAME):
	@gcc -Wall -Wextra -Werror main.c -o $(NAME)
clean:
	@find . -name $(NAME) -delete
fclean:
	@find data -name *.dict -not -name $(DICTIONARY) -delete
