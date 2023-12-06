class RandomizedSet {
private:
std::unordered_map<int, int>mp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val) > 0 ) return false;
        mp[val] = val;
        return true;
    }
    
    bool remove(int val) {
        auto itr = mp.find(val);
        if(itr != mp.end()){
            mp.erase(itr);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        auto randomItr = std::next(mp.begin(), std::rand() %  mp.size());
        return randomItr->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
