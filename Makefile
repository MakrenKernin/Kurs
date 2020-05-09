all: 100MATCHES.c
        gcc 100MATCHES.c -o gtk `pkg-config --cflags --libs gtk+-3.0`
