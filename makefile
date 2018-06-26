default: bin/calendar

test: bin/cal_test
	bin/cal_test

bin/calendar: build/main.o build/isLeap.o build/year.o build/month.o build/week.o
	gcc -Wall -Werror build/main.o build/isLeap.o build/year.o build/month.o build/week.o -o bin/calendar

bin/cal_test: build/main_test.o build/isLeap.o
	gcc -Wall -Werror build/main_test.o build/isLeap.o -o bin/cal_test

build/main.o: src/main.c
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/isLeap.o: src/isLeap.c
	gcc -std=c99 -Wall -Werror -c src/isLeap.c -o build/isLeap.o

build/year.o: src/year.c
	gcc -std=c99 -Wall -Werror -c src/year.c -o build/year.o

build/month.o: src/month.c
	gcc -std=c99 -Wall -Werror -c src/month.c -o build/month.o

build/week.o: src/week.c
	gcc -std=c99 -Wall -Werror -c src/week.c -o build/week.o

build/main_test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/main_test.o

.PHONY : clean
clean:
	rm -rf build/*.o
