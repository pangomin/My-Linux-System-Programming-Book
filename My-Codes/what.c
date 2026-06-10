 #include <stdio.h>

void inc_count(int *count_ptr)

{

    (*count_ptr)++;

}

int main()

{

int count = 0;    /* number of times through */

    while (count < 10) {

        inc_count(&count); /********* `count_ptr` now _points to_ the real `count` variable in `main`. ***********/
printf("d: %d\n %p\n", count, &count);

    }
    return (0);
}
