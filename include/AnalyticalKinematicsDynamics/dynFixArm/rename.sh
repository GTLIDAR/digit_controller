# Rename all *.c to *.cpp
for f in *.c; do 
    mv -- "$f" "${f%.c}.cpp"
done