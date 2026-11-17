# Libft

My own C standard library, built as a static library (`libft.a`) for the 42 curriculum.

## What it does

- Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_itoa`.
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- Output to a file descriptor: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- Singly linked list (`t_list`, bonus part): `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Build and run

```
make          # builds libft.a (mandatory part)
make bonus    # adds the linked-list functions to libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

Compiled with `cc -Wall -Wextra -Werror`. Link it into your own program:

```
cc -Wall -Wextra -Werror main.c -L. -lft -o demo
```

## How it works

Each function lives in its own `ft_*.c` file and follows the behaviour of its libc counterpart, except for the helpers that are not in libc (`ft_substr`, `ft_split`, `ft_lstmap`, and so on). All declarations are in `libft.h`. The Makefile archives the objects with `ar -rc`; the list functions are compiled only by `make bonus`.

## Project structure

- `ft_*.c`: one function per file
- `ft_lst*_bonus.c`: linked-list functions
- `libft.h`: prototypes and the `t_list` type
- `Makefile`

This is a 42 İstanbul project.
