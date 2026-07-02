student:main.o student_add.o student_show.o student_delete.o student_modify.o student_save.o student_sort.o student_reverse.o student_load.o
	cc main.c student_add.c student_show.c student_delete.c student_modify.c student_save.c student_sort.c student_reverse.c student_load.c -o student
main.o:main.c 
	cc -c main.c 
student_add.o:student_add.c
	cc -c student_add.c
student_show.o:student_show.c
	cc -c student_show.c
student_delete.o:student_delete.c
	cc -c student_delete.c
student_modify.o:student_modify.c
	cc -c student_modify.c
student_save.o:student_save.c
	cc -c student_save.c
student_sort.o:student_sort.c
	cc -c student_sort.c
student_reverse.o:student_reverse.c
	cc -c student_reverse.c
student_load.o:student_load.c
	cc -c student_load.c

