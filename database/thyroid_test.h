#ifndef __THYROID_TEST__
#define __THYROID_TEST__

#include <stdint.h>


uint8_t num_data = 100;
uint8_t num_input = 21;
uint8_t num_output = 3;

#pragma PERSISTENT(input) // Place data in FRAM
fann_type input [100][21] = {
    {0.720000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000030, 0.049000, 0.192000, 0.109000, 0.176000},
    {0.720000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001000, 0.016000, 0.125000, 0.095000, 0.132000},
    {0.640000, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0.000560, 0.018000, 0.090000, 0.079000, 0.114000},
    {0.550000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002400, 0.023000, 0.104000, 0.103000, 0.101000},
    {0.170000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002900, 0.025000, 0.110000, 0.091000, 0.121000},
    {0.460000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002200, 0.024000, 0.116000, 0.080000, 0.145000},
    {0.520000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002900, 0.020100, 0.138000, 0.124000, 0.111000},
    {0.510000, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000730, 0.020100, 0.110000, 0.085000, 0.129000},
    {0.350000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.001500, 0.022000, 0.098000, 0.114000, 0.086000},
    {0.250000, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0.000100, 0.017000, 0.092000, 0.089000, 0.103000},
    {0.470000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003100, 0.024000, 0.093000, 0.110000, 0.085000},
    {0.660000, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0.004690, 0.013000, 0.145000, 0.096000, 0.150720},
    {0.390000, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002320, 0.020100, 0.118000, 0.071000, 0.166000},
    {0.560000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.015000, 0.020800, 0.133000, 0.097000, 0.137000},
    {0.360000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003200, 0.020000, 0.107000, 0.084000, 0.127000},
    {0.350000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000460, 0.020600, 0.077000, 0.067000, 0.115000},
    {0.290000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000700, 0.020800, 0.110000, 0.095000, 0.116000},
    {0.260000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001600, 0.020800, 0.140000, 0.104000, 0.132000},
    {0.870000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003400, 0.014000, 0.111000, 0.126000, 0.088000},
    {0.700000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006200, 0.018000, 0.124000, 0.111000, 0.112000},
    {0.590000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000040, 0.025000, 0.161000, 0.083000, 0.195000},
    {0.230000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001600, 0.014000, 0.076000, 0.083000, 0.091000},
    {0.390000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001300, 0.012000, 0.058000, 0.084000, 0.068000},
    {0.240000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000920, 0.025000, 0.099000, 0.097000, 0.102000},
    {0.540000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0.000850, 0.013000, 0.102000, 0.091000, 0.113000},
    {0.750000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004900, 0.019000, 0.122000, 0.095000, 0.129000},
    {0.590000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0.000050, 0.036000, 0.094000, 0.102000, 0.092000},
    {0.320000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003100, 0.023000, 0.076000, 0.086000, 0.088000},
    {0.330000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.001890, 0.023000, 0.110000, 0.101000, 0.109000},
    {0.380000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000800, 0.020100, 0.091000, 0.104000, 0.088000},
    {0.580000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0.002700, 0.014000, 0.120000, 0.085000, 0.141000},
    {0.390000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001400, 0.029000, 0.097000, 0.103000, 0.094000},
    {0.840000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.034000, 0.007000, 0.052000, 0.111000, 0.047000},
    {0.560000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001200, 0.016000, 0.119000, 0.104000, 0.113000},
    {0.210000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001890, 0.020600, 0.111180, 0.099000, 0.112070},
    {0.340000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001500, 0.020100, 0.113290, 0.096000, 0.117760},
    {0.680000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001200, 0.024000, 0.111000, 0.091000, 0.122000},
    {0.530000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000020, 0.020100, 0.113290, 0.096000, 0.117760},
    {0.650000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002000, 0.009000, 0.112000, 0.094000, 0.119000},
    {0.400000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002080, 0.020100, 0.081000, 0.078000, 0.104000},
    {0.720000, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001890, 0.020600, 0.114000, 0.111000, 0.102000},
    {0.290000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002800, 0.018000, 0.099000, 0.099000, 0.099790},
    {0.390000, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0.003600, 0.020600, 0.092000, 0.109000, 0.084000},
    {0.460000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002400, 0.023000, 0.099000, 0.104000, 0.091000},
    {0.300000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001890, 0.020600, 0.111180, 0.099000, 0.112070},
    {0.700000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002000, 0.022000, 0.133000, 0.095000, 0.140000},
    {0.830000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001200, 0.016000, 0.100000, 0.089000, 0.112000},
    {0.540000, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000150, 0.020100, 0.127000, 0.089000, 0.143000},
    {0.560000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000030, 0.064000, 0.191000, 0.097000, 0.197000},
    {0.400000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001100, 0.020100, 0.139000, 0.096000, 0.144490},
    {0.300000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002500, 0.014000, 0.077000, 0.070000, 0.110000},
    {0.640000, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001700, 0.020100, 0.119000, 0.101000, 0.119000},
    {0.690000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002300, 0.020100, 0.111000, 0.132000, 0.084000},
    {0.800000, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004600, 0.018000, 0.120000, 0.104000, 0.116000},
    {0.640000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0.000470, 0.024000, 0.092000, 0.072000, 0.128000},
    {0.340000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.082000, 0.002000, 0.005800, 0.103000, 0.005580},
    {0.300000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001200, 0.020100, 0.113000, 0.112000, 0.101000},
    {0.580000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000200, 0.020800, 0.106000, 0.094000, 0.113000},
    {0.620000, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.012000, 0.015000, 0.105000, 0.086000, 0.122000},
    {0.650000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.000320, 0.027000, 0.096000, 0.140000, 0.069000},
    {0.220000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001890, 0.020600, 0.111180, 0.099000, 0.112070},
    {0.470000, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001900, 0.017000, 0.109000, 0.089000, 0.123000},
    {0.530000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000330, 0.004000, 0.083000, 0.054000, 0.154000},
    {0.260000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002080, 0.022000, 0.095000, 0.100000, 0.095000},
    {0.390000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002080, 0.020100, 0.162000, 0.119000, 0.136000},
    {0.490000, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000930, 0.020600, 0.074000, 0.087000, 0.085000},
    {0.720000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005400, 0.010000, 0.075000, 0.082000, 0.092000},
    {0.630000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.002900, 0.020100, 0.082000, 0.067000, 0.122000},
    {0.890000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003300, 0.022000, 0.105000, 0.094000, 0.112000},
    {0.340000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.000240, 0.027000, 0.117000, 0.108000, 0.108000},
    {0.180000, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0.001100, 0.020600, 0.147000, 0.095000, 0.154000},
    {0.310000, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.000440, 0.015000, 0.075000, 0.092000, 0.081000},
    {0.670000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0.001300, 0.023000, 0.097000, 0.109000, 0.088000},
    {0.150000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000700, 0.018000, 0.084000, 0.098000, 0.086000},
    {0.570000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0.000060, 0.041900, 0.235000, 0.110000, 0.214000},
    {0.410000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001800, 0.028000, 0.060000, 0.095000, 0.063000},
    {0.520000, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001890, 0.020600, 0.099000, 0.092000, 0.107000},
    {0.750000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001400, 0.009000, 0.094000, 0.074000, 0.127000},
    {0.540000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000020, 0.020100, 0.085000, 0.085000, 0.100000},
    {0.350000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.000010, 0.019000, 0.136000, 0.107000, 0.127000},
    {0.700000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001000, 0.020100, 0.123000, 0.085000, 0.145000},
    {0.610000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.007800, 0.017000, 0.072000, 0.093000, 0.077000},
    {0.710000, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001700, 0.023000, 0.154000, 0.114000, 0.135000},
    {0.690000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001800, 0.023000, 0.108000, 0.103000, 0.105000},
    {0.020000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006700, 0.009600, 0.033750, 0.103000, 0.032490},
    {0.360000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001300, 0.037000, 0.184000, 0.180000, 0.102000},
    {0.460000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002600, 0.020100, 0.101000, 0.104000, 0.097000},
    {0.220000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002400, 0.031000, 0.110000, 0.082000, 0.134000},
    {0.590000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000050, 0.020000, 0.118000, 0.092000, 0.129000},
    {0.520000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002200, 0.026000, 0.106000, 0.097000, 0.109000},
    {0.280000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000800, 0.038000, 0.193000, 0.193000, 0.100000},
    {0.320000, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000200, 0.017000, 0.085000, 0.084000, 0.101000},
    {0.680000, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001100, 0.018000, 0.089000, 0.083000, 0.105000},
    {0.340000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.001200, 0.030000, 0.095000, 0.134000, 0.071000},
    {0.580000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001890, 0.020600, 0.111180, 0.099000, 0.112070},
    {0.180000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001200, 0.024000, 0.074000, 0.116000, 0.063000},
    {0.140000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004100, 0.030000, 0.114000, 0.100000, 0.114000},
    {0.660000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0.000340, 0.020600, 0.095000, 0.099000, 0.095000},
    {0.380000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.000930, 0.020100, 0.107000, 0.104000, 0.101000},
    {0.240000, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0.001400, 0.023000, 0.073000, 0.109000, 0.067000}
};

#pragma PERSISTENT(output) // Place data in FRAM
fann_type output [100][3] = {
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {1, 0, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {1, 0, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 1},
    {1, 0, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 1}
};


#endif // __THYROID_TEST__
