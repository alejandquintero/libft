
## ft_isalpha
```
int		ft_isalpha(int c);
```
Checks if a character is alphabetic.

This function receives the character to check.

Return `1` if the character is alphabetic or `0` if not.

## ft_isdigit

```
int		ft_isdigit(int c);
```
Checks if a character is a digit.

This function receives the character to check.

Return `1` if the character is a digit or `0` if not.
## ft_isalnum

```
int		ft_isalnum(int c);
```
Checks if a character is alphanumeric.

This function receives the character to check.

Return `1` if the character is alphanumeric or `0` if not.

## ft_isascii

```
int		ft_isascii(int c);
```
Checks if `c` is an ASCII character.

This function receives the integer to check.

Returns `1` if the integer is ASCII or `0` if not.

## ft_isprint

```
int		ft_isprint(int c);
```
Checks if the `c` is a printable character.

This function receives the integer to check.

Returns `1` if `c` is printable or `0` if not.

## ft_strlen

```
size_t	ft_strlen(const char *s);
```
`s` is the string.

Returns the length of de string `s`.

## ft_memset
```
void    *ft_memset(void *b, int c, size_t len);
```
Fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`

## ft_bzero
```
void	ft_bzero(void *s, size_t n);
```
Erases the data in the `n` bytes of the memory starting at the location pointed to by `s`, by writing zeros (bytes containing '\0') to that area.