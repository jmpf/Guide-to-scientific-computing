#include <iostream>
#include <fstream>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <mpi.h>
int main(int argc, char* argv[]){
MPI::Init(argc, argv); { //Begin from Chapter11.tex line 221
   int tag = 30;
   if (MPI::COMM_WORLD.Get_rank() == 0)
   {
      //Specific send code for process 0
      double send_buffer[2] = {100.0, 200.0};
      MPI::COMM_WORLD.Send(send_buffer, 2, 
                           MPI::DOUBLE, 1, tag);
   }
   if (MPI::COMM_WORLD.Get_rank() == 1)
   {
      //Specific receive code for process 1
      double recv_buffer[2] = {0.0, 0.0};
      MPI::COMM_WORLD.Recv(recv_buffer, 2, MPI::DOUBLE, 
                           MPI::ANY_SOURCE, MPI::ANY_TAG);
      std::cout << recv_buffer[0] << "\n";
      std::cout << recv_buffer[1] << "\n";
   }
 } //End from Chapter11.tex line 221
 { //Begin from Chapter11.tex line 296
   std::cout << "Processes may arrive at any time\n";
   std::cout.flush();
   MPI::COMM_WORLD.Barrier();
   std::cout << "All processes continue together\n";
   std::cout.flush();
 } //End from Chapter11.tex line 296
 { //Begin from Chapter11.tex line 360
   int tag = 30;
   int rank = MPI::COMM_WORLD.Get_rank();
   int num_procs = MPI::COMM_WORLD.Get_size();
   // left_rank is rank-1
   // Note modular arithmetic, so that 0 has
   // neighbour num_procs-1
   int left_rank = (rank-1+num_procs)%num_procs;
   int right_rank = (rank+1)%num_procs;
   int recv_data;
   // Communicate in a ring ...->0->1->2...
   MPI::COMM_WORLD.Sendrecv(&rank, 1, MPI::INT, 
                            right_rank, tag,
                            &recv_data, 1, MPI::INT,
                            left_rank, tag);
   std::cout << "Process " << rank << " received from "
             << recv_data << "\n";
 } //End from Chapter11.tex line 360
 { //Begin from Chapter11.tex line 398
   int tag = 30;
   int rank = MPI::COMM_WORLD.Get_rank();
   int num_procs = MPI::COMM_WORLD.Get_size();
   int right_rank = rank+1;
   // Top-most sends nowhere
   if (rank == num_procs - 1)
   {
      right_rank = MPI::PROC_NULL;
   }
   int left_rank = rank-1;
   // Bottom-most receives nothing
   if (rank == 0)
   {
      left_rank = MPI::PROC_NULL;
   }
   int recv_data = 999; //This will be unchanged on proc 0
   // Communicate 0->1->2... Final process sends nowhere
   MPI::COMM_WORLD.Sendrecv(&rank, 1, MPI::INT, 
                            right_rank, tag,
                            &recv_data, 1, MPI::INT,
                            left_rank, MPI::ANY_TAG);
   std::cout << "Process " << rank << " received from "
             << recv_data << "\n";
 } //End from Chapter11.tex line 398
 { //Begin from Chapter11.tex line 446
   int dice[3] = {0, 0, 0};
   //Proc 0 sets the dice (#sides)
   if (MPI::COMM_WORLD.Get_rank() == 0)
   {
      for (int i=0; i<3; i++)
      {
         dice[i] = (rand()%6)+1;
      }
   }
   //Proc 0 broadcasts
   MPI::COMM_WORLD.Bcast(dice, 3, MPI::INT, 0);
   //Every process adds their rank to dice[0]
   dice[0] += MPI::COMM_WORLD.Get_rank();
   //Reduce the first value to get the maximum
   int max;
   MPI::COMM_WORLD.Reduce(dice, &max, 1, 
                          MPI::INT, MPI::MAX, 0);
   //On Proc 0: max = dice[0]+MPI::COMM_WORLD.Get_size()-1
 } //End from Chapter11.tex line 446
 { //Begin from Chapter11.tex line 842
   int tag = 30;
   if (MPI::COMM_WORLD.Get_rank() == 0)
   {
      //Specific send code for process 0
      int send_buffer[2] = {100, 200};
      MPI::COMM_WORLD.Send(send_buffer, 2, 
                           MPI::INT, 1, tag);
   }
   if (MPI::COMM_WORLD.Get_rank() == 1)
   {
      //Specific receive code for process 1
      double recv_buffer[2] = {0.0, 0.0};
      MPI::COMM_WORLD.Recv(recv_buffer, 2, MPI::DOUBLE, 
                           MPI::ANY_SOURCE, MPI::ANY_TAG);
      std::cout << recv_buffer[0] << "\n";
      std::cout << recv_buffer[1] << "\n";
   }
 } //End from Chapter11.tex line 842
MPI::Finalize();
}//Match main
