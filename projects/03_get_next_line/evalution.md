## Norminette

- Run norminette [x]

## Compilation

- Possible to compile with usual flags and with or without -D BUFFER_SIZE [x]

## Error Management

- Pass file descriptor to get_next_line function on which is not possible to read, ex 42 or -1 and get NULL [x]
- Return NULL when read and malloc return error [x]

## Testing

- Return NULL in case of error []
- Every line return with \n at the end except last line if there is no \n []
- Test possible combinations:
    - Large BUFFER_SIZE(>1024) []
    - Small BUFFER_SIZE(<8, and 1) []
    - BUFFER_SIZE exactly the length of the line to read []
    - 1 byte variant (+/-) between the line and the BUFFER_SIZE []
    - Read on stdin []
    - Read from a file []
    - (Multiple/Single) Long line (2k+ characters) []
    - (Multiple/Single) Short line (4 characters, even 1) []
    - (Multiple/Single) Empty line []
