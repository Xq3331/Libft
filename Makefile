# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 10:31:42 by pfaria-d          #+#    #+#              #
#    Updated: 2022/11/08 10:31:43 by pfaria-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM  = rm -f

OBJ = ${SRC:.c=.o}

all:    $(OBJ)
           ar rcs libft.a $(OBJ)

clean:
        $(RM) $(OBJ)
        
fclean: clean

re:     fclean all

.PHONY:  all clean fclean re
