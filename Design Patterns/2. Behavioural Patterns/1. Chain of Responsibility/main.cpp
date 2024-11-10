#include <iostream>
using namespace std;

class AbstractRequest
{
private:
    int requestCode;

public:
    AbstractRequest(int code)
    {
        cout << "yaha aaya6" << endl;

        this->requestCode = code;
    }

    // getter
    int getRequestCode()
    {
        return requestCode;
    }

    // destructor for memory management
};

class PressureIssueRequest : public AbstractRequest
{
public:
    // calling parent  class constructor. just like super in java
    PressureIssueRequest(int code) : AbstractRequest(code)
    {
        cout << "yaha aaya5" << endl;
    }
};

class EngineIssueRequest : public AbstractRequest
{
    // calling parent  class constructor. just like super in java
public:
    EngineIssueRequest(int code) : AbstractRequest(code)
    {
        cout << "yaha aaya4" << endl;
    }
};

class AbstractHandler
{
private:
    AbstractHandler *nextHandler;

public:
    AbstractHandler(AbstractHandler *next)
    {
        cout << "yaha aaya3" << endl;

        this->nextHandler = next;
    }

    virtual void handleRequest(AbstractRequest *request)
    {
        if (this->nextHandler != nullptr)
        {
            this->nextHandler->handleRequest(request);
        }
        else
        {
            cout << "handler ni h iss code ka" << endl;
        }
    }
};

class PressureIssueHandler : public AbstractHandler
{
public:
    static const int code = 303;
    PressureIssueHandler(AbstractHandler *successor) : AbstractHandler(successor)
    {
        cout << "yaha aaya2" << endl;
    }

    void handleRequest(AbstractRequest *request)
    {
        if (request->getRequestCode() == code)
        {
            cout << "Pressure handler is handling the request";
        }
        else
        {
            AbstractHandler::handleRequest(request);
        }
    }
};

class EngineIssueHandler : public AbstractHandler
{
public:
    static const int code = 302;
    EngineIssueHandler(AbstractHandler *successor) : AbstractHandler(successor)
    {
        cout << "yaha aaya1" << endl;
    }

    void handleRequest(AbstractRequest *request)
    {
        if (request->getRequestCode() == code)
        {
            cout << "EngineIssueHandler is handling the request";
        }
        else
        {
            AbstractHandler::handleRequest(request);
        }
    }
};

int main()
{
    // create the chain
    AbstractHandler *pressureHandler = new PressureIssueHandler(NULL);
    AbstractHandler *engineHandler = new EngineIssueHandler(pressureHandler);

    // create the request
    AbstractRequest *pressureRequest = new PressureIssueRequest(303);

    engineHandler->handleRequest(pressureRequest);
    return 0;
}
