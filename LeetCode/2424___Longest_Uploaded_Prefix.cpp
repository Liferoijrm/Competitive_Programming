#include <vector>
using namespace std;

class LUPrefix {
public:
    int prefix;
    vector<bool> videos;
    LUPrefix(int n) {
        prefix = 0;
        vector<bool> v(n+1, false);
        v[0] = true;
        videos = v;
    }
    
    void upload(int video) {
        int i = video;
        videos[i] = true;
        while(prefix < videos.size() && videos[prefix]){
            prefix++;
        }
        prefix--;
    }
    
    int longest() {
        return prefix;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */