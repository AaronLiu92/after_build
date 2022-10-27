// tvm target: c -keys=cpu -link-params=0 -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_divide(float* placeholder, float* placeholder1, float* T_divide, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 80; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        if (((ax2_outer * 16) + ax2_inner) < 97) {
          int32_t cse_var_1 = (((ax0_ax1_fused * 97) + (ax2_outer * 16)) + ax2_inner);
          T_divide[cse_var_1] = (placeholder[cse_var_1] / placeholder1[ax0_ax1_fused]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_layout_transform(float* placeholder, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 96; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 320; ++ax3) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 320) + ax3);
      T_layout_trans[cse_var_1] = placeholder[cse_var_1];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_layout_transform_1(float* placeholder, float* T_layout_trans, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 352; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 160; ++ax3) {
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 160) + ax3)] = placeholder[(((((ax0_ax1_fused_ax2_fused >> 5) * 5120) + ((ax0_ax1_fused_ax2_fused & 7) * 640)) + (ax3 * 4)) + ((ax0_ax1_fused_ax2_fused & 31) >> 3))];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_layout_transform_2(float* placeholder, float* T_layout_trans, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 44; ++ax0_ax1_fused_ax2_fused) {
    T_layout_trans[ax0_ax1_fused_ax2_fused] = placeholder[ax0_ax1_fused_ax2_fused];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_layout_transform_3(float* placeholder, float* T_layout_trans, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 358; ++ax0_ax1_fused_ax2_fused) {
    T_layout_trans[ax0_ax1_fused_ax2_fused] = placeholder[ax0_ax1_fused_ax2_fused];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_max(float* placeholder, float* placeholder_red, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 80; ++ax0_ax1_fused_ax2_fused) {
    placeholder_red[ax0_ax1_fused_ax2_fused] = -3.402823e+38f;
    for (int32_t k2 = 0; k2 < 97; ++k2) {
      float _1 = placeholder_red[ax0_ax1_fused_ax2_fused];
      float _2 = placeholder[((ax0_ax1_fused_ax2_fused * 97) + k2)];
      placeholder_red[ax0_ax1_fused_ax2_fused] = ((_1) > (_2) ? (_1) : (_2));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_adaptive_avg_pool2d(float* placeholder, float* tensor, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* tensor_let = (&(global_workspace_55_var[720]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 179; ++ax0_ax1_fused_ax2_fused) {
    ((float*)tensor_let)[ax0_ax1_fused_ax2_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 160; ++rv1) {
        ((float*)tensor_let)[ax0_ax1_fused_ax2_fused] = (((float*)tensor_let)[ax0_ax1_fused_ax2_fused] + placeholder[(((ax0_ax1_fused_ax2_fused * 320) + (rv0 * 160)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 179; ++ax0_ax1_fused) {
    tensor[ax0_ax1_fused] = (((float*)tensor_let)[ax0_ax1_fused] * 3.125000e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_adaptive_avg_pool2d_1(float* placeholder, float* tensor, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* tensor_let = (&(global_workspace_69_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 179; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
      ((float*)tensor_let)[((ax0_ax1_fused_ax2_fused * 2) + ax4)] = 0.000000e+00f;
      for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 160; ++rv1) {
          int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 2) + ax4);
          ((float*)tensor_let)[cse_var_1] = (((float*)tensor_let)[cse_var_1] + placeholder[((((ax0_ax1_fused_ax2_fused * 640) + (rv0 * 320)) + (rv1 * 2)) + ax4)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 179; ++ax0_ax1_fused) {
    for (int32_t ax41 = 0; ax41 < 2; ++ax41) {
      int32_t cse_var_2 = ((ax0_ax1_fused * 2) + ax41);
      tensor[cse_var_2] = (((float*)tensor_let)[cse_var_2] * 3.125000e-03f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_4_var[2164096]));
  void* fused_constant_0_let = (&(global_const_workspace_4_var[2148000]));
  void* data_pad_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 99; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 321; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused % 33);
      ((float*)data_pad_let)[((i0_i1_fused_i2_fused * 321) + i3)] = (((1 <= cse_var_1) && (1 <= i3)) ? placeholder[(((((i0_i1_fused_i2_fused / 33) * 10240) + (cse_var_1 * 320)) + i3) - 321)] : 0.000000e+00f);
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 176; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[127120]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[127760]));
      ((float*)conv2d_NCHWc_global_let)[0] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[2] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[3] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[4] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[5] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[6] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[7] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[8] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[9] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[10] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[11] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[12] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[13] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[14] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[15] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[16] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[17] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[18] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[19] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 3; ++ic_outer) {
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            int32_t cse_var_3 = (((((ax0_ax1_fused_ax2_fused >> 4) * 27) + (ic_outer * 9)) + (kh * 3)) + kw);
            int32_t cse_var_2 = (((((ic_outer * 10593) + ((ax0_ax1_fused_ax2_fused & 15) * 642)) + (kh * 321)) + (ow_outer * 40)) + kw);
            ((float*)conv2d_NCHWc_global_let)[0] = (((float*)conv2d_NCHWc_global_let)[0] + (((float*)data_pad_let)[cse_var_2] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[1] = (((float*)conv2d_NCHWc_global_let)[1] + (((float*)data_pad_let)[(cse_var_2 + 2)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[2] = (((float*)conv2d_NCHWc_global_let)[2] + (((float*)data_pad_let)[(cse_var_2 + 4)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[3] = (((float*)conv2d_NCHWc_global_let)[3] + (((float*)data_pad_let)[(cse_var_2 + 6)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[4] = (((float*)conv2d_NCHWc_global_let)[4] + (((float*)data_pad_let)[(cse_var_2 + 8)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[5] = (((float*)conv2d_NCHWc_global_let)[5] + (((float*)data_pad_let)[(cse_var_2 + 10)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[6] = (((float*)conv2d_NCHWc_global_let)[6] + (((float*)data_pad_let)[(cse_var_2 + 12)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[7] = (((float*)conv2d_NCHWc_global_let)[7] + (((float*)data_pad_let)[(cse_var_2 + 14)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[8] = (((float*)conv2d_NCHWc_global_let)[8] + (((float*)data_pad_let)[(cse_var_2 + 16)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[9] = (((float*)conv2d_NCHWc_global_let)[9] + (((float*)data_pad_let)[(cse_var_2 + 18)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[10] = (((float*)conv2d_NCHWc_global_let)[10] + (((float*)data_pad_let)[(cse_var_2 + 20)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[11] = (((float*)conv2d_NCHWc_global_let)[11] + (((float*)data_pad_let)[(cse_var_2 + 22)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[12] = (((float*)conv2d_NCHWc_global_let)[12] + (((float*)data_pad_let)[(cse_var_2 + 24)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[13] = (((float*)conv2d_NCHWc_global_let)[13] + (((float*)data_pad_let)[(cse_var_2 + 26)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[14] = (((float*)conv2d_NCHWc_global_let)[14] + (((float*)data_pad_let)[(cse_var_2 + 28)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[15] = (((float*)conv2d_NCHWc_global_let)[15] + (((float*)data_pad_let)[(cse_var_2 + 30)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[16] = (((float*)conv2d_NCHWc_global_let)[16] + (((float*)data_pad_let)[(cse_var_2 + 32)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[17] = (((float*)conv2d_NCHWc_global_let)[17] + (((float*)data_pad_let)[(cse_var_2 + 34)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[18] = (((float*)conv2d_NCHWc_global_let)[18] + (((float*)data_pad_let)[(cse_var_2 + 36)] * ((float*)fused_constant_0_let)[cse_var_3]));
            ((float*)conv2d_NCHWc_global_let)[19] = (((float*)conv2d_NCHWc_global_let)[19] + (((float*)data_pad_let)[(cse_var_2 + 38)] * ((float*)fused_constant_0_let)[cse_var_3]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)conv2d_NCHWc_let)[((ow_outer * 20) + ow_inner)] = ((float*)conv2d_NCHWc_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_6 = (ax3_outer * 20);
        int32_t cse_var_5 = (ax0_ax1_fused_ax2_fused >> 4);
        int32_t cse_var_4 = (cse_var_6 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_4] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[cse_var_5];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_fused * 160) + cse_var_6) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_4] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[cse_var_5]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_1(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_8_var[2163952]));
  void* fused_constant_4_let = (&(global_const_workspace_8_var[2149200]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 176; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_9_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[1280]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 40) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init1 = 0; oc_block_c_init1 < 2; ++oc_block_c_init1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init1) + 2)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init2 = 0; oc_block_c_init2 < 2; ++oc_block_c_init2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init2) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init3 = 0; oc_block_c_init3 < 2; ++oc_block_c_init3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init3) + 6)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init4 = 0; oc_block_c_init4 < 2; ++oc_block_c_init4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init4) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init5 = 0; oc_block_c_init5 < 2; ++oc_block_c_init5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init5) + 10)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init6 = 0; oc_block_c_init6 < 2; ++oc_block_c_init6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init6) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init7 = 0; oc_block_c_init7 < 2; ++oc_block_c_init7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init7) + 14)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init8 = 0; oc_block_c_init8 < 2; ++oc_block_c_init8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init8) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init9 = 0; oc_block_c_init9 < 2; ++oc_block_c_init9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init9) + 18)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init10 = 0; oc_block_c_init10 < 2; ++oc_block_c_init10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init10) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init11 = 0; oc_block_c_init11 < 2; ++oc_block_c_init11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init11) + 22)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init12 = 0; oc_block_c_init12 < 2; ++oc_block_c_init12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init12) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init13 = 0; oc_block_c_init13 < 2; ++oc_block_c_init13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init13) + 26)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init14 = 0; oc_block_c_init14 < 2; ++oc_block_c_init14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init14) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init15 = 0; oc_block_c_init15 < 2; ++oc_block_c_init15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init15) + 30)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init16 = 0; oc_block_c_init16 < 2; ++oc_block_c_init16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init16) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init17 = 0; oc_block_c_init17 < 2; ++oc_block_c_init17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init17) + 34)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init18 = 0; oc_block_c_init18 < 2; ++oc_block_c_init18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init18) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init19 = 0; oc_block_c_init19 < 2; ++oc_block_c_init19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init19) + 38)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 11; ++ic_outer) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          int32_t cse_var_1 = ((ow_c_outer * 40) + oc_block_c);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[(((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20))] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c1 = 0; oc_block_c1 < 2; ++oc_block_c1) {
          int32_t cse_var_2 = (((ow_c_outer * 40) + oc_block_c1) + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 1)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c1)]));
        }
        for (int32_t oc_block_c2 = 0; oc_block_c2 < 2; ++oc_block_c2) {
          int32_t cse_var_3 = (((ow_c_outer * 40) + oc_block_c2) + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 2)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c2)]));
        }
        for (int32_t oc_block_c3 = 0; oc_block_c3 < 2; ++oc_block_c3) {
          int32_t cse_var_4 = (((ow_c_outer * 40) + oc_block_c3) + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 3)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c3)]));
        }
        for (int32_t oc_block_c4 = 0; oc_block_c4 < 2; ++oc_block_c4) {
          int32_t cse_var_5 = (((ow_c_outer * 40) + oc_block_c4) + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 4)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c4)]));
        }
        for (int32_t oc_block_c5 = 0; oc_block_c5 < 2; ++oc_block_c5) {
          int32_t cse_var_6 = (((ow_c_outer * 40) + oc_block_c5) + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 5)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c5)]));
        }
        for (int32_t oc_block_c6 = 0; oc_block_c6 < 2; ++oc_block_c6) {
          int32_t cse_var_7 = (((ow_c_outer * 40) + oc_block_c6) + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 6)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c6)]));
        }
        for (int32_t oc_block_c7 = 0; oc_block_c7 < 2; ++oc_block_c7) {
          int32_t cse_var_8 = (((ow_c_outer * 40) + oc_block_c7) + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 7)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c7)]));
        }
        for (int32_t oc_block_c8 = 0; oc_block_c8 < 2; ++oc_block_c8) {
          int32_t cse_var_9 = (((ow_c_outer * 40) + oc_block_c8) + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 8)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c8)]));
        }
        for (int32_t oc_block_c9 = 0; oc_block_c9 < 2; ++oc_block_c9) {
          int32_t cse_var_10 = (((ow_c_outer * 40) + oc_block_c9) + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 9)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c9)]));
        }
        for (int32_t oc_block_c10 = 0; oc_block_c10 < 2; ++oc_block_c10) {
          int32_t cse_var_11 = (((ow_c_outer * 40) + oc_block_c10) + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 10)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c10)]));
        }
        for (int32_t oc_block_c11 = 0; oc_block_c11 < 2; ++oc_block_c11) {
          int32_t cse_var_12 = (((ow_c_outer * 40) + oc_block_c11) + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 11)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c11)]));
        }
        for (int32_t oc_block_c12 = 0; oc_block_c12 < 2; ++oc_block_c12) {
          int32_t cse_var_13 = (((ow_c_outer * 40) + oc_block_c12) + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 12)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c12)]));
        }
        for (int32_t oc_block_c13 = 0; oc_block_c13 < 2; ++oc_block_c13) {
          int32_t cse_var_14 = (((ow_c_outer * 40) + oc_block_c13) + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 13)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c13)]));
        }
        for (int32_t oc_block_c14 = 0; oc_block_c14 < 2; ++oc_block_c14) {
          int32_t cse_var_15 = (((ow_c_outer * 40) + oc_block_c14) + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 14)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c14)]));
        }
        for (int32_t oc_block_c15 = 0; oc_block_c15 < 2; ++oc_block_c15) {
          int32_t cse_var_16 = (((ow_c_outer * 40) + oc_block_c15) + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 15)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c15)]));
        }
        for (int32_t oc_block_c16 = 0; oc_block_c16 < 2; ++oc_block_c16) {
          int32_t cse_var_17 = (((ow_c_outer * 40) + oc_block_c16) + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 16)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c16)]));
        }
        for (int32_t oc_block_c17 = 0; oc_block_c17 < 2; ++oc_block_c17) {
          int32_t cse_var_18 = (((ow_c_outer * 40) + oc_block_c17) + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 17)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c17)]));
        }
        for (int32_t oc_block_c18 = 0; oc_block_c18 < 2; ++oc_block_c18) {
          int32_t cse_var_19 = (((ow_c_outer * 40) + oc_block_c18) + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 18)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c18)]));
        }
        for (int32_t oc_block_c19 = 0; oc_block_c19 < 2; ++oc_block_c19) {
          int32_t cse_var_20 = (((ow_c_outer * 40) + oc_block_c19) + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[((((ic_outer * 2560) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 160)) + (ow_c_outer * 20)) + 19)] * ((float*)fused_constant_4_let)[((((ax0_ax1_fused_ax2_outer_fused >> 4) * 22) + (ic_outer * 2)) + oc_block_c19)]));
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
          int32_t cse_var_21 = (((ow_outer * 40) + (ow_inner * 2)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_21] = ((float*)conv2d_NCHWc_global_let)[cse_var_21];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_25 = (ax3_outer * 40);
          int32_t cse_var_24 = (ax3_inner * 2);
          int32_t cse_var_23 = (((ax0_ax1_fused_ax2_outer_fused >> 4) * 2) + ax4);
          int32_t cse_var_22 = ((cse_var_25 + cse_var_24) + ax4);
          float _1 = ((float*)conv2d_NCHWc_let)[cse_var_22] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[cse_var_23];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 320) + cse_var_25) + cse_var_24) + ax4)] = ((((float*)conv2d_NCHWc_let)[cse_var_22] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[cse_var_23]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_10(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_41_let = (&(global_const_workspace_46_var[2156736]));
  void* fused_constant_40_let = (&(global_const_workspace_46_var[1036080]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 716; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_47_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_47_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 2) * 179) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_40_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_40_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 2);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_41_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_41_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_11(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_45_let = (&(global_const_workspace_50_var[2156016]));
  void* fused_constant_44_let = (&(global_const_workspace_50_var[907904]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 716; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_51_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_51_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 2) * 179) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_44_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_44_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 2);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_45_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_45_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_12(float* placeholder, float* placeholder1, float* T_multiply, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_53_let = (&(global_const_workspace_64_var[2146560]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 358; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_65_var[256336]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_65_var[257616]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 40) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init1 = 0; oc_block_c_init1 < 2; ++oc_block_c_init1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init1) + 2)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init2 = 0; oc_block_c_init2 < 2; ++oc_block_c_init2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init2) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init3 = 0; oc_block_c_init3 < 2; ++oc_block_c_init3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init3) + 6)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init4 = 0; oc_block_c_init4 < 2; ++oc_block_c_init4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init4) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init5 = 0; oc_block_c_init5 < 2; ++oc_block_c_init5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init5) + 10)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init6 = 0; oc_block_c_init6 < 2; ++oc_block_c_init6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init6) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init7 = 0; oc_block_c_init7 < 2; ++oc_block_c_init7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init7) + 14)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init8 = 0; oc_block_c_init8 < 2; ++oc_block_c_init8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init8) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init9 = 0; oc_block_c_init9 < 2; ++oc_block_c_init9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init9) + 18)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init10 = 0; oc_block_c_init10 < 2; ++oc_block_c_init10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init10) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init11 = 0; oc_block_c_init11 < 2; ++oc_block_c_init11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init11) + 22)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init12 = 0; oc_block_c_init12 < 2; ++oc_block_c_init12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init12) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init13 = 0; oc_block_c_init13 < 2; ++oc_block_c_init13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init13) + 26)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init14 = 0; oc_block_c_init14 < 2; ++oc_block_c_init14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init14) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init15 = 0; oc_block_c_init15 < 2; ++oc_block_c_init15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init15) + 30)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init16 = 0; oc_block_c_init16 < 2; ++oc_block_c_init16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init16) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init17 = 0; oc_block_c_init17 < 2; ++oc_block_c_init17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init17) + 34)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init18 = 0; oc_block_c_init18 < 2; ++oc_block_c_init18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init18) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init19 = 0; oc_block_c_init19 < 2; ++oc_block_c_init19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init19) + 38)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          int32_t cse_var_1 = ((ow_c_outer * 40) + oc_block_c);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[(((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20))] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c1 = 0; oc_block_c1 < 2; ++oc_block_c1) {
          int32_t cse_var_2 = (((ow_c_outer * 40) + oc_block_c1) + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 1)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c1)]));
        }
        for (int32_t oc_block_c2 = 0; oc_block_c2 < 2; ++oc_block_c2) {
          int32_t cse_var_3 = (((ow_c_outer * 40) + oc_block_c2) + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 2)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c2)]));
        }
        for (int32_t oc_block_c3 = 0; oc_block_c3 < 2; ++oc_block_c3) {
          int32_t cse_var_4 = (((ow_c_outer * 40) + oc_block_c3) + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 3)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c3)]));
        }
        for (int32_t oc_block_c4 = 0; oc_block_c4 < 2; ++oc_block_c4) {
          int32_t cse_var_5 = (((ow_c_outer * 40) + oc_block_c4) + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 4)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c4)]));
        }
        for (int32_t oc_block_c5 = 0; oc_block_c5 < 2; ++oc_block_c5) {
          int32_t cse_var_6 = (((ow_c_outer * 40) + oc_block_c5) + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 5)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c5)]));
        }
        for (int32_t oc_block_c6 = 0; oc_block_c6 < 2; ++oc_block_c6) {
          int32_t cse_var_7 = (((ow_c_outer * 40) + oc_block_c6) + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 6)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c6)]));
        }
        for (int32_t oc_block_c7 = 0; oc_block_c7 < 2; ++oc_block_c7) {
          int32_t cse_var_8 = (((ow_c_outer * 40) + oc_block_c7) + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 7)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c7)]));
        }
        for (int32_t oc_block_c8 = 0; oc_block_c8 < 2; ++oc_block_c8) {
          int32_t cse_var_9 = (((ow_c_outer * 40) + oc_block_c8) + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 8)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c8)]));
        }
        for (int32_t oc_block_c9 = 0; oc_block_c9 < 2; ++oc_block_c9) {
          int32_t cse_var_10 = (((ow_c_outer * 40) + oc_block_c9) + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 9)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c9)]));
        }
        for (int32_t oc_block_c10 = 0; oc_block_c10 < 2; ++oc_block_c10) {
          int32_t cse_var_11 = (((ow_c_outer * 40) + oc_block_c10) + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 10)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c10)]));
        }
        for (int32_t oc_block_c11 = 0; oc_block_c11 < 2; ++oc_block_c11) {
          int32_t cse_var_12 = (((ow_c_outer * 40) + oc_block_c11) + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 11)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c11)]));
        }
        for (int32_t oc_block_c12 = 0; oc_block_c12 < 2; ++oc_block_c12) {
          int32_t cse_var_13 = (((ow_c_outer * 40) + oc_block_c12) + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 12)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c12)]));
        }
        for (int32_t oc_block_c13 = 0; oc_block_c13 < 2; ++oc_block_c13) {
          int32_t cse_var_14 = (((ow_c_outer * 40) + oc_block_c13) + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 13)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c13)]));
        }
        for (int32_t oc_block_c14 = 0; oc_block_c14 < 2; ++oc_block_c14) {
          int32_t cse_var_15 = (((ow_c_outer * 40) + oc_block_c14) + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 14)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c14)]));
        }
        for (int32_t oc_block_c15 = 0; oc_block_c15 < 2; ++oc_block_c15) {
          int32_t cse_var_16 = (((ow_c_outer * 40) + oc_block_c15) + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 15)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c15)]));
        }
        for (int32_t oc_block_c16 = 0; oc_block_c16 < 2; ++oc_block_c16) {
          int32_t cse_var_17 = (((ow_c_outer * 40) + oc_block_c16) + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 16)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c16)]));
        }
        for (int32_t oc_block_c17 = 0; oc_block_c17 < 2; ++oc_block_c17) {
          int32_t cse_var_18 = (((ow_c_outer * 40) + oc_block_c17) + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 17)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c17)]));
        }
        for (int32_t oc_block_c18 = 0; oc_block_c18 < 2; ++oc_block_c18) {
          int32_t cse_var_19 = (((ow_c_outer * 40) + oc_block_c18) + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 18)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c18)]));
        }
        for (int32_t oc_block_c19 = 0; oc_block_c19 < 2; ++oc_block_c19) {
          int32_t cse_var_20 = (((ow_c_outer * 40) + oc_block_c19) + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[((((ic_outer * 320) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 160)) + (ow_c_outer * 20)) + 19)] * placeholder1[((((ax0_ax1_fused_ax2_outer_fused >> 1) * 358) + (ic_outer * 2)) + oc_block_c19)]));
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
          int32_t cse_var_21 = (((ow_outer * 40) + (ow_inner * 2)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_21] = ((float*)conv2d_NCHWc_global_let)[cse_var_21];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_25 = (ax3_outer * 40);
          int32_t cse_var_24 = (ax3_inner * 2);
          int32_t cse_var_23 = (((ax0_ax1_fused_ax2_outer_fused >> 1) * 2) + ax4);
          int32_t cse_var_22 = ((cse_var_25 + cse_var_24) + ax4);
          float _1 = ((float*)conv2d_NCHWc_let)[cse_var_22] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_53_let)[cse_var_23];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 320) + cse_var_25) + cse_var_24) + ax4)] = ((((float*)conv2d_NCHWc_let)[cse_var_22] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_53_let)[cse_var_23]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_13(float* placeholder, float* placeholder1, float* T_multiply, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_61_let = (&(global_const_workspace_78_var[2143680]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 358; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_79_var[970896]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_79_var[972176]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 40) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init1 = 0; oc_block_c_init1 < 2; ++oc_block_c_init1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init1) + 2)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init2 = 0; oc_block_c_init2 < 2; ++oc_block_c_init2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init2) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init3 = 0; oc_block_c_init3 < 2; ++oc_block_c_init3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init3) + 6)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init4 = 0; oc_block_c_init4 < 2; ++oc_block_c_init4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init4) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init5 = 0; oc_block_c_init5 < 2; ++oc_block_c_init5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init5) + 10)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init6 = 0; oc_block_c_init6 < 2; ++oc_block_c_init6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init6) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init7 = 0; oc_block_c_init7 < 2; ++oc_block_c_init7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init7) + 14)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init8 = 0; oc_block_c_init8 < 2; ++oc_block_c_init8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init8) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init9 = 0; oc_block_c_init9 < 2; ++oc_block_c_init9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init9) + 18)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init10 = 0; oc_block_c_init10 < 2; ++oc_block_c_init10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init10) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init11 = 0; oc_block_c_init11 < 2; ++oc_block_c_init11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init11) + 22)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init12 = 0; oc_block_c_init12 < 2; ++oc_block_c_init12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init12) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init13 = 0; oc_block_c_init13 < 2; ++oc_block_c_init13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init13) + 26)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init14 = 0; oc_block_c_init14 < 2; ++oc_block_c_init14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init14) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init15 = 0; oc_block_c_init15 < 2; ++oc_block_c_init15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init15) + 30)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init16 = 0; oc_block_c_init16 < 2; ++oc_block_c_init16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init16) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init17 = 0; oc_block_c_init17 < 2; ++oc_block_c_init17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init17) + 34)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init18 = 0; oc_block_c_init18 < 2; ++oc_block_c_init18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init18) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init19 = 0; oc_block_c_init19 < 2; ++oc_block_c_init19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 40) + oc_block_c_init19) + 38)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 40);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_2) + ic_inner)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
          }
          for (int32_t oc_block_c1 = 0; oc_block_c1 < 2; ++oc_block_c1) {
            int32_t cse_var_4 = (ow_c_outer * 40);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c1) + 2);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_4) + ic_inner) + 2)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c1)]));
          }
          for (int32_t oc_block_c2 = 0; oc_block_c2 < 2; ++oc_block_c2) {
            int32_t cse_var_6 = (ow_c_outer * 40);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c2) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_6) + ic_inner) + 4)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c2)]));
          }
          for (int32_t oc_block_c3 = 0; oc_block_c3 < 2; ++oc_block_c3) {
            int32_t cse_var_8 = (ow_c_outer * 40);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c3) + 6);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_8) + ic_inner) + 6)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c3)]));
          }
          for (int32_t oc_block_c4 = 0; oc_block_c4 < 2; ++oc_block_c4) {
            int32_t cse_var_10 = (ow_c_outer * 40);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c4) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_10) + ic_inner) + 8)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c4)]));
          }
          for (int32_t oc_block_c5 = 0; oc_block_c5 < 2; ++oc_block_c5) {
            int32_t cse_var_12 = (ow_c_outer * 40);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c5) + 10);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_12) + ic_inner) + 10)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c5)]));
          }
          for (int32_t oc_block_c6 = 0; oc_block_c6 < 2; ++oc_block_c6) {
            int32_t cse_var_14 = (ow_c_outer * 40);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c6) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_14) + ic_inner) + 12)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c6)]));
          }
          for (int32_t oc_block_c7 = 0; oc_block_c7 < 2; ++oc_block_c7) {
            int32_t cse_var_16 = (ow_c_outer * 40);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c7) + 14);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_16) + ic_inner) + 14)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c7)]));
          }
          for (int32_t oc_block_c8 = 0; oc_block_c8 < 2; ++oc_block_c8) {
            int32_t cse_var_18 = (ow_c_outer * 40);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c8) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_18) + ic_inner) + 16)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c8)]));
          }
          for (int32_t oc_block_c9 = 0; oc_block_c9 < 2; ++oc_block_c9) {
            int32_t cse_var_20 = (ow_c_outer * 40);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c9) + 18);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_20) + ic_inner) + 18)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c9)]));
          }
          for (int32_t oc_block_c10 = 0; oc_block_c10 < 2; ++oc_block_c10) {
            int32_t cse_var_22 = (ow_c_outer * 40);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c10) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_22) + ic_inner) + 20)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c10)]));
          }
          for (int32_t oc_block_c11 = 0; oc_block_c11 < 2; ++oc_block_c11) {
            int32_t cse_var_24 = (ow_c_outer * 40);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c11) + 22);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_24) + ic_inner) + 22)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c11)]));
          }
          for (int32_t oc_block_c12 = 0; oc_block_c12 < 2; ++oc_block_c12) {
            int32_t cse_var_26 = (ow_c_outer * 40);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c12) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_26) + ic_inner) + 24)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c12)]));
          }
          for (int32_t oc_block_c13 = 0; oc_block_c13 < 2; ++oc_block_c13) {
            int32_t cse_var_28 = (ow_c_outer * 40);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c13) + 26);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_28) + ic_inner) + 26)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c13)]));
          }
          for (int32_t oc_block_c14 = 0; oc_block_c14 < 2; ++oc_block_c14) {
            int32_t cse_var_30 = (ow_c_outer * 40);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c14) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_30) + ic_inner) + 28)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c14)]));
          }
          for (int32_t oc_block_c15 = 0; oc_block_c15 < 2; ++oc_block_c15) {
            int32_t cse_var_32 = (ow_c_outer * 40);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c15) + 30);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_32) + ic_inner) + 30)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c15)]));
          }
          for (int32_t oc_block_c16 = 0; oc_block_c16 < 2; ++oc_block_c16) {
            int32_t cse_var_34 = (ow_c_outer * 40);
            int32_t cse_var_33 = ((cse_var_34 + oc_block_c16) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_33] = (((float*)conv2d_NCHWc_global_let)[cse_var_33] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_34) + ic_inner) + 32)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c16)]));
          }
          for (int32_t oc_block_c17 = 0; oc_block_c17 < 2; ++oc_block_c17) {
            int32_t cse_var_36 = (ow_c_outer * 40);
            int32_t cse_var_35 = ((cse_var_36 + oc_block_c17) + 34);
            ((float*)conv2d_NCHWc_global_let)[cse_var_35] = (((float*)conv2d_NCHWc_global_let)[cse_var_35] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_36) + ic_inner) + 34)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c17)]));
          }
          for (int32_t oc_block_c18 = 0; oc_block_c18 < 2; ++oc_block_c18) {
            int32_t cse_var_38 = (ow_c_outer * 40);
            int32_t cse_var_37 = ((cse_var_38 + oc_block_c18) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_37] = (((float*)conv2d_NCHWc_global_let)[cse_var_37] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_38) + ic_inner) + 36)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c18)]));
          }
          for (int32_t oc_block_c19 = 0; oc_block_c19 < 2; ++oc_block_c19) {
            int32_t cse_var_40 = (ow_c_outer * 40);
            int32_t cse_var_39 = ((cse_var_40 + oc_block_c19) + 38);
            ((float*)conv2d_NCHWc_global_let)[cse_var_39] = (((float*)conv2d_NCHWc_global_let)[cse_var_39] + (placeholder[(((((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 320)) + cse_var_40) + ic_inner) + 38)] * placeholder1[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 716) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c19)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
          int32_t cse_var_41 = (((ow_outer * 40) + (ow_inner * 2)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_41] = ((float*)conv2d_NCHWc_global_let)[cse_var_41];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_45 = (ax3_outer * 40);
          int32_t cse_var_44 = (ax3_inner * 2);
          int32_t cse_var_43 = (((ax0_ax1_fused_ax2_outer_fused >> 1) * 2) + ax4);
          int32_t cse_var_42 = ((cse_var_45 + cse_var_44) + ax4);
          float _1 = ((float*)conv2d_NCHWc_let)[cse_var_42] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_61_let)[cse_var_43];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 320) + cse_var_45) + cse_var_44) + ax4)] = ((((float*)conv2d_NCHWc_let)[cse_var_42] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_61_let)[cse_var_43]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_2(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_12_var[2163328]));
  void* fused_constant_8_let = (&(global_const_workspace_12_var[2128768]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 176; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[2560]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 80) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init1 = 0; oc_block_c_init1 < 4; ++oc_block_c_init1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init2 = 0; oc_block_c_init2 < 4; ++oc_block_c_init2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init3 = 0; oc_block_c_init3 < 4; ++oc_block_c_init3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init4 = 0; oc_block_c_init4 < 4; ++oc_block_c_init4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init5 = 0; oc_block_c_init5 < 4; ++oc_block_c_init5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init6 = 0; oc_block_c_init6 < 4; ++oc_block_c_init6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init7 = 0; oc_block_c_init7 < 4; ++oc_block_c_init7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init8 = 0; oc_block_c_init8 < 4; ++oc_block_c_init8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init9 = 0; oc_block_c_init9 < 4; ++oc_block_c_init9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init10 = 0; oc_block_c_init10 < 4; ++oc_block_c_init10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init11 = 0; oc_block_c_init11 < 4; ++oc_block_c_init11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init12 = 0; oc_block_c_init12 < 4; ++oc_block_c_init12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init12) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init13 = 0; oc_block_c_init13 < 4; ++oc_block_c_init13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init13) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init14 = 0; oc_block_c_init14 < 4; ++oc_block_c_init14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init14) + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init15 = 0; oc_block_c_init15 < 4; ++oc_block_c_init15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init15) + 60)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init16 = 0; oc_block_c_init16 < 4; ++oc_block_c_init16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init16) + 64)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init17 = 0; oc_block_c_init17 < 4; ++oc_block_c_init17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init17) + 68)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init18 = 0; oc_block_c_init18 < 4; ++oc_block_c_init18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init18) + 72)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init19 = 0; oc_block_c_init19 < 4; ++oc_block_c_init19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init19) + 76)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 11; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_1 = ((ow_c_outer * 80) + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c1 = 0; oc_block_c1 < 4; ++oc_block_c1) {
            int32_t cse_var_2 = (((ow_c_outer * 80) + oc_block_c1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 2)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c1)]));
          }
          for (int32_t oc_block_c2 = 0; oc_block_c2 < 4; ++oc_block_c2) {
            int32_t cse_var_3 = (((ow_c_outer * 80) + oc_block_c2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 4)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c2)]));
          }
          for (int32_t oc_block_c3 = 0; oc_block_c3 < 4; ++oc_block_c3) {
            int32_t cse_var_4 = (((ow_c_outer * 80) + oc_block_c3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 6)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c3)]));
          }
          for (int32_t oc_block_c4 = 0; oc_block_c4 < 4; ++oc_block_c4) {
            int32_t cse_var_5 = (((ow_c_outer * 80) + oc_block_c4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c4)]));
          }
          for (int32_t oc_block_c5 = 0; oc_block_c5 < 4; ++oc_block_c5) {
            int32_t cse_var_6 = (((ow_c_outer * 80) + oc_block_c5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 10)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c5)]));
          }
          for (int32_t oc_block_c6 = 0; oc_block_c6 < 4; ++oc_block_c6) {
            int32_t cse_var_7 = (((ow_c_outer * 80) + oc_block_c6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 12)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c6)]));
          }
          for (int32_t oc_block_c7 = 0; oc_block_c7 < 4; ++oc_block_c7) {
            int32_t cse_var_8 = (((ow_c_outer * 80) + oc_block_c7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 14)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c7)]));
          }
          for (int32_t oc_block_c8 = 0; oc_block_c8 < 4; ++oc_block_c8) {
            int32_t cse_var_9 = (((ow_c_outer * 80) + oc_block_c8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 16)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c8)]));
          }
          for (int32_t oc_block_c9 = 0; oc_block_c9 < 4; ++oc_block_c9) {
            int32_t cse_var_10 = (((ow_c_outer * 80) + oc_block_c9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 18)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c9)]));
          }
          for (int32_t oc_block_c10 = 0; oc_block_c10 < 4; ++oc_block_c10) {
            int32_t cse_var_11 = (((ow_c_outer * 80) + oc_block_c10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 20)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c10)]));
          }
          for (int32_t oc_block_c11 = 0; oc_block_c11 < 4; ++oc_block_c11) {
            int32_t cse_var_12 = (((ow_c_outer * 80) + oc_block_c11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 22)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c11)]));
          }
          for (int32_t oc_block_c12 = 0; oc_block_c12 < 4; ++oc_block_c12) {
            int32_t cse_var_13 = (((ow_c_outer * 80) + oc_block_c12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 24)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c12)]));
          }
          for (int32_t oc_block_c13 = 0; oc_block_c13 < 4; ++oc_block_c13) {
            int32_t cse_var_14 = (((ow_c_outer * 80) + oc_block_c13) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 26)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c13)]));
          }
          for (int32_t oc_block_c14 = 0; oc_block_c14 < 4; ++oc_block_c14) {
            int32_t cse_var_15 = (((ow_c_outer * 80) + oc_block_c14) + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 28)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c14)]));
          }
          for (int32_t oc_block_c15 = 0; oc_block_c15 < 4; ++oc_block_c15) {
            int32_t cse_var_16 = (((ow_c_outer * 80) + oc_block_c15) + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 30)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c15)]));
          }
          for (int32_t oc_block_c16 = 0; oc_block_c16 < 4; ++oc_block_c16) {
            int32_t cse_var_17 = (((ow_c_outer * 80) + oc_block_c16) + 64);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 32)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c16)]));
          }
          for (int32_t oc_block_c17 = 0; oc_block_c17 < 4; ++oc_block_c17) {
            int32_t cse_var_18 = (((ow_c_outer * 80) + oc_block_c17) + 68);
            ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 34)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c17)]));
          }
          for (int32_t oc_block_c18 = 0; oc_block_c18 < 4; ++oc_block_c18) {
            int32_t cse_var_19 = (((ow_c_outer * 80) + oc_block_c18) + 72);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 36)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c18)]));
          }
          for (int32_t oc_block_c19 = 0; oc_block_c19 < 4; ++oc_block_c19) {
            int32_t cse_var_20 = (((ow_c_outer * 80) + oc_block_c19) + 76);
            ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(((((ic_outer * 5120) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 320)) + (ow_c_outer * 40)) + ic_inner) + 38)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 88) + (ic_outer * 8)) + (ic_inner * 4)) + oc_block_c19)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_21 = (((ow_outer * 80) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_21] = ((float*)conv2d_NCHWc_global_let)[cse_var_21];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_25 = (ax3_outer * 80);
          int32_t cse_var_24 = (ax3_inner * 4);
          int32_t cse_var_23 = (((ax0_ax1_fused_ax2_outer_fused >> 4) * 4) + ax4);
          int32_t cse_var_22 = ((cse_var_25 + cse_var_24) + ax4);
          float _1 = ((float*)conv2d_NCHWc_let)[cse_var_22] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[cse_var_23];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 640) + cse_var_25) + cse_var_24) + ax4)] = ((((float*)conv2d_NCHWc_let)[cse_var_22] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[cse_var_23]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_3(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_16_var[2163680]));
  void* fused_constant_12_let = (&(global_const_workspace_16_var[2121024]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 176; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[2560]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 80) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init1 = 0; oc_block_c_init1 < 4; ++oc_block_c_init1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init2 = 0; oc_block_c_init2 < 4; ++oc_block_c_init2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init3 = 0; oc_block_c_init3 < 4; ++oc_block_c_init3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init4 = 0; oc_block_c_init4 < 4; ++oc_block_c_init4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init5 = 0; oc_block_c_init5 < 4; ++oc_block_c_init5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init6 = 0; oc_block_c_init6 < 4; ++oc_block_c_init6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init7 = 0; oc_block_c_init7 < 4; ++oc_block_c_init7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init8 = 0; oc_block_c_init8 < 4; ++oc_block_c_init8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init9 = 0; oc_block_c_init9 < 4; ++oc_block_c_init9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init10 = 0; oc_block_c_init10 < 4; ++oc_block_c_init10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init11 = 0; oc_block_c_init11 < 4; ++oc_block_c_init11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init12 = 0; oc_block_c_init12 < 4; ++oc_block_c_init12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init12) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init13 = 0; oc_block_c_init13 < 4; ++oc_block_c_init13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init13) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init14 = 0; oc_block_c_init14 < 4; ++oc_block_c_init14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init14) + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init15 = 0; oc_block_c_init15 < 4; ++oc_block_c_init15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init15) + 60)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init16 = 0; oc_block_c_init16 < 4; ++oc_block_c_init16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init16) + 64)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init17 = 0; oc_block_c_init17 < 4; ++oc_block_c_init17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init17) + 68)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init18 = 0; oc_block_c_init18 < 4; ++oc_block_c_init18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init18) + 72)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init19 = 0; oc_block_c_init19 < 4; ++oc_block_c_init19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 80) + oc_block_c_init19) + 76)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 11; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 80);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c1 = 0; oc_block_c1 < 4; ++oc_block_c1) {
            int32_t cse_var_4 = (ow_c_outer * 80);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c1)]));
          }
          for (int32_t oc_block_c2 = 0; oc_block_c2 < 4; ++oc_block_c2) {
            int32_t cse_var_6 = (ow_c_outer * 80);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c2)]));
          }
          for (int32_t oc_block_c3 = 0; oc_block_c3 < 4; ++oc_block_c3) {
            int32_t cse_var_8 = (ow_c_outer * 80);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c3)]));
          }
          for (int32_t oc_block_c4 = 0; oc_block_c4 < 4; ++oc_block_c4) {
            int32_t cse_var_10 = (ow_c_outer * 80);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c4)]));
          }
          for (int32_t oc_block_c5 = 0; oc_block_c5 < 4; ++oc_block_c5) {
            int32_t cse_var_12 = (ow_c_outer * 80);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c5)]));
          }
          for (int32_t oc_block_c6 = 0; oc_block_c6 < 4; ++oc_block_c6) {
            int32_t cse_var_14 = (ow_c_outer * 80);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c6)]));
          }
          for (int32_t oc_block_c7 = 0; oc_block_c7 < 4; ++oc_block_c7) {
            int32_t cse_var_16 = (ow_c_outer * 80);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c7)]));
          }
          for (int32_t oc_block_c8 = 0; oc_block_c8 < 4; ++oc_block_c8) {
            int32_t cse_var_18 = (ow_c_outer * 80);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c8)]));
          }
          for (int32_t oc_block_c9 = 0; oc_block_c9 < 4; ++oc_block_c9) {
            int32_t cse_var_20 = (ow_c_outer * 80);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c9)]));
          }
          for (int32_t oc_block_c10 = 0; oc_block_c10 < 4; ++oc_block_c10) {
            int32_t cse_var_22 = (ow_c_outer * 80);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c10)]));
          }
          for (int32_t oc_block_c11 = 0; oc_block_c11 < 4; ++oc_block_c11) {
            int32_t cse_var_24 = (ow_c_outer * 80);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c11)]));
          }
          for (int32_t oc_block_c12 = 0; oc_block_c12 < 4; ++oc_block_c12) {
            int32_t cse_var_26 = (ow_c_outer * 80);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c12)]));
          }
          for (int32_t oc_block_c13 = 0; oc_block_c13 < 4; ++oc_block_c13) {
            int32_t cse_var_28 = (ow_c_outer * 80);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c13) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_28) + ic_inner) + 52)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c13)]));
          }
          for (int32_t oc_block_c14 = 0; oc_block_c14 < 4; ++oc_block_c14) {
            int32_t cse_var_30 = (ow_c_outer * 80);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c14) + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_30) + ic_inner) + 56)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c14)]));
          }
          for (int32_t oc_block_c15 = 0; oc_block_c15 < 4; ++oc_block_c15) {
            int32_t cse_var_32 = (ow_c_outer * 80);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c15) + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_32) + ic_inner) + 60)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c15)]));
          }
          for (int32_t oc_block_c16 = 0; oc_block_c16 < 4; ++oc_block_c16) {
            int32_t cse_var_34 = (ow_c_outer * 80);
            int32_t cse_var_33 = ((cse_var_34 + oc_block_c16) + 64);
            ((float*)conv2d_NCHWc_global_let)[cse_var_33] = (((float*)conv2d_NCHWc_global_let)[cse_var_33] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_34) + ic_inner) + 64)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c16)]));
          }
          for (int32_t oc_block_c17 = 0; oc_block_c17 < 4; ++oc_block_c17) {
            int32_t cse_var_36 = (ow_c_outer * 80);
            int32_t cse_var_35 = ((cse_var_36 + oc_block_c17) + 68);
            ((float*)conv2d_NCHWc_global_let)[cse_var_35] = (((float*)conv2d_NCHWc_global_let)[cse_var_35] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_36) + ic_inner) + 68)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c17)]));
          }
          for (int32_t oc_block_c18 = 0; oc_block_c18 < 4; ++oc_block_c18) {
            int32_t cse_var_38 = (ow_c_outer * 80);
            int32_t cse_var_37 = ((cse_var_38 + oc_block_c18) + 72);
            ((float*)conv2d_NCHWc_global_let)[cse_var_37] = (((float*)conv2d_NCHWc_global_let)[cse_var_37] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_38) + ic_inner) + 72)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c18)]));
          }
          for (int32_t oc_block_c19 = 0; oc_block_c19 < 4; ++oc_block_c19) {
            int32_t cse_var_40 = (ow_c_outer * 80);
            int32_t cse_var_39 = ((cse_var_40 + oc_block_c19) + 76);
            ((float*)conv2d_NCHWc_global_let)[cse_var_39] = (((float*)conv2d_NCHWc_global_let)[cse_var_39] + (placeholder[(((((ic_outer * 10240) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 640)) + cse_var_40) + ic_inner) + 76)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 176) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c19)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_41 = (((ow_outer * 80) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_41] = ((float*)conv2d_NCHWc_global_let)[cse_var_41];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_45 = (ax3_outer * 80);
          int32_t cse_var_44 = (ax3_inner * 4);
          int32_t cse_var_43 = (((ax0_ax1_fused_ax2_outer_fused >> 4) * 4) + ax4);
          int32_t cse_var_42 = ((cse_var_45 + cse_var_44) + ax4);
          float _1 = ((float*)conv2d_NCHWc_let)[cse_var_42] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[cse_var_43];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 640) + cse_var_45) + cse_var_44) + ax4)] = ((((float*)conv2d_NCHWc_let)[cse_var_42] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[cse_var_43]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_4(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_17_let = (&(global_const_workspace_22_var[2162608]));
  void* fused_constant_16_let = (&(global_const_workspace_22_var[2105360]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 712; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_23_var[225280]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_23_var[225920]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 44; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 3) * 44) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 1280) + ((ax0_ax1_fused_ax2_outer_fused & 7) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_16_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_16_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 3);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_17_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_17_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_5(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_21_let = (&(global_const_workspace_26_var[2162240]));
  void* fused_constant_20_let = (&(global_const_workspace_26_var[1903232]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 712; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_27_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_27_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 89; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 3) * 89) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 1280) + ((ax0_ax1_fused_ax2_outer_fused & 7) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_20_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_20_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 3);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_21_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_21_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_6(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_25_let = (&(global_const_workspace_30_var[2159616]));
  void* fused_constant_24_let = (&(global_const_workspace_30_var[1803696]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 716; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_31_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_31_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 89; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 2) * 89) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_24_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_24_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 2);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_25_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_25_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_7(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_29_let = (&(global_const_workspace_34_var[2158896]));
  void* fused_constant_28_let = (&(global_const_workspace_34_var[1420608]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 716; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_35_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_35_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 2) * 179) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_28_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_28_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 2);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_29_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_29_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_8(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_33_let = (&(global_const_workspace_38_var[2158176]));
  void* fused_constant_32_let = (&(global_const_workspace_38_var[1292432]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 716; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_39_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_39_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 2) * 179) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_32_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_32_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 2);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_33_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_33_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_9(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_37_let = (&(global_const_workspace_42_var[2157456]));
  void* fused_constant_36_let = (&(global_const_workspace_42_var[1164256]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 716; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_43_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_43_var[640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 8; ++ow_c_outer) {
      int32_t cse_var_1 = (ow_c_outer * 20);
      ((float*)conv2d_NCHWc_global_let)[cse_var_1] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 1)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 2)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 3)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 4)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 5)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 6)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 7)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 8)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 9)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 10)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 11)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 12)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 13)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 14)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 15)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 16)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 17)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 18)] = 0.000000e+00f;
      ((float*)conv2d_NCHWc_global_let)[(cse_var_1 + 19)] = 0.000000e+00f;
      for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
        int32_t cse_var_22 = (cse_var_1 + 9);
        int32_t cse_var_21 = (cse_var_1 + 8);
        int32_t cse_var_20 = (cse_var_1 + 7);
        int32_t cse_var_19 = (cse_var_1 + 6);
        int32_t cse_var_18 = (cse_var_1 + 5);
        int32_t cse_var_17 = (cse_var_1 + 4);
        int32_t cse_var_16 = (cse_var_1 + 3);
        int32_t cse_var_15 = (cse_var_1 + 2);
        int32_t cse_var_14 = (cse_var_1 + 19);
        int32_t cse_var_13 = (cse_var_1 + 18);
        int32_t cse_var_12 = (cse_var_1 + 17);
        int32_t cse_var_11 = (cse_var_1 + 16);
        int32_t cse_var_10 = (cse_var_1 + 15);
        int32_t cse_var_9 = (cse_var_1 + 14);
        int32_t cse_var_8 = (cse_var_1 + 13);
        int32_t cse_var_7 = (cse_var_1 + 12);
        int32_t cse_var_6 = (cse_var_1 + 11);
        int32_t cse_var_5 = (cse_var_1 + 10);
        int32_t cse_var_4 = (cse_var_1 + 1);
        int32_t cse_var_3 = (((ax0_ax1_fused_ax2_outer_fused >> 2) * 179) + ic_outer);
        int32_t cse_var_2 = (((ic_outer * 640) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 160)) + cse_var_1);
        ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (placeholder[cse_var_2] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (placeholder[(cse_var_2 + 1)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (placeholder[(cse_var_2 + 2)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (placeholder[(cse_var_2 + 3)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (placeholder[(cse_var_2 + 4)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (placeholder[(cse_var_2 + 5)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (placeholder[(cse_var_2 + 6)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (placeholder[(cse_var_2 + 7)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (placeholder[(cse_var_2 + 8)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (placeholder[(cse_var_2 + 9)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (placeholder[(cse_var_2 + 10)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (placeholder[(cse_var_2 + 11)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (placeholder[(cse_var_2 + 12)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (placeholder[(cse_var_2 + 13)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (placeholder[(cse_var_2 + 14)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (placeholder[(cse_var_2 + 15)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (placeholder[(cse_var_2 + 16)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (placeholder[(cse_var_2 + 17)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (placeholder[(cse_var_2 + 18)] * ((float*)fused_constant_36_let)[cse_var_3]));
        ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (placeholder[(cse_var_2 + 19)] * ((float*)fused_constant_36_let)[cse_var_3]));
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        int32_t cse_var_23 = ((ow_outer * 20) + ow_inner);
        ((float*)conv2d_NCHWc_let)[cse_var_23] = ((float*)conv2d_NCHWc_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_26 = (ax3_outer * 20);
        int32_t cse_var_25 = (ax0_ax1_fused_ax2_outer_fused >> 2);
        int32_t cse_var_24 = (cse_var_26 + ax3_inner);
        float _1 = ((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_37_let)[cse_var_25];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 160) + cse_var_26) + ax3_inner)] = ((((float*)conv2d_NCHWc_let)[cse_var_24] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_37_let)[cse_var_25]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_multiply_add_clip(float* placeholder, float* compute, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_51_let = (&(global_const_workspace_60_var[2155296]));
  void* fused_constant_50_let = (&(global_const_workspace_60_var[1934928]));
  for (int32_t i0_i1_fused_i2_outer_fused = 0; i0_i1_fused_i2_outer_fused < 179; ++i0_i1_fused_i2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_61_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_61_var[176]));
    ((float*)conv2d_NCHWc_global_let)[0] = 0.000000e+00f;
    for (int32_t ic_outer = 0; ic_outer < 44; ++ic_outer) {
      ((float*)conv2d_NCHWc_global_let)[0] = (((float*)conv2d_NCHWc_global_let)[0] + (placeholder[ic_outer] * ((float*)fused_constant_50_let)[((i0_i1_fused_i2_outer_fused * 44) + ic_outer)]));
    }
    ((float*)conv2d_NCHWc_let)[0] = ((float*)conv2d_NCHWc_global_let)[0];
    float _1 = ((((float*)conv2d_NCHWc_let)[0] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_51_let)[i0_i1_fused_i2_outer_fused]) * 1.666667e-01f) + 5.000000e-01f;
    float _2 = (_1) < (1.000000e+00f) ? (_1) : (1.000000e+00f);
    compute[i0_i1_fused_i2_outer_fused] = ((_2) > (0.000000e+00f) ? (_2) : (0.000000e+00f));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_multiply_add_clip_1(float* placeholder, float* compute, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_59_let = (&(global_const_workspace_74_var[2145120]));
  void* fused_constant_58_let = (&(global_const_workspace_74_var[1548784]));
  for (int32_t i0_i1_fused_i2_outer_fused = 0; i0_i1_fused_i2_outer_fused < 179; ++i0_i1_fused_i2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_75_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_75_var[16]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 89; ++ic_outer) {
      for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
        ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (placeholder[ic_outer] * ((float*)fused_constant_58_let)[(((i0_i1_fused_i2_outer_fused * 178) + (ic_outer * 2)) + oc_block_c)]));
      }
    }
    for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
      ((float*)conv2d_NCHWc_let)[oc_block] = ((float*)conv2d_NCHWc_global_let)[oc_block];
    }
    for (int32_t i4 = 0; i4 < 2; ++i4) {
      int32_t cse_var_1 = ((i0_i1_fused_i2_outer_fused * 2) + i4);
      float _1 = ((((float*)conv2d_NCHWc_let)[i4] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_59_let)[cse_var_1]) * 1.666667e-01f) + 5.000000e-01f;
      float _2 = (_1) < (1.000000e+00f) ? (_1) : (1.000000e+00f);
      compute[cse_var_1] = ((_2) > (0.000000e+00f) ? (_2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_nn_relu(float* placeholder, float* T_relu, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_49_let = (&(global_const_workspace_56_var[2163504]));
  void* fused_constant_48_let = (&(global_const_workspace_56_var[1966432]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 11; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_57_var[896]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_57_var[912]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 179; ++ic_outer) {
      for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
        ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (placeholder[ic_outer] * ((float*)fused_constant_48_let)[(((ax0_ax1_fused_ax2_outer_fused * 716) + (ic_outer * 4)) + oc_block_c)]));
      }
    }
    for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
      ((float*)conv2d_NCHWc_let)[oc_block] = ((float*)conv2d_NCHWc_global_let)[oc_block];
    }
    for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_outer_fused * 4) + ax4);
      float _1 = ((float*)conv2d_NCHWc_let)[ax4] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_49_let)[cse_var_1];
      T_relu[cse_var_1] = ((_1) > (0.000000e+00f) ? (_1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_1(float* placeholder, float* T_relu, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_57_let = (&(global_const_workspace_72_var[2161872]));
  void* fused_constant_56_let = (&(global_const_workspace_72_var[1676240]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 89; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_73_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_73_var[1808]));
    ((float*)conv2d_NCHWc_global_let)[0] = 0.000000e+00f;
    for (int32_t ic_outer = 0; ic_outer < 358; ++ic_outer) {
      ((float*)conv2d_NCHWc_global_let)[0] = (((float*)conv2d_NCHWc_global_let)[0] + (placeholder[ic_outer] * ((float*)fused_constant_56_let)[((ax0_ax1_fused_ax2_outer_fused * 358) + ic_outer)]));
    }
    ((float*)conv2d_NCHWc_let)[0] = ((float*)conv2d_NCHWc_global_let)[0];
    float _1 = ((float*)conv2d_NCHWc_let)[0] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_57_let)[ax0_ax1_fused_ax2_outer_fused];
    T_relu[ax0_ax1_fused_ax2_outer_fused] = ((_1) > (0.000000e+00f) ? (_1) : (0.000000e+00f));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_dense_pack(float* placeholder, float* compute, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_constant_62_let = (&(global_const_workspace_84_var[768992]));
  for (int32_t x_outer_y_outer_fused = 0; x_outer_y_outer_fused < 485; ++x_outer_y_outer_fused) {
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      int32_t cse_var_1 = ((((x_outer_y_outer_fused % 5) * 1552) + (y_inner_outer_x_inner_outer_fused * 776)) + (x_outer_y_outer_fused / 5));
      void* compute_global_let = (&(global_workspace_85_var[145600]));
      ((float*)compute_global_let)[0] = 0.000000e+00f;
      ((float*)compute_global_let)[1] = 0.000000e+00f;
      ((float*)compute_global_let)[2] = 0.000000e+00f;
      ((float*)compute_global_let)[3] = 0.000000e+00f;
      ((float*)compute_global_let)[4] = 0.000000e+00f;
      ((float*)compute_global_let)[5] = 0.000000e+00f;
      ((float*)compute_global_let)[6] = 0.000000e+00f;
      ((float*)compute_global_let)[7] = 0.000000e+00f;
      for (int32_t k_outer = 0; k_outer < 358; ++k_outer) {
        int32_t cse_var_3 = (((x_outer_y_outer_fused / 5) * 358) + k_outer);
        int32_t cse_var_2 = ((((x_outer_y_outer_fused % 5) * 5728) + (y_inner_outer_x_inner_outer_fused * 2864)) + k_outer);
        ((float*)compute_global_let)[0] = (((float*)compute_global_let)[0] + (placeholder[cse_var_2] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[1] = (((float*)compute_global_let)[1] + (placeholder[(cse_var_2 + 358)] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[2] = (((float*)compute_global_let)[2] + (placeholder[(cse_var_2 + 716)] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[3] = (((float*)compute_global_let)[3] + (placeholder[(cse_var_2 + 1074)] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[4] = (((float*)compute_global_let)[4] + (placeholder[(cse_var_2 + 1432)] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[5] = (((float*)compute_global_let)[5] + (placeholder[(cse_var_2 + 1790)] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[6] = (((float*)compute_global_let)[6] + (placeholder[(cse_var_2 + 2148)] * ((float*)fused_constant_62_let)[cse_var_3]));
        ((float*)compute_global_let)[7] = (((float*)compute_global_let)[7] + (placeholder[(cse_var_2 + 2506)] * ((float*)fused_constant_62_let)[cse_var_3]));
      }
      compute[cse_var_1] = ((float*)compute_global_let)[0];
      compute[(cse_var_1 + 97)] = ((float*)compute_global_let)[1];
      compute[(cse_var_1 + 194)] = ((float*)compute_global_let)[2];
      compute[(cse_var_1 + 291)] = ((float*)compute_global_let)[3];
      compute[(cse_var_1 + 388)] = ((float*)compute_global_let)[4];
      compute[(cse_var_1 + 485)] = ((float*)compute_global_let)[5];
      compute[(cse_var_1 + 582)] = ((float*)compute_global_let)[6];
      compute[(cse_var_1 + 679)] = ((float*)compute_global_let)[7];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_6_var[2164048]));
  void* fused_constant_2_let = (&(global_const_workspace_6_var[2160336]));
  void* PaddedInput_let = (&(global_workspace_7_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 198; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 162; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused % 18);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 162) + i3)] = (((((1 <= cse_var_1) && (cse_var_1 < 17)) && (1 <= i3)) && (i3 < 161)) ? placeholder[(((((i0_i1_fused_i2_fused / 18) * 2560) + (cse_var_1 * 160)) + i3) - 161)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 176; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_7_var[240944]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[241584]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 4);
          int32_t cse_var_3 = (((cse_var_4 * 9) + (kh * 3)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 2916) + (kh * 162)) + ((ax1_ax2_fused & 15) * 162)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_2_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_2_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 4);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_1(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_10_var[2163856]));
  void* fused_constant_6_let = (&(global_const_workspace_10_var[2150176]));
  void* PaddedInput_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 198; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 162; ++i3) {
      for (int32_t i4 = 0; i4 < 2; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 18);
        int32_t cse_var_1 = (i3 * 2);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 324) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 17)) && (1 <= i3)) && (i3 < 161)) ? placeholder[((((((i0_i1_fused_i2_fused / 18) * 5120) + (cse_var_2 * 320)) + cse_var_1) + i4) - 322)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 176; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_11_var[481888]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_11_var[483168]));
      for (int32_t oci_c_init = 0; oci_c_init < 2; ++oci_c_init) {
        ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
      }
      for (int32_t oci_c_init1 = 0; oci_c_init1 < 2; ++oci_c_init1) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init1 + 2)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init2 = 0; oci_c_init2 < 2; ++oci_c_init2) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init2 + 4)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init3 = 0; oci_c_init3 < 2; ++oci_c_init3) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init3 + 6)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init4 = 0; oci_c_init4 < 2; ++oci_c_init4) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init4 + 8)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init5 = 0; oci_c_init5 < 2; ++oci_c_init5) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init5 + 10)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init6 = 0; oci_c_init6 < 2; ++oci_c_init6) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init6 + 12)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init7 = 0; oci_c_init7 < 2; ++oci_c_init7) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init7 + 14)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init8 = 0; oci_c_init8 < 2; ++oci_c_init8) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init8 + 16)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init9 = 0; oci_c_init9 < 2; ++oci_c_init9) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init9 + 18)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init10 = 0; oci_c_init10 < 2; ++oci_c_init10) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init10 + 20)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init11 = 0; oci_c_init11 < 2; ++oci_c_init11) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init11 + 22)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init12 = 0; oci_c_init12 < 2; ++oci_c_init12) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init12 + 24)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init13 = 0; oci_c_init13 < 2; ++oci_c_init13) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init13 + 26)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init14 = 0; oci_c_init14 < 2; ++oci_c_init14) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init14 + 28)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init15 = 0; oci_c_init15 < 2; ++oci_c_init15) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init15 + 30)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init16 = 0; oci_c_init16 < 2; ++oci_c_init16) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init16 + 32)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init17 = 0; oci_c_init17 < 2; ++oci_c_init17) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init17 + 34)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init18 = 0; oci_c_init18 < 2; ++oci_c_init18) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init18 + 36)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init19 = 0; oci_c_init19 < 2; ++oci_c_init19) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init19 + 38)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 2; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 4);
            int32_t cse_var_3 = (kw * 2);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_6_let)[((((cse_var_4 * 18) + (kh * 6)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c1 = 0; oci_c1 < 2; ++oci_c1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 4);
            int32_t cse_var_6 = (kw * 2);
            int32_t cse_var_5 = (oci_c1 + 2);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_6) + oci_c1) + 2)] * ((float*)fused_constant_6_let)[((((cse_var_7 * 18) + (kh * 6)) + cse_var_6) + oci_c1)]));
          }
          for (int32_t oci_c2 = 0; oci_c2 < 2; ++oci_c2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 4);
            int32_t cse_var_9 = (kw * 2);
            int32_t cse_var_8 = (oci_c2 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_9) + oci_c2) + 4)] * ((float*)fused_constant_6_let)[((((cse_var_10 * 18) + (kh * 6)) + cse_var_9) + oci_c2)]));
          }
          for (int32_t oci_c3 = 0; oci_c3 < 2; ++oci_c3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 4);
            int32_t cse_var_12 = (kw * 2);
            int32_t cse_var_11 = (oci_c3 + 6);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_12) + oci_c3) + 6)] * ((float*)fused_constant_6_let)[((((cse_var_13 * 18) + (kh * 6)) + cse_var_12) + oci_c3)]));
          }
          for (int32_t oci_c4 = 0; oci_c4 < 2; ++oci_c4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 4);
            int32_t cse_var_15 = (kw * 2);
            int32_t cse_var_14 = (oci_c4 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_15) + oci_c4) + 8)] * ((float*)fused_constant_6_let)[((((cse_var_16 * 18) + (kh * 6)) + cse_var_15) + oci_c4)]));
          }
          for (int32_t oci_c5 = 0; oci_c5 < 2; ++oci_c5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 4);
            int32_t cse_var_18 = (kw * 2);
            int32_t cse_var_17 = (oci_c5 + 10);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_18) + oci_c5) + 10)] * ((float*)fused_constant_6_let)[((((cse_var_19 * 18) + (kh * 6)) + cse_var_18) + oci_c5)]));
          }
          for (int32_t oci_c6 = 0; oci_c6 < 2; ++oci_c6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 4);
            int32_t cse_var_21 = (kw * 2);
            int32_t cse_var_20 = (oci_c6 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_21) + oci_c6) + 12)] * ((float*)fused_constant_6_let)[((((cse_var_22 * 18) + (kh * 6)) + cse_var_21) + oci_c6)]));
          }
          for (int32_t oci_c7 = 0; oci_c7 < 2; ++oci_c7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 4);
            int32_t cse_var_24 = (kw * 2);
            int32_t cse_var_23 = (oci_c7 + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_24) + oci_c7) + 14)] * ((float*)fused_constant_6_let)[((((cse_var_25 * 18) + (kh * 6)) + cse_var_24) + oci_c7)]));
          }
          for (int32_t oci_c8 = 0; oci_c8 < 2; ++oci_c8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 4);
            int32_t cse_var_27 = (kw * 2);
            int32_t cse_var_26 = (oci_c8 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_27) + oci_c8) + 16)] * ((float*)fused_constant_6_let)[((((cse_var_28 * 18) + (kh * 6)) + cse_var_27) + oci_c8)]));
          }
          for (int32_t oci_c9 = 0; oci_c9 < 2; ++oci_c9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 4);
            int32_t cse_var_30 = (kw * 2);
            int32_t cse_var_29 = (oci_c9 + 18);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_30) + oci_c9) + 18)] * ((float*)fused_constant_6_let)[((((cse_var_31 * 18) + (kh * 6)) + cse_var_30) + oci_c9)]));
          }
          for (int32_t oci_c10 = 0; oci_c10 < 2; ++oci_c10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 4);
            int32_t cse_var_33 = (kw * 2);
            int32_t cse_var_32 = (oci_c10 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_33) + oci_c10) + 20)] * ((float*)fused_constant_6_let)[((((cse_var_34 * 18) + (kh * 6)) + cse_var_33) + oci_c10)]));
          }
          for (int32_t oci_c11 = 0; oci_c11 < 2; ++oci_c11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 4);
            int32_t cse_var_36 = (kw * 2);
            int32_t cse_var_35 = (oci_c11 + 22);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_36) + oci_c11) + 22)] * ((float*)fused_constant_6_let)[((((cse_var_37 * 18) + (kh * 6)) + cse_var_36) + oci_c11)]));
          }
          for (int32_t oci_c12 = 0; oci_c12 < 2; ++oci_c12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 4);
            int32_t cse_var_39 = (kw * 2);
            int32_t cse_var_38 = (oci_c12 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_39) + oci_c12) + 24)] * ((float*)fused_constant_6_let)[((((cse_var_40 * 18) + (kh * 6)) + cse_var_39) + oci_c12)]));
          }
          for (int32_t oci_c13 = 0; oci_c13 < 2; ++oci_c13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 4);
            int32_t cse_var_42 = (kw * 2);
            int32_t cse_var_41 = (oci_c13 + 26);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_42) + oci_c13) + 26)] * ((float*)fused_constant_6_let)[((((cse_var_43 * 18) + (kh * 6)) + cse_var_42) + oci_c13)]));
          }
          for (int32_t oci_c14 = 0; oci_c14 < 2; ++oci_c14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 4);
            int32_t cse_var_45 = (kw * 2);
            int32_t cse_var_44 = (oci_c14 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_45) + oci_c14) + 28)] * ((float*)fused_constant_6_let)[((((cse_var_46 * 18) + (kh * 6)) + cse_var_45) + oci_c14)]));
          }
          for (int32_t oci_c15 = 0; oci_c15 < 2; ++oci_c15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 4);
            int32_t cse_var_48 = (kw * 2);
            int32_t cse_var_47 = (oci_c15 + 30);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_48) + oci_c15) + 30)] * ((float*)fused_constant_6_let)[((((cse_var_49 * 18) + (kh * 6)) + cse_var_48) + oci_c15)]));
          }
          for (int32_t oci_c16 = 0; oci_c16 < 2; ++oci_c16) {
            int32_t cse_var_52 = (ax1_ax2_fused >> 4);
            int32_t cse_var_51 = (kw * 2);
            int32_t cse_var_50 = (oci_c16 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[(((((((cse_var_52 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_51) + oci_c16) + 32)] * ((float*)fused_constant_6_let)[((((cse_var_52 * 18) + (kh * 6)) + cse_var_51) + oci_c16)]));
          }
          for (int32_t oci_c17 = 0; oci_c17 < 2; ++oci_c17) {
            int32_t cse_var_55 = (ax1_ax2_fused >> 4);
            int32_t cse_var_54 = (kw * 2);
            int32_t cse_var_53 = (oci_c17 + 34);
            ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[(((((((cse_var_55 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_54) + oci_c17) + 34)] * ((float*)fused_constant_6_let)[((((cse_var_55 * 18) + (kh * 6)) + cse_var_54) + oci_c17)]));
          }
          for (int32_t oci_c18 = 0; oci_c18 < 2; ++oci_c18) {
            int32_t cse_var_58 = (ax1_ax2_fused >> 4);
            int32_t cse_var_57 = (kw * 2);
            int32_t cse_var_56 = (oci_c18 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[(((((((cse_var_58 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_57) + oci_c18) + 36)] * ((float*)fused_constant_6_let)[((((cse_var_58 * 18) + (kh * 6)) + cse_var_57) + oci_c18)]));
          }
          for (int32_t oci_c19 = 0; oci_c19 < 2; ++oci_c19) {
            int32_t cse_var_61 = (ax1_ax2_fused >> 4);
            int32_t cse_var_60 = (kw * 2);
            int32_t cse_var_59 = (oci_c19 + 38);
            ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[(((((((cse_var_61 * 5832) + (kh * 324)) + ((ax1_ax2_fused & 15) * 324)) + (ow_outer * 40)) + cse_var_60) + oci_c19) + 38)] * ((float*)fused_constant_6_let)[((((cse_var_61 * 18) + (kh * 6)) + cse_var_60) + oci_c19)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oci = 0; oci < 2; ++oci) {
          int32_t cse_var_62 = (ow_inner * 2);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 40) + cse_var_62) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_62 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_66 = (ax3_outer * 40);
          int32_t cse_var_65 = (ax3_inner * 2);
          int32_t cse_var_64 = (((ax1_ax2_fused >> 4) * 2) + ax4);
          int32_t cse_var_63 = ((cse_var_66 + cse_var_65) + ax4);
          float _1 = ((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let)[cse_var_64];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax1_ax2_fused * 320) + cse_var_66) + cse_var_65) + ax4)] = ((((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let)[cse_var_64]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_10(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_43_let = (&(global_const_workspace_48_var[2151696]));
  void* fused_constant_42_let = (&(global_const_workspace_48_var[2015840]));
  void* PaddedInput_let = (&(global_workspace_49_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1432; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused & 7);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 164) + i3)] = (((((2 <= cse_var_1) && (cse_var_1 < 6)) && (2 <= i3)) && (i3 < 162)) ? placeholder[(((((i0_i1_fused_i2_fused >> 3) * 640) + (cse_var_1 * 160)) + i3) - 322)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 716; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_49_var[1397632]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_49_var[1398272]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (((cse_var_4 * 25) + (kh * 5)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1312) + (kh * 164)) + ((ax1_ax2_fused & 3) * 164)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_42_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_42_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 2);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_43_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_43_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_11(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_47_let = (&(global_const_workspace_52_var[2150976]));
  void* fused_constant_46_let = (&(global_const_workspace_52_var[1997936]));
  void* PaddedInput_let = (&(global_workspace_53_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1253; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused % 7);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 164) + i3)] = (((((2 <= cse_var_1) && (cse_var_1 < 6)) && (2 <= i3)) && (i3 < 162)) ? placeholder[(((((i0_i1_fused_i2_fused / 7) * 640) + (cse_var_1 * 160)) + i3) - 322)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 358; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_53_var[1051088]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_53_var[1051728]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 1);
          int32_t cse_var_3 = (((cse_var_4 * 25) + (kh * 5)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1148) + ((ax1_ax2_fused & 1) * 328)) + (kh * 164)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_46_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_46_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 1);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_47_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_47_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_12(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_55_let = (&(global_const_workspace_66_var[2142240]));
  void* fused_constant_54_let = (&(global_const_workspace_66_var[1867424]));
  void* PaddedInput_let = (&(global_workspace_67_var[1280]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1074; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      for (int32_t i4 = 0; i4 < 2; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 6);
        int32_t cse_var_1 = (i3 * 2);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 328) + cse_var_1) + i4)] = (((((2 <= cse_var_2) && (cse_var_2 < 4)) && (2 <= i3)) && (i3 < 162)) ? placeholder[((((((i0_i1_fused_i2_fused / 6) * 640) + (cse_var_2 * 320)) + cse_var_1) + i4) - 644)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 358; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_67_var[0]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_67_var[1868608]));
      for (int32_t oci_c_init = 0; oci_c_init < 2; ++oci_c_init) {
        ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
      }
      for (int32_t oci_c_init1 = 0; oci_c_init1 < 2; ++oci_c_init1) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init1 + 2)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init2 = 0; oci_c_init2 < 2; ++oci_c_init2) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init2 + 4)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init3 = 0; oci_c_init3 < 2; ++oci_c_init3) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init3 + 6)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init4 = 0; oci_c_init4 < 2; ++oci_c_init4) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init4 + 8)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init5 = 0; oci_c_init5 < 2; ++oci_c_init5) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init5 + 10)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init6 = 0; oci_c_init6 < 2; ++oci_c_init6) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init6 + 12)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init7 = 0; oci_c_init7 < 2; ++oci_c_init7) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init7 + 14)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init8 = 0; oci_c_init8 < 2; ++oci_c_init8) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init8 + 16)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init9 = 0; oci_c_init9 < 2; ++oci_c_init9) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init9 + 18)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init10 = 0; oci_c_init10 < 2; ++oci_c_init10) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init10 + 20)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init11 = 0; oci_c_init11 < 2; ++oci_c_init11) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init11 + 22)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init12 = 0; oci_c_init12 < 2; ++oci_c_init12) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init12 + 24)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init13 = 0; oci_c_init13 < 2; ++oci_c_init13) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init13 + 26)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init14 = 0; oci_c_init14 < 2; ++oci_c_init14) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init14 + 28)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init15 = 0; oci_c_init15 < 2; ++oci_c_init15) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init15 + 30)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init16 = 0; oci_c_init16 < 2; ++oci_c_init16) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init16 + 32)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init17 = 0; oci_c_init17 < 2; ++oci_c_init17) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init17 + 34)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init18 = 0; oci_c_init18 < 2; ++oci_c_init18) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init18 + 36)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init19 = 0; oci_c_init19 < 2; ++oci_c_init19) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init19 + 38)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          for (int32_t oci_c = 0; oci_c < 2; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 1);
            int32_t cse_var_3 = (kw * 2);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_54_let)[((((cse_var_4 * 50) + (kh * 10)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c1 = 0; oci_c1 < 2; ++oci_c1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 1);
            int32_t cse_var_6 = (kw * 2);
            int32_t cse_var_5 = (oci_c1 + 2);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_6) + oci_c1) + 2)] * ((float*)fused_constant_54_let)[((((cse_var_7 * 50) + (kh * 10)) + cse_var_6) + oci_c1)]));
          }
          for (int32_t oci_c2 = 0; oci_c2 < 2; ++oci_c2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 1);
            int32_t cse_var_9 = (kw * 2);
            int32_t cse_var_8 = (oci_c2 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_9) + oci_c2) + 4)] * ((float*)fused_constant_54_let)[((((cse_var_10 * 50) + (kh * 10)) + cse_var_9) + oci_c2)]));
          }
          for (int32_t oci_c3 = 0; oci_c3 < 2; ++oci_c3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 1);
            int32_t cse_var_12 = (kw * 2);
            int32_t cse_var_11 = (oci_c3 + 6);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_12) + oci_c3) + 6)] * ((float*)fused_constant_54_let)[((((cse_var_13 * 50) + (kh * 10)) + cse_var_12) + oci_c3)]));
          }
          for (int32_t oci_c4 = 0; oci_c4 < 2; ++oci_c4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 1);
            int32_t cse_var_15 = (kw * 2);
            int32_t cse_var_14 = (oci_c4 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_15) + oci_c4) + 8)] * ((float*)fused_constant_54_let)[((((cse_var_16 * 50) + (kh * 10)) + cse_var_15) + oci_c4)]));
          }
          for (int32_t oci_c5 = 0; oci_c5 < 2; ++oci_c5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 1);
            int32_t cse_var_18 = (kw * 2);
            int32_t cse_var_17 = (oci_c5 + 10);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_18) + oci_c5) + 10)] * ((float*)fused_constant_54_let)[((((cse_var_19 * 50) + (kh * 10)) + cse_var_18) + oci_c5)]));
          }
          for (int32_t oci_c6 = 0; oci_c6 < 2; ++oci_c6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 1);
            int32_t cse_var_21 = (kw * 2);
            int32_t cse_var_20 = (oci_c6 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_21) + oci_c6) + 12)] * ((float*)fused_constant_54_let)[((((cse_var_22 * 50) + (kh * 10)) + cse_var_21) + oci_c6)]));
          }
          for (int32_t oci_c7 = 0; oci_c7 < 2; ++oci_c7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 1);
            int32_t cse_var_24 = (kw * 2);
            int32_t cse_var_23 = (oci_c7 + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_24) + oci_c7) + 14)] * ((float*)fused_constant_54_let)[((((cse_var_25 * 50) + (kh * 10)) + cse_var_24) + oci_c7)]));
          }
          for (int32_t oci_c8 = 0; oci_c8 < 2; ++oci_c8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 1);
            int32_t cse_var_27 = (kw * 2);
            int32_t cse_var_26 = (oci_c8 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_27) + oci_c8) + 16)] * ((float*)fused_constant_54_let)[((((cse_var_28 * 50) + (kh * 10)) + cse_var_27) + oci_c8)]));
          }
          for (int32_t oci_c9 = 0; oci_c9 < 2; ++oci_c9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 1);
            int32_t cse_var_30 = (kw * 2);
            int32_t cse_var_29 = (oci_c9 + 18);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_30) + oci_c9) + 18)] * ((float*)fused_constant_54_let)[((((cse_var_31 * 50) + (kh * 10)) + cse_var_30) + oci_c9)]));
          }
          for (int32_t oci_c10 = 0; oci_c10 < 2; ++oci_c10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 1);
            int32_t cse_var_33 = (kw * 2);
            int32_t cse_var_32 = (oci_c10 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_33) + oci_c10) + 20)] * ((float*)fused_constant_54_let)[((((cse_var_34 * 50) + (kh * 10)) + cse_var_33) + oci_c10)]));
          }
          for (int32_t oci_c11 = 0; oci_c11 < 2; ++oci_c11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 1);
            int32_t cse_var_36 = (kw * 2);
            int32_t cse_var_35 = (oci_c11 + 22);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_36) + oci_c11) + 22)] * ((float*)fused_constant_54_let)[((((cse_var_37 * 50) + (kh * 10)) + cse_var_36) + oci_c11)]));
          }
          for (int32_t oci_c12 = 0; oci_c12 < 2; ++oci_c12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 1);
            int32_t cse_var_39 = (kw * 2);
            int32_t cse_var_38 = (oci_c12 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_39) + oci_c12) + 24)] * ((float*)fused_constant_54_let)[((((cse_var_40 * 50) + (kh * 10)) + cse_var_39) + oci_c12)]));
          }
          for (int32_t oci_c13 = 0; oci_c13 < 2; ++oci_c13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 1);
            int32_t cse_var_42 = (kw * 2);
            int32_t cse_var_41 = (oci_c13 + 26);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_42) + oci_c13) + 26)] * ((float*)fused_constant_54_let)[((((cse_var_43 * 50) + (kh * 10)) + cse_var_42) + oci_c13)]));
          }
          for (int32_t oci_c14 = 0; oci_c14 < 2; ++oci_c14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 1);
            int32_t cse_var_45 = (kw * 2);
            int32_t cse_var_44 = (oci_c14 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_45) + oci_c14) + 28)] * ((float*)fused_constant_54_let)[((((cse_var_46 * 50) + (kh * 10)) + cse_var_45) + oci_c14)]));
          }
          for (int32_t oci_c15 = 0; oci_c15 < 2; ++oci_c15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 1);
            int32_t cse_var_48 = (kw * 2);
            int32_t cse_var_47 = (oci_c15 + 30);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_48) + oci_c15) + 30)] * ((float*)fused_constant_54_let)[((((cse_var_49 * 50) + (kh * 10)) + cse_var_48) + oci_c15)]));
          }
          for (int32_t oci_c16 = 0; oci_c16 < 2; ++oci_c16) {
            int32_t cse_var_52 = (ax1_ax2_fused >> 1);
            int32_t cse_var_51 = (kw * 2);
            int32_t cse_var_50 = (oci_c16 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[(((((((cse_var_52 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_51) + oci_c16) + 32)] * ((float*)fused_constant_54_let)[((((cse_var_52 * 50) + (kh * 10)) + cse_var_51) + oci_c16)]));
          }
          for (int32_t oci_c17 = 0; oci_c17 < 2; ++oci_c17) {
            int32_t cse_var_55 = (ax1_ax2_fused >> 1);
            int32_t cse_var_54 = (kw * 2);
            int32_t cse_var_53 = (oci_c17 + 34);
            ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[(((((((cse_var_55 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_54) + oci_c17) + 34)] * ((float*)fused_constant_54_let)[((((cse_var_55 * 50) + (kh * 10)) + cse_var_54) + oci_c17)]));
          }
          for (int32_t oci_c18 = 0; oci_c18 < 2; ++oci_c18) {
            int32_t cse_var_58 = (ax1_ax2_fused >> 1);
            int32_t cse_var_57 = (kw * 2);
            int32_t cse_var_56 = (oci_c18 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[(((((((cse_var_58 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_57) + oci_c18) + 36)] * ((float*)fused_constant_54_let)[((((cse_var_58 * 50) + (kh * 10)) + cse_var_57) + oci_c18)]));
          }
          for (int32_t oci_c19 = 0; oci_c19 < 2; ++oci_c19) {
            int32_t cse_var_61 = (ax1_ax2_fused >> 1);
            int32_t cse_var_60 = (kw * 2);
            int32_t cse_var_59 = (oci_c19 + 38);
            ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[(((((((cse_var_61 * 1968) + (kh * 328)) + ((ax1_ax2_fused & 1) * 328)) + (ow_outer * 40)) + cse_var_60) + oci_c19) + 38)] * ((float*)fused_constant_54_let)[((((cse_var_61 * 50) + (kh * 10)) + cse_var_60) + oci_c19)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oci = 0; oci < 2; ++oci) {
          int32_t cse_var_62 = (ow_inner * 2);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 40) + cse_var_62) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_62 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_66 = (ax3_outer * 40);
          int32_t cse_var_65 = (ax3_inner * 2);
          int32_t cse_var_64 = (((ax1_ax2_fused >> 1) * 2) + ax4);
          int32_t cse_var_63 = ((cse_var_66 + cse_var_65) + ax4);
          float _1 = ((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_55_let)[cse_var_64];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax1_ax2_fused * 320) + cse_var_66) + cse_var_65) + ax4)] = ((((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_55_let)[cse_var_64]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_2(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_14_var[2163152]));
  void* fused_constant_10_let = (&(global_const_workspace_14_var[2140656]));
  void* PaddedInput_let = (&(global_workspace_15_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 198; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 162; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 18);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 648) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 17)) && (1 <= i3)) && (i3 < 161)) ? placeholder[((((((i0_i1_fused_i2_fused / 18) * 10240) + (cse_var_2 * 640)) + cse_var_1) + i4) - 644)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 176; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_15_var[963776]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_15_var[966336]));
      for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
        ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
      }
      for (int32_t oci_c_init1 = 0; oci_c_init1 < 4; ++oci_c_init1) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init1 + 4)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init2 = 0; oci_c_init2 < 4; ++oci_c_init2) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init2 + 8)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init3 = 0; oci_c_init3 < 4; ++oci_c_init3) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init3 + 12)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init4 = 0; oci_c_init4 < 4; ++oci_c_init4) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init4 + 16)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init5 = 0; oci_c_init5 < 4; ++oci_c_init5) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init5 + 20)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init6 = 0; oci_c_init6 < 4; ++oci_c_init6) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init6 + 24)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init7 = 0; oci_c_init7 < 4; ++oci_c_init7) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init7 + 28)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init8 = 0; oci_c_init8 < 4; ++oci_c_init8) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init8 + 32)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init9 = 0; oci_c_init9 < 4; ++oci_c_init9) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init9 + 36)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init10 = 0; oci_c_init10 < 4; ++oci_c_init10) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init10 + 40)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init11 = 0; oci_c_init11 < 4; ++oci_c_init11) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init11 + 44)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init12 = 0; oci_c_init12 < 4; ++oci_c_init12) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init12 + 48)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init13 = 0; oci_c_init13 < 4; ++oci_c_init13) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init13 + 52)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init14 = 0; oci_c_init14 < 4; ++oci_c_init14) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init14 + 56)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init15 = 0; oci_c_init15 < 4; ++oci_c_init15) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init15 + 60)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init16 = 0; oci_c_init16 < 4; ++oci_c_init16) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init16 + 64)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init17 = 0; oci_c_init17 < 4; ++oci_c_init17) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init17 + 68)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init18 = 0; oci_c_init18 < 4; ++oci_c_init18) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init18 + 72)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init19 = 0; oci_c_init19 < 4; ++oci_c_init19) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init19 + 76)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 4);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_3) + oci_c)] * ((float*)fused_constant_10_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c1 = 0; oci_c1 < 4; ++oci_c1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 4);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_6) + oci_c1) + 4)] * ((float*)fused_constant_10_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c1)]));
          }
          for (int32_t oci_c2 = 0; oci_c2 < 4; ++oci_c2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 4);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_9) + oci_c2) + 8)] * ((float*)fused_constant_10_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c2)]));
          }
          for (int32_t oci_c3 = 0; oci_c3 < 4; ++oci_c3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 4);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_12) + oci_c3) + 12)] * ((float*)fused_constant_10_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c3)]));
          }
          for (int32_t oci_c4 = 0; oci_c4 < 4; ++oci_c4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 4);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_15) + oci_c4) + 16)] * ((float*)fused_constant_10_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c4)]));
          }
          for (int32_t oci_c5 = 0; oci_c5 < 4; ++oci_c5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 4);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_18) + oci_c5) + 20)] * ((float*)fused_constant_10_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c5)]));
          }
          for (int32_t oci_c6 = 0; oci_c6 < 4; ++oci_c6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 4);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_21) + oci_c6) + 24)] * ((float*)fused_constant_10_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c6)]));
          }
          for (int32_t oci_c7 = 0; oci_c7 < 4; ++oci_c7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 4);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_24) + oci_c7) + 28)] * ((float*)fused_constant_10_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c7)]));
          }
          for (int32_t oci_c8 = 0; oci_c8 < 4; ++oci_c8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 4);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_27) + oci_c8) + 32)] * ((float*)fused_constant_10_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c8)]));
          }
          for (int32_t oci_c9 = 0; oci_c9 < 4; ++oci_c9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 4);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_30) + oci_c9) + 36)] * ((float*)fused_constant_10_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c9)]));
          }
          for (int32_t oci_c10 = 0; oci_c10 < 4; ++oci_c10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 4);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_33) + oci_c10) + 40)] * ((float*)fused_constant_10_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c10)]));
          }
          for (int32_t oci_c11 = 0; oci_c11 < 4; ++oci_c11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 4);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_36) + oci_c11) + 44)] * ((float*)fused_constant_10_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c11)]));
          }
          for (int32_t oci_c12 = 0; oci_c12 < 4; ++oci_c12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 4);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_39) + oci_c12) + 48)] * ((float*)fused_constant_10_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c12)]));
          }
          for (int32_t oci_c13 = 0; oci_c13 < 4; ++oci_c13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 4);
            int32_t cse_var_42 = (kw * 4);
            int32_t cse_var_41 = (oci_c13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_42) + oci_c13) + 52)] * ((float*)fused_constant_10_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c13)]));
          }
          for (int32_t oci_c14 = 0; oci_c14 < 4; ++oci_c14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 4);
            int32_t cse_var_45 = (kw * 4);
            int32_t cse_var_44 = (oci_c14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_45) + oci_c14) + 56)] * ((float*)fused_constant_10_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c14)]));
          }
          for (int32_t oci_c15 = 0; oci_c15 < 4; ++oci_c15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 4);
            int32_t cse_var_48 = (kw * 4);
            int32_t cse_var_47 = (oci_c15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_48) + oci_c15) + 60)] * ((float*)fused_constant_10_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c15)]));
          }
          for (int32_t oci_c16 = 0; oci_c16 < 4; ++oci_c16) {
            int32_t cse_var_52 = (ax1_ax2_fused >> 4);
            int32_t cse_var_51 = (kw * 4);
            int32_t cse_var_50 = (oci_c16 + 64);
            ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[(((((((cse_var_52 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_51) + oci_c16) + 64)] * ((float*)fused_constant_10_let)[((((cse_var_52 * 36) + (kh * 12)) + cse_var_51) + oci_c16)]));
          }
          for (int32_t oci_c17 = 0; oci_c17 < 4; ++oci_c17) {
            int32_t cse_var_55 = (ax1_ax2_fused >> 4);
            int32_t cse_var_54 = (kw * 4);
            int32_t cse_var_53 = (oci_c17 + 68);
            ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[(((((((cse_var_55 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_54) + oci_c17) + 68)] * ((float*)fused_constant_10_let)[((((cse_var_55 * 36) + (kh * 12)) + cse_var_54) + oci_c17)]));
          }
          for (int32_t oci_c18 = 0; oci_c18 < 4; ++oci_c18) {
            int32_t cse_var_58 = (ax1_ax2_fused >> 4);
            int32_t cse_var_57 = (kw * 4);
            int32_t cse_var_56 = (oci_c18 + 72);
            ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[(((((((cse_var_58 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_57) + oci_c18) + 72)] * ((float*)fused_constant_10_let)[((((cse_var_58 * 36) + (kh * 12)) + cse_var_57) + oci_c18)]));
          }
          for (int32_t oci_c19 = 0; oci_c19 < 4; ++oci_c19) {
            int32_t cse_var_61 = (ax1_ax2_fused >> 4);
            int32_t cse_var_60 = (kw * 4);
            int32_t cse_var_59 = (oci_c19 + 76);
            ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[(((((((cse_var_61 * 11664) + (kh * 648)) + ((ax1_ax2_fused & 15) * 648)) + (ow_outer * 80)) + cse_var_60) + oci_c19) + 76)] * ((float*)fused_constant_10_let)[((((cse_var_61 * 36) + (kh * 12)) + cse_var_60) + oci_c19)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_62 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 80) + cse_var_62) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_62 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_66 = (ax3_outer * 80);
          int32_t cse_var_65 = (ax3_inner * 4);
          int32_t cse_var_64 = (((ax1_ax2_fused >> 4) * 4) + ax4);
          int32_t cse_var_63 = ((cse_var_66 + cse_var_65) + ax4);
          float _1 = ((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let)[cse_var_64];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax1_ax2_fused * 640) + cse_var_66) + cse_var_65) + ax4)] = ((((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let)[cse_var_64]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_3(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let = (&(global_const_workspace_18_var[2162976]));
  void* fused_constant_14_let = (&(global_const_workspace_18_var[2139072]));
  void* PaddedInput_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 187; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 162; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 17);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 648) + cse_var_1) + i4)] = ((((1 <= cse_var_2) && (1 <= i3)) && (i3 < 161)) ? placeholder[((((((i0_i1_fused_i2_fused / 17) * 10240) + (cse_var_2 * 640)) + cse_var_1) + i4) - 644)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 88; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_19_var[709984]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_19_var[712544]));
      for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
        ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
      }
      for (int32_t oci_c_init1 = 0; oci_c_init1 < 4; ++oci_c_init1) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init1 + 4)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init2 = 0; oci_c_init2 < 4; ++oci_c_init2) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init2 + 8)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init3 = 0; oci_c_init3 < 4; ++oci_c_init3) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init3 + 12)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init4 = 0; oci_c_init4 < 4; ++oci_c_init4) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init4 + 16)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init5 = 0; oci_c_init5 < 4; ++oci_c_init5) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init5 + 20)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init6 = 0; oci_c_init6 < 4; ++oci_c_init6) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init6 + 24)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init7 = 0; oci_c_init7 < 4; ++oci_c_init7) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init7 + 28)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init8 = 0; oci_c_init8 < 4; ++oci_c_init8) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init8 + 32)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init9 = 0; oci_c_init9 < 4; ++oci_c_init9) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init9 + 36)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init10 = 0; oci_c_init10 < 4; ++oci_c_init10) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init10 + 40)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init11 = 0; oci_c_init11 < 4; ++oci_c_init11) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init11 + 44)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init12 = 0; oci_c_init12 < 4; ++oci_c_init12) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init12 + 48)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init13 = 0; oci_c_init13 < 4; ++oci_c_init13) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init13 + 52)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init14 = 0; oci_c_init14 < 4; ++oci_c_init14) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init14 + 56)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init15 = 0; oci_c_init15 < 4; ++oci_c_init15) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init15 + 60)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init16 = 0; oci_c_init16 < 4; ++oci_c_init16) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init16 + 64)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init17 = 0; oci_c_init17 < 4; ++oci_c_init17) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init17 + 68)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init18 = 0; oci_c_init18 < 4; ++oci_c_init18) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init18 + 72)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init19 = 0; oci_c_init19 < 4; ++oci_c_init19) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init19 + 76)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 3);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_3) + oci_c)] * ((float*)fused_constant_14_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c1 = 0; oci_c1 < 4; ++oci_c1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 3);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_6) + oci_c1) + 4)] * ((float*)fused_constant_14_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c1)]));
          }
          for (int32_t oci_c2 = 0; oci_c2 < 4; ++oci_c2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 3);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_9) + oci_c2) + 8)] * ((float*)fused_constant_14_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c2)]));
          }
          for (int32_t oci_c3 = 0; oci_c3 < 4; ++oci_c3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 3);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_12) + oci_c3) + 12)] * ((float*)fused_constant_14_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c3)]));
          }
          for (int32_t oci_c4 = 0; oci_c4 < 4; ++oci_c4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 3);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_15) + oci_c4) + 16)] * ((float*)fused_constant_14_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c4)]));
          }
          for (int32_t oci_c5 = 0; oci_c5 < 4; ++oci_c5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 3);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_18) + oci_c5) + 20)] * ((float*)fused_constant_14_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c5)]));
          }
          for (int32_t oci_c6 = 0; oci_c6 < 4; ++oci_c6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 3);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_21) + oci_c6) + 24)] * ((float*)fused_constant_14_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c6)]));
          }
          for (int32_t oci_c7 = 0; oci_c7 < 4; ++oci_c7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 3);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_24) + oci_c7) + 28)] * ((float*)fused_constant_14_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c7)]));
          }
          for (int32_t oci_c8 = 0; oci_c8 < 4; ++oci_c8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 3);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_27) + oci_c8) + 32)] * ((float*)fused_constant_14_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c8)]));
          }
          for (int32_t oci_c9 = 0; oci_c9 < 4; ++oci_c9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 3);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_30) + oci_c9) + 36)] * ((float*)fused_constant_14_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c9)]));
          }
          for (int32_t oci_c10 = 0; oci_c10 < 4; ++oci_c10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 3);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_33) + oci_c10) + 40)] * ((float*)fused_constant_14_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c10)]));
          }
          for (int32_t oci_c11 = 0; oci_c11 < 4; ++oci_c11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 3);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_36) + oci_c11) + 44)] * ((float*)fused_constant_14_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c11)]));
          }
          for (int32_t oci_c12 = 0; oci_c12 < 4; ++oci_c12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 3);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_39) + oci_c12) + 48)] * ((float*)fused_constant_14_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c12)]));
          }
          for (int32_t oci_c13 = 0; oci_c13 < 4; ++oci_c13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 3);
            int32_t cse_var_42 = (kw * 4);
            int32_t cse_var_41 = (oci_c13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_42) + oci_c13) + 52)] * ((float*)fused_constant_14_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c13)]));
          }
          for (int32_t oci_c14 = 0; oci_c14 < 4; ++oci_c14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 3);
            int32_t cse_var_45 = (kw * 4);
            int32_t cse_var_44 = (oci_c14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_45) + oci_c14) + 56)] * ((float*)fused_constant_14_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c14)]));
          }
          for (int32_t oci_c15 = 0; oci_c15 < 4; ++oci_c15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 3);
            int32_t cse_var_48 = (kw * 4);
            int32_t cse_var_47 = (oci_c15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_48) + oci_c15) + 60)] * ((float*)fused_constant_14_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c15)]));
          }
          for (int32_t oci_c16 = 0; oci_c16 < 4; ++oci_c16) {
            int32_t cse_var_52 = (ax1_ax2_fused >> 3);
            int32_t cse_var_51 = (kw * 4);
            int32_t cse_var_50 = (oci_c16 + 64);
            ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[(((((((cse_var_52 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_51) + oci_c16) + 64)] * ((float*)fused_constant_14_let)[((((cse_var_52 * 36) + (kh * 12)) + cse_var_51) + oci_c16)]));
          }
          for (int32_t oci_c17 = 0; oci_c17 < 4; ++oci_c17) {
            int32_t cse_var_55 = (ax1_ax2_fused >> 3);
            int32_t cse_var_54 = (kw * 4);
            int32_t cse_var_53 = (oci_c17 + 68);
            ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[(((((((cse_var_55 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_54) + oci_c17) + 68)] * ((float*)fused_constant_14_let)[((((cse_var_55 * 36) + (kh * 12)) + cse_var_54) + oci_c17)]));
          }
          for (int32_t oci_c18 = 0; oci_c18 < 4; ++oci_c18) {
            int32_t cse_var_58 = (ax1_ax2_fused >> 3);
            int32_t cse_var_57 = (kw * 4);
            int32_t cse_var_56 = (oci_c18 + 72);
            ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[(((((((cse_var_58 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_57) + oci_c18) + 72)] * ((float*)fused_constant_14_let)[((((cse_var_58 * 36) + (kh * 12)) + cse_var_57) + oci_c18)]));
          }
          for (int32_t oci_c19 = 0; oci_c19 < 4; ++oci_c19) {
            int32_t cse_var_61 = (ax1_ax2_fused >> 3);
            int32_t cse_var_60 = (kw * 4);
            int32_t cse_var_59 = (oci_c19 + 76);
            ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[(((((((cse_var_61 * 11016) + ((ax1_ax2_fused & 7) * 1296)) + (kh * 648)) + (ow_outer * 80)) + cse_var_60) + oci_c19) + 76)] * ((float*)fused_constant_14_let)[((((cse_var_61 * 36) + (kh * 12)) + cse_var_60) + oci_c19)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_62 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 80) + cse_var_62) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_62 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_66 = (ax3_outer * 80);
          int32_t cse_var_65 = (ax3_inner * 4);
          int32_t cse_var_64 = (((ax1_ax2_fused >> 3) * 4) + ax4);
          int32_t cse_var_63 = ((cse_var_66 + cse_var_65) + ax4);
          float _1 = ((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let)[cse_var_64];
          float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
          T_multiply[((((ax1_ax2_fused * 640) + cse_var_66) + cse_var_65) + ax4)] = ((((float*)DepthwiseConv2d_let)[cse_var_63] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let)[cse_var_64]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_4(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_19_let = (&(global_const_workspace_24_var[2161504]));
  void* fused_constant_18_let = (&(global_const_workspace_24_var[2135856]));
  void* PaddedInput_let = (&(global_workspace_25_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 890; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 162; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused % 10);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 162) + i3)] = (((((1 <= cse_var_1) && (cse_var_1 < 9)) && (1 <= i3)) && (i3 < 161)) ? placeholder[(((((i0_i1_fused_i2_fused / 10) * 1280) + (cse_var_1 * 160)) + i3) - 161)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 712; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_25_var[1032400]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_25_var[1033040]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (((cse_var_4 * 9) + (kh * 3)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1620) + (kh * 162)) + ((ax1_ax2_fused & 7) * 162)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_18_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_18_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 3);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_19_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_19_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_5(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_23_let = (&(global_const_workspace_28_var[2161136]));
  void* fused_constant_22_let = (&(global_const_workspace_28_var[2132640]));
  void* PaddedInput_let = (&(global_workspace_29_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 801; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 162; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused % 9);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 162) + i3)] = ((((1 <= cse_var_1) && (1 <= i3)) && (i3 < 161)) ? placeholder[(((((i0_i1_fused_i2_fused / 9) * 1280) + (cse_var_1 * 160)) + i3) - 161)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 356; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_29_var[746896]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_29_var[747536]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (((cse_var_4 * 9) + (kh * 3)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1458) + ((ax1_ax2_fused & 3) * 324)) + (kh * 162)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_22_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_22_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 2);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_23_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_23_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_6(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_27_let = (&(global_const_workspace_32_var[2154576]));
  void* fused_constant_26_let = (&(global_const_workspace_32_var[2087456]));
  void* PaddedInput_let = (&(global_workspace_33_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1432; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused & 7);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 164) + i3)] = (((((2 <= cse_var_1) && (cse_var_1 < 6)) && (2 <= i3)) && (i3 < 162)) ? placeholder[(((((i0_i1_fused_i2_fused >> 3) * 640) + (cse_var_1 * 160)) + i3) - 322)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 716; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_33_var[1397632]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_33_var[1398272]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (((cse_var_4 * 25) + (kh * 5)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1312) + (kh * 164)) + ((ax1_ax2_fused & 3) * 164)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_26_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_26_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 2);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_27_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_27_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_7(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_31_let = (&(global_const_workspace_36_var[2153856]));
  void* fused_constant_30_let = (&(global_const_workspace_36_var[2069552]));
  void* PaddedInput_let = (&(global_workspace_37_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1432; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused & 7);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 164) + i3)] = (((((2 <= cse_var_1) && (cse_var_1 < 6)) && (2 <= i3)) && (i3 < 162)) ? placeholder[(((((i0_i1_fused_i2_fused >> 3) * 640) + (cse_var_1 * 160)) + i3) - 322)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 716; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_37_var[1397632]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[1398272]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (((cse_var_4 * 25) + (kh * 5)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1312) + (kh * 164)) + ((ax1_ax2_fused & 3) * 164)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_30_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_30_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 2);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_31_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_31_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_8(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_35_let = (&(global_const_workspace_40_var[2153136]));
  void* fused_constant_34_let = (&(global_const_workspace_40_var[2051648]));
  void* PaddedInput_let = (&(global_workspace_41_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1432; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused & 7);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 164) + i3)] = (((((2 <= cse_var_1) && (cse_var_1 < 6)) && (2 <= i3)) && (i3 < 162)) ? placeholder[(((((i0_i1_fused_i2_fused >> 3) * 640) + (cse_var_1 * 160)) + i3) - 322)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 716; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_41_var[1397632]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_41_var[1398272]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (((cse_var_4 * 25) + (kh * 5)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1312) + (kh * 164)) + ((ax1_ax2_fused & 3) * 164)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_34_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_34_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 2);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_35_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_35_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_9(float* placeholder, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_39_let = (&(global_const_workspace_44_var[2152416]));
  void* fused_constant_38_let = (&(global_const_workspace_44_var[2033744]));
  void* PaddedInput_let = (&(global_workspace_45_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1432; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 164; ++i3) {
      int32_t cse_var_1 = (i0_i1_fused_i2_fused & 7);
      ((float*)PaddedInput_let)[((i0_i1_fused_i2_fused * 164) + i3)] = (((((2 <= cse_var_1) && (cse_var_1 < 6)) && (2 <= i3)) && (i3 < 162)) ? placeholder[(((((i0_i1_fused_i2_fused >> 3) * 640) + (cse_var_1 * 160)) + i3) - 322)] : 0.000000e+00f);
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 716; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_45_var[1397632]));
    for (int32_t ow_outer = 0; ow_outer < 8; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_45_var[1398272]));
      ((float*)DepthwiseConv2d_global_let)[0] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[1] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[2] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[3] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[4] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[5] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[6] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[7] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[8] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[9] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[10] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[11] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[12] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[13] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[14] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[15] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[16] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[17] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[18] = 0.000000e+00f;
      ((float*)DepthwiseConv2d_global_let)[19] = 0.000000e+00f;
      for (int32_t kh = 0; kh < 5; ++kh) {
        for (int32_t kw = 0; kw < 5; ++kw) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (((cse_var_4 * 25) + (kh * 5)) + kw);
          int32_t cse_var_2 = (((((cse_var_4 * 1312) + (kh * 164)) + ((ax1_ax2_fused & 3) * 164)) + (ow_outer * 20)) + kw);
          ((float*)DepthwiseConv2d_global_let)[0] = (((float*)DepthwiseConv2d_global_let)[0] + (((float*)PaddedInput_let)[cse_var_2] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[1] = (((float*)DepthwiseConv2d_global_let)[1] + (((float*)PaddedInput_let)[(cse_var_2 + 1)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[2] = (((float*)DepthwiseConv2d_global_let)[2] + (((float*)PaddedInput_let)[(cse_var_2 + 2)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[3] = (((float*)DepthwiseConv2d_global_let)[3] + (((float*)PaddedInput_let)[(cse_var_2 + 3)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[4] = (((float*)DepthwiseConv2d_global_let)[4] + (((float*)PaddedInput_let)[(cse_var_2 + 4)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[5] = (((float*)DepthwiseConv2d_global_let)[5] + (((float*)PaddedInput_let)[(cse_var_2 + 5)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[6] = (((float*)DepthwiseConv2d_global_let)[6] + (((float*)PaddedInput_let)[(cse_var_2 + 6)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[7] = (((float*)DepthwiseConv2d_global_let)[7] + (((float*)PaddedInput_let)[(cse_var_2 + 7)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[8] = (((float*)DepthwiseConv2d_global_let)[8] + (((float*)PaddedInput_let)[(cse_var_2 + 8)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[9] = (((float*)DepthwiseConv2d_global_let)[9] + (((float*)PaddedInput_let)[(cse_var_2 + 9)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[10] = (((float*)DepthwiseConv2d_global_let)[10] + (((float*)PaddedInput_let)[(cse_var_2 + 10)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[11] = (((float*)DepthwiseConv2d_global_let)[11] + (((float*)PaddedInput_let)[(cse_var_2 + 11)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[12] = (((float*)DepthwiseConv2d_global_let)[12] + (((float*)PaddedInput_let)[(cse_var_2 + 12)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[13] = (((float*)DepthwiseConv2d_global_let)[13] + (((float*)PaddedInput_let)[(cse_var_2 + 13)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[14] = (((float*)DepthwiseConv2d_global_let)[14] + (((float*)PaddedInput_let)[(cse_var_2 + 14)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[15] = (((float*)DepthwiseConv2d_global_let)[15] + (((float*)PaddedInput_let)[(cse_var_2 + 15)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[16] = (((float*)DepthwiseConv2d_global_let)[16] + (((float*)PaddedInput_let)[(cse_var_2 + 16)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[17] = (((float*)DepthwiseConv2d_global_let)[17] + (((float*)PaddedInput_let)[(cse_var_2 + 17)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[18] = (((float*)DepthwiseConv2d_global_let)[18] + (((float*)PaddedInput_let)[(cse_var_2 + 18)] * ((float*)fused_constant_38_let)[cse_var_3]));
          ((float*)DepthwiseConv2d_global_let)[19] = (((float*)DepthwiseConv2d_global_let)[19] + (((float*)PaddedInput_let)[(cse_var_2 + 19)] * ((float*)fused_constant_38_let)[cse_var_3]));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 20) + ow_inner)] = ((float*)DepthwiseConv2d_global_let)[ow_inner];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        int32_t cse_var_7 = (ax3_outer * 20);
        int32_t cse_var_6 = (ax1_ax2_fused >> 2);
        int32_t cse_var_5 = (cse_var_7 + ax3_inner);
        float _1 = ((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_39_let)[cse_var_6];
        float _2 = (_1) < (3.000000e+00f) ? (_1) : (3.000000e+00f);
        T_multiply[(((ax1_ax2_fused * 160) + cse_var_7) + ax3_inner)] = ((((float*)DepthwiseConv2d_let)[cse_var_5] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_39_let)[cse_var_6]) * ((((_2) > (-3.000000e+00f) ? (_2) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_nn_max_pool2d(float* placeholder, float* tensor, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 179; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 80; ++ax3) {
      for (int32_t ax4_init = 0; ax4_init < 2; ++ax4_init) {
        tensor[(((ax0_ax1_fused_ax2_fused * 160) + (ax3 * 2)) + ax4_init)] = -3.402823e+38f;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 160) + (ax3 * 2)) + ax4);
          float _1 = tensor[cse_var_1];
          float _2 = placeholder[(((((ax0_ax1_fused_ax2_fused * 640) + ((rv0_rv1_fused >> 1) * 320)) + (ax3 * 4)) + ((rv0_rv1_fused & 1) * 2)) + ax4)];
          tensor[cse_var_1] = ((_1) > (_2) ? (_1) : (_2));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_reshape_add(float* placeholder, float* T_add, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_reshape_constant_63_let = (&(global_const_workspace_86_var[2160736]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 80; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        if (((ax2_outer * 16) + ax2_inner) < 97) {
          int32_t cse_var_2 = (ax2_outer * 16);
          int32_t cse_var_1 = (((ax0_ax1_fused * 97) + cse_var_2) + ax2_inner);
          T_add[cse_var_1] = (placeholder[cse_var_1] + ((float*)fused_reshape_constant_63_let)[(cse_var_2 + ax2_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_squeeze_layout_transform_expand_dims_multiply_layout_transform(float* placeholder, float* T_layout_trans, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_constant_52_let = (&(global_const_workspace_62_var[512656]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32041; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax5_inner = 0; ax5_inner < 2; ++ax5_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 179);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 2) + ax5_inner)] = (((float*)fused_constant_52_let)[((((ax0_ax1_fused_ax2_fused / 179) * 358) + (ax5_inner * 179)) + cse_var_1)] * placeholder[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_squeeze_layout_transform_expand_dims_multiply_layout_transform_1(float* placeholder, float* T_layout_trans, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_constant_60_let = (&(global_const_workspace_76_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32041; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
      for (int32_t ax5_inner = 0; ax5_inner < 2; ++ax5_inner) {
        int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused % 179) * 2);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 4) + (ax4 * 2)) + ax5_inner)] = (((float*)fused_constant_60_let)[(((((ax0_ax1_fused_ax2_fused / 179) * 716) + (ax5_inner * 358)) + cse_var_1) + ax4)] * placeholder[(cse_var_1 + ax4)]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_squeeze_layout_transform_transpose_reshape(float* placeholder, float* T_reshape, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  for (int32_t ax0 = 0; ax0 < 80; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 23; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        if (((ax1_outer * 8) + (ax1_inner >> 1)) < 179) {
          T_reshape[(((ax0 * 358) + (ax1_outer * 16)) + ax1_inner)] = placeholder[((((ax1_outer * 1280) + ((ax1_inner >> 1) * 160)) + (ax0 * 2)) + (ax1_inner & 1))];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_subtract_exp(float* placeholder, float* placeholder1, float* T_exp, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 80; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        if (((ax2_outer * 16) + ax2_inner) < 97) {
          int32_t cse_var_1 = (((ax0_ax1_fused * 97) + (ax2_outer * 16)) + ax2_inner);
          T_exp[cse_var_1] = expf((placeholder[cse_var_1] - placeholder1[ax0_ax1_fused]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec_fused_sum(float* placeholder, float* placeholder_red, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 80; ++ax0_ax1_fused_ax2_fused) {
    placeholder_red[ax0_ax1_fused_ax2_fused] = 0.000000e+00f;
    for (int32_t k2 = 0; k2 < 97; ++k2) {
      placeholder_red[ax0_ax1_fused_ax2_fused] = (placeholder_red[ax0_ax1_fused_ax2_fused] + placeholder[((ax0_ax1_fused_ax2_fused * 97) + k2)]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_rec___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_25_let = (&(global_workspace_1_var[1397632]));
  void* sid_28_let = (&(global_workspace_1_var[720]));
  void* sid_24_let = (&(global_workspace_1_var[939392]));
  void* sid_16_let = (&(global_workspace_1_var[939392]));
  void* sid_20_let = (&(global_workspace_1_var[939392]));
  void* sid_18_let = (&(global_workspace_1_var[939392]));
  void* sid_5_let = (&(global_workspace_1_var[256608]));
  void* sid_22_let = (&(global_workspace_1_var[939392]));
  void* sid_21_let = (&(global_workspace_1_var[1397632]));
  void* sid_6_let = (&(global_workspace_1_var[513216]));
  void* sid_7_let = (&(global_workspace_1_var[513216]));
  void* sid_4_let = (&(global_workspace_1_var[256608]));
  void* sid_27_let = (&(global_workspace_1_var[0]));
  void* sid_29_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[128304]));
  void* sid_26_let = (&(global_workspace_1_var[821968]));
  void* sid_23_let = (&(global_workspace_1_var[1397632]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[576720]));
  void* sid_8_let = (&(global_workspace_1_var[963776]));
  void* sid_19_let = (&(global_workspace_1_var[1397632]));
  void* sid_17_let = (&(global_workspace_1_var[1397632]));
  void* sid_13_let = (&(global_workspace_1_var[1032400]));
  void* sid_3_let = (&(global_workspace_1_var[128304]));
  void* sid_9_let = (&(global_workspace_1_var[484704]));
  void* sid_11_let = (&(global_workspace_1_var[576720]));
  void* sid_15_let = (&(global_workspace_1_var[939392]));
  void* sid_1_let = (&(global_workspace_1_var[127120]));
  void* sid_14_let = (&(global_workspace_1_var[519056]));
  void* sid_30_let = (&(global_workspace_1_var[256336]));
  void* sid_43_let = (&(global_workspace_1_var[31040]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_32_let = (&(global_workspace_1_var[1410368]));
  void* sid_33_let = (&(global_workspace_1_var[1410368]));
  void* sid_34_let = (&(global_workspace_1_var[1440]));
  void* sid_35_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[1440]));
  void* sid_37_let = (&(global_workspace_1_var[512656]));
  void* sid_38_let = (&(global_workspace_1_var[0]));
  void* sid_39_let = (&(global_workspace_1_var[512656]));
  void* sid_40_let = (&(global_workspace_1_var[114560]));
  void* sid_41_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[114560]));
  void* sid_44_let = (&(global_workspace_1_var[62080]));
  void* sid_45_let = (&(global_workspace_1_var[0]));
  void* sid_46_let = (&(global_workspace_1_var[31040]));
  if (tvmgen_rec_fused_layout_transform(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_2(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_2(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_3(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_3(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_layout_transform_1(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_4(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_4(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_5(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_5(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_6(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_6(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_7(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_7(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_8(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_8(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_9(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_9(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_10(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_10(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_11(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_11(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_adaptive_avg_pool2d(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_nn_relu(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_layout_transform_2(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_multiply_add_clip(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_squeeze_layout_transform_expand_dims_multiply_layout_transform(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_12(sid_26_let, sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_add_multiply_12(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_adaptive_avg_pool2d_1(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_layout_transform_3(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_1(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_multiply_add_clip_1(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_squeeze_layout_transform_expand_dims_multiply_layout_transform_1(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_add_multiply_13(sid_33_let, sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_max_pool2d(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_squeeze_layout_transform_transpose_reshape(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_nn_contrib_dense_pack(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_reshape_add(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_max(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_subtract_exp(sid_43_let, sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_sum(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_rec_fused_divide(sid_45_let, sid_46_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

