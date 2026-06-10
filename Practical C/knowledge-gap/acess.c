#include <stdio.h>

int main() {
    struct s {
        struct s *s_p;
        int a;
    } svar;
    struct s *ss_p;

    ss_p = svar->*s_p;

    return(0);
}
