#include <stdio.h>

int main() {
    FILE *fp = fopen("data.bin", "r");

    int nums[4];

    fread(nums, sizeof(int), 4, fp);

    printf("%d %d %d\n",
           nums[0], nums[1], nums[2]);

    fclose(fp);
}
