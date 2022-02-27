// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int contributor_num, project_num;
//     cin >> contributor_num >> project_num;

//     string contributor_name; // not more than 20 characters
//     int skills_num;
//     cin >> contributor_name >> skills_num;

//     string skills_name;
//     int skills_level;
//     cin >> skills_name >> skills_level;

//     string project_name;
//     int project_days;
//     int scores_for_project;
//     int best_before;
//     int roles;
//     cin >> project_name >> project_days >> scores_for_project >> best_before >> roles;

//     string skill_for_project;
//     int skill_level_for_project;
//     cin >> skill_for_project >> skill_level_for_project;

// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int contributor_num, project_num;

    cin >> contributor_num >> project_num;
    map<string, vector<pair<string, int>>> m;
    for (int i = 0; i < contributor_num; i++)
    {
        string contributor_name;
        int skills_num;
        vector<pair<string, int>> v;
        cin >> contributor_name >> skills_num;
        for (int j = 0; j < skills_num; j++)
        {
            string skills_name;
            int skills_level;
            cin >> skills_name >> skills_level;
            v.push_back({skills_name, skills_level});
        }
        m[contributor_name] = v;
    }
    cout << contributor_num << " " << project_num << endl;
}