#include "triangle.h"

int main() {
	point A, B, C;
	point* p_A = &A, * p_B = &B, * p_C = &C;
	segment AB, BC, CA;
	segment* p_AB = &AB, * p_BC = &BC, * p_CA = &CA;
	angle ABC, BCA, CAB;
	angle* p_ABC = &ABC, * p_BCA = &BCA, * p_CAB = &CAB;
	triangle Triangle_test;
	triangle* p_Triangle = &Triangle_test;
	pts_init(p_A, p_B, p_C);
	affichage_information_points(p_A, p_B, p_C);
	segment_init(p_AB, p_BC, p_CA, p_A, p_B, p_C);
	affichage_information_segments(p_AB, p_BC, p_CA);
	angle_init(p_AB, p_BC, p_CA, p_ABC, p_BCA, p_CAB);
	affiche_information_angles(p_ABC, p_BCA, p_CAB);
	affiche_infos_triangle(p_AB, p_BC, p_CA, p_ABC, p_BCA, p_CAB, p_Triangle);
}