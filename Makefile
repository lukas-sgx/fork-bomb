##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile
##

ASM = nasm
CC = clang

NASMFLAGS = -f elf64 -o fork.o

SRC = fork.asm

NAME = my_sudo

all: $(NAME)

$(NAME): $(SRC) keyboard.c
	$(ASM) $(NASMFLAGS) $(SRC)
	$(CC) -c keyboard.c -o keyboard.o
	$(CC) keyboard.o fork.o -o $(NAME) -no-pie -nostartfiles

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all