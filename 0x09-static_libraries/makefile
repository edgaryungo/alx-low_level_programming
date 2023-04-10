object:
	gcc -c *.c
lib:
	ar -rc libmy.a *.o 

index:
	ranlib libmy.a
clear:
	rm *.o
	rm *.a
git:
	git add .
	git commit -m "$m"
	git push
