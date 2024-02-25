class RandomizedSet {
public:
    vector<int> numbers;
    unordered_map<int, int> num_to_index {};
    RandomizedSet() : numbers({}), num_to_index{} {}
    
    bool insert(int val) {
        if(this->num_to_index.find(val) == this->num_to_index.end()){
            this->numbers.push_back(val);
            this->num_to_index[val] = this->numbers.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(this->num_to_index.find(val) != this->num_to_index.end()){
            // copy data from back of vec and replace at this index
            auto it = this->num_to_index.find(val);
            this->numbers[it->second] = numbers.back();
            // remove original back off vector
            numbers.pop_back();

            // update new index of old back value
            this->num_to_index[this->numbers[it->second]] = it->second;

            // remove val from map
            this->num_to_index.erase(val);
            
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return numbers[rand()%numbers.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */