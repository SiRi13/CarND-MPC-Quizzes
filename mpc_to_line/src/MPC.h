#ifndef MPC_H
#define MPC_H

#include <Eigen/Core>
#include <vector>

using namespace std;

class MPC {
public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state.
  // Return the next state and actuations as a
  // vector.
  vector<double> Solve(Eigen::VectorXd x0, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
