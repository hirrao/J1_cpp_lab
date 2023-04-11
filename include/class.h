#include <vector>
#include <iostream>
#include <string>
namespace Football
{
class FootBallTeam
{
    public:
    FootBallTeam();
    void add(std::vector<FootBallTeam> &vec);
    friend std::ostream& operator<<(std::ostream& os, const FootBallTeam& team)
    {
        os << team.name << " " << team.tall << std::endl;
        return os;
    }
    friend bool operator<(const FootBallTeam& team1, const FootBallTeam& team2)
    {
        return team1.tall<team2.tall;
    }
    private:
    std::string name;
    int tall;
};
}