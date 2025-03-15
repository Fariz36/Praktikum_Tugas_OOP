#include "Agent.hpp"
#include "SuperAgent.hpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
    SuperAgent agentX;
    Agent &agent = agentX;
    agent.setID(1337);
    agentX.setID(9999);
    agentX.print();
    return 0;
}
