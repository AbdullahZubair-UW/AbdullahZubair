#include <bits/stdc++.h>
using namespace std;

void prims_algorithm(int n, vector<int> vertices, map<int, pair<int, int> > edges, set<int> *V_T, vector< pair<int, int> > *E_T, int *min_weight){
	
	V_T->insert(vertices[0]);

	while(V_T->size() != n){
		pair<int, pair<int, int> >least_edge;
		least_edge.first = INT_MAX;
		int least_vertex;

		for(auto e : edges){
			if(V_T->count(e.second.first) == 1 && V_T->count(e.second.second) == 0){
				if(e.first <= least_edge.first){
					least_edge = e;
					least_vertex = e.second.second;
				}
			} else if(V_T->count(e.second.second) == 1 && V_T->count(e.second.first) == 0){
				if(e.first <= least_edge.first){
					least_edge = e;
					least_vertex = e.second.first;
				}
			}
		}

		V_T->insert(least_vertex);
		E_T->push_back(least_edge.second);
		*min_weight += least_edge.first;
	}

}

int main(){


	// Minimum spanning tree problem (MID 2 MATH 239 W2021)

	vector<int> vertices;
	vertices.push_back(1);
	vertices.push_back(2);
	vertices.push_back(3);
	vertices.push_back(5);
	vertices.push_back(6);
	vertices.push_back(5);
	vertices.push_back(6);
	vertices.push_back(7);
	vertices.push_back(8);
	vertices.push_back(9);
	vertices.push_back(10);
	vertices.push_back(11);
	vertices.push_back(12);
	vertices.push_back(13);
	vertices.push_back(14);
	vertices.push_back(15);
	vertices.push_back(16);
	vertices.push_back(17);
	vertices.push_back(18);
	vertices.push_back(19);
	vertices.push_back(20);
	vertices.push_back(21);
	vertices.push_back(22);
	vertices.push_back(23);
	vertices.push_back(24);


	map<int, pair<int, int> > edges;

	edges.insert(pair<int, pair<int, int> > (33, pair<int, int> (1,5)));
	edges.insert(pair<int, pair<int, int> > (14, pair<int, int> (1,2)));
	edges.insert(pair<int, pair<int, int> > (21, pair<int, int> (2,6)));
	edges.insert(pair<int, pair<int, int> > (6, pair<int, int> (5,6)));
	edges.insert(pair<int, pair<int, int> > (8, pair<int, int> (2,3)));
	edges.insert(pair<int, pair<int, int> > (11, pair<int, int> (6,7)));
	edges.insert(pair<int, pair<int, int> > (29, pair<int, int> (3,7)));
	edges.insert(pair<int, pair<int, int> > (23, pair<int, int> (3,4)));
	edges.insert(pair<int, pair<int, int> > (4, pair<int, int> (4,8)));
	edges.insert(pair<int, pair<int, int> > (37, pair<int, int> (7,8)));
	edges.insert(pair<int, pair<int, int> > (34, pair<int, int> (5,9)));
	edges.insert(pair<int, pair<int, int> > (10, pair<int, int> (6,10)));
	edges.insert(pair<int, pair<int, int> > (20, pair<int, int> (7,11)));
	edges.insert(pair<int, pair<int, int> > (36, pair<int, int> (8,12)));
	edges.insert(pair<int, pair<int, int> > (17, pair<int, int> (9,10)));
	edges.insert(pair<int, pair<int, int> > (19, pair<int, int> (10,11)));
	edges.insert(pair<int, pair<int, int> > (3, pair<int, int> (11,12)));
	edges.insert(pair<int, pair<int, int> > (15, pair<int, int> (9,13)));
	edges.insert(pair<int, pair<int, int> > (28, pair<int, int> (10,14)));
	edges.insert(pair<int, pair<int, int> > (31, pair<int, int> (11,15)));
	edges.insert(pair<int, pair<int, int> > (2, pair<int, int> (12,16)));
	edges.insert(pair<int, pair<int, int> > (13, pair<int, int> (13,14)));
	edges.insert(pair<int, pair<int, int> > (26, pair<int, int> (14,15)));
	edges.insert(pair<int, pair<int, int> > (22, pair<int, int> (15,16)));
	edges.insert(pair<int, pair<int, int> > (18, pair<int, int> (13,17)));
	edges.insert(pair<int, pair<int, int> > (24, pair<int, int> (14,18)));
	edges.insert(pair<int, pair<int, int> > (38, pair<int, int> (15,19)));
	edges.insert(pair<int, pair<int, int> > (32, pair<int, int> (16,20)));
	edges.insert(pair<int, pair<int, int> > (16, pair<int, int> (17,18)));
	edges.insert(pair<int, pair<int, int> > (9, pair<int, int> (18,19)));
	edges.insert(pair<int, pair<int, int> > (35, pair<int, int> (19,20)));
	edges.insert(pair<int, pair<int, int> > (25, pair<int, int> (17,21)));
	edges.insert(pair<int, pair<int, int> > (12, pair<int, int> (18,22)));
	edges.insert(pair<int, pair<int, int> > (7, pair<int, int> (19,23)));
	edges.insert(pair<int, pair<int, int> > (27, pair<int, int> (20,24)));
	edges.insert(pair<int, pair<int, int> > (39, pair<int, int> (21,22)));
	edges.insert(pair<int, pair<int, int> > (5, pair<int, int> (22,23)));
	edges.insert(pair<int, pair<int, int> > (30, pair<int, int> (23,24)));

	set<int> V_T;
	vector< pair<int, int> > E_T;
	int weight = 0;



	prims_algorithm(24, vertices, edges, &V_T, &E_T, &weight);


	assert(weight == 325); // Correct Minimum weight

}



