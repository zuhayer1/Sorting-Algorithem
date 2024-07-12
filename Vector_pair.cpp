
// first element increasing - second element decreaing
//global funciton
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.x != b.x)
        return (a.x < b.x);
    else
       return (a.y> b.y);
}
   
sort(v.begin(), v.end(), sortbyCond);
