
## ft_isalpha
```
int		ft_isalpha(int c);
```
Checks if a character is alphabetic.

This function receives the character to check.

Returns `1` if the character is alphabetic or `0` if not.

## ft_isdigit

```
int		ft_isdigit(int c);
```
Checks if a character is a digit.

This function receives the character to check.

Returns `1` if the character is a digit or `0` if not.
## ft_isalnum

```
int		ft_isalnum(int c);
```
Checks if a character is alphanumeric.

This function receives the character to check.

Returns `1` if the character is alphanumeric or `0` if not.

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
Erases the data in the `n` bytes of the memory starting at the location pointed by `s`, by writing zeros (bytes containing '\0') to that area.

## ft_memcpy
```
void	*ft_memcpy(void *dst, const void *src, size_t n);
```
Copies `n` bytes from memory area pointed to by `src` to memory area pointed by `dst`, the memory areas must not overlap.

Returns a pointer to `dst`

## ft_memmove
```
void	*ft_memmove(void *dst, const void *src, size_t len);
```
Copies `len` bytes from memory area pointed to by `src` to memory area pointed by `dst`, the memory areas may overlap and memmove checks for this to make a safer copy without losing information

Returns a pointer to `dst`

## ft_strlcpy
```
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
```
Copies up to `dstsize` - 1 characters from the NUL-terminated string `src` to `dst`, NUL-terminating the result.

Returns the total length of the string tried to create, in this case, the length of `src`.

## ft_strlcat
```
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
```
Concatenate the strings `src` and `dst` to `dstsize` - 1 for guarantee to NUL-terminate. 

Appends the NUL-terminated string src to the end of dst. It will append at most size - ft_strlen(dst) - 1 bytes, NUL-terminating the result.

Returns the initial length of `dst` plus the length of `src`.

## ft_toupper
```
int		ft_toupper(int c);
```
Convert lowercase letters to uppercase.

## ft_tolower
```
int		ft_tolower(int c);
```
Convert uppercase letters to lowercase.

## ft_strchr
```
char	*ft_strchr(const char *s, int c);
```
locate character `c` in string `s`.

Function returns a pointer to the first occurrence of the character `c` in the string `s`.

## ft_strrchr
```
char	*ft_strrchr(const char *s, int c);
```
locate character `c` in string `s`.

Function returns a pointer to the last occurrence of the character `c` in the string `s`.

## ft_strncmp
```
int		ft_strncmp(const char *s1, const char *s2, size_t n);
```
Function  compares the two strings `s1` and `s2`. The comparison is done using unsigned characters.

Returns an integer indicating the result of the comparison, as follows:

	• 0, if the s1 and s2 are equal;

	• a negative value if s1 is less than s2;

	• a positive value if s1 is greater than s2.

## ft_memchr
```
void	*ft_memchr(const void *s, int c, size_t n);
```
Function scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`. Both `c` and the bytes of the memory area pointed to by `s` are interpreted as unsigned char.

Returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.

## ft_memcmp
```
int		ft_memcmp(const void *s1, const void *s2, size_t n);

```
Compares the first `n` bytes (each interpreted as unsigned char) of the memory areas `s1` and `s2`

Returns an integer less than, equal to, or greater than zero if the first n bytes of `s1` is found, respectively, to be less than, to match, or be greater than the first `n` bytes of `s2`.

For  a  nonzero  return  value, the sign is determined by the sign of the difference between the first pair of  bytes  (interpreted as unsigned char) that differ in `s1` and `s2`.

## ft_strnstr
```
char	*ft_strnstr(const char *s1, const char *s2, size_t n);

