SRCS = src/main.c src/logging.c
HDRS = src/logging.h

linux: ${SRCS} ${HDRS}
	gcc -o run ${SRCS}

windows: ${SRCS} ${HDRS}
	x86_64-w64-mingw32-gcc -o run.exe -DWINDOWS ${SRCS}
