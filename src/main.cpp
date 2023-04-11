#include "main.h"
#include "class.h"
using Football::FootBallTeam;
using namespace std;
int main()
{
    vector<FootBallTeam> Team;
    while(1)
    {
        FootBallTeam team;
        try
        {
            team.add(Team);
        }
        catch(const string)
        {
            break;
        }
    }
    int n=Team.size();
    for(int a=0;a<n;++a)
    {
        for(int b=0;b<a;++b)
        {
            if(Team[a]<Team[b])
            {
                swap(Team[a],Team[b]);
            }
        }
    }
    for(auto i:Team)
    {
        cout<<i;
    }
    return 0;
}