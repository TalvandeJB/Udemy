#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

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

float perimetre(Segment* s1, Segment* s2, Segment* s3) {
	float perimetre = s1->longueur + s2->longueur + s3->longueur;
	return perimetre;
}

float aire_triangle(Segment *s1, Segment *s2, angle *A) {
	float aire = s1->longueur * sin(A->valeur*M_PI/180)*s2->longueur*0.5;
	return aire;
}

void pts_init(point* A, point* B, point* C) {
	cout << "Coordonnees du point A:" << endl;
	cin >> A->x;
	cin >> A->y;
	cout << "Coordonnees du point B:" << endl;
	cin >> B->x;
	cin >> B->y;
	cout << "Coordonnees du point C:" << endl;
	cin >> C->x;
	cin >> C->y;
}

void affichage_information_points(point* A, point* B, point* C) {
	cout << "Cordonnees des points :" << endl;
	cout << "\tA(" << A->x << ":" << A->y<<")" << "\tB(" << B->x << ":" << B->y<<")" << "\tC(" << C->x << ":" << C->y<<")" << endl;
}

float longueur_segment(point* A, point* B) {
	float longueur = sqrt(pow(B->x - A->x, 2) + pow(B->y - A->y, 2));
	return longueur;
}

void segment_init(segment* AB, segment* BC, segment* CA,point* A, point* B, point* C) {
	AB->p1 = *A;
	AB->p2 = *B;
	AB->nom = "AB";
	AB->longueur = longueur_segment(&(AB->p1), &(AB->p2));
	BC->p1 = *B;
	BC->p2 = *C;
	BC->nom = "BC";
	BC->longueur = longueur_segment(&(BC->p1), &(BC->p2));
	CA->p1 = *C;
	CA->p2 = *A;
	CA->nom = "CA";
	CA->longueur = longueur_segment(&(CA->p1), &(CA->p2));
}

void angle_init(segment* AB, segment* BC, segment* CA, angle *ABC, angle *BCA, angle *CAB) {
	ABC->valeur = acos((pow(CA->longueur, 2) - pow(AB->longueur, 2) - pow(BC->longueur, 2)) / (-2 * BC->longueur * AB->longueur));
	ABC->valeur *= (180 / M_PI);
	ABC->nom = "ABC";
	CAB->valeur= acos((pow(BC->longueur, 2) - pow(CA->longueur, 2) - pow(AB->longueur, 2)) / (-2 * CA->longueur * AB->longueur));
	CAB->nom = "CAB";
	CAB->valeur *= (180 / M_PI);
	BCA->valeur= acos((pow(AB->longueur, 2) - pow(BC->longueur, 2) - pow(CA->longueur, 2)) / (-2 * BC->longueur * CA->longueur));
	BCA->nom = "BCA";
	BCA->valeur *= (180 / M_PI);

}

void affichage_information_segments(segment* AB, segment* BC, segment* CA) {
	cout << "Longueur des segments :" << endl;
	cout << "\t" << AB->nom << ":" << AB->longueur << " " << BC->nom << ":" << BC->longueur << " " << CA->nom << ":" << CA->longueur << endl;
}

void affiche_information_angles(angle* ABC, angle* BCA, angle* CAB) {
	cout << "Valeurs des angles du triangle :" << endl;
	cout << "\t" << ABC->nom << ":" << ABC->valeur << "\370 " << BCA->nom << ":" << BCA->valeur << "\370 " << CAB->nom << ":" << CAB->valeur <<"\370" << endl;
}

void affiche_infos_triangle(segment* s1, segment* s2, segment* s3, angle* ABC, angle* BCA, angle* CAB, triangle* T) {
	T->perimetre = perimetre(s1, s2, s3);
	T->aire=aire_triangle(s2, s3, BCA);
	cout << "Perimetre : " << T->perimetre << endl;
	cout << "Aire : " << T->aire << endl;
	if ((s1->longueur == s2->longueur) && (s2->longueur == s3->longueur)) {
		T->type = "Triangle Equilateral";
	}
	else if ((s1->longueur == s2->longueur) && (s2->longueur = !s3->longueur)) {
		T->type = "Triangle Isocele";
	}
	else if ((s2->longueur == s3->longueur) && (s3->longueur = !s1->longueur)) {
		T->type = "Triangle Isocele";
	}
	else if ((s3->longueur == s1->longueur) && (s1->longueur = !s2->longueur)) {
		T->type = "Triangle Isocele";
	}
	else if ((BCA->valeur==90) || (CAB->valeur == 90)|| (ABC->valeur == 90) ){
		T->type = "Triangle Rectangle";
	}
	cout << "Type : " << T->type << endl;
}


int main() {
	point A, B, C;
	point *p_A = &A, *p_B = &B, *p_C = &C;
	segment AB, BC, CA;
	segment* p_AB = &AB, * p_BC = &BC, * p_CA = &CA;
	angle ABC, BCA, CAB;
	angle* p_ABC=&ABC, * p_BCA=&BCA, * p_CAB=&CAB;
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