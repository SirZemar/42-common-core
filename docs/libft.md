# Utils

## Alias cpcfiles 

```sh
alias cpcfiles="find ./* -type f -name '*.c' ! -name 'main.c' -exec cp {} ./src \;"
```

Run this command from 01_libft to copy all .c files into a folder named src.

## Tester

```sh
% acc -o myprogram main.c libft.a 
```

## Run function test

```sh
% ./myprogram ft_*
```