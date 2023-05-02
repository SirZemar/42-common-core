# Alias

## cpcfiles

I use this alias to copy all c files inside my functions in the numbered folders into to a directory src (who contains only what the exercise ask).
```sh
$ alias find ./* -type f -name '*.c' ! -name 'main.c' -exec cp {} ./src \;
```
