#ifndef FINITEDIFFERENCEGRIDHEADERDEF
#define FINITEDIFFERENCEGRIDHEADERDEF
#include <vector>
#include "Node.hpp"

class FiniteDifferenceGrid
{
public:
   // The boundary value class is able to
   // access the nodes
   friend class BvpOde;
private:
   std::vector<Node> mNodes;
public:
   FiniteDifferenceGrid(int numNodes, double xMin, 
                        double xMax);
};

#endif
//Code from Chapter12.tex line 582 save as FiniteDifferenceGrid.hpp
