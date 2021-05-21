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





