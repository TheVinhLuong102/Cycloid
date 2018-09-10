const int conedetect_vpy = 234;
const float conedetect_turn_slope = 0.000000;
const int conedetect_y_offset = -117;
const int conedetect_width= 4;

const float conedetect_LUT[2560] = {
  -1.498849,
  -1.498627,
  -1.498404,
  -1.498179,
  -1.497953,
  -1.497725,
  -1.497496,
  -1.497265,
  -1.497034,
  -1.496800,
  -1.496565,
  -1.496329,
  -1.496091,
  -1.495852,
  -1.495611,
  -1.495368,
  -1.495124,
  -1.494878,
  -1.494631,
  -1.494382,
  -1.494132,
  -1.493880,
  -1.493626,
  -1.493370,
  -1.491052,
  -1.486524,
  -1.481992,
  -1.477457,
  -1.472918,
  -1.468375,
  -1.463829,
  -1.459279,
  -1.454725,
  -1.450168,
  -1.445607,
  -1.441042,
  -1.436474,
  -1.431902,
  -1.427326,
  -1.422747,
  -1.418164,
  -1.413577,
  -1.408987,
  -1.404393,
  -1.399795,
  -1.395194,
  -1.390589,
  -1.385980,
  -1.381368,
  -1.376752,
  -1.372133,
  -1.367510,
  -1.362883,
  -1.358253,
  -1.353619,
  -1.348981,
  -1.344340,
  -1.339695,
  -1.335047,
  -1.330395,
  -1.325740,
  -1.321081,
  -1.316418,
  -1.311752,
  -1.307082,
  -1.302408,
  -1.297732,
  -1.293051,
  -1.288367,
  -1.283679,
  -1.278988,
  -1.274294,
  -1.269595,
  -1.264894,
  -1.260188,
  -1.255480,
  -1.250767,
  -1.246052,
  -1.241332,
  -1.236609,
  -1.231883,
  -1.227154,
  -1.222420,
  -1.217684,
  -1.212943,
  -1.208200,
  -1.203453,
  -1.198702,
  -1.193948,
  -1.189191,
  -1.184430,
  -1.179666,
  -1.174898,
  -1.170127,
  -1.165352,
  -1.160574,
  -1.155793,
  -1.151008,
  -1.146220,
  -1.141429,
  -1.136634,
  -1.131836,
  -1.127035,
  -1.122230,
  -1.117422,
  -1.112610,
  -1.107795,
  -1.102977,
  -1.098156,
  -1.093331,
  -1.088503,
  -1.083672,
  -1.078837,
  -1.073999,
  -1.069158,
  -1.064314,
  -1.059466,
  -1.054616,
  -1.049762,
  -1.044904,
  -1.040044,
  -1.035180,
  -1.030313,
  -1.025443,
  -1.020570,
  -1.015694,
  -1.010814,
  -1.005931,
  -1.001046,
  -0.996157,
  -0.991265,
  -0.986370,
  -0.981471,
  -0.976570,
  -0.971666,
  -0.966758,
  -0.961847,
  -0.956934,
  -0.952017,
  -0.947098,
  -0.942175,
  -0.937249,
  -0.932320,
  -0.927389,
  -0.922454,
  -0.917516,
  -0.912576,
  -0.907632,
  -0.902686,
  -0.897736,
  -0.892784,
  -0.887829,
  -0.882870,
  -0.877909,
  -0.872946,
  -0.867979,
  -0.863009,
  -0.858037,
  -0.853062,
  -0.848083,
  -0.843103,
  -0.838119,
  -0.833132,
  -0.828143,
  -0.823151,
  -0.818156,
  -0.813159,
  -0.808159,
  -0.803156,
  -0.798150,
  -0.793142,
  -0.788131,
  -0.783118,
  -0.778101,
  -0.773083,
  -0.768061,
  -0.763037,
  -0.758010,
  -0.752981,
  -0.747949,
  -0.742915,
  -0.737878,
  -0.732839,
  -0.727797,
  -0.722752,
  -0.717705,
  -0.712656,
  -0.707604,
  -0.702550,
  -0.697493,
  -0.692434,
  -0.687372,
  -0.682308,
  -0.677242,
  -0.672173,
  -0.667102,
  -0.662029,
  -0.656953,
  -0.651875,
  -0.646795,
  -0.641713,
  -0.636628,
  -0.631541,
  -0.626452,
  -0.621360,
  -0.616267,
  -0.611171,
  -0.606073,
  -0.600973,
  -0.595870,
  -0.590766,
  -0.585659,
  -0.580551,
  -0.575440,
  -0.570327,
  -0.565213,
  -0.560096,
  -0.554977,
  -0.549856,
  -0.544733,
  -0.539609,
  -0.534482,
  -0.529353,
  -0.524223,
  -0.519090,
  -0.513956,
  -0.508820,
  -0.503682,
  -0.498542,
  -0.493401,
  -0.488257,
  -0.483112,
  -0.477965,
  -0.472816,
  -0.467666,
  -0.462513,
  -0.457360,
  -0.452204,
  -0.447047,
  -0.441888,
  -0.436727,
  -0.431565,
  -0.426402,
  -0.421236,
  -0.416070,
  -0.410901,
  -0.405731,
  -0.400560,
  -0.395387,
  -0.390213,
  -0.385037,
  -0.379860,
  -0.374681,
  -0.369501,
  -0.364320,
  -0.359137,
  -0.353953,
  -0.348768,
  -0.343581,
  -0.338393,
  -0.333204,
  -0.328013,
  -0.322822,
  -0.317629,
  -0.312435,
  -0.307239,
  -0.302043,
  -0.296845,
  -0.291647,
  -0.286447,
  -0.281246,
  -0.276044,
  -0.270841,
  -0.265637,
  -0.260432,
  -0.255226,
  -0.250019,
  -0.244811,
  -0.239603,
  -0.234393,
  -0.229182,
  -0.223971,
  -0.218758,
  -0.213545,
  -0.208331,
  -0.203117,
  -0.197901,
  -0.192685,
  -0.187468,
  -0.182250,
  -0.177032,
  -0.171813,
  -0.166593,
  -0.161372,
  -0.156151,
  -0.150930,
  -0.145708,
  -0.140485,
  -0.135262,
  -0.130038,
  -0.124814,
  -0.119589,
  -0.114364,
  -0.109138,
  -0.103912,
  -0.098686,
  -0.093459,
  -0.088232,
  -0.083004,
  -0.077776,
  -0.072548,
  -0.067320,
  -0.062091,
  -0.056862,
  -0.051633,
  -0.046404,
  -0.041174,
  -0.035945,
  -0.030715,
  -0.025485,
  -0.020255,
  -0.015025,
  -0.009795,
  -0.004564,
  0.000666,
  0.005896,
  0.011126,
  0.016356,
  0.021586,
  0.026816,
  0.032046,
  0.037276,
  0.042506,
  0.047735,
  0.052964,
  0.058194,
  0.063422,
  0.068651,
  0.073879,
  0.079107,
  0.084335,
  0.089563,
  0.094790,
  0.100016,
  0.105243,
  0.110469,
  0.115694,
  0.120919,
  0.126144,
  0.131368,
  0.136592,
  0.141815,
  0.147037,
  0.152259,
  0.157481,
  0.162702,
  0.167922,
  0.173142,
  0.178360,
  0.183579,
  0.188796,
  0.194013,
  0.199229,
  0.204444,
  0.209659,
  0.214873,
  0.220086,
  0.225298,
  0.230509,
  0.235719,
  0.240929,
  0.246138,
  0.251345,
  0.256552,
  0.261758,
  0.266962,
  0.272166,
  0.277369,
  0.282570,
  0.287771,
  0.292971,
  0.298169,
  0.303366,
  0.308562,
  0.313757,
  0.318951,
  0.324144,
  0.329335,
  0.334525,
  0.339714,
  0.344902,
  0.350088,
  0.355273,
  0.360457,
  0.365639,
  0.370820,
  0.376000,
  0.381178,
  0.386355,
  0.391531,
  0.396704,
  0.401877,
  0.407048,
  0.412217,
  0.417385,
  0.422552,
  0.427717,
  0.432880,
  0.438042,
  0.443202,
  0.448360,
  0.453517,
  0.458672,
  0.463825,
  0.468977,
  0.474127,
  0.479276,
  0.484422,
  0.489567,
  0.494710,
  0.499851,
  0.504990,
  0.510128,
  0.515264,
  0.520397,
  0.525529,
  0.530659,
  0.535788,
  0.540914,
  0.546038,
  0.551160,
  0.556281,
  0.561399,
  0.566515,
  0.571629,
  0.576742,
  0.581852,
  0.586960,
  0.592066,
  0.597170,
  0.602271,
  0.607371,
  0.612468,
  0.617564,
  0.622657,
  0.627748,
  0.632836,
  0.637923,
  0.643007,
  0.648089,
  0.653169,
  0.658246,
  0.663321,
  0.668394,
  0.673464,
  0.678532,
  0.683598,
  0.688661,
  0.693722,
  0.698781,
  0.703837,
  0.708891,
  0.713942,
  0.718991,
  0.724037,
  0.729081,
  0.734122,
  0.739161,
  0.744197,
  0.749231,
  0.754262,
  0.759291,
  0.764316,
  0.769340,
  0.774361,
  0.779379,
  0.784394,
  0.789407,
  0.794418,
  0.799425,
  0.804430,
  0.809432,
  0.814432,
  0.819429,
  0.824422,
  0.829414,
  0.834402,
  0.839388,
  0.844371,
  0.849351,
  0.854329,
  0.859303,
  0.864275,
  0.869244,
  0.874210,
  0.879173,
  0.884133,
  0.889091,
  0.894045,
  0.898997,
  0.903945,
  0.908891,
  0.913834,
  0.918774,
  0.923711,
  0.928645,
  0.933576,
  0.938504,
  0.943429,
  0.948350,
  0.953269,
  0.958185,
  0.963098,
  0.968008,
  0.972915,
  0.977818,
  0.982719,
  0.987616,
  0.992511,
  0.997402,
  1.002290,
  1.007175,
  1.012057,
  1.016936,
  1.021811,
  1.026684,
  1.031553,
  1.036419,
  1.041282,
  1.046141,
  1.050998,
  1.055851,
  1.060701,
  1.065548,
  1.070391,
  1.075232,
  1.080068,
  1.084902,
  1.089733,
  1.094560,
  1.099384,
  1.104204,
  1.109022,
  1.113836,
  1.118646,
  1.123453,
  1.128258,
  1.133058,
  1.137855,
  1.142649,
  1.147440,
  1.152227,
  1.157011,
  1.161791,
  1.166568,
  1.171342,
  1.176112,
  1.180879,
  1.185642,
  1.190402,
  1.195159,
  1.199912,
  1.204662,
  1.209408,
  1.214151,
  1.218890,
  1.223626,
  1.228358,
  1.233087,
  1.237812,
  1.242534,
  1.247253,
  1.251967,
  1.256679,
  1.261387,
  1.266091,
  1.270792,
  1.275489,
  1.280183,
  1.284873,
  1.289560,
  1.294243,
  1.298923,
  1.303599,
  1.308271,
  1.312940,
  1.317605,
  1.322267,
  1.326925,
  1.331580,
  1.336231,
  1.340878,
  1.345522,
  1.350162,
  1.354799,
  1.359432,
  1.364061,
  1.368687,
  1.373309,
  1.377928,
  1.382543,
  1.387154,
  1.391762,
  1.396366,
  1.400966,
  1.405563,
  1.410156,
  1.414745,
  1.419331,
  1.423913,
  1.428491,
  1.433066,
  1.437637,
  1.442205,
  1.446769,
  1.451329,
  1.455885,
  1.460438,
  1.464987,
  1.469532,
  1.474074,
  1.478612,
  1.483146,
  1.487677,
  1.492204,
  1.493436,
  1.493691,
  1.493944,
  1.494196,
  1.494446,
  1.494694,
  1.494941,
  1.495186,
  1.495430,
  1.495672,
  1.495913,
  1.496152,
  1.496389,
  1.496625,
  1.496860,
  -1.498849,
  -1.498627,
  -1.498404,
  -1.498179,
  -1.497953,
  -1.497725,
  -1.497496,
  -1.497265,
  -1.497034,
  -1.496800,
  -1.496565,
  -1.496329,
  -1.496091,
  -1.495852,
  -1.495611,
  -1.495368,
  -1.495124,
  -1.494878,
  -1.494631,
  -1.494382,
  -1.494132,
  -1.493880,
  -1.493626,
  -1.493370,
  -1.490930,
  -1.486403,
  -1.481871,
  -1.477336,
  -1.472797,
  -1.468254,
  -1.463708,
  -1.459158,
  -1.454604,
  -1.450047,
  -1.445485,
  -1.440921,
  -1.436352,
  -1.431780,
  -1.427204,
  -1.422625,
  -1.418042,
  -1.413455,
  -1.408865,
  -1.404271,
  -1.399673,
  -1.395072,
  -1.390467,
  -1.385859,
  -1.381246,
  -1.376630,
  -1.372011,
  -1.367388,
  -1.362761,
  -1.358131,
  -1.353497,
  -1.348860,
  -1.344218,
  -1.339574,
  -1.334925,
  -1.330274,
  -1.325618,
  -1.320959,
  -1.316296,
  -1.311630,
  -1.306960,
  -1.302287,
  -1.297610,
  -1.292930,
  -1.288246,
  -1.283558,
  -1.278867,
  -1.274173,
  -1.269475,
  -1.264773,
  -1.260068,
  -1.255359,
  -1.250647,
  -1.245931,
  -1.241212,
  -1.236489,
  -1.231763,
  -1.227033,
  -1.222300,
  -1.217564,
  -1.212824,
  -1.208080,
  -1.203333,
  -1.198583,
  -1.193829,
  -1.189072,
  -1.184311,
  -1.179547,
  -1.174779,
  -1.170008,
  -1.165234,
  -1.160456,
  -1.155675,
  -1.150890,
  -1.146103,
  -1.141311,
  -1.136517,
  -1.131719,
  -1.126917,
  -1.122113,
  -1.117305,
  -1.112493,
  -1.107679,
  -1.102861,
  -1.098040,
  -1.093215,
  -1.088387,
  -1.083556,
  -1.078722,
  -1.073884,
  -1.069043,
  -1.064199,
  -1.059352,
  -1.054501,
  -1.049647,
  -1.044790,
  -1.039930,
  -1.035067,
  -1.030200,
  -1.025330,
  -1.020457,
  -1.015581,
  -1.010702,
  -1.005820,
  -1.000934,
  -0.996045,
  -0.991154,
  -0.986259,
  -0.981361,
  -0.976460,
  -0.971556,
  -0.966648,
  -0.961738,
  -0.956825,
  -0.951908,
  -0.946989,
  -0.942067,
  -0.937141,
  -0.932213,
  -0.927281,
  -0.922347,
  -0.917410,
  -0.912469,
  -0.907526,
  -0.902580,
  -0.897631,
  -0.892679,
  -0.887724,
  -0.882766,
  -0.877806,
  -0.872842,
  -0.867876,
  -0.862906,
  -0.857934,
  -0.852959,
  -0.847982,
  -0.843001,
  -0.838018,
  -0.833032,
  -0.828043,
  -0.823051,
  -0.818057,
  -0.813060,
  -0.808060,
  -0.803058,
  -0.798053,
  -0.793045,
  -0.788034,
  -0.783021,
  -0.778005,
  -0.772987,
  -0.767966,
  -0.762942,
  -0.757916,
  -0.752887,
  -0.747856,
  -0.742822,
  -0.737785,
  -0.732746,
  -0.727705,
  -0.722661,
  -0.717615,
  -0.712566,
  -0.707514,
  -0.702460,
  -0.697404,
  -0.692345,
  -0.687284,
  -0.682221,
  -0.677155,
  -0.672087,
  -0.667017,
  -0.661944,
  -0.656869,
  -0.651791,
  -0.646711,
  -0.641629,
  -0.636545,
  -0.631459,
  -0.626370,
  -0.621279,
  -0.616186,
  -0.611091,
  -0.605993,
  -0.600893,
  -0.595792,
  -0.590688,
  -0.585582,
  -0.580474,
  -0.575364,
  -0.570252,
  -0.565137,
  -0.560021,
  -0.554903,
  -0.549783,
  -0.544661,
  -0.539536,
  -0.534410,
  -0.529282,
  -0.524152,
  -0.519021,
  -0.513887,
  -0.508751,
  -0.503614,
  -0.498475,
  -0.493334,
  -0.488191,
  -0.483046,
  -0.477900,
  -0.472752,
  -0.467602,
  -0.462450,
  -0.457297,
  -0.452142,
  -0.446985,
  -0.441827,
  -0.436667,
  -0.431506,
  -0.426343,
  -0.421178,
  -0.416012,
  -0.410845,
  -0.405675,
  -0.400505,
  -0.395332,
  -0.390159,
  -0.384984,
  -0.379807,
  -0.374629,
  -0.369450,
  -0.364269,
  -0.359087,
  -0.353904,
  -0.348719,
  -0.343533,
  -0.338346,
  -0.333157,
  -0.327967,
  -0.322776,
  -0.317584,
  -0.312391,
  -0.307196,
  -0.302000,
  -0.296804,
  -0.291606,
  -0.286406,
  -0.281206,
  -0.276005,
  -0.270803,
  -0.265600,
  -0.260395,
  -0.255190,
  -0.249984,
  -0.244777,
  -0.239569,
  -0.234360,
  -0.229150,
  -0.223939,
  -0.218727,
  -0.213515,
  -0.208302,
  -0.203088,
  -0.197873,
  -0.192657,
  -0.187441,
  -0.182224,
  -0.177006,
  -0.171788,
  -0.166569,
  -0.161349,
  -0.156129,
  -0.150908,
  -0.145687,
  -0.140465,
  -0.135242,
  -0.130019,
  -0.124796,
  -0.119572,
  -0.114347,
  -0.109122,
  -0.103897,
  -0.098671,
  -0.093445,
  -0.088219,
  -0.082992,
  -0.077765,
  -0.072538,
  -0.067310,
  -0.062082,
  -0.056854,
  -0.051626,
  -0.046397,
  -0.041168,
  -0.035939,
  -0.030710,
  -0.025481,
  -0.020252,
  -0.015023,
  -0.009793,
  -0.004564,
  0.000666,
  0.005895,
  0.011125,
  0.016354,
  0.021583,
  0.026813,
  0.032042,
  0.037271,
  0.042500,
  0.047728,
  0.052957,
  0.058185,
  0.063413,
  0.068641,
  0.073869,
  0.079096,
  0.084323,
  0.089550,
  0.094776,
  0.100002,
  0.105228,
  0.110453,
  0.115678,
  0.120902,
  0.126126,
  0.131349,
  0.136572,
  0.141794,
  0.147016,
  0.152238,
  0.157458,
  0.162678,
  0.167898,
  0.173117,
  0.178335,
  0.183552,
  0.188769,
  0.193985,
  0.199201,
  0.204415,
  0.209629,
  0.214842,
  0.220054,
  0.225266,
  0.230476,
  0.235686,
  0.240895,
  0.246102,
  0.251309,
  0.256515,
  0.261720,
  0.266924,
  0.272127,
  0.277329,
  0.282530,
  0.287730,
  0.292929,
  0.298127,
  0.303323,
  0.308519,
  0.313713,
  0.318906,
  0.324098,
  0.329289,
  0.334478,
  0.339667,
  0.344854,
  0.350039,
  0.355224,
  0.360407,
  0.365588,
  0.370769,
  0.375948,
  0.381125,
  0.386301,
  0.391476,
  0.396649,
  0.401821,
  0.406992,
  0.412160,
  0.417328,
  0.422493,
  0.427658,
  0.432820,
  0.437981,
  0.443141,
  0.448299,
  0.453455,
  0.458609,
  0.463762,
  0.468913,
  0.474063,
  0.479210,
  0.484356,
  0.489500,
  0.494643,
  0.499783,
  0.504922,
  0.510059,
  0.515194,
  0.520327,
  0.525459,
  0.530588,
  0.535716,
  0.540841,
  0.545965,
  0.551087,
  0.556206,
  0.561324,
  0.566440,
  0.571553,
  0.576665,
  0.581775,
  0.586882,
  0.591988,
  0.597091,
  0.602192,
  0.607291,
  0.612388,
  0.617483,
  0.622575,
  0.627666,
  0.632754,
  0.637840,
  0.642924,
  0.648005,
  0.653084,
  0.658161,
  0.663235,
  0.668308,
  0.673378,
  0.678445,
  0.683510,
  0.688573,
  0.693634,
  0.698692,
  0.703747,
  0.708801,
  0.713851,
  0.718900,
  0.723945,
  0.728989,
  0.734030,
  0.739068,
  0.744104,
  0.749137,
  0.754168,
  0.759196,
  0.764221,
  0.769244,
  0.774265,
  0.779283,
  0.784298,
  0.789310,
  0.794320,
  0.799327,
  0.804332,
  0.809334,
  0.814333,
  0.819329,
  0.824323,
  0.829313,
  0.834302,
  0.839287,
  0.844270,
  0.849249,
  0.854226,
  0.859200,
  0.864172,
  0.869140,
  0.874106,
  0.879069,
  0.884029,
  0.888986,
  0.893940,
  0.898891,
  0.903840,
  0.908785,
  0.913728,
  0.918667,
  0.923604,
  0.928537,
  0.933468,
  0.938396,
  0.943320,
  0.948242,
  0.953160,
  0.958076,
  0.962989,
  0.967898,
  0.972804,
  0.977708,
  0.982608,
  0.987505,
  0.992399,
  0.997290,
  1.002178,
  1.007063,
  1.011945,
  1.016823,
  1.021698,
  1.026571,
  1.031440,
  1.036305,
  1.041168,
  1.046027,
  1.050884,
  1.055737,
  1.060586,
  1.065433,
  1.070276,
  1.075116,
  1.079953,
  1.084787,
  1.089617,
  1.094444,
  1.099267,
  1.104088,
  1.108905,
  1.113719,
  1.118529,
  1.123336,
  1.128140,
  1.132941,
  1.137738,
  1.142532,
  1.147322,
  1.152109,
  1.156893,
  1.161673,
  1.166450,
  1.171223,
  1.175993,
  1.180760,
  1.185523,
  1.190283,
  1.195040,
  1.199793,
  1.204542,
  1.209288,
  1.214031,
  1.218770,
  1.223506,
  1.228238,
  1.232967,
  1.237692,
  1.242414,
  1.247132,
  1.251847,
  1.256558,
  1.261266,
  1.265970,
  1.270671,
  1.275368,
  1.280062,
  1.284752,
  1.289439,
  1.294122,
  1.298801,
  1.303477,
  1.308150,
  1.312819,
  1.317484,
  1.322146,
  1.326804,
  1.331458,
  1.336109,
  1.340757,
  1.345400,
  1.350041,
  1.354677,
  1.359310,
  1.363940,
  1.368565,
  1.373188,
  1.377806,
  1.382421,
  1.387032,
  1.391640,
  1.396244,
  1.400844,
  1.405441,
  1.410034,
  1.414623,
  1.419209,
  1.423791,
  1.428370,
  1.432945,
  1.437516,
  1.442083,
  1.446647,
  1.451207,
  1.455764,
  1.460316,
  1.464866,
  1.469411,
  1.473953,
  1.478491,
  1.483025,
  1.487556,
  1.492083,
  1.493436,
  1.493691,
  1.493944,
  1.494196,
  1.494446,
  1.494694,
  1.494941,
  1.495186,
  1.495430,
  1.495672,
  1.495913,
  1.496152,
  1.496389,
  1.496625,
  1.496860,
  -1.498849,
  -1.498627,
  -1.498404,
  -1.498179,
  -1.497953,
  -1.497725,
  -1.497496,
  -1.497265,
  -1.497034,
  -1.496800,
  -1.496565,
  -1.496329,
  -1.496091,
  -1.495852,
  -1.495611,
  -1.495368,
  -1.495124,
  -1.494878,
  -1.494631,
  -1.494382,
  -1.494132,
  -1.493880,
  -1.493626,
  -1.493370,
  -1.490867,
  -1.486339,
  -1.481807,
  -1.477272,
  -1.472733,
  -1.468190,
  -1.463644,
  -1.459094,
  -1.454540,
  -1.449983,
  -1.445422,
  -1.440857,
  -1.436289,
  -1.431716,
  -1.427141,
  -1.422561,
  -1.417978,
  -1.413391,
  -1.408801,
  -1.404207,
  -1.399609,
  -1.395008,
  -1.390403,
  -1.385795,
  -1.381182,
  -1.376567,
  -1.371947,
  -1.367324,
  -1.362697,
  -1.358067,
  -1.353433,
  -1.348796,
  -1.344155,
  -1.339510,
  -1.334862,
  -1.330210,
  -1.325554,
  -1.320895,
  -1.316233,
  -1.311567,
  -1.306897,
  -1.302224,
  -1.297547,
  -1.292866,
  -1.288182,
  -1.283495,
  -1.278804,
  -1.274109,
  -1.269411,
  -1.264709,
  -1.260004,
  -1.255296,
  -1.250584,
  -1.245868,
  -1.241149,
  -1.236426,
  -1.231700,
  -1.226970,
  -1.222237,
  -1.217501,
  -1.212761,
  -1.208017,
  -1.203270,
  -1.198520,
  -1.193766,
  -1.189009,
  -1.184248,
  -1.179484,
  -1.174717,
  -1.169946,
  -1.165172,
  -1.160394,
  -1.155613,
  -1.150829,
  -1.146041,
  -1.141250,
  -1.136455,
  -1.131657,
  -1.126856,
  -1.122051,
  -1.117243,
  -1.112432,
  -1.107618,
  -1.102800,
  -1.097979,
  -1.093154,
  -1.088327,
  -1.083496,
  -1.078661,
  -1.073824,
  -1.068983,
  -1.064139,
  -1.059292,
  -1.054441,
  -1.049588,
  -1.044731,
  -1.039871,
  -1.035007,
  -1.030141,
  -1.025271,
  -1.020398,
  -1.015522,
  -1.010643,
  -1.005761,
  -1.000876,
  -0.995987,
  -0.991095,
  -0.986201,
  -0.981303,
  -0.976402,
  -0.971498,
  -0.966591,
  -0.961681,
  -0.956767,
  -0.951851,
  -0.946932,
  -0.942010,
  -0.937085,
  -0.932156,
  -0.927225,
  -0.922291,
  -0.917354,
  -0.912414,
  -0.907471,
  -0.902525,
  -0.897576,
  -0.892624,
  -0.887669,
  -0.882712,
  -0.877751,
  -0.872788,
  -0.867821,
  -0.862852,
  -0.857880,
  -0.852906,
  -0.847928,
  -0.842948,
  -0.837965,
  -0.832979,
  -0.827990,
  -0.822999,
  -0.818005,
  -0.813008,
  -0.808008,
  -0.803006,
  -0.798001,
  -0.792994,
  -0.787983,
  -0.782970,
  -0.777955,
  -0.772937,
  -0.767916,
  -0.762892,
  -0.757867,
  -0.752838,
  -0.747807,
  -0.742773,
  -0.737737,
  -0.732698,
  -0.727657,
  -0.722613,
  -0.717567,
  -0.712518,
  -0.707467,
  -0.702414,
  -0.697358,
  -0.692299,
  -0.687238,
  -0.682175,
  -0.677110,
  -0.672042,
  -0.666972,
  -0.661899,
  -0.656824,
  -0.651747,
  -0.646667,
  -0.641586,
  -0.636502,
  -0.631415,
  -0.626327,
  -0.621236,
  -0.616144,
  -0.611049,
  -0.605951,
  -0.600852,
  -0.595751,
  -0.590647,
  -0.585541,
  -0.580434,
  -0.575324,
  -0.570212,
  -0.565098,
  -0.559982,
  -0.554864,
  -0.549744,
  -0.544622,
  -0.539499,
  -0.534373,
  -0.529245,
  -0.524115,
  -0.518984,
  -0.513850,
  -0.508715,
  -0.503578,
  -0.498439,
  -0.493298,
  -0.488156,
  -0.483012,
  -0.477866,
  -0.472718,
  -0.467568,
  -0.462417,
  -0.457264,
  -0.452110,
  -0.446953,
  -0.441795,
  -0.436636,
  -0.431475,
  -0.426312,
  -0.421148,
  -0.415982,
  -0.410815,
  -0.405646,
  -0.400476,
  -0.395304,
  -0.390130,
  -0.384956,
  -0.379779,
  -0.374602,
  -0.369423,
  -0.364243,
  -0.359061,
  -0.353878,
  -0.348693,
  -0.343508,
  -0.338321,
  -0.333133,
  -0.327943,
  -0.322753,
  -0.317561,
  -0.312368,
  -0.307173,
  -0.301978,
  -0.296782,
  -0.291584,
  -0.286385,
  -0.281185,
  -0.275985,
  -0.270783,
  -0.265580,
  -0.260376,
  -0.255171,
  -0.249965,
  -0.244758,
  -0.239551,
  -0.234342,
  -0.229133,
  -0.223922,
  -0.218711,
  -0.213499,
  -0.208286,
  -0.203072,
  -0.197858,
  -0.192643,
  -0.187427,
  -0.182210,
  -0.176993,
  -0.171775,
  -0.166556,
  -0.161337,
  -0.156117,
  -0.150897,
  -0.145676,
  -0.140454,
  -0.135232,
  -0.130010,
  -0.124786,
  -0.119563,
  -0.114339,
  -0.109114,
  -0.103889,
  -0.098664,
  -0.093438,
  -0.088212,
  -0.082986,
  -0.077759,
  -0.072532,
  -0.067305,
  -0.062077,
  -0.056850,
  -0.051622,
  -0.046393,
  -0.041165,
  -0.035937,
  -0.030708,
  -0.025479,
  -0.020250,
  -0.015021,
  -0.009792,
  -0.004563,
  0.000666,
  0.005895,
  0.011124,
  0.016353,
  0.021582,
  0.026811,
  0.032039,
  0.037268,
  0.042496,
  0.047725,
  0.052953,
  0.058181,
  0.063408,
  0.068636,
  0.073863,
  0.079090,
  0.084317,
  0.089543,
  0.094769,
  0.099994,
  0.105220,
  0.110444,
  0.115669,
  0.120893,
  0.126116,
  0.131339,
  0.136562,
  0.141784,
  0.147005,
  0.152226,
  0.157446,
  0.162666,
  0.167885,
  0.173104,
  0.178321,
  0.183539,
  0.188755,
  0.193971,
  0.199186,
  0.204400,
  0.209613,
  0.214826,
  0.220038,
  0.225249,
  0.230459,
  0.235668,
  0.240877,
  0.246084,
  0.251291,
  0.256496,
  0.261701,
  0.266905,
  0.272107,
  0.277309,
  0.282509,
  0.287709,
  0.292907,
  0.298105,
  0.303301,
  0.308496,
  0.313690,
  0.318883,
  0.324074,
  0.329265,
  0.334454,
  0.339642,
  0.344828,
  0.350014,
  0.355198,
  0.360380,
  0.365562,
  0.370742,
  0.375920,
  0.381097,
  0.386273,
  0.391448,
  0.396621,
  0.401792,
  0.406962,
  0.412131,
  0.417298,
  0.422463,
  0.427627,
  0.432789,
  0.437950,
  0.443109,
  0.448266,
  0.453422,
  0.458576,
  0.463729,
  0.468880,
  0.474029,
  0.479176,
  0.484322,
  0.489466,
  0.494608,
  0.499748,
  0.504886,
  0.510023,
  0.515158,
  0.520291,
  0.525422,
  0.530551,
  0.535678,
  0.540803,
  0.545927,
  0.551048,
  0.556167,
  0.561285,
  0.566400,
  0.571514,
  0.576625,
  0.581734,
  0.586842,
  0.591947,
  0.597050,
  0.602151,
  0.607249,
  0.612346,
  0.617440,
  0.622533,
  0.627623,
  0.632711,
  0.637796,
  0.642880,
  0.647961,
  0.653040,
  0.658116,
  0.663191,
  0.668263,
  0.673332,
  0.678400,
  0.683465,
  0.688527,
  0.693587,
  0.698645,
  0.703700,
  0.708753,
  0.713804,
  0.718852,
  0.723898,
  0.728941,
  0.733981,
  0.739019,
  0.744055,
  0.749088,
  0.754119,
  0.759146,
  0.764172,
  0.769194,
  0.774215,
  0.779232,
  0.784247,
  0.789259,
  0.794269,
  0.799276,
  0.804280,
  0.809282,
  0.814281,
  0.819277,
  0.824270,
  0.829261,
  0.834249,
  0.839234,
  0.844216,
  0.849196,
  0.854173,
  0.859147,
  0.864118,
  0.869086,
  0.874052,
  0.879014,
  0.883974,
  0.888931,
  0.893885,
  0.898836,
  0.903784,
  0.908729,
  0.913672,
  0.918611,
  0.923548,
  0.928481,
  0.933411,
  0.938339,
  0.943263,
  0.948185,
  0.953103,
  0.958019,
  0.962931,
  0.967840,
  0.972747,
  0.977650,
  0.982550,
  0.987447,
  0.992341,
  0.997232,
  1.002120,
  1.007004,
  1.011886,
  1.016764,
  1.021639,
  1.026511,
  1.031380,
  1.036246,
  1.041108,
  1.045968,
  1.050824,
  1.055677,
  1.060526,
  1.065373,
  1.070216,
  1.075056,
  1.079893,
  1.084726,
  1.089556,
  1.094383,
  1.099207,
  1.104027,
  1.108844,
  1.113658,
  1.118468,
  1.123275,
  1.128079,
  1.132879,
  1.137676,
  1.142470,
  1.147260,
  1.152047,
  1.156831,
  1.161611,
  1.166388,
  1.171161,
  1.175931,
  1.180698,
  1.185461,
  1.190221,
  1.194977,
  1.199730,
  1.204479,
  1.209225,
  1.213968,
  1.218707,
  1.223443,
  1.228175,
  1.232904,
  1.237629,
  1.242351,
  1.247069,
  1.251784,
  1.256495,
  1.261203,
  1.265907,
  1.270608,
  1.275305,
  1.279999,
  1.284689,
  1.289375,
  1.294058,
  1.298738,
  1.303414,
  1.308086,
  1.312755,
  1.317420,
  1.322082,
  1.326740,
  1.331395,
  1.336046,
  1.340693,
  1.345337,
  1.349977,
  1.354614,
  1.359246,
  1.363876,
  1.368502,
  1.373124,
  1.377742,
  1.382357,
  1.386968,
  1.391576,
  1.396180,
  1.400780,
  1.405377,
  1.409970,
  1.414560,
  1.419145,
  1.423728,
  1.428306,
  1.432881,
  1.437452,
  1.442020,
  1.446583,
  1.451144,
  1.455700,
  1.460253,
  1.464802,
  1.469347,
  1.473889,
  1.478427,
  1.482962,
  1.487492,
  1.492019,
  1.493436,
  1.493691,
  1.493944,
  1.494196,
  1.494446,
  1.494694,
  1.494941,
  1.495186,
  1.495430,
  1.495672,
  1.495913,
  1.496152,
  1.496389,
  1.496625,
  1.496860,
  -1.498849,
  -1.498627,
  -1.498404,
  -1.498179,
  -1.497953,
  -1.497725,
  -1.497496,
  -1.497265,
  -1.497034,
  -1.496800,
  -1.496565,
  -1.496329,
  -1.496091,
  -1.495852,
  -1.495611,
  -1.495368,
  -1.495124,
  -1.494878,
  -1.494631,
  -1.494382,
  -1.494132,
  -1.493880,
  -1.493626,
  -1.493370,
  -1.490861,
  -1.486333,
  -1.481802,
  -1.477266,
  -1.472727,
  -1.468185,
  -1.463638,
  -1.459088,
  -1.454534,
  -1.449977,
  -1.445416,
  -1.440851,
  -1.436283,
  -1.431711,
  -1.427135,
  -1.422555,
  -1.417972,
  -1.413386,
  -1.408795,
  -1.404201,
  -1.399604,
  -1.395002,
  -1.390397,
  -1.385789,
  -1.381177,
  -1.376561,
  -1.371941,
  -1.367318,
  -1.362692,
  -1.358061,
  -1.353427,
  -1.348790,
  -1.344149,
  -1.339504,
  -1.334856,
  -1.330204,
  -1.325549,
  -1.320889,
  -1.316227,
  -1.311561,
  -1.306891,
  -1.302218,
  -1.297541,
  -1.292860,
  -1.288176,
  -1.283489,
  -1.278798,
  -1.274103,
  -1.269405,
  -1.264704,
  -1.259999,
  -1.255290,
  -1.250578,
  -1.245862,
  -1.241143,
  -1.236420,
  -1.231694,
  -1.226965,
  -1.222232,
  -1.217495,
  -1.212755,
  -1.208012,
  -1.203265,
  -1.198514,
  -1.193761,
  -1.189003,
  -1.184243,
  -1.179479,
  -1.174711,
  -1.169940,
  -1.165166,
  -1.160388,
  -1.155607,
  -1.150823,
  -1.146035,
  -1.141244,
  -1.136449,
  -1.131652,
  -1.126850,
  -1.122046,
  -1.117238,
  -1.112427,
  -1.107612,
  -1.102794,
  -1.097973,
  -1.093149,
  -1.088321,
  -1.083490,
  -1.078656,
  -1.073818,
  -1.068977,
  -1.064134,
  -1.059286,
  -1.054436,
  -1.049582,
  -1.044725,
  -1.039865,
  -1.035002,
  -1.030135,
  -1.025266,
  -1.020393,
  -1.015517,
  -1.010638,
  -1.005756,
  -1.000870,
  -0.995982,
  -0.991090,
  -0.986195,
  -0.981297,
  -0.976397,
  -0.971493,
  -0.966586,
  -0.961675,
  -0.956762,
  -0.951846,
  -0.946927,
  -0.942005,
  -0.937079,
  -0.932151,
  -0.927220,
  -0.922286,
  -0.917349,
  -0.912409,
  -0.907465,
  -0.902519,
  -0.897571,
  -0.892619,
  -0.887664,
  -0.882706,
  -0.877746,
  -0.872783,
  -0.867817,
  -0.862847,
  -0.857876,
  -0.852901,
  -0.847923,
  -0.842943,
  -0.837960,
  -0.832974,
  -0.827986,
  -0.822994,
  -0.818000,
  -0.813003,
  -0.808004,
  -0.803002,
  -0.797997,
  -0.792989,
  -0.787979,
  -0.782966,
  -0.777950,
  -0.772932,
  -0.767911,
  -0.762888,
  -0.757862,
  -0.752833,
  -0.747802,
  -0.742769,
  -0.737732,
  -0.732694,
  -0.727652,
  -0.722609,
  -0.717563,
  -0.712514,
  -0.707463,
  -0.702409,
  -0.697353,
  -0.692295,
  -0.687234,
  -0.682171,
  -0.677105,
  -0.672038,
  -0.666967,
  -0.661895,
  -0.656820,
  -0.651743,
  -0.646663,
  -0.641582,
  -0.636498,
  -0.631411,
  -0.626323,
  -0.621232,
  -0.616140,
  -0.611045,
  -0.605948,
  -0.600848,
  -0.595747,
  -0.590643,
  -0.585538,
  -0.580430,
  -0.575320,
  -0.570208,
  -0.565094,
  -0.559979,
  -0.554861,
  -0.549741,
  -0.544619,
  -0.539495,
  -0.534369,
  -0.529242,
  -0.524112,
  -0.518981,
  -0.513847,
  -0.508712,
  -0.503575,
  -0.498436,
  -0.493295,
  -0.488153,
  -0.483009,
  -0.477863,
  -0.472715,
  -0.467565,
  -0.462414,
  -0.457261,
  -0.452107,
  -0.446950,
  -0.441793,
  -0.436633,
  -0.431472,
  -0.426309,
  -0.421145,
  -0.415979,
  -0.410812,
  -0.405643,
  -0.400473,
  -0.395301,
  -0.390128,
  -0.384953,
  -0.379777,
  -0.374599,
  -0.369420,
  -0.364240,
  -0.359058,
  -0.353875,
  -0.348691,
  -0.343505,
  -0.338319,
  -0.333130,
  -0.327941,
  -0.322750,
  -0.317559,
  -0.312366,
  -0.307171,
  -0.301976,
  -0.296780,
  -0.291582,
  -0.286383,
  -0.281184,
  -0.275983,
  -0.270781,
  -0.265578,
  -0.260374,
  -0.255169,
  -0.249963,
  -0.244757,
  -0.239549,
  -0.234340,
  -0.229131,
  -0.223921,
  -0.218709,
  -0.213497,
  -0.208285,
  -0.203071,
  -0.197857,
  -0.192641,
  -0.187426,
  -0.182209,
  -0.176992,
  -0.171774,
  -0.166555,
  -0.161336,
  -0.156116,
  -0.150896,
  -0.145675,
  -0.140453,
  -0.135231,
  -0.130009,
  -0.124786,
  -0.119562,
  -0.114338,
  -0.109113,
  -0.103889,
  -0.098663,
  -0.093438,
  -0.088212,
  -0.082985,
  -0.077759,
  -0.072532,
  -0.067304,
  -0.062077,
  -0.056849,
  -0.051621,
  -0.046393,
  -0.041165,
  -0.035936,
  -0.030708,
  -0.025479,
  -0.020250,
  -0.015021,
  -0.009792,
  -0.004563,
  0.000666,
  0.005895,
  0.011124,
  0.016353,
  0.021582,
  0.026810,
  0.032039,
  0.037268,
  0.042496,
  0.047724,
  0.052952,
  0.058180,
  0.063408,
  0.068635,
  0.073863,
  0.079089,
  0.084316,
  0.089542,
  0.094768,
  0.099994,
  0.105219,
  0.110444,
  0.115668,
  0.120892,
  0.126115,
  0.131338,
  0.136561,
  0.141783,
  0.147004,
  0.152225,
  0.157445,
  0.162665,
  0.167884,
  0.173102,
  0.178320,
  0.183537,
  0.188754,
  0.193969,
  0.199184,
  0.204399,
  0.209612,
  0.214825,
  0.220036,
  0.225247,
  0.230457,
  0.235667,
  0.240875,
  0.246082,
  0.251289,
  0.256495,
  0.261699,
  0.266903,
  0.272105,
  0.277307,
  0.282508,
  0.287707,
  0.292905,
  0.298103,
  0.303299,
  0.308494,
  0.313688,
  0.318881,
  0.324072,
  0.329262,
  0.334452,
  0.339639,
  0.344826,
  0.350011,
  0.355195,
  0.360378,
  0.365559,
  0.370739,
  0.375918,
  0.381095,
  0.386271,
  0.391445,
  0.396618,
  0.401789,
  0.406959,
  0.412128,
  0.417295,
  0.422460,
  0.427624,
  0.432786,
  0.437947,
  0.443106,
  0.448263,
  0.453419,
  0.458573,
  0.463726,
  0.468877,
  0.474026,
  0.479173,
  0.484318,
  0.489462,
  0.494604,
  0.499745,
  0.504883,
  0.510020,
  0.515154,
  0.520287,
  0.525418,
  0.530547,
  0.535675,
  0.540800,
  0.545923,
  0.551044,
  0.556164,
  0.561281,
  0.566397,
  0.571510,
  0.576621,
  0.581731,
  0.586838,
  0.591943,
  0.597046,
  0.602147,
  0.607246,
  0.612342,
  0.617437,
  0.622529,
  0.627619,
  0.632707,
  0.637792,
  0.642876,
  0.647957,
  0.653036,
  0.658112,
  0.663187,
  0.668259,
  0.673328,
  0.678395,
  0.683460,
  0.688523,
  0.693583,
  0.698641,
  0.703696,
  0.708749,
  0.713800,
  0.718848,
  0.723893,
  0.728936,
  0.733977,
  0.739015,
  0.744051,
  0.749084,
  0.754114,
  0.759142,
  0.764167,
  0.769190,
  0.774210,
  0.779227,
  0.784242,
  0.789255,
  0.794264,
  0.799271,
  0.804275,
  0.809277,
  0.814276,
  0.819272,
  0.824265,
  0.829256,
  0.834244,
  0.839229,
  0.844211,
  0.849191,
  0.854168,
  0.859142,
  0.864113,
  0.869081,
  0.874047,
  0.879009,
  0.883969,
  0.888926,
  0.893880,
  0.898831,
  0.903779,
  0.908724,
  0.913667,
  0.918606,
  0.923542,
  0.928476,
  0.933406,
  0.938334,
  0.943258,
  0.948180,
  0.953098,
  0.958013,
  0.962926,
  0.967835,
  0.972741,
  0.977645,
  0.982545,
  0.987442,
  0.992336,
  0.997227,
  1.002114,
  1.006999,
  1.011880,
  1.016759,
  1.021634,
  1.026506,
  1.031375,
  1.036240,
  1.041103,
  1.045962,
  1.050818,
  1.055671,
  1.060521,
  1.065367,
  1.070210,
  1.075050,
  1.079887,
  1.084720,
  1.089550,
  1.094377,
  1.099201,
  1.104021,
  1.108838,
  1.113652,
  1.118462,
  1.123269,
  1.128073,
  1.132873,
  1.137670,
  1.142464,
  1.147254,
  1.152041,
  1.156825,
  1.161605,
  1.166382,
  1.171155,
  1.175925,
  1.180692,
  1.185455,
  1.190215,
  1.194971,
  1.199724,
  1.204474,
  1.209220,
  1.213962,
  1.218701,
  1.223437,
  1.228169,
  1.232898,
  1.237623,
  1.242345,
  1.247063,
  1.251778,
  1.256489,
  1.261197,
  1.265901,
  1.270602,
  1.275299,
  1.279993,
  1.284683,
  1.289369,
  1.294052,
  1.298732,
  1.303408,
  1.308080,
  1.312749,
  1.317414,
  1.322076,
  1.326734,
  1.331389,
  1.336040,
  1.340687,
  1.345331,
  1.349971,
  1.354608,
  1.359241,
  1.363870,
  1.368496,
  1.373118,
  1.377736,
  1.382351,
  1.386963,
  1.391570,
  1.396174,
  1.400775,
  1.405371,
  1.409964,
  1.414554,
  1.419140,
  1.423722,
  1.428300,
  1.432875,
  1.437446,
  1.442014,
  1.446578,
  1.451138,
  1.455694,
  1.460247,
  1.464796,
  1.469342,
  1.473883,
  1.478421,
  1.482956,
  1.487486,
  1.492014,
  1.493436,
  1.493691,
  1.493944,
  1.494196,
  1.494446,
  1.494694,
  1.494941,
  1.495186,
  1.495430,
  1.495672,
  1.495913,
  1.496152,
  1.496389,
  1.496625,
  1.496860
};
