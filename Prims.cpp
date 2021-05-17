#include <bits/stdc++.h>
using namespace std;

#define n_l '\n'
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]: "; cout << to_string(__VA_ARGS__) << endl
template <typename T, size_t N> int SIZE(const T (&t)[N]){ return N; } template<typename T> int SIZE(const T &t){ return t.size(); } 
string to_string(const string s, int x1=0, int x2=1e9){ return '"' + ((x1 < s.size()) ? s.substr(x1, x2-x1+1) : "") + '"'; }
 string to_string(const char* s) { return to_string((string) s); } string to_string(const bool b) { return (b ? "true" : "false"); } 
 string to_string(const char c){ return string({c}); } template<size_t N> string to_string(const bitset<N> &b, int x1=0, int x2=1e9){ string t = ""; 
 for(int __iii__ = min(x1,SIZE(b)),  __jjj__ = min(x2, SIZE(b)-1); __iii__ <= __jjj__; ++__iii__){ t += b[__iii__] + '0'; } 
  return '"' + t + '"'; } template <typename A, typename... C> string to_string(const A (&v), int x1=0, int x2=1e9, C... coords); 
int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(const pair<A, B> &p) 
{ l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } 
template <typename A, typename... C> string to_string(const A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; 
string tab(t_a_b_s, ' '); string res = ""; bool first = true; if(l_v_l_v_l == 0) res += n_l; res += tab + "["; x1 = min(x1, SIZE(v)), 
x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2-x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) 
{ if (!first) { res += ", "; } first = false; l_v_l_v_l++; if(e != l){ if(rnk > 1) { res += n_l; t_a_b_s = l_v_l_v_l; }; } else{ t_a_b_s = 0; } 
res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if(l_v_l_v_l == 0) res += n_l; return res; } void dbgm(){;} template<typename Heads, 
typename... Tails> void dbgm(Heads H, Tails... T){ cout << to_string(H) << " | "; dbgm(T...); } 
#define dbgm(...) cout << "[" << #__VA_ARGS__ << "]: "; dbgm(__VA_ARGS__); cout << endl

void prims_algorithm(int n, vector<int> vertices, map<int, pair<int, int> > edges){
		
	vector<int> vertices_mintree(n);
	vector< pair<int, int> > edges_mintree;
	
	int min_sum = 0;
	vector<int> induced;
	induced.push_back(vertices[0]);

	while(true){
		int least_weight = INT_MAX;
		pair<int, int> least_edge;
		int least_vertex;
		vector<int> cut;

		for(auto curr : edges){
			for(auto vertex : induced){
				if(curr.second.first == vertex && curr.second.second != vertex){
					if(curr.first <= least_weight){
						least_edge = curr.second;
						least_weight = curr.first;
						least_vertex = curr.second.first;
						cut.push_back(curr.second.first);
					}
				} else if(curr.second.first != vertex && curr.second.second == vertex){
					if(curr.first <= least_weight){
						least_edge = curr.second;
						least_weight = curr.first;
						least_vertex = curr.second.first;
						cut.push_back(curr.second.second);
					
					}
				}


			}
		}

		if(cut.empty()) break;
		else{
			vertices_mintree.push_back(least_vertex);
			edges_mintree.push_back(least_edge);
		}
	}

		for(auto x : vertices_mintree){
			cout << x <<  " ";
		}
		for(auto x : edges_mintree){
			cout << x.first << " " << x.second << endl;
		}




}



int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0 ; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}

	map<int, pair<int, int> > edges;
	


}


