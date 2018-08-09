#include <Eigen/Dense>
#include "ekf.h"

// This file is auto-generated by ekf/codegen.py. DO NOT EDIT.

using Eigen::VectorXf;
using Eigen::MatrixXf;

#define Min(x, y) fminf(x, y)
#define Max(x, y) fmaxf(x, y)

static inline float Heaviside(float x) {
  return x < 0 ? 0 : 1;
}

static inline float DiracDelta(float x) {
  return x == 0;
}

EKF::EKF() : x_(3), P_(3, 3) {
  Reset();
}


void EKF::Reset() {
  x_ << 0.0,
        0.0,
        0.0;
  P_.setIdentity();
  P_.diagonal() << 0.0100000,
    0.0100000,
    0.0100000;
}

void EKF::Predict(float Delta_t, float u_x, float u_theta) {
  float theta = x_[2];

  float tmp0 = Delta_t*u_theta;
  float tmp1 = theta + (1.0L/2.0L)*tmp0;
  float tmp2 = sin(tmp1);
  float tmp3 = tmp2*u_x;
  float tmp4 = cos(tmp1);
  float tmp5 = tmp4*u_x;
  float tmp6 = 0.25*u_theta;
  float tmp7 = pow(tmp2, 2);
  float tmp8 = 200*u_x;
  float tmp9 = pow(tmp4, 2);
  float tmp10 = -1.0L/2.0L*(tmp6 - tmp8)*sin(2*theta + tmp0);

  MatrixXf F(3, 3);
  F.setIdentity();
  F(0, 2) += -tmp3;
  F(1, 2) += tmp5;

  VectorXf Q(3);
  Q << pow(tmp6*tmp7 + tmp8*tmp9, 2), pow(tmp10, 2), 0, pow(tmp10, 2), pow(tmp6*tmp9 + tmp7*tmp8, 2), 0, 0, 0, 0.000400000000000000;
  x_[0] += tmp5;
  x_[1] += tmp3;
  x_[2] += tmp0;

  P_ = F * P_ * F.transpose();
  P_.diagonal() += Delta_t * Q;
}

bool EKF::UpdateLm_bearing(float l_px, float l_x, float l_y, Eigen::MatrixXf Rk) {
  float p_x = x_[0];
  float p_y = x_[1];
  float theta = x_[2];
  float tmp0 = cos(theta);
  float tmp1 = l_y - p_y;
  float tmp2 = tmp0*tmp1;
  float tmp3 = sin(theta);
  float tmp4 = l_x - p_x;
  float tmp5 = tmp3*tmp4;
  float tmp6 = tmp0*tmp4 + tmp1*tmp3;
  float tmp7 = -tmp2 + tmp5;
  float tmp8 = 1.0/(pow(tmp6, 2) + pow(tmp7, 2));
  float tmp9 = tmp3*tmp6;
  float tmp10 = tmp0*tmp7;
  float tmp11 = tmp8*(tmp0*tmp6 + tmp3*tmp7);


  VectorXf yk(1);
  yk << l_px - atan2(tmp2 - tmp5, tmp6);

  MatrixXf Hk(1, 3);
  Hk << tmp8*(-tmp10 + tmp9), -tmp11, -1;
  MatrixXf Mk(1, 3);
  Mk << 1, tmp8*(tmp10 - tmp9), tmp11;
  Rk = Mk * Rk * Mk.transpose();

  Eigen::MatrixXf S = Hk * P_ * Hk.transpose() + Rk;
  MatrixXf K = P_ * Hk.transpose() * S.inverse();

  x_.noalias() += K * yk;
  P_ = (MatrixXf::Identity(3, 3) - K*Hk) * P_;
  return true;
}

