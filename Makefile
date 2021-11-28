##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Lib Makefile
##

CTYPE_NAME		=	y_ctype.a
EPITECH_NAME	=	y_epitech.a
PUBLIB_NAME		=	y_publib.a
STDIO_NAME		=	y_stdio.a
STDLIB_NAME		=	y_stdlib.a
STRING_NAME		=	y_string.a
YOYO_NAME		=	y_yoyolib.a

SRCS_CTYPE		=	$(wildcard lib_utility/ctype_h/*.c)
OBJS_CTYPE		=	${SRCS_CTYPE:.c=.o}

SRCS_EPITECH	=	$(wildcard lib_utility/epitech_h/math/*.c)
SRCS_EPITECH	+=	$(wildcard lib_utility/epitech_h/utils/*.c)
SRCS_EPITECH	+=	$(wildcard lib_utility/datastruct_h/list/*.c)
OBJS_EPITECH	=	${SRCS_EPITECH:.c=.o}

SRCS_PUBLIB		=	$(wildcard lib_utility/publib_h/*.c)
OBJS_PUBLIB		=	${SRCS_PUBLIB:.c=.o}

SRCS_STDIO		=	$(wildcard lib_utility/stdio_h/*.c)
SRCS_STDIO		+=	$(wildcard lib_utility/stdio_h/printf/*.c)
OBJS_STDIO		=	${SRCS_STDIO:.c=.o}

SRCS_STDLIB		=	$(wildcard lib_utility/stdlib_h/*.c)
OBJS_STDLIB		=	${SRCS_STDLIB:.c=.o}

SRCS_STRING		=	$(wildcard lib_utility/string_h/*.c)
OBJS_STRING		=	${SRCS_STRING:.c=.o}

HEADER			=	./include

CC				=	gcc

CFLAGS			=	-Wall -Wextra
CFLAGS			+=	-ggdb3
CFLAGS			+=	-O3
CFLAGS			+=	-fno-tree-loop-distribute-patterns
CFLAGS			+=	-fdata-sections -ffunction-sections
CFLAGS			+=	-Wl,--gc-sections


all:	${CTYPE_NAME} ${EPITECH_NAME} ${PUBLIB_NAME} ${STDIO_NAME} ${STDLIB_NAME} ${STRING_NAME} yoyolib

${CTYPE_NAME}:	${OBJS_CTYPE}
			ar -rcs ${CTYPE_NAME} ${OBJS_CTYPE}

${EPITECH_NAME}:	${OBJS_EPITECH}
			ar -rcs ${EPITECH_NAME} ${OBJS_EPITECH}

${PUBLIB_NAME}:	${OBJS_PUBLIB}
			ar -rcs ${PUBLIB_NAME} ${OBJS_PUBLIB}

${STDIO_NAME}:	${OBJS_STDIO}
			ar -rcs ${STDIO_NAME} ${OBJS_STDIO}

${STDLIB_NAME}:	${OBJS_STDLIB}
			ar -rcs ${STDLIB_NAME} ${OBJS_STDLIB}

${STRING_NAME}:	${OBJS_STRING}
			ar -rcs ${STRING_NAME} ${OBJS_STRING}

yoyolib:
			ar -rcs ${YOYO_NAME} ${OBJS_CTYPE} ${OBJS_EPITECH} ${OBJS_PUBLIB} ${OBJS_STDIO} ${OBJS_STDLIB} ${OBJS_STRING}


%.o:%.c
			${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

clean:
			${RM} ${OBJS_CTYPE} ${OBJS_EPITECH} ${OBJS_PUBLIB} ${OBJS_STDIO} ${OBJS_STDLIB} ${OBJS_STRING}

fclean:		clean
			${RM} ${CTYPE_NAME} ${EPITECH_NAME} ${PUBLIB_NAME} ${STDIO_NAME} ${STDLIB_NAME} ${STRING_NAME} ${YOYO_NAME}

re:			fclean all

.PHONY: all clean fclean re
