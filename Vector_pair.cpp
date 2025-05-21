
//First - INCR   < < < 
// Second - INCR  < < < 
sort(vp.begin(), vp.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
});


// first - INCR   < < < 
// second - DECR  > > > 
//global funciton
sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first == b.first)
            return a.second > b.second; // Second decreasing
        return a.first < b.first;       // First increasing
 });

// first - DECR > > > 
// second - INCr < < < 
sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first == b.first)
            return a.second < b.second; // Second increasing
        return a.first > b.first;       // First decreasing
});


// first - DEC > > > 
// second - DEC > > >
  sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first == b.first)
            return a.second > b.second; // Second decreasing
        return a.first > b.first;       // First decreasing
    });
