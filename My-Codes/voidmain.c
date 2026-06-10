#include <unistd.h>

void __start(void) {
    const char msg[] = "n\n";
    write(1, msg, 2);
    __exit(0);
}
