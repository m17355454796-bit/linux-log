CC=gcc
Bin=test.exe
Src=$(wildcard *.c)
Obj=$(patsubst %.c,%.o,$(Src))

.PHONY: all clean debug

all: $(Bin)

$(Bin): $(Obj)
	@echo "现在开始生成可执行程序..."
	@$(CC) -o $@ $^

%.o: %.c
	@echo "现在开始编译 $< ..."
	@$(CC) -c $< -o $@

clean:
	rm -f $(Obj) $(Bin)

debug:
	@echo "Src=$(Src)"
	@echo "Obj=$(Obj)"
	@echo "Bin=$(Bin)"
