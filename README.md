
# Recursive atoi

## Learning Goals

- Deepen an understanding of strings
- Practice creating recursive functions
## Background

Imagine that you travel back in time to the 1970’s, when the C programming language was first created. You are hired as a programmer to come up with a way to convert strings to ints. You want to be thorough in your development process and plan to try several approaches before deciding on the most efficient.

## Implementation Details

In the recursive version of program, start with the last char and convert it into an integer value. Then shorten the string, removing the last char, and then recursively call convert using the shortened string as input, where the next char will be processed.

## Examples

```javascript
atoi/ $ ./atoi
Enter a positive integer: 3432
3432
```

```javascript
atoi/ $ ./atoi
Enter a positive integer: 98765
98765
```

