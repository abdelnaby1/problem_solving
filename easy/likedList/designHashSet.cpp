// class Node
// {
// public:
//     int val;
//     Node *next;
// };
class MyHashSet {
public:
    vector<list<int>>set;
        int size;
    MyHashSet() {
        size = 50;
        set.resize(size);
    }
    int hash(int key){
        return key % size;
    }
    void add(int key) {
        if(contains(key)) return;
        int index = hash(key);
        set[index].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int index = hash(key);
        set[index].erase(search(key));
    }
    list<int>::iterator search(int key){
        int index = key % size;
        return find(set[index].begin(),set[index].end(),key);
    }
    bool contains(int key) {
        int index = key % size;
        if(search(key) != set[index].end()) return true;
        return false;
    }
};
