# Check if the src directory exists
if [ ! -d "/nfs/homes/jose-ero/Repos/42cursus/42-common-core/projects/01_libft/src" ]; then
  # If it doesn't exist, create it
  mkdir /nfs/homes/jose-ero/Repos/42cursus/42-common-core/projects/01_libft/src
fi

find /nfs/homes/jose-ero/Repos/42cursus/42-common-core/projects/01_libft -type f -name '*.c' ! -name 'main.c' -exec cp {} /nfs/homes/jose-ero/Repos/42cursus/42-common-core/projects/01_libft/src \;

cd /nfs/homes/jose-ero/Repos/42cursus/42-common-core/projects/01_libft/src 

make re