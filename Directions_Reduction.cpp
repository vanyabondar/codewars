using namespace std;
class DirReduction
{
public:
	static vector<string> dirReduc(vector<string> &a) {
		vector<string> rez;
		int i = 0;
		while (i < a.size()) {
			if (rez.size() == 0)
				rez.insert(rez.end(), a[i]);
			else if (((a[i] == "NORTH") && (rez[rez.size() - 1] == "SOUTH")) ||
				((a[i] == "SOUTH") && (rez[rez.size() - 1] == "NORTH")) ||
				((a[i] == "EAST") && (rez[rez.size() - 1] == "WEST")) ||
				((a[i] == "WEST") && (rez[rez.size() - 1] == "EAST")))
				rez.pop_back();
			else
				rez.insert(rez.end(), a[i]);
			i++;
		}
		return rez;
	}
};