```
Locates the first occurrence of the null-terminated string `s2` in the string `s1`, where not more than `n` characters are searched. Characters that appear after a ‘\0’ character are not searched.

If `s2` is an empty string, `s1` is returned; if `s2` occurs  nowhere in `s1`, NULL is returned; otherwise a pointer to the first character of the first occurrence of `s2` is returned.

## ft_atoi
```
int		ft_atoi(const char *str);
```
Converts the initial portion of the string pointed to by `str` to int.

Returns the converted value or 0 on error.

## ft_calloc
```
void	*ft_calloc(size_t count, size_t size);
```
Allocates memory for an array of `count` elements of `size` bytes each and returns a pointer to the  allocated memory.  The memory is set to zero

Returns a pointer to the allocated memory. On error, returns NULL.

## ft_strdup
```
char	*ft_strdup(const char *s1);
```
Returns a pointer to a new string which is a duplicate of the string `s1`. Memory for the new string is obtained with malloc, and can be freed with free.

## ft_substr
```
char	*ft_substr(char const *s, unsigned int start, size_t len);
```
Reserve (with malloc(3)) and return a substring of the string `s`. The substring starts from index `start` and has a maximum length `len`.

Returns the resulting substring or NULL if memory reservation fails.

## ft_strjoin
```
char	*ft_strjoin(char const *s1, char const *s2);
```
Reserve (with malloc(3)) and return a new string, formed by the concatenation of `s1` and
`s2`'.

Returns the new string or NULL if memory reservation fails.

## ft_strtrim
```
char	*ft_strtrim(char const *s1, char const *set);
```
Remove all characters from the string 'set' from the beginning and from the end of 's1', until find a character not belonging to 'set'. The resulting string is returned with a reservation of
malloc(3)

Returns the cut string or NULL if memory reservation fails.

## ft_split
```
char	**ft_split(char const *s, char c);
```
Reserve (using malloc(3)) an array of strings resulting from separating the string `s` into substrings using the character `c` as a delimiter. The array must be terminated with a NULL pointer.

Returns the array of new strings resulting from the separation. NULL if memory reservation fails.

## ft_itoa
```
char	*ft_itoa(int n);
```
Using malloc(3), generate a string that represents the integer value received as an argument. Negative numbers have to be managed.

Returns the string that represents the number. NULL if memory reservation fails.

## ft_strmapi
```
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
To each character of the string `s`, apply the function `f` giving as parameters the index of each
character inside `s` and the character itself. Generate a new string with the result of successive use of `f`

Returns the string created after the correct use of `f` on each character. NULL if memory reservation fails.

## ft_striteri
```
void	ft_striteri(char *s, void (*f)(unsigned int,char*));
```
To each character of the string `s`, apply the function `f` giving as parameters the index of each
character within `s` and the address of itself character, which can be modified if necessary.

## ft_putchar_fd
```
void	ft_putchar_fd(char c, int fd);
```
Send the character `c` to the file descriptor specified.

## ft_putstr_fd
```
void	ft_putstr_fd(char *s, int fd);
```
Send the string `s` to the file descriptor specified.

## ft_putendl_fd	
```
void	ft_putendl_fd(char *s, int fd);
```
Send the string `s` to the given file descriptor, followed by a line break.

## ft_putnbr_fd	
```
void	ft_putnbr_fd(int n, int fd);
```
Sends the number `n` to the given file descriptor.

## ft_lstnew	
```
t_list	*ft_lstnew(void *content);
```
Create a new node using malloc(3). The member variable `content` is initialized with the content of the `content` parameter. The variable `next`, with NULL.

Returns the new node

## ft_lstadd_front	
```
void	ft_lstadd_front(t_list **lst, t_list *new);
```
Add the `new` node to the beginning of the `lst` list.

## ft_lstsize	
```
int	ft_lstsize(t_list *lst);
```
Counts the number of nodes in a list.

Returns the length of list.

## ft_lstlast	
```
t_list	*ft_lstlast(t_list *lst);
```
Returns the last node in the list.

## ft_lstadd_back
```
void	ft_lstadd_back(t_list **lst, t_list *new);
```

Add the `new` node to the end of the `lst` list

## ft_lstdelone	
```
void	ft_lstdelone(t_list *lst, void (*del)(void*));
```
Takes an `lst` node as a parameter and freed the memory of the content using the `del` function
given as a parameter, in addition to releasing the node. The `next` memory should not be freed.

## ft_lstclear	
```
void	ft_lstclear(t_list **lst, void (*del)(void*));
```
Delete and free the given `lst` node and all consecutive of that node, using the function `del` and free(3). In the end, the pointer to the list must be NULL.

## ft_lstiter	
```
void	ft_lstiter(t_list *lst, void (*f)(void *));
```
Iterates the list `lst` and applies the function `f` on the content of each node.

## ft_lstmap	
```
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
```
Iterates the list `lst` and applies the function `f` to it content of each node. Create a resulting list of the correct and successive application of the function `f` over each node. The `del` function is used to delete the contents of a node, if you do lack.

Returns the new list or NULL if memory reservation fails.