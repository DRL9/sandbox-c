

- 编译成汇编 `gcc -S main.c`
- 编译成指定的汇编语言 `gcc -S -march=native main.c`
- 编译成 *risc-v* `riscv64-unknown-elf-gcc -S source.c -o target.riscv`
- `xxd` 查看二进制文件