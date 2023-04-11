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
    private:
    std::string name;
    int tall;
};
}