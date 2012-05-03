TARGET=libcpresent.so.0
CC=clang
CFLAGS=-g -Wall -I../include -fvisibility=hidden
LDFLAGS=-fPIC -shared -Wl,-soname,libcpresent.so.0 -L/usr/local/lib -lsqlite3
SRCS=libcpresent.c
OBJS=libcpresent.o

${TARGET}: ${OBJS}
	${CC} ${LDFLAGS} -o ${TARGET} ${OBJS}

clean:
	rm -f ${OBJS} ${TARGET}
