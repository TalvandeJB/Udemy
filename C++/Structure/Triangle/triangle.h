#ifndef  TRIANGLE_H
#define TRIANGLE_H


#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


using namespace std;

typedef struct Point {
	int x;
	int y;
	char nom;

}point;

typedef struct Segment {
	point p1;
	point p2;
	float longueur;
	string nom;
}segment;

typedef struct Angle {
	float valeur;
	string nom;
}angle;

typedef struct Triangle {
	float perimetre;
	float aire;
	string type;
}triangle;

float perimetre(Segment* s1, Segment* s2, Segment* s3);
float aire_triangle(Segment* s1, Segment* s2, angle* A);
void pts_init(point* A, point* B, point* C);
float longueur_segment(point* A, point* B);
void segment_init(segment* AB, segment* BC, segment* CA, point* A, point* B, point* C);

void angle_init(segment* AB, segment* BC, segment* CA, angle* ABC, angle* BCA, angle* CAB);
void affichage_information_points(point* A, point* B, point* C);
void affichage_information_segments(segment* AB, segment* BC, segment* CA);

void affiche_information_angles(angle* ABC, angle* BCA, angle* CAB);

void affiche_infos_triangle(segment* s1, segment* s2, segment* s3, angle* ABC, angle* BCA, angle* CAB, triangle* T);

#endif