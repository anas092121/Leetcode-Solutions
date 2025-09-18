class TaskManager {
public:
    priority_queue<pair<int,int>> pq;
    unordered_map<int,int> taskPriority;
    unordered_map<int,int> taskOwner;

    TaskManager(vector<vector<int>>& tasks) {
        for (auto &t : tasks) {
            int userId = t[0], taskId = t[1], priority = t[2];
            pq.push({priority, taskId});
            taskPriority[taskId] = priority;
            taskOwner[taskId] = userId;
        }
    }
    
    void add(int userId, int taskId, int priority) {
        pq.push({priority, taskId});
        taskPriority[taskId] = priority;
        taskOwner[taskId] = userId;
    }
    
    void edit(int taskId, int newPriority) {
        pq.push({newPriority, taskId});
        taskPriority[taskId] = newPriority;
    }
    
    void rmv(int taskId) {
        taskPriority[taskId] = -1;
    }
    
    int execTop() {
        while (!pq.empty()) {
            auto [priority, taskId] = pq.top();
            pq.pop();
            if (priority == taskPriority[taskId] && priority != -1) {
                taskPriority[taskId] = -1;
                return taskOwner[taskId];
            }
        }
        return -1;
    }
};
