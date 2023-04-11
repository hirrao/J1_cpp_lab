#include "class.h"
using Football::FootBallTeam;
using namespace std;
FootBallTeam::FootBallTeam()
{
    tall=0;
    name=" ";
}

void FootBallTeam::add(vector<FootBallTeam> &vec)
{
    cin>>name;
    if(name=="end")
    {
        throw name;
        return;
    }
    else
    {
        cin>>tall;
        vec.push_back(*this);
        return;
    }
}