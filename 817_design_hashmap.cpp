class MyHashMap {
public:
    vector<int> hashMap;
    MyHashMap() {
        hashMap = vector<int>(1000001,-1);
    }
    
    void put(int key, int value) {
        hashMap[key]=value;
    }
    
    int get(int key) {
        return hashMap[key];
    }
    
    void remove(int key) {
        hashMap[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */