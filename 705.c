//设计哈希集合
#if 0
不使用任何内建的哈希表库设计一个哈希集合（HashSet）。

实现 MyHashSet 类：

void add(key) 向哈希集合中插入值 key 。
bool contains(key) 返回哈希集合中是否存在这个值 key 。
void remove(key) 将给定值 key 从哈希集合中删除。如果哈希集合中没有这个值，什么也不做。
 
示例：

输入：
["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
[[], [1], [2], [1], [3], [2], [2], [2], [2]]
输出：
[null, null, null, true, false, null, true, null, false]

解释：
MyHashSet myHashSet = new MyHashSet();
myHashSet.add(1);      // set = [1]
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(1); // 返回 True
myHashSet.contains(3); // 返回 False ，（未找到）
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(2); // 返回 True
myHashSet.remove(2);   // set = [1]
myHashSet.contains(2); // 返回 False ，（已移除）

提示：
0 <= key <= 10的6次方
最多调用 104 次 add、remove 和 contains
#endif

/*
* 1. 使用链式法添加对应key,如果一致的话，则不需要新加内容
* 2. 
*/
typedef struct {
    int key;
    MyHashSet *hashMap[1000000];
} MyHashSet;


MyHashSet* myHashSetCreate() {
    MyHashSet *hashObj = (MyHashSet *)calloc(1, sizeof(MyHashSet));
    if(hashObj) {
        
    } 
}

/* create node */
void myHashSetAdd(MyHashSet* obj, int key) {
    
}

void myHashSetRemove(MyHashSet* obj, int key) {
    
}

bool myHashSetContains(MyHashSet* obj, int key) {
    
}

void myHashSetFree(MyHashSet* obj) {
    if(obj) {
        free(obj);
        obj = NULL;
    }
}

/**
 * Your MyHashSet struct will be instantiated and called as such:
 * MyHashSet* obj = myHashSetCreate();
 * myHashSetAdd(obj, key);
 
 * myHashSetRemove(obj, key);
 
 * bool param_3 = myHashSetContains(obj, key);
 
 * myHashSetFree(obj);
*/

int main(int argc, char *argv[])
{
    MyHashSet *hashSet = myHashSetCreate();
    


    if(hashSet)
    {
        myHashSetFree(hashSet);
        hashSet = NULL;
    }
    return 0;
}