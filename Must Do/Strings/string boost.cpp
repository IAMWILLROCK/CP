#define BOOST_STRING_ALGO_HPP
#include <boost/algorithm/string.hpp>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	boost::split(v, s, boost::is_any_of(" "));
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
}
