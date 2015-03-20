#include <stdio.h>

double calculate_cost(double floor_area, double cpt, double tile_area);

int main(int argc, char *argv[])
{
    double cpt;
    double floor_length;
    double floor_width;
    double tile_side;

    printf("Enter floor width\n");
    if (scanf("%lf%*c", &floor_width) == 1) {
        printf("Enter floor length\n");
        if (scanf("%lf%*c", &floor_length) == 1) {
            printf("Enter cost per tile\n");
            if (scanf("%lf%*c", &cpt) == 1) {
                printf("Enter tile length\n");
                if (scanf("%lf%*c", &tile_side) == 1) {
                    double cost = calculate_cost(floor_length * floor_width, cpt, tile_side * tile_side);
                    printf("Total cost is: %.3lf\n", cost);
                }
            }
        }
    }
    return 0;
}

double calculate_cost(double floor_area, double cpt, double tile_area)
{
    int number_of_tiles = floor_area / tile_area;
    if ((int)floor_area % (int) tile_area != 0) {
        number_of_tiles += 1;
    }
    return number_of_tiles * cpt;
}
