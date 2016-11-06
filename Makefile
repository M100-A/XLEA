
OBJS= main.o futils.o mutils.o mdialog.o gamelogiccommon.o\
gamelogic00.o gamelogic01.o gamelogic02.o gamelogic03.o\
gamelogic04.o gamelogic05.o gamelogic06.o gamelogic07.o\
savescreen.o statefile.o
CFLAGS=
CC= gcc
INCLUDES=
LIBS= -lcurses

XLEA: ${OBJS}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

main.o: main.c common.h gamelogic.h
	${CC} ${CFLAGS} -c main.c

futils.o: futils.c common.h gamelogic.h
	${CC} ${CFLAGS} -c futils.c

mutils.o: mutils.c common.h gamelogic.h
	${CC} ${CFLAGS} -c mutils.c

mdialog.o: mdialog.c common.h gamelogic.h
	${CC} ${CFLAGS} -c mdialog.c

gamelogiccommon.o: gamelogiccommon.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogiccommon.c

gamelogic00.o: gamelogic00.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic00.c

gamelogic01.o: gamelogic01.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic01.c

gamelogic02.o: gamelogic02.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic02.c

gamelogic03.o: gamelogic03.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic03.c

gamelogic04.o: gamelogic04.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic04.c

gamelogic05.o: gamelogic05.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic05.c

gamelogic06.o: gamelogic06.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic06.c

gamelogic07.o: gamelogic07.c common.h gamelogic.h
	${CC} ${CFLAGS} -c gamelogic07.c

savescreen.o: savescreen.c common.h gamelogic.h
	${CC} ${CFLAGS} -c savescreen.c

statefile.o: statefile.c common.h gamelogic.h
	${CC} ${CFLAGS} -c statefile.c


