find . -type f -name '*.c' -exec norminette {} \;
find . -type f -name '*.c' -exec gcc -Wall -Werror -Wextra {} \;
find . -type f -name '*.out' -exec rm {} \;
find . -type f -name '*.swp' -exec rm {} \;
find . -type f -name '*'
