#include <iostream>
#include <string>
#include <cmath>

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#else
#define EMSCRIPTEN_KEEPALIVE
#endif

using namespace std;

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    float calculateScore(const char* gender_arg, const char* class_name_arg, int event1, float p) {
        int a = 1200;
        string gender(gender_arg);
        string class_name(class_name_arg);

        // --- Strict Event & Classification Validation ---
        bool is_im = (event1 >= 16 && event1 <= 18);
        bool is_breast = (event1 >= 10 && event1 <= 12);
        bool is_other = !is_im && !is_breast;

        bool class_is_sm = (class_name.rfind("SM", 0) == 0);
        bool class_is_sb = (class_name.rfind("SB", 0) == 0);
        bool class_is_s = (class_name.rfind("S", 0) == 0) && !class_is_sb && !class_is_sm;

        if ((is_im && !class_is_sm) || (is_breast && !class_is_sb) || (is_other && !class_is_s)) {
            return -1.0f;
        }
        // ------------------------------------------------

        bool validInput = false;
        float b = 0.0f;
        float c = 0.0f;

        switch (event1) {
            case 1:
                if (gender == "Male") {
                    b = 6.190278;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 515.385;
                    }
                    else if (class_name == "S2") {
                        c = 433.181;
                    }
                    else if (class_name == "S3") {
                        c = 333.674;
                    }
                    else if (class_name == "S4") {
                        c = 268.021;
                    }
                    else if (class_name == "S5") {
                        c = 244.5;
                    }
                    else if (class_name == "S6") {
                        c = 228.082;
                    }
                    else if (class_name == "S7") {
                        c = 217.608;
                    }
                    else if (class_name == "S8") {
                        c = 207.301;
                    }
                    else if (class_name == "S9") {
                        c = 198.669;
                    }
                    else if (class_name == "S10") {
                        c = 188.441;
                    }
                    else if (class_name == "S11") {
                        c = 199.846;
                    }
                    else if (class_name == "S12") {
                        c = 183.932;
                    }
                    else if (class_name == "S13") {
                        c = 183.895;
                    }
                    else if (class_name == "S14") {
                        validInput = false;
                    }

                }

                if (gender == "Female") {
                    b = 5.542675;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 496.208;
                    }
                    else if (class_name == "S2") {
                        c = 422.286;
                    }
                    else if (class_name == "S3") {
                        c = 340.569;
                    }
                    else if (class_name == "S4") {
                        c = 263.585;
                    }
                    else if (class_name == "S5") {
                        c = 260.748;
                    }
                    else if (class_name == "S6") {
                        c = 236.95;
                    }
                    else if (class_name == "S7") {
                        c = 229.74;
                    }
                    else if (class_name == "S8") {
                        c = 218.616;
                    }
                    else if (class_name == "S9") {
                        c = 206.819;
                    }
                    else if (class_name == "S10") {
                        c = 198.416;
                    }
                    else if (class_name == "S11") {
                        c = 207.528;
                    }
                    else if (class_name == "S12") {
                        c = 189.189;
                    }
                    else if (class_name == "S13") {
                        c = 191.273;
                    }
                    else if (class_name == "S14") {
                        validInput = false;            
                    }
                }
                break;

            case 2:
                if (gender == "Male") {
                    b = 6.234464;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 1092.007;
                    }
                    else if (class_name == "S2") {
                        c = 951.321;
                    }
                    else if (class_name == "S3") {
                        c = 743.315;
                    }
                    else if (class_name == "S4") {
                        c = 629.473;
                    }
                    else if (class_name == "S5") {
                        c = 540.915;
                    }
                    else if (class_name == "S6") {
                        c = 507.07;
                    }
                    else if (class_name == "S7") {
                        c = 480.627;
                    }
                    else if (class_name == "S8") {
                        c = 450.768;
                    }
                    else if (class_name == "S9") {
                        c = 433.183;
                    }
                    else if (class_name == "S10") {
                        c = 411.948;
                    }
                    else if (class_name == "S11") {
                        c = 445.317;
                    }
                    else if (class_name == "S12") {
                        c = 403.699;
                    }
                    else if (class_name == "S13") {
                        c = 401.287;
                    }
                    else if (class_name == "S14") {
                        c = 414.275;
                    }

                }

                if (gender == "Female") {
                    b = 5.631887;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 1078.991;
                    }
                    else if (class_name == "S2") {
                        c = 907.483;
                    }
                    else if (class_name == "S3") {
                        c = 659.277;
                    }
                    else if (class_name == "S4") {
                        c = 588.663;
                    }
                    else if (class_name == "S5") {
                        c = 561.858;
                    }
                    else if (class_name == "S6") {
                        c = 524.537;
                    }
                    else if (class_name == "S7") {
                        c = 503.545;
                    }
                    else if (class_name == "S8") {
                        c = 479.97;
                    }
                    else if (class_name == "S9") {
                        c = 454.068;
                    }
                    else if (class_name == "S10") {
                        c = 432.476;
                    }
                    else if (class_name == "S11") {
                        c = 462.868;
                    }
                    else if (class_name == "S12") {
                        c = 413.816;
                    }
                    else if (class_name == "S13") {
                        c = 421.74;
                    }
                    else if (class_name == "S14") {
                        c = 428.045;            
                    }
                }
                break;
            case 3:
                if (gender == "Male") {
                    b = 5.85741;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 2069.044;
                    }
                    else if (class_name == "S2") {
                        c = 1792.375;
                    }
                    else if (class_name == "S3") {
                        c = 1442.311;
                    }
                    else if (class_name == "S4") {
                        c = 1202.718;
                    }
                    else if (class_name == "S5") {
                        c = 1121.535;
                    }
                    else if (class_name == "S6") {
                        c = 1090.875;
                    }
                    else if (class_name == "S7") {
                        c = 1009.476;
                    }
                    else if (class_name == "S8") {
                        c = 949.555;
                    }
                    else if (class_name == "S9") {
                        c = 904.288;
                    }
                    else if (class_name == "S10") {
                        c = 858.446;
                    }
                    else if (class_name == "S11") {
                        c = 958.315;
                    }
                    else if (class_name == "S12") {
                        c = 887.098;
                    }
                    else if (class_name == "S13") {
                        c = 848.808;
                    }
                    else if (class_name == "S14") {
                        c = 861.353;
                    }

                }

                if (gender == "Female") {
                    b = 5.542626;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 2171.051;
                    }
                    else if (class_name == "S2") {
                        c = 1927.468;
                    }
                    else if (class_name == "S3") {
                        c = 1499.114;
                    }
                    else if (class_name == "S4") {
                        c = 1240.899;
                    }
                    else if (class_name == "S5") {
                        c = 1193.062;
                    }
                    else if (class_name == "S6") {
                        c = 1092.894;
                    }
                    else if (class_name == "S7") {
                        c = 1087.574;
                    }
                    else if (class_name == "S8") {
                        c = 1011.224;
                    }
                    else if (class_name == "S9") {
                        c = 986.083;
                    }
                    else if (class_name == "S10") {
                        c = 920.564;
                    }
                    else if (class_name == "S11") {
                        c = 1002.823;
                    }
                    else if (class_name == "S12") {
                        c = 896.543;
                    }
                    else if (class_name == "S13") {
                        c = 924.019;
                    }
                    else if (class_name == "S14") {
                        c = 916.839;            
                    }
                }
                break;
            case 4:
                if (gender == "Male") {
                    b = 7.031938;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 515.385;
                    }
                    else if (class_name == "S2") {
                        c = 433.181;
                    }
                    else if (class_name == "S3") {
                        c = 333.674;
                    }
                    else if (class_name == "S4") {
                        c = 268.021;
                    }
                    else if (class_name == "S5") {
                        c = 244.5;
                    }
                    else if (class_name == "S6") {
                        c = 2590.464;
                    }
                    else if (class_name == "S7") {
                        c = 2411.27;
                    }
                    else if (class_name == "S8") {
                        c = 2267.765;
                    }
                    else if (class_name == "S9") {
                        c = 2177.563;
                    }
                    else if (class_name == "S10") {
                        c = 2091.67;
                    }
                    else if (class_name == "S11") {
                        c = 2323.011;
                    }
                    else if (class_name == "S12") {
                        c = 2106.32;
                    }
                    else if (class_name == "S13") {
                        c = 2069.191;
                    }
                    else if (class_name == "S14") {
                        c = 2177.614;
                    }

                }

                if (gender == "Female") {
                    b = 7.169493;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 496.208;
                    }
                    else if (class_name == "S2") {
                        c = 422.286;
                    }
                    else if (class_name == "S3") {
                        c = 340.569;
                    }
                    else if (class_name == "S4") {
                        c = 263.585;
                    }
                    else if (class_name == "S5") {
                        c = 260.748;
                    }
                    else if (class_name == "S6") {
                        c = 2771.897;
                    }
                    else if (class_name == "S7") {
                        c = 2702.351;
                    }
                    else if (class_name == "S8") {
                        c = 2550.903;
                    }
                    else if (class_name == "S9") {
                        c = 2467.682;
                    }
                    else if (class_name == "S10") {
                        c = 2369.03;
                    }
                    else if (class_name == "S11") {
                        c = 2587.852;
                    }
                    else if (class_name == "S12") {
                        c = 2341.779;
                    }
                    else if (class_name == "S13") {
                        c = 2311.852;
                    }
                    else if (class_name == "S14") {
                        c = 2388.088;            
                    }
                }
                break;
            case 5:
                if (gender == "Male") {
                    b = 8.625102;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 515.385;
                    }
                    else if (class_name == "S2") {
                        c = 433.181;
                    }
                    else if (class_name == "S3") {
                        c = 333.674;
                    }
                    else if (class_name == "S4") {
                        c = 268.021;
                    }
                    else if (class_name == "S5") {
                        c = 244.5;
                    }
                    else if (class_name == "S6") {
                        c = 6298.916;
                    }
                    else if (class_name == "S7") {
                        c = 5985.628;
                    }
                    else if (class_name == "S8") {
                        c = 5407.854;
                    }
                    else if (class_name == "S9") {
                        c = 5296.689;
                    }
                    else if (class_name == "S10") {
                        c = 5237.697;
                    }
                    else if (class_name == "S11") {
                        c = 5703.957;
                    }
                    else if (class_name == "S12") {
                        c = 5650.812;
                    }
                    else if (class_name == "S13") {
                        c = 5287.937;
                    }
                    else if (class_name == "S14") {
                        c = 5243.527;
                    }

                }

                if (gender == "Female") {
                    b = 9.665276;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 496.208;
                    }
                    else if (class_name == "S2") {
                        c = 422.286;
                    }
                    else if (class_name == "S3") {
                        c = 340.569;
                    }
                    else if (class_name == "S4") {
                        c = 263.585;
                    }
                    else if (class_name == "S5") {
                        c = 260.748;
                    }
                    else if (class_name == "S6") {
                        c = 7099.219;
                    }
                    else if (class_name == "S7") {
                        c = 7198.259;
                    }
                    else if (class_name == "S8") {
                        c = 7010.584;
                    }
                    else if (class_name == "S9") {
                        c = 6394.379;
                    }
                    else if (class_name == "S10") {
                        c = 6333.273;
                    }
                    else if (class_name == "S11") {
                        c = 7144.465;
                    }
                    else if (class_name == "S12") {
                        c = 6240.516;
                    }
                    else if (class_name == "S13") {
                        c = 6228.878;
                    }
                    else if (class_name == "S14") {
                        c = 6360.058;            
                    }
                }
                break;
            case 6:
                if (gender == "Male") {
                    b = 8.333206;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 515.385;
                    }
                    else if (class_name == "S2") {
                        c = 433.181;
                    }
                    else if (class_name == "S3") {
                        c = 333.674;
                    }
                    else if (class_name == "S4") {
                        c = 268.021;
                    }
                    else if (class_name == "S5") {
                        c = 244.5;
                    }
                    else if (class_name == "S6") {
                        c = 12795.28;
                    }
                    else if (class_name == "S7") {
                        c = 10624.57;
                    }
                    else if (class_name == "S8") {
                        c = 10606.45;
                    }
                    else if (class_name == "S9") {
                        c = 10167.91;
                    }
                    else if (class_name == "S10") {
                        c = 9303.733;
                    }
                    else if (class_name == "S11") {
                        c = 10750.668;
                        b = 7.711087;
                    }
                    else if (class_name == "S12") {
                        c = 10703.508;
                        b = 7.711087;
                    }
                    else if (class_name == "S13") {
                        c = 9888.268;
                    }
                    else if (class_name == "S14") {
                        c = 9799.792;
                    }

                }

                if (gender == "Female") {
                    b = 8.865509;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 496.208;
                    }
                    else if (class_name == "S2") {
                        c = 422.286;
                    }
                    else if (class_name == "S3") {
                        c = 340.569;
                    }
                    else if (class_name == "S4") {
                        c = 263.585;
                    }
                    else if (class_name == "S5") {
                        c = 260.748;
                    }
                    else if (class_name == "S6") {
                        c = 13376.89;
                    }
                    else if (class_name == "S7") {
                        c = 12469.25;
                    }
                    else if (class_name == "S8") {
                        c = 13033.07;
                    }
                    else if (class_name == "S9") {
                        c = 11682.99;
                    }
                    else if (class_name == "S10") {
                        c = 12140.28;
                    }
                    else if (class_name == "S11") {
                        c = 14117.415;
                        b = 9.178323;
                    }
                    else if (class_name == "S12") {
                        c = 11395.489;
                        b = 9.178323;

                    }
                    else if (class_name == "S13") {
                        c = 11626.695;
                        b = 9.178323;
                    }
                    else if (class_name == "S14") {
                        c = 11369.03;            
                    }
                }
                break;
            case 7:
                if (gender == "Male") {
                    b = 4.42461;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 392.523;
                    }
                    else if (class_name == "S2") {
                        c = 320.425;
                    }
                    else if (class_name == "S3") {
                        c = 274.991;
                    }
                    else if (class_name == "S4") {
                        c = 252.93;
                    }
                    else if (class_name == "S5") {
                        c = 215.364;
                    }
                    else if (class_name == "S6") {
                        c = 212.669;
                    }
                    else if (class_name == "S7") {
                        c = 201.668;
                    }
                    else if (class_name == "S8") {
                        c = 185.631;
                    }
                    else if (class_name == "S9") {
                        c = 178.78;
                    }
                    else if (class_name == "S10") {
                        c = 167.819;
                    }
                    else if (class_name == "S11") {
                        c = 184.764;
                    }
                    else if (class_name == "S12") {
                        c = 162.967;
                    }
                    else if (class_name == "S13") {
                        c = 158.718;
                    }
                    else if (class_name == "S14") {
                        validInput = false;
                    }

                }

                if (gender == "Female") {
                    b = 4.463099;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 410.766;
                    }
                    else if (class_name == "S2") {
                        c = 355.767;
                    }
                    else if (class_name == "S3") {
                        c = 321.574;
                    }
                    else if (class_name == "S4") {
                        c = 283.615;
                    }
                    else if (class_name == "S5") {
                        c = 258.902;
                    }
                    else if (class_name == "S6") {
                        c = 236.191;
                    }
                    else if (class_name == "S7") {
                        c = 230.695;
                    }
                    else if (class_name == "S8") {
                        c = 221.162;
                    }
                    else if (class_name == "S9") {
                        c = 200.813;
                    }
                    else if (class_name == "S10") {
                        c = 192.112;
                    }
                    else if (class_name == "S11") {
                        c = 207.685;
                    }
                    else if (class_name == "S12") {
                        c = 192.303;
                    }
                    else if (class_name == "S13") {
                        c = 191.785;
                    }
                    else if (class_name == "S14") {
                        validInput = false;            
                    }
                }
                break;
            case 8:
                if (gender == "Male") {
                    b = 6.150928;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 1026.236;
                    }
                    else if (class_name == "S2") {
                        c = 851.864;
                    }
                    else if (class_name == "S3") {
                        c = 756.146;
                    }
                    else if (class_name == "S4") {
                        c = 724.049;
                    }
                    else if (class_name == "S5") {
                        c = 680.024;
                    }
                    else if (class_name == "S6") {
                        c = 572.561;
                    }
                    else if (class_name == "S7") {
                        c = 539.55;
                    }
                    else if (class_name == "S8") {
                        c = 512.529;
                    }
                    else if (class_name == "S9") {
                        c = 485.309;
                    }
                    else if (class_name == "S10") {
                        c = 464.394;
                    }
                    else if (class_name == "S11") {
                        c = 507.495;
                    }
                    else if (class_name == "S12") {
                        c = 445.475;
                    }
                    else if (class_name == "S13") {
                        c = 433.965;
                    }
                    else if (class_name == "S14") {
                        c = 467.708;
                    }

                }

                if (gender == "Female") {
                    b = 6.036088;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 1115.683;
                    }
                    else if (class_name == "S2") {
                        c = 954.926;
                    }
                    else if (class_name == "S3") {
                        c = 939.112;
                    }
                    else if (class_name == "S4") {
                        c = 795.583;
                    }
                    else if (class_name == "S5") {
                        c = 717.105;
                    }
                    else if (class_name == "S6") {
                        c = 626.412;
                    }
                    else if (class_name == "S7") {
                        c = 614.665;
                    }
                    else if (class_name == "S8") {
                        c = 588.462;
                    }
                    else if (class_name == "S9") {
                        c = 547.186;
                    }
                    else if (class_name == "S10") {
                        c = 513.909;
                    }
                    else if (class_name == "S11") {
                        c = 570.938;
                    }
                    else if (class_name == "S12") {
                        c = 506.073;
                    }
                    else if (class_name == "S13") {
                        c = 497.353;
                    }
                    else if (class_name == "S14") {
                        c = 513.023;            
                    }
                }
                break;
            case 9:
                if (gender == "Male") {
                    b = 7.819807;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 1026.236;
                    }
                    else if (class_name == "S2") {
                        c = 851.864;
                    }
                    else if (class_name == "S3") {
                        c = 756.146;
                    }
                    else if (class_name == "S4") {
                        c = 724.049;
                    }
                    else if (class_name == "S5") {
                        c = 680.024;
                    }
                    else if (class_name == "S6") {
                        c = 1482.918;
                    }
                    else if (class_name == "S7") {
                        c = 1476.907;
                    }
                    else if (class_name == "S8") {
                        c = 1341.687;
                    }
                    else if (class_name == "S9") {
                        c = 1288.659;
                    }
                    else if (class_name == "S10") {
                        c = 1235.41;
                    }
                    else if (class_name == "S11") {
                        c = 1345.152;
                    }
                    else if (class_name == "S12") {
                        c = 1238.642;
                    }
                    else if (class_name == "S13") {
                        c = 1202.574;
                    }
                    else if (class_name == "S14") {
                        c = 1249.638;
                    }

                }

                if (gender == "Female") {
                    b = 7.752011;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 1115.683;
                    }
                    else if (class_name == "S2") {
                        c = 954.926;
                    }
                    else if (class_name == "S3") {
                        c = 939.112;
                    }
                    else if (class_name == "S4") {
                        c = 795.583;
                    }
                    else if (class_name == "S5") {
                        c = 717.105;
                    }
                    else if (class_name == "S6") {
                        c = 1538.568;
                    }
                    else if (class_name == "S7") {
                        c = 1528.877;
                    }
                    else if (class_name == "S8") {
                        c = 1561.298;
                    }
                    else if (class_name == "S9") {
                        c = 1426.67;
                    }
                    else if (class_name == "S10") {
                        c = 1389.981;
                    }
                    else if (class_name == "S11") {
                        c = 1590.684;
                    }
                    else if (class_name == "S12") {
                        c = 1352.762;
                    }
                    else if (class_name == "S13") {
                        c = 1382.808;
                    }
                    else if (class_name == "S14") {
                        c = 1392.071;            
                    }
                }
                break;
            case 10:
                if (gender == "Male") {
                    b = 4.932103;
                    validInput = true;
                    if (class_name == "SB1") {
                        c = 528.263;
                    }
                    else if (class_name == "SB2") {
                        c = 333.076;
                    }
                    else if (class_name == "SB3") {
                        c = 299.467;
                    }
                    else if (class_name == "SB4") {
                        c = 271.204;
                    }
                    else if (class_name == "SB5") {
                        c = 268.343;
                    }
                    else if (class_name == "SB6") {
                        c = 232.309;
                    }
                    else if (class_name == "SB7") {
                        c = 227.424;
                    }
                    else if (class_name == "SB8") {
                        c = 205.596;
                    }
                    else if (class_name == "SB9") {
                        c = 200.355;
                    }
                    else if (class_name == "SB10") {
                        c = 167.819;
                    }
                    else if (class_name == "SB11") {
                        c = 213.244;
                    }
                    else if (class_name == "SB12") {
                        c = 195.17;
                    }
                    else if (class_name == "SB13") {
                        c = 191.094;
                    }
                    else if (class_name == "SB14") {
                        validInput = false;
                    }

                }

                if (gender == "Female") {
                    b = 4.557367;
                    validInput = true;
                    if (class_name == "SB1") {
                        c = 512.963;
                    }
                    else if (class_name == "SB2") {
                        c = 404.928;
                    }
                    else if (class_name == "SB3") {
                        c = 330.784;
                    }
                    else if (class_name == "SB4") {
                        c = 291.412;
                    }
                    else if (class_name == "SB5") {
                        c = 272.282;
                    }
                    else if (class_name == "SB6") {
                        c = 262.784;
                    }
                    else if (class_name == "SB7") {
                        c = 258.801;
                    }
                    else if (class_name == "SB8") {
                        c = 227.868;
                    }
                    else if (class_name == "SB9") {
                        c = 213.307;
                    }
                    else if (class_name == "SB10") {
                        c = 192.112;
                    }
                    else if (class_name == "SB11") {
                        c = 229.633;
                    }
                    else if (class_name == "SB12") {
                        c = 210.683;
                    }
                    else if (class_name == "SB13") {
                        c = 219.939;
                    }
                    else if (class_name == "SB14") {
                        validInput = false;            
                    }
                }
                break;
            case 11:
                if (gender == "Male") {
                    b = 5.160068;
                    validInput = true;
                    if (class_name == "SB1") {
                        c = 1149.221;
                    }
                    else if (class_name == "SB2") {
                        c = 872.826;
                    }
                    else if (class_name == "SB3") {
                        c = 743.745;
                    }
                    else if (class_name == "SB4") {
                        c = 624.806;
                    }
                    else if (class_name == "SB5") {
                        c = 608.269;
                    }
                    else if (class_name == "SB6") {
                        c = 532.269;
                    }
                    else if (class_name == "SB7") {
                        c = 522.243;
                    }
                    else if (class_name == "SB8") {
                        c = 474.471;
                    }
                    else if (class_name == "SB9") {
                        c = 450.872;
                    }
                    else if (class_name == "SB10") {
                        c = 467.142;
                    }
                    else if (class_name == "SB11") {
                        c = 495.119;
                    }
                    else if (class_name == "SB12") {
                        c = 442.905;
                    }
                    else if (class_name == "SB13") {
                        c = 432.01;
                    }
                    else if (class_name == "SB14") {
                        c = 450.034;
                    }

                }

                if (gender == "Female") {
                    b = 5.094752;
                    validInput = true;
                    if (class_name == "SB1") {
                        c = 1357.988;
                    }
                    else if (class_name == "SB2") {
                        c = 1097.815;
                        b = 5.069247;
                    }
                    else if (class_name == "SB3") {
                        c = 879.038;
                        b = 5.069247;
                    }
                    else if (class_name == "SB4") {
                        c = 701.665;
                        b = 5.069247;
                    }
                    else if (class_name == "SB5") {
                        c = 665.005;
                        b = 5.069247;
                    }
                    else if (class_name == "SB6") {
                        c = 622.914;
                        b = 5.069247;
                    }
                    else if (class_name == "SB7") {
                        c = 600.024;
                        b = 5.069247;
                    }
                    else if (class_name == "SB8") {
                        c = 535.607;
                        b = 5.069247;
                    }
                    else if (class_name == "SB9") {
                        c = 519.558;
                        b = 5.069247;
                    }
                    else if (class_name == "SB10") {
                        c = 516.938;
                        b = 5.069247;
                    }
                    else if (class_name == "SB11") {
                        c = 550.98;
                        b = 5.069247;
                    }
                    else if (class_name == "SB12") {
                        c = 499.493;
                        b = 5.069247;
                    }
                    else if (class_name == "SB13") {
                        c = 501.85;
                        b = 5.069247;
                    }
                    else if (class_name == "SB14") {
                        c = 511.674;
                        b = 5.069247;            
                    }
                }
                break;
            case 12:
                if (gender == "Male") {
                    b = 8.141971;
                    validInput = true;
                    if (class_name == "SB1") {
                        c = 1149.221;
                    }
                    else if (class_name == "SB2") {
                        c = 872.826;
                    }
                    else if (class_name == "SB3") {
                        c = 743.745;
                    }
                    else if (class_name == "SB4") {
                        c = 1947.233;
                    }
                    else if (class_name == "SB5") {
                        c = 1908.756;
                    }
                    else if (class_name == "SB6") {
                        c = 1691.169;
                    }
                    else if (class_name == "SB7") {
                        c = 1631.629;
                    }
                    else if (class_name == "SB8") {
                        c = 1447.102;
                    }
                    else if (class_name == "SB9") {
                        c = 1519.554;
                    }
                    else if (class_name == "SB10") {
                        c = 467.142;
                    }
                    else if (class_name == "SB11") {
                        c = 1641.054;
                    }
                    else if (class_name == "SB12") {
                        c = 1504.671;
                    }
                    else if (class_name == "SB13") {
                        c = 1372.648;
                    }
                    else if (class_name == "SB14") {
                        c = 1410.562;
                    }

                }

                if (gender == "Female") {
                    b = 8.185088;
                    validInput = true;
                    if (class_name == "SB1") {
                        c = 1357.988;
                    }
                    else if (class_name == "SB2") {
                        c = 1097.815;
                    }
                    else if (class_name == "SB3") {
                        c = 879.038;
                    }
                    else if (class_name == "SB4") {
                        c = 2080.958;
                    }
                    else if (class_name == "SB5") {
                        c = 2108.211;
                    }
                    else if (class_name == "SB6") {
                        c = 1969.968;
                    }
                    else if (class_name == "SB7") {
                        c = 1839.838;
                    }
                    else if (class_name == "SB8") {
                        c = 1722.567;
                    }
                    else if (class_name == "SB9") {
                        c = 1635.193;
                    }
                    else if (class_name == "SB10") {
                        c = 516.938;
                    }
                    else if (class_name == "SB11") {
                        c = 1847.551;
                    }
                    else if (class_name == "SB12") {
                        c = 1593.01;
                    }
                    else if (class_name == "SB13") {
                        c = 1586.37;
                    }
                    else if (class_name == "SB14") {
                        c = 1658.849;            
                    }
                }
                break;
            case 13:
                if (gender == "Male") {
                    b = 5.052771;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 797.939;
                    }
                    else if (class_name == "S2") {
                        c = 345.137;
                        b = 5.033853;
                    }
                    else if (class_name == "S3") {
                        c = 321.168;
                        b = 5.033853;
                    }
                    else if (class_name == "S4") {
                        c = 257.846;
                        b = 5.033853;
                    }
                    else if (class_name == "S5") {
                        c = 218.503;
                        b = 5.033853;
                    }
                    else if (class_name == "S6") {
                        c = 202.206;
                        b = 5.033853;
                    }
                    else if (class_name == "S7") {
                        c = 197.154;
                        b = 5.033853;
                    }
                    else if (class_name == "S8") {
                        c = 184.239;
                        b = 5.033853;
                    }
                    else if (class_name == "S9") {
                        c = 177.747;
                        b = 5.033853;
                    }
                    else if (class_name == "S10") {
                        c = 169.989;
                        b = 5.033853;
                    }
                    else if (class_name == "S11") {
                        c = 174.456;
                        b = 5.033853;
                    }
                    else if (class_name == "S12") {
                        c = 166.225;
                        b = 5.033853;
                    }
                    else if (class_name == "S13") {
                        c = 170.629;
                        b = 5.033853;
                    }
                    else if (class_name == "S14") {
                        validInput = false;
                    }

                }

                if (gender == "Female") {
                    b = 4.487057;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 484.682;
                    }
                    else if (class_name == "S2") {
                        c = 367.192;
                    }
                    else if (class_name == "S3") {
                        c = 332.484;
                    }
                    else if (class_name == "S4") {
                        c = 259.361;
                    }
                    else if (class_name == "S5") {
                        c = 252.759;
                    }
                    else if (class_name == "S6") {
                        c = 209.303;
                    }
                    else if (class_name == "S7") {
                        c = 203.172;
                    }
                    else if (class_name == "S8") {
                        c = 197.546;
                    }
                    else if (class_name == "S9") {
                        c = 182.435;
                    }
                    else if (class_name == "S10") {
                        c = 178.36;
                    }
                    else if (class_name == "S11") {
                        c = 198.452;
                    }
                    else if (class_name == "S12") {
                        c = 173.587;
                    }
                    else if (class_name == "S13") {
                        c = 177.685;
                    }
                    else if (class_name == "S14") {
                        validInput = false;            
                    }
                }
                break;
            case 14:
                if (gender == "Male") {
                    b = 7.040091;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 797.939;
                    }
                    else if (class_name == "S2") {
                        c = 361.006;
                    }
                    else if (class_name == "S3") {
                        c = 322.982;
                    }
                    else if (class_name == "S4") {
                        c = 257.779;
                    }
                    else if (class_name == "S5") {
                        c = 613.331;
                    }
                    else if (class_name == "S6") {
                        c = 592;
                    }
                    else if (class_name == "S7") {
                        c = 600.417;
                    }
                    else if (class_name == "S8") {
                        c = 513.704;
                    }
                    else if (class_name == "S9") {
                        c = 504.674;
                    }
                    else if (class_name == "S10") {
                        c = 482.455;
                    }
                    else if (class_name == "S11") {
                        c = 513.615;
                    }
                    else if (class_name == "S12") {
                        c = 469.979;
                    }
                    else if (class_name == "S13") {
                        c = 469.473;
                    }
                    else if (class_name == "S14") {
                        c = 486.044;
                    }

                }

                if (gender == "Female") {
                    b = 5.992308;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 480.522;
                    }
                    else if (class_name == "S2") {
                        c = 364.041;
                    }
                    else if (class_name == "S3") {
                        c = 330.698;
                    }
                    else if (class_name == "S4") {
                        c = 259.784;
                    }
                    else if (class_name == "S5") {
                        c = 846.834;
                    }
                    else if (class_name == "S6") {
                        c = 616.429;
                    }
                    else if (class_name == "S7") {
                        c = 587.099;
                    }
                    else if (class_name == "S8") {
                        c = 519.659;
                    }
                    else if (class_name == "S9") {
                        c = 500.899;
                    }
                    else if (class_name == "S10") {
                        c = 483.135;
                    }
                    else if (class_name == "S11") {
                        c = 559.839;
                    }
                    else if (class_name == "S12") {
                        c = 473.486;
                    }
                    else if (class_name == "S13") {
                        c = 466.156;
                    }
                    else if (class_name == "S14") {
                        c = 495.23;            
                    }
                }
                break;
            case 15:
                if (gender == "Male") {
                    b = 9.504863;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 797.939;
                    }
                    else if (class_name == "S2") {
                        c = 361.006;
                    }
                    else if (class_name == "S3") {
                        c = 322.982;
                    }
                    else if (class_name == "S4") {
                        c = 257.779;
                    }
                    else if (class_name == "S5") {
                        c = 221.489;
                    }
                    else if (class_name == "S6") {
                        c = 203.68;
                    }
                    else if (class_name == "S7") {
                        c = 197.991;
                    }
                    else if (class_name == "S8") {
                        c = 1513.063;
                    }
                    else if (class_name == "S9") {
                        c = 1442.571;
                    }
                    else if (class_name == "S10") {
                        c = 1393.794;
                    }
                    else if (class_name == "S11") {
                        c = 1553.096;
                    }
                    else if (class_name == "S12") {
                        c = 1400.883;
                    }
                    else if (class_name == "S13") {
                        c = 1280.633;
                    }
                    else if (class_name == "S14") {
                        c = 1418.816;
                    }

                }

                if (gender == "Female") {
                    b = 10.211003;
                    validInput = true;
                    if (class_name == "S1") {
                        c = 480.522;
                    }
                    else if (class_name == "S2") {
                        c = 364.041;
                    }
                    else if (class_name == "S3") {
                        c = 330.698;
                    }
                    else if (class_name == "S4") {
                        c = 259.784;
                    }
                    else if (class_name == "S5") {
                        c = 250.606;
                    }
                    else if (class_name == "S6") {
                        c = 207.423;
                    }
                    else if (class_name == "S7") {
                        c = 201.831;
                    }
                    else if (class_name == "S8") {
                        c = 1932.78;
                    }
                    else if (class_name == "S9") {
                        c = 1796.133;
                    }
                    else if (class_name == "S10") {
                        c = 1682.435;
                    }
                    else if (class_name == "S11") {
                        c = 1969.903;
                        b = 9.823312;
                    }
                    else if (class_name == "S12") {
                        c = 1727.066;
                        b = 9.823312;
                    }
                    else if (class_name == "S13") {
                        c = 1630.353;
                    }
                    else if (class_name == "S14") {
                        c = 1799.267;            
                    }
                }
                break;
            case 16:
                if (gender == "Male") {
                    b = 4.953288;
                    validInput = true;
                    if (class_name == "SM1") {
                        c = 1817.538;
                    }
                    else if (class_name == "SM2") {
                        c = 1396.204;
                    }
                    else if (class_name == "SM3") {
                        c = 1113.698;
                    }
                    else if (class_name == "SM4") {
                        c = 955.697;
                    }
                    else if (class_name == "SM5") {
                        c = 244.5;
                    }
                    else if (class_name == "SM6") {
                        c = 228.082;
                    }
                    else if (class_name == "SM7") {
                        c = 217.608;
                    }
                    else if (class_name == "SM8") {
                        c = 207.301;
                    }
                    else if (class_name == "SM9") {
                        c = 198.669;
                    }
                    else if (class_name == "SM10") {
                        c = 188.441;
                    }
                    else if (class_name == "SM11") {
                        c = 199.846;
                    }
                    else if (class_name == "SM12") {
                        c = 183.932;
                    }
                    else if (class_name == "SM13") {
                        c = 183.895;
                    }
                    else if (class_name == "SM14") {
                        validInput = false;
                    }

                }

                if (gender == "Female") {
                    b = 3.983352;
                    validInput = true;
                    if (class_name == "SM1") {
                        c = 1297.667;
                        b = 4.044227;
                    }
                    else if (class_name == "SM2") {
                        c = 1595.997;
                    }
                    else if (class_name == "SM3") {
                        c = 990.338;
                    }
                    else if (class_name == "SM4") {
                        c = 913.176;
                    }
                    else if (class_name == "SM5") {
                        c = 260.748;
                    }
                    else if (class_name == "SM6") {
                        c = 236.95;
                    }
                    else if (class_name == "SM7") {
                        c = 229.74;
                    }
                    else if (class_name == "SM8") {
                        c = 218.616;
                    }
                    else if (class_name == "SM9") {
                        c = 206.819;
                    }
                    else if (class_name == "SM10") {
                        c = 198.416;
                    }
                    else if (class_name == "SM11") {
                        c = 207.528;
                    }
                    else if (class_name == "SM12") {
                        c = 189.189;
                    }
                    else if (class_name == "SM13") {
                        c = 191.273;
                    }
                    else if (class_name == "SM14") {
                        validInput = false;            
                    }
                }
                break;
            case 17:
                if (gender == "Male") {
                    b = 7.155608;
                    validInput = true;
                    if (class_name == "SM1") {
                        c = 1929.499;
                    }
                    else if (class_name == "SM2") {
                        c = 1425.496;
                    }
                    else if (class_name == "SM3") {
                        c = 2170.953;
                    }
                    else if (class_name == "SM4") {
                        c = 1687.596;
                    }
                    else if (class_name == "SM5") {
                        c = 1537.839;
                    }
                    else if (class_name == "SM6") {
                        c = 1401.665;
                    }
                    else if (class_name == "SM7") {
                        c = 1328.357;
                    }
                    else if (class_name == "SM8") {
                        c = 1244.202;
                    }
                    else if (class_name == "SM9") {
                        c = 1191.146;
                    }
                    else if (class_name == "SM10") {
                        c = 1142.132;
                    }
                    else if (class_name == "SM11") {
                        c = 1236.267;
                    }
                    else if (class_name == "SM12") {
                        c = 1121.927;
                    }
                    else if (class_name == "SM13") {
                        c = 1111.544;
                    }
                    else if (class_name == "SM14") {
                        c = 1145.918;
                    }

                }

                if (gender == "Female") {
                    b = 6.904309;
                    validInput = true;
                    if (class_name == "SM1") {
                        c = 1297.667;
                    }
                    else if (class_name == "SM2") {
                        c = 1608.986;
                    }
                    else if (class_name == "SM3") {
                        c = 5141.396;
                        b = 6.917578;
                    }
                    else if (class_name == "SM4") {
                        c = 1912.781;
                    }
                    else if (class_name == "SM5") {
                        c = 1699.945;
                    }
                    else if (class_name == "SM6") {
                        c = 1506.044;
                    }
                    else if (class_name == "SM7") {
                        c = 1478.245;
                    }
                    else if (class_name == "SM8") {
                        c = 1374.663;
                    }
                    else if (class_name == "SM9") {
                        c = 1308.739;
                    }
                    else if (class_name == "SM10") {
                        c = 1242.786;
                    }
                    else if (class_name == "SM11") {
                        c = 1371.045;
                    }
                    else if (class_name == "SM12") {
                        c = 1245.697;
                    }
                    else if (class_name == "SM13") {
                        c = 1225.471;
                    }
                    else if (class_name == "SM14") {
                        c = 1246.273;            
                    }
                }
                break;
            case 18:
                if (gender == "Male") {
                    b = 9.693428;
                    validInput = true;
                    if (class_name == "SM1") {
                        c = 1929.499;
                    }
                    else if (class_name == "SM2") {
                        c = 1425.496;
                    }
                    else if (class_name == "SM3") {
                        c = 2255.741;
                    }
                    else if (class_name == "SM4") {
                        c = 1727.73;
                    }
                    else if (class_name == "SM5") {
                        c = 1572.295;
                    }
                    else if (class_name == "SM6") {
                        c = 1414.34;
                    }
                    else if (class_name == "SM7") {
                        c = 1338.795;
                    }
                    else if (class_name == "SM8") {
                        c = 3377.791;
                    }
                    else if (class_name == "SM9") {
                        c = 3273.121;
                    }
                    else if (class_name == "SM10") {
                        c = 3243.196;
                    }
                    else if (class_name == "SM11") {
                        c = 3622.956;
                    }
                    else if (class_name == "SM12") {
                        c = 3192.83;
                    }
                    else if (class_name == "SM13") {
                        c = 3219.15;
                    }
                    else if (class_name == "SM14") {
                        c = 3194.461;
                    }

                }

                if (gender == "Female") {
                    b = 8.825412;
                    validInput = true;
                    if (class_name == "SM1") {
                        c = 1297.667;
                    }
                    else if (class_name == "SM2") {
                        c = 1608.986;
                    }
                    else if (class_name == "SM3") {
                        c = 5141.396;
                    }
                    else if (class_name == "SM4") {
                        c = 1969.432;
                    }
                    else if (class_name == "SM5") {
                        c = 1704.896;
                    }
                    else if (class_name == "SM6") {
                        c = 1508.872;
                    }
                    else if (class_name == "SM7") {
                        c = 1482.322;
                    }
                    else if (class_name == "SM8") {
                        c = 3796.63;
                    }
                    else if (class_name == "SM9") {
                        c = 3406.953;
                    }
                    else if (class_name == "SM10") {
                        c = 3195.505;
                    }
                    else if (class_name == "SM11") {
                        c = 3772.243;
                    }
                    else if (class_name == "SM12") {
                        c = 3531.69;
                    }
                    else if (class_name == "SM13") {
                        c = 3253.386;
                    }
                    else if (class_name == "SM14") {
                        c = 3263.177;            
                    }
                }
                break;

            default:
                validInput = false;
                break;
        }

        if (!validInput || b == 0.0f || c == 0.0f || p <= 0) {
            return -1.0f;
        }

        float exponent_layer2 = b - (c / p);
        float exponent_layer1 = -exp(exponent_layer2);
        float q = static_cast<float>(a) * exp(exponent_layer1);
        
        return q;
    }
}