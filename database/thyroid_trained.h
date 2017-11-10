#ifndef __THYROID_TRAINED__
#define __THYROID_TRAINED__


// FANN_FLO_2.1

#define NUM_LAYERS                           3
#define LEARNING_RATE                        0.700000
#define CONNECTION_RATE                      1.000000
#define NETWORK_TYPE                         0
#define LEARNING_MOMENTUM                    0.400000
#define TRAINING_ALGORITHM                   0
#define TRAIN_ERROR_FUNCTION                 1
#define TRAIN_STOP_FUNCTION                  0
#define CASCADE_OUTPUT_CHANGE_FRACTION       0.010000
#define QUICKPROP_DECAY                      -0.000100
#define QUICKPROP_MU                         1.750000
#define RPROP_INCREASE_FACTOR                1.200000
#define RPROP_DECREASE_FACTOR                0.500000
#define RPROP_DELTA_MIN                      0.000000
#define RPROP_DELTA_MAX                      50.000000
#define RPROP_DELTA_ZERO                     0.100000
#define CASCADE_OUTPUT_STAGNATION_EPOCHS     12
#define CASCADE_CANDIDATE_CHANGE_FRACTION    0.010000
#define CASCADE_CANDIDATE_STAGNATION_EPOCHS  12
#define CASCADE_MAX_OUT_EPOCHS               150
#define CASCADE_MIN_OUT_EPOCHS               50
#define CASCADE_MAX_CAND_EPOCHS              150
#define CASCADE_MIN_CAND_EPOCHS              50
#define CASCADE_NUM_CANDIDATE_GROUPS         2
#define BIT_FAIL_LIMIT                       3.49999994039535522461e-01
#define CASCADE_CANDIDATE_LIMIT              1.00000000000000000000e+03
#define CASCADE_WEIGHT_MULTIPLIER            4.00000005960464477539e-01
#define CASCADE_ACTIVATION_FUNCTIONS_COUNT   10
#define CASCADE_ACTIVATION_FUNCTION_1        3
#define CASCADE_ACTIVATION_FUNCTION_2        5
#define CASCADE_ACTIVATION_FUNCTION_3        7
#define CASCADE_ACTIVATION_FUNCTION_4        8
#define CASCADE_ACTIVATION_FUNCTION_5        10
#define CASCADE_ACTIVATION_FUNCTION_6        11
#define CASCADE_ACTIVATION_FUNCTION_7        14
#define CASCADE_ACTIVATION_FUNCTION_8        15
#define CASCADE_ACTIVATION_FUNCTION_9        16
#define CASCADE_ACTIVATION_FUNCTION_10       17
#define CASCADE_ACTIVATION_STEEPNESSES_COUNT 4
#define CASCADE_ACTIVATION_STEEPNESS_1       2.50000000000000000000e-01
#define CASCADE_ACTIVATION_STEEPNESS_2       5.00000000000000000000e-01
#define CASCADE_ACTIVATION_STEEPNESS_3       7.50000000000000000000e-01
#define CASCADE_ACTIVATION_STEEPNESS_4       1.00000000000000000000e+00
#define LAYER_SIZE_1                         22
#define LAYER_SIZE_2                         2
#define LAYER_SIZE_3                         4
#define SCALE_INCLUDED                       0

static fann_type neurons[][3] = {
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {0, 0, 0.00000000000000000000e+00},
    {22, 4, 5.00000000000000000000e-01},
    {0, 0, 0.00000000000000000000e+00},
    {2, 4, 5.00000000000000000000e-01},
    {2, 4, 5.00000000000000000000e-01},
    {2, 4, 5.00000000000000000000e-01},
    {0, 0, 0.00000000000000000000e+00} 
};

static fann_type connections[][2] = {
    {0, 6.82420074939727783203e-01},
    {1, 4.02156203985214233398e-01},
    {2, 5.84381599426269531250e+01},
    {3, -3.78152541816234588623e-02},
    {4, 5.63440704345703125000e+00},
    {5, 7.14225649833679199219e-01},
    {6, 6.11834287643432617188e+00},
    {7, 2.42440128326416015625e+01},
    {8, 3.85480384826660156250e+01},
    {9, -1.20967052876949310303e-01},
    {10, 8.66855680942535400391e-02},
    {11, 6.30790770053863525391e-01},
    {12, 6.66789913177490234375e+00},
    {13, -6.72023832798004150391e-01},
    {14, 1.66716963052749633789e-01},
    {15, 6.10644757747650146484e-01},
    {16, -7.90793640136718750000e+02},
    {17, 6.92003479003906250000e+01},
    {18, -7.15934753417968750000e+00},
    {19, 1.12196111679077148438e+01},
    {20, 1.73352031707763671875e+01},
    {21, 1.29993572831153869629e-01},
    {22, -8.44969844818115234375e+00},
    {23, -1.12977325916290283203e+00},
    {22, -5.20646095275878906250e+00},
    {23, 1.46864879131317138672e+00},
    {22, 8.33252048492431640625e+00},
    {23, -2.99749064445495605469e+00} 
};

#endif // __THYROID_TRAINED__
