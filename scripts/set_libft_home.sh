
# Check if the src directory exists
if [ ! -d "/home/zemar/Repositories/42-common-core/projects/01_libft/src" ]; then
  # If it doesn't exist, create it
  mkdir /nfs/homes/jose-ero/Repos/42cursus/42-common-core/projects/01_libft/src
fi

cd /home/zemar/Repositories/42-common-core/projects/01_libft

find ./* -type f -name '*.c' ! -name 'main.c' -exec cp {} ./src \;

cd -

cd /home/zemar/Repositories/42-common-core/projects/01_libft/src

make re

cd -