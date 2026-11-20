# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grivault <grivault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/20 03:01:19 by grivault          #+#    #+#              #
#    Updated: 2026/11/20 03:03:24 by grivault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo "hello world, hello 42" > test.txt
./executable test.txt "hello" "hi"
echo "hi world, hi 42" > expected.txt
diff -u test.txt.replace expected.txt && echo "test passed" || echo "test failed"
rm -f test.txt test.txt.replace expected.txt
