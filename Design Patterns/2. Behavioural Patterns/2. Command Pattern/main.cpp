#include <iostream>
using namespace std;

class Command
{
public:
    virtual void execute() = 0;
    // destructor pending
};

class BrakeMechanism
{
public:
    void applyBrake()
    {
        cout << "brake apply ho rhi h" << endl;
    }
};

class LiftAirSuspensionMechanism
{
public:
    void liftSuspension()
    {
        cout << "lift apply ho rhi h" << endl;
    }
};

class AirCommand : public Command
{
public:
    LiftAirSuspensionMechanism *airMechanism;

    AirCommand(LiftAirSuspensionMechanism *airMechanism)
    {
        this->airMechanism = airMechanism;
    }

    void execute()
    {
        airMechanism->liftSuspension();
    }
};

class BrakeCommand : public Command
{
public:
    BrakeMechanism *brakeMechanism;

    BrakeCommand(BrakeMechanism *brakeMechanism)
    {
        this->brakeMechanism = brakeMechanism;
    }

    void execute()
    {
        brakeMechanism->applyBrake();
    }
};

// class for invoker
class Panel
{
public:
    Command *cmds[5];
    Panel()
    {
    }

    void setCommand(int index, Command *cmd)
    {
        cmds[index] = cmd;
    }

    void applyBrake()
    {
        cmds[0]->execute();
    }
    void liftSuspension()
    {
        cmds[1]->execute();
    }
};

int main()
{
    BrakeMechanism *brakeMachanism = new BrakeMechanism();
    LiftAirSuspensionMechanism *airMechanism = new LiftAirSuspensionMechanism();

    BrakeCommand *brakeCommand = new BrakeCommand(brakeMachanism);
    AirCommand *airCommand = new AirCommand(airMechanism);

    Panel *panel = new Panel();

    panel->setCommand(0, brakeCommand);
    panel->setCommand(1, airCommand);

    panel->applyBrake();
    // panel->liftSuspension();
}