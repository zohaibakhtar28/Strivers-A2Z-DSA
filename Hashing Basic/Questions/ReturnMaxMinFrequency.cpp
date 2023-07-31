vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int>mpp;
    for(int i =0; i<v.size(); i++)
    {
        mpp[v[i]]++;
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int ans1, ans2;
    for(auto it : mpp)
    {
        if (it.second>max)
        {
            max = it.second;
            ans1 = it.first;
        }

        if(it.second<min)
        {
            min = it.second;
            ans2 = it.first;
        }
    }

    vector<int> result;
    result.push_back(ans1);
    result.push_back(ans2);
    return result;
    
}