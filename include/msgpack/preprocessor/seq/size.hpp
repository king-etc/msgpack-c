# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef MSGPACK_PREPROCESSOR_SEQ_SIZE_HPP
# define MSGPACK_PREPROCESSOR_SEQ_SIZE_HPP
#
# include "msgpack/preprocessor/cat.hpp"
# include "msgpack/preprocessor/config/config.hpp"
#
# if MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_MWCC()
#    define MSGPACK_PP_SEQ_SIZE(seq) MSGPACK_PP_SEQ_SIZE_I((seq))
#    define MSGPACK_PP_SEQ_SIZE_I(par) MSGPACK_PP_SEQ_SIZE_II ## par
#    define MSGPACK_PP_SEQ_SIZE_II(seq) MSGPACK_PP_CAT(MSGPACK_PP_SEQ_SIZE_, MSGPACK_PP_SEQ_SIZE_0 ## seq)
# elif MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_EDG() || MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_MSVC()
#    define MSGPACK_PP_SEQ_SIZE(seq) MSGPACK_PP_SEQ_SIZE_I(seq)
#    define MSGPACK_PP_SEQ_SIZE_I(seq) MSGPACK_PP_CAT(MSGPACK_PP_SEQ_SIZE_, MSGPACK_PP_SEQ_SIZE_0 seq)
# elif defined(__IBMC__) || defined(__IBMCPP__)
#    define MSGPACK_PP_SEQ_SIZE(seq) MSGPACK_PP_CAT(MSGPACK_PP_SEQ_SIZE_, MSGPACK_PP_CAT(MSGPACK_PP_SEQ_SIZE_0, seq))
# else
#    define MSGPACK_PP_SEQ_SIZE(seq) MSGPACK_PP_CAT(MSGPACK_PP_SEQ_SIZE_, MSGPACK_PP_SEQ_SIZE_0 seq)
# endif
#
# define MSGPACK_PP_SEQ_SIZE_0(_) MSGPACK_PP_SEQ_SIZE_1
# define MSGPACK_PP_SEQ_SIZE_1(_) MSGPACK_PP_SEQ_SIZE_2
# define MSGPACK_PP_SEQ_SIZE_2(_) MSGPACK_PP_SEQ_SIZE_3
# define MSGPACK_PP_SEQ_SIZE_3(_) MSGPACK_PP_SEQ_SIZE_4
# define MSGPACK_PP_SEQ_SIZE_4(_) MSGPACK_PP_SEQ_SIZE_5
# define MSGPACK_PP_SEQ_SIZE_5(_) MSGPACK_PP_SEQ_SIZE_6
# define MSGPACK_PP_SEQ_SIZE_6(_) MSGPACK_PP_SEQ_SIZE_7
# define MSGPACK_PP_SEQ_SIZE_7(_) MSGPACK_PP_SEQ_SIZE_8
# define MSGPACK_PP_SEQ_SIZE_8(_) MSGPACK_PP_SEQ_SIZE_9
# define MSGPACK_PP_SEQ_SIZE_9(_) MSGPACK_PP_SEQ_SIZE_10
# define MSGPACK_PP_SEQ_SIZE_10(_) MSGPACK_PP_SEQ_SIZE_11
# define MSGPACK_PP_SEQ_SIZE_11(_) MSGPACK_PP_SEQ_SIZE_12
# define MSGPACK_PP_SEQ_SIZE_12(_) MSGPACK_PP_SEQ_SIZE_13
# define MSGPACK_PP_SEQ_SIZE_13(_) MSGPACK_PP_SEQ_SIZE_14
# define MSGPACK_PP_SEQ_SIZE_14(_) MSGPACK_PP_SEQ_SIZE_15
# define MSGPACK_PP_SEQ_SIZE_15(_) MSGPACK_PP_SEQ_SIZE_16
# define MSGPACK_PP_SEQ_SIZE_16(_) MSGPACK_PP_SEQ_SIZE_17
# define MSGPACK_PP_SEQ_SIZE_17(_) MSGPACK_PP_SEQ_SIZE_18
# define MSGPACK_PP_SEQ_SIZE_18(_) MSGPACK_PP_SEQ_SIZE_19
# define MSGPACK_PP_SEQ_SIZE_19(_) MSGPACK_PP_SEQ_SIZE_20
# define MSGPACK_PP_SEQ_SIZE_20(_) MSGPACK_PP_SEQ_SIZE_21
# define MSGPACK_PP_SEQ_SIZE_21(_) MSGPACK_PP_SEQ_SIZE_22
# define MSGPACK_PP_SEQ_SIZE_22(_) MSGPACK_PP_SEQ_SIZE_23
# define MSGPACK_PP_SEQ_SIZE_23(_) MSGPACK_PP_SEQ_SIZE_24
# define MSGPACK_PP_SEQ_SIZE_24(_) MSGPACK_PP_SEQ_SIZE_25
# define MSGPACK_PP_SEQ_SIZE_25(_) MSGPACK_PP_SEQ_SIZE_26
# define MSGPACK_PP_SEQ_SIZE_26(_) MSGPACK_PP_SEQ_SIZE_27
# define MSGPACK_PP_SEQ_SIZE_27(_) MSGPACK_PP_SEQ_SIZE_28
# define MSGPACK_PP_SEQ_SIZE_28(_) MSGPACK_PP_SEQ_SIZE_29
# define MSGPACK_PP_SEQ_SIZE_29(_) MSGPACK_PP_SEQ_SIZE_30
# define MSGPACK_PP_SEQ_SIZE_30(_) MSGPACK_PP_SEQ_SIZE_31
# define MSGPACK_PP_SEQ_SIZE_31(_) MSGPACK_PP_SEQ_SIZE_32
# define MSGPACK_PP_SEQ_SIZE_32(_) MSGPACK_PP_SEQ_SIZE_33
# define MSGPACK_PP_SEQ_SIZE_33(_) MSGPACK_PP_SEQ_SIZE_34
# define MSGPACK_PP_SEQ_SIZE_34(_) MSGPACK_PP_SEQ_SIZE_35
# define MSGPACK_PP_SEQ_SIZE_35(_) MSGPACK_PP_SEQ_SIZE_36
# define MSGPACK_PP_SEQ_SIZE_36(_) MSGPACK_PP_SEQ_SIZE_37
# define MSGPACK_PP_SEQ_SIZE_37(_) MSGPACK_PP_SEQ_SIZE_38
# define MSGPACK_PP_SEQ_SIZE_38(_) MSGPACK_PP_SEQ_SIZE_39
# define MSGPACK_PP_SEQ_SIZE_39(_) MSGPACK_PP_SEQ_SIZE_40
# define MSGPACK_PP_SEQ_SIZE_40(_) MSGPACK_PP_SEQ_SIZE_41
# define MSGPACK_PP_SEQ_SIZE_41(_) MSGPACK_PP_SEQ_SIZE_42
# define MSGPACK_PP_SEQ_SIZE_42(_) MSGPACK_PP_SEQ_SIZE_43
# define MSGPACK_PP_SEQ_SIZE_43(_) MSGPACK_PP_SEQ_SIZE_44
# define MSGPACK_PP_SEQ_SIZE_44(_) MSGPACK_PP_SEQ_SIZE_45
# define MSGPACK_PP_SEQ_SIZE_45(_) MSGPACK_PP_SEQ_SIZE_46
# define MSGPACK_PP_SEQ_SIZE_46(_) MSGPACK_PP_SEQ_SIZE_47
# define MSGPACK_PP_SEQ_SIZE_47(_) MSGPACK_PP_SEQ_SIZE_48
# define MSGPACK_PP_SEQ_SIZE_48(_) MSGPACK_PP_SEQ_SIZE_49
# define MSGPACK_PP_SEQ_SIZE_49(_) MSGPACK_PP_SEQ_SIZE_50
# define MSGPACK_PP_SEQ_SIZE_50(_) MSGPACK_PP_SEQ_SIZE_51
# define MSGPACK_PP_SEQ_SIZE_51(_) MSGPACK_PP_SEQ_SIZE_52
# define MSGPACK_PP_SEQ_SIZE_52(_) MSGPACK_PP_SEQ_SIZE_53
# define MSGPACK_PP_SEQ_SIZE_53(_) MSGPACK_PP_SEQ_SIZE_54
# define MSGPACK_PP_SEQ_SIZE_54(_) MSGPACK_PP_SEQ_SIZE_55
# define MSGPACK_PP_SEQ_SIZE_55(_) MSGPACK_PP_SEQ_SIZE_56
# define MSGPACK_PP_SEQ_SIZE_56(_) MSGPACK_PP_SEQ_SIZE_57
# define MSGPACK_PP_SEQ_SIZE_57(_) MSGPACK_PP_SEQ_SIZE_58
# define MSGPACK_PP_SEQ_SIZE_58(_) MSGPACK_PP_SEQ_SIZE_59
# define MSGPACK_PP_SEQ_SIZE_59(_) MSGPACK_PP_SEQ_SIZE_60
# define MSGPACK_PP_SEQ_SIZE_60(_) MSGPACK_PP_SEQ_SIZE_61
# define MSGPACK_PP_SEQ_SIZE_61(_) MSGPACK_PP_SEQ_SIZE_62
# define MSGPACK_PP_SEQ_SIZE_62(_) MSGPACK_PP_SEQ_SIZE_63
# define MSGPACK_PP_SEQ_SIZE_63(_) MSGPACK_PP_SEQ_SIZE_64
# define MSGPACK_PP_SEQ_SIZE_64(_) MSGPACK_PP_SEQ_SIZE_65
# define MSGPACK_PP_SEQ_SIZE_65(_) MSGPACK_PP_SEQ_SIZE_66
# define MSGPACK_PP_SEQ_SIZE_66(_) MSGPACK_PP_SEQ_SIZE_67
# define MSGPACK_PP_SEQ_SIZE_67(_) MSGPACK_PP_SEQ_SIZE_68
# define MSGPACK_PP_SEQ_SIZE_68(_) MSGPACK_PP_SEQ_SIZE_69
# define MSGPACK_PP_SEQ_SIZE_69(_) MSGPACK_PP_SEQ_SIZE_70
# define MSGPACK_PP_SEQ_SIZE_70(_) MSGPACK_PP_SEQ_SIZE_71
# define MSGPACK_PP_SEQ_SIZE_71(_) MSGPACK_PP_SEQ_SIZE_72
# define MSGPACK_PP_SEQ_SIZE_72(_) MSGPACK_PP_SEQ_SIZE_73
# define MSGPACK_PP_SEQ_SIZE_73(_) MSGPACK_PP_SEQ_SIZE_74
# define MSGPACK_PP_SEQ_SIZE_74(_) MSGPACK_PP_SEQ_SIZE_75
# define MSGPACK_PP_SEQ_SIZE_75(_) MSGPACK_PP_SEQ_SIZE_76
# define MSGPACK_PP_SEQ_SIZE_76(_) MSGPACK_PP_SEQ_SIZE_77
# define MSGPACK_PP_SEQ_SIZE_77(_) MSGPACK_PP_SEQ_SIZE_78
# define MSGPACK_PP_SEQ_SIZE_78(_) MSGPACK_PP_SEQ_SIZE_79
# define MSGPACK_PP_SEQ_SIZE_79(_) MSGPACK_PP_SEQ_SIZE_80
# define MSGPACK_PP_SEQ_SIZE_80(_) MSGPACK_PP_SEQ_SIZE_81
# define MSGPACK_PP_SEQ_SIZE_81(_) MSGPACK_PP_SEQ_SIZE_82
# define MSGPACK_PP_SEQ_SIZE_82(_) MSGPACK_PP_SEQ_SIZE_83
# define MSGPACK_PP_SEQ_SIZE_83(_) MSGPACK_PP_SEQ_SIZE_84
# define MSGPACK_PP_SEQ_SIZE_84(_) MSGPACK_PP_SEQ_SIZE_85
# define MSGPACK_PP_SEQ_SIZE_85(_) MSGPACK_PP_SEQ_SIZE_86
# define MSGPACK_PP_SEQ_SIZE_86(_) MSGPACK_PP_SEQ_SIZE_87
# define MSGPACK_PP_SEQ_SIZE_87(_) MSGPACK_PP_SEQ_SIZE_88
# define MSGPACK_PP_SEQ_SIZE_88(_) MSGPACK_PP_SEQ_SIZE_89
# define MSGPACK_PP_SEQ_SIZE_89(_) MSGPACK_PP_SEQ_SIZE_90
# define MSGPACK_PP_SEQ_SIZE_90(_) MSGPACK_PP_SEQ_SIZE_91
# define MSGPACK_PP_SEQ_SIZE_91(_) MSGPACK_PP_SEQ_SIZE_92
# define MSGPACK_PP_SEQ_SIZE_92(_) MSGPACK_PP_SEQ_SIZE_93
# define MSGPACK_PP_SEQ_SIZE_93(_) MSGPACK_PP_SEQ_SIZE_94
# define MSGPACK_PP_SEQ_SIZE_94(_) MSGPACK_PP_SEQ_SIZE_95
# define MSGPACK_PP_SEQ_SIZE_95(_) MSGPACK_PP_SEQ_SIZE_96
# define MSGPACK_PP_SEQ_SIZE_96(_) MSGPACK_PP_SEQ_SIZE_97
# define MSGPACK_PP_SEQ_SIZE_97(_) MSGPACK_PP_SEQ_SIZE_98
# define MSGPACK_PP_SEQ_SIZE_98(_) MSGPACK_PP_SEQ_SIZE_99
# define MSGPACK_PP_SEQ_SIZE_99(_) MSGPACK_PP_SEQ_SIZE_100
# define MSGPACK_PP_SEQ_SIZE_100(_) MSGPACK_PP_SEQ_SIZE_101
# define MSGPACK_PP_SEQ_SIZE_101(_) MSGPACK_PP_SEQ_SIZE_102
# define MSGPACK_PP_SEQ_SIZE_102(_) MSGPACK_PP_SEQ_SIZE_103
# define MSGPACK_PP_SEQ_SIZE_103(_) MSGPACK_PP_SEQ_SIZE_104
# define MSGPACK_PP_SEQ_SIZE_104(_) MSGPACK_PP_SEQ_SIZE_105
# define MSGPACK_PP_SEQ_SIZE_105(_) MSGPACK_PP_SEQ_SIZE_106
# define MSGPACK_PP_SEQ_SIZE_106(_) MSGPACK_PP_SEQ_SIZE_107
# define MSGPACK_PP_SEQ_SIZE_107(_) MSGPACK_PP_SEQ_SIZE_108
# define MSGPACK_PP_SEQ_SIZE_108(_) MSGPACK_PP_SEQ_SIZE_109
# define MSGPACK_PP_SEQ_SIZE_109(_) MSGPACK_PP_SEQ_SIZE_110
# define MSGPACK_PP_SEQ_SIZE_110(_) MSGPACK_PP_SEQ_SIZE_111
# define MSGPACK_PP_SEQ_SIZE_111(_) MSGPACK_PP_SEQ_SIZE_112
# define MSGPACK_PP_SEQ_SIZE_112(_) MSGPACK_PP_SEQ_SIZE_113
# define MSGPACK_PP_SEQ_SIZE_113(_) MSGPACK_PP_SEQ_SIZE_114
# define MSGPACK_PP_SEQ_SIZE_114(_) MSGPACK_PP_SEQ_SIZE_115
# define MSGPACK_PP_SEQ_SIZE_115(_) MSGPACK_PP_SEQ_SIZE_116
# define MSGPACK_PP_SEQ_SIZE_116(_) MSGPACK_PP_SEQ_SIZE_117
# define MSGPACK_PP_SEQ_SIZE_117(_) MSGPACK_PP_SEQ_SIZE_118
# define MSGPACK_PP_SEQ_SIZE_118(_) MSGPACK_PP_SEQ_SIZE_119
# define MSGPACK_PP_SEQ_SIZE_119(_) MSGPACK_PP_SEQ_SIZE_120
# define MSGPACK_PP_SEQ_SIZE_120(_) MSGPACK_PP_SEQ_SIZE_121
# define MSGPACK_PP_SEQ_SIZE_121(_) MSGPACK_PP_SEQ_SIZE_122
# define MSGPACK_PP_SEQ_SIZE_122(_) MSGPACK_PP_SEQ_SIZE_123
# define MSGPACK_PP_SEQ_SIZE_123(_) MSGPACK_PP_SEQ_SIZE_124
# define MSGPACK_PP_SEQ_SIZE_124(_) MSGPACK_PP_SEQ_SIZE_125
# define MSGPACK_PP_SEQ_SIZE_125(_) MSGPACK_PP_SEQ_SIZE_126
# define MSGPACK_PP_SEQ_SIZE_126(_) MSGPACK_PP_SEQ_SIZE_127
# define MSGPACK_PP_SEQ_SIZE_127(_) MSGPACK_PP_SEQ_SIZE_128
# define MSGPACK_PP_SEQ_SIZE_128(_) MSGPACK_PP_SEQ_SIZE_129
# define MSGPACK_PP_SEQ_SIZE_129(_) MSGPACK_PP_SEQ_SIZE_130
# define MSGPACK_PP_SEQ_SIZE_130(_) MSGPACK_PP_SEQ_SIZE_131
# define MSGPACK_PP_SEQ_SIZE_131(_) MSGPACK_PP_SEQ_SIZE_132
# define MSGPACK_PP_SEQ_SIZE_132(_) MSGPACK_PP_SEQ_SIZE_133
# define MSGPACK_PP_SEQ_SIZE_133(_) MSGPACK_PP_SEQ_SIZE_134
# define MSGPACK_PP_SEQ_SIZE_134(_) MSGPACK_PP_SEQ_SIZE_135
# define MSGPACK_PP_SEQ_SIZE_135(_) MSGPACK_PP_SEQ_SIZE_136
# define MSGPACK_PP_SEQ_SIZE_136(_) MSGPACK_PP_SEQ_SIZE_137
# define MSGPACK_PP_SEQ_SIZE_137(_) MSGPACK_PP_SEQ_SIZE_138
# define MSGPACK_PP_SEQ_SIZE_138(_) MSGPACK_PP_SEQ_SIZE_139
# define MSGPACK_PP_SEQ_SIZE_139(_) MSGPACK_PP_SEQ_SIZE_140
# define MSGPACK_PP_SEQ_SIZE_140(_) MSGPACK_PP_SEQ_SIZE_141
# define MSGPACK_PP_SEQ_SIZE_141(_) MSGPACK_PP_SEQ_SIZE_142
# define MSGPACK_PP_SEQ_SIZE_142(_) MSGPACK_PP_SEQ_SIZE_143
# define MSGPACK_PP_SEQ_SIZE_143(_) MSGPACK_PP_SEQ_SIZE_144
# define MSGPACK_PP_SEQ_SIZE_144(_) MSGPACK_PP_SEQ_SIZE_145
# define MSGPACK_PP_SEQ_SIZE_145(_) MSGPACK_PP_SEQ_SIZE_146
# define MSGPACK_PP_SEQ_SIZE_146(_) MSGPACK_PP_SEQ_SIZE_147
# define MSGPACK_PP_SEQ_SIZE_147(_) MSGPACK_PP_SEQ_SIZE_148
# define MSGPACK_PP_SEQ_SIZE_148(_) MSGPACK_PP_SEQ_SIZE_149
# define MSGPACK_PP_SEQ_SIZE_149(_) MSGPACK_PP_SEQ_SIZE_150
# define MSGPACK_PP_SEQ_SIZE_150(_) MSGPACK_PP_SEQ_SIZE_151
# define MSGPACK_PP_SEQ_SIZE_151(_) MSGPACK_PP_SEQ_SIZE_152
# define MSGPACK_PP_SEQ_SIZE_152(_) MSGPACK_PP_SEQ_SIZE_153
# define MSGPACK_PP_SEQ_SIZE_153(_) MSGPACK_PP_SEQ_SIZE_154
# define MSGPACK_PP_SEQ_SIZE_154(_) MSGPACK_PP_SEQ_SIZE_155
# define MSGPACK_PP_SEQ_SIZE_155(_) MSGPACK_PP_SEQ_SIZE_156
# define MSGPACK_PP_SEQ_SIZE_156(_) MSGPACK_PP_SEQ_SIZE_157
# define MSGPACK_PP_SEQ_SIZE_157(_) MSGPACK_PP_SEQ_SIZE_158
# define MSGPACK_PP_SEQ_SIZE_158(_) MSGPACK_PP_SEQ_SIZE_159
# define MSGPACK_PP_SEQ_SIZE_159(_) MSGPACK_PP_SEQ_SIZE_160
# define MSGPACK_PP_SEQ_SIZE_160(_) MSGPACK_PP_SEQ_SIZE_161
# define MSGPACK_PP_SEQ_SIZE_161(_) MSGPACK_PP_SEQ_SIZE_162
# define MSGPACK_PP_SEQ_SIZE_162(_) MSGPACK_PP_SEQ_SIZE_163
# define MSGPACK_PP_SEQ_SIZE_163(_) MSGPACK_PP_SEQ_SIZE_164
# define MSGPACK_PP_SEQ_SIZE_164(_) MSGPACK_PP_SEQ_SIZE_165
# define MSGPACK_PP_SEQ_SIZE_165(_) MSGPACK_PP_SEQ_SIZE_166
# define MSGPACK_PP_SEQ_SIZE_166(_) MSGPACK_PP_SEQ_SIZE_167
# define MSGPACK_PP_SEQ_SIZE_167(_) MSGPACK_PP_SEQ_SIZE_168
# define MSGPACK_PP_SEQ_SIZE_168(_) MSGPACK_PP_SEQ_SIZE_169
# define MSGPACK_PP_SEQ_SIZE_169(_) MSGPACK_PP_SEQ_SIZE_170
# define MSGPACK_PP_SEQ_SIZE_170(_) MSGPACK_PP_SEQ_SIZE_171
# define MSGPACK_PP_SEQ_SIZE_171(_) MSGPACK_PP_SEQ_SIZE_172
# define MSGPACK_PP_SEQ_SIZE_172(_) MSGPACK_PP_SEQ_SIZE_173
# define MSGPACK_PP_SEQ_SIZE_173(_) MSGPACK_PP_SEQ_SIZE_174
# define MSGPACK_PP_SEQ_SIZE_174(_) MSGPACK_PP_SEQ_SIZE_175
# define MSGPACK_PP_SEQ_SIZE_175(_) MSGPACK_PP_SEQ_SIZE_176
# define MSGPACK_PP_SEQ_SIZE_176(_) MSGPACK_PP_SEQ_SIZE_177
# define MSGPACK_PP_SEQ_SIZE_177(_) MSGPACK_PP_SEQ_SIZE_178
# define MSGPACK_PP_SEQ_SIZE_178(_) MSGPACK_PP_SEQ_SIZE_179
# define MSGPACK_PP_SEQ_SIZE_179(_) MSGPACK_PP_SEQ_SIZE_180
# define MSGPACK_PP_SEQ_SIZE_180(_) MSGPACK_PP_SEQ_SIZE_181
# define MSGPACK_PP_SEQ_SIZE_181(_) MSGPACK_PP_SEQ_SIZE_182
# define MSGPACK_PP_SEQ_SIZE_182(_) MSGPACK_PP_SEQ_SIZE_183
# define MSGPACK_PP_SEQ_SIZE_183(_) MSGPACK_PP_SEQ_SIZE_184
# define MSGPACK_PP_SEQ_SIZE_184(_) MSGPACK_PP_SEQ_SIZE_185
# define MSGPACK_PP_SEQ_SIZE_185(_) MSGPACK_PP_SEQ_SIZE_186
# define MSGPACK_PP_SEQ_SIZE_186(_) MSGPACK_PP_SEQ_SIZE_187
# define MSGPACK_PP_SEQ_SIZE_187(_) MSGPACK_PP_SEQ_SIZE_188
# define MSGPACK_PP_SEQ_SIZE_188(_) MSGPACK_PP_SEQ_SIZE_189
# define MSGPACK_PP_SEQ_SIZE_189(_) MSGPACK_PP_SEQ_SIZE_190
# define MSGPACK_PP_SEQ_SIZE_190(_) MSGPACK_PP_SEQ_SIZE_191
# define MSGPACK_PP_SEQ_SIZE_191(_) MSGPACK_PP_SEQ_SIZE_192
# define MSGPACK_PP_SEQ_SIZE_192(_) MSGPACK_PP_SEQ_SIZE_193
# define MSGPACK_PP_SEQ_SIZE_193(_) MSGPACK_PP_SEQ_SIZE_194
# define MSGPACK_PP_SEQ_SIZE_194(_) MSGPACK_PP_SEQ_SIZE_195
# define MSGPACK_PP_SEQ_SIZE_195(_) MSGPACK_PP_SEQ_SIZE_196
# define MSGPACK_PP_SEQ_SIZE_196(_) MSGPACK_PP_SEQ_SIZE_197
# define MSGPACK_PP_SEQ_SIZE_197(_) MSGPACK_PP_SEQ_SIZE_198
# define MSGPACK_PP_SEQ_SIZE_198(_) MSGPACK_PP_SEQ_SIZE_199
# define MSGPACK_PP_SEQ_SIZE_199(_) MSGPACK_PP_SEQ_SIZE_200
# define MSGPACK_PP_SEQ_SIZE_200(_) MSGPACK_PP_SEQ_SIZE_201
# define MSGPACK_PP_SEQ_SIZE_201(_) MSGPACK_PP_SEQ_SIZE_202
# define MSGPACK_PP_SEQ_SIZE_202(_) MSGPACK_PP_SEQ_SIZE_203
# define MSGPACK_PP_SEQ_SIZE_203(_) MSGPACK_PP_SEQ_SIZE_204
# define MSGPACK_PP_SEQ_SIZE_204(_) MSGPACK_PP_SEQ_SIZE_205
# define MSGPACK_PP_SEQ_SIZE_205(_) MSGPACK_PP_SEQ_SIZE_206
# define MSGPACK_PP_SEQ_SIZE_206(_) MSGPACK_PP_SEQ_SIZE_207
# define MSGPACK_PP_SEQ_SIZE_207(_) MSGPACK_PP_SEQ_SIZE_208
# define MSGPACK_PP_SEQ_SIZE_208(_) MSGPACK_PP_SEQ_SIZE_209
# define MSGPACK_PP_SEQ_SIZE_209(_) MSGPACK_PP_SEQ_SIZE_210
# define MSGPACK_PP_SEQ_SIZE_210(_) MSGPACK_PP_SEQ_SIZE_211
# define MSGPACK_PP_SEQ_SIZE_211(_) MSGPACK_PP_SEQ_SIZE_212
# define MSGPACK_PP_SEQ_SIZE_212(_) MSGPACK_PP_SEQ_SIZE_213
# define MSGPACK_PP_SEQ_SIZE_213(_) MSGPACK_PP_SEQ_SIZE_214
# define MSGPACK_PP_SEQ_SIZE_214(_) MSGPACK_PP_SEQ_SIZE_215
# define MSGPACK_PP_SEQ_SIZE_215(_) MSGPACK_PP_SEQ_SIZE_216
# define MSGPACK_PP_SEQ_SIZE_216(_) MSGPACK_PP_SEQ_SIZE_217
# define MSGPACK_PP_SEQ_SIZE_217(_) MSGPACK_PP_SEQ_SIZE_218
# define MSGPACK_PP_SEQ_SIZE_218(_) MSGPACK_PP_SEQ_SIZE_219
# define MSGPACK_PP_SEQ_SIZE_219(_) MSGPACK_PP_SEQ_SIZE_220
# define MSGPACK_PP_SEQ_SIZE_220(_) MSGPACK_PP_SEQ_SIZE_221
# define MSGPACK_PP_SEQ_SIZE_221(_) MSGPACK_PP_SEQ_SIZE_222
# define MSGPACK_PP_SEQ_SIZE_222(_) MSGPACK_PP_SEQ_SIZE_223
# define MSGPACK_PP_SEQ_SIZE_223(_) MSGPACK_PP_SEQ_SIZE_224
# define MSGPACK_PP_SEQ_SIZE_224(_) MSGPACK_PP_SEQ_SIZE_225
# define MSGPACK_PP_SEQ_SIZE_225(_) MSGPACK_PP_SEQ_SIZE_226
# define MSGPACK_PP_SEQ_SIZE_226(_) MSGPACK_PP_SEQ_SIZE_227
# define MSGPACK_PP_SEQ_SIZE_227(_) MSGPACK_PP_SEQ_SIZE_228
# define MSGPACK_PP_SEQ_SIZE_228(_) MSGPACK_PP_SEQ_SIZE_229
# define MSGPACK_PP_SEQ_SIZE_229(_) MSGPACK_PP_SEQ_SIZE_230
# define MSGPACK_PP_SEQ_SIZE_230(_) MSGPACK_PP_SEQ_SIZE_231
# define MSGPACK_PP_SEQ_SIZE_231(_) MSGPACK_PP_SEQ_SIZE_232
# define MSGPACK_PP_SEQ_SIZE_232(_) MSGPACK_PP_SEQ_SIZE_233
# define MSGPACK_PP_SEQ_SIZE_233(_) MSGPACK_PP_SEQ_SIZE_234
# define MSGPACK_PP_SEQ_SIZE_234(_) MSGPACK_PP_SEQ_SIZE_235
# define MSGPACK_PP_SEQ_SIZE_235(_) MSGPACK_PP_SEQ_SIZE_236
# define MSGPACK_PP_SEQ_SIZE_236(_) MSGPACK_PP_SEQ_SIZE_237
# define MSGPACK_PP_SEQ_SIZE_237(_) MSGPACK_PP_SEQ_SIZE_238
# define MSGPACK_PP_SEQ_SIZE_238(_) MSGPACK_PP_SEQ_SIZE_239
# define MSGPACK_PP_SEQ_SIZE_239(_) MSGPACK_PP_SEQ_SIZE_240
# define MSGPACK_PP_SEQ_SIZE_240(_) MSGPACK_PP_SEQ_SIZE_241
# define MSGPACK_PP_SEQ_SIZE_241(_) MSGPACK_PP_SEQ_SIZE_242
# define MSGPACK_PP_SEQ_SIZE_242(_) MSGPACK_PP_SEQ_SIZE_243
# define MSGPACK_PP_SEQ_SIZE_243(_) MSGPACK_PP_SEQ_SIZE_244
# define MSGPACK_PP_SEQ_SIZE_244(_) MSGPACK_PP_SEQ_SIZE_245
# define MSGPACK_PP_SEQ_SIZE_245(_) MSGPACK_PP_SEQ_SIZE_246
# define MSGPACK_PP_SEQ_SIZE_246(_) MSGPACK_PP_SEQ_SIZE_247
# define MSGPACK_PP_SEQ_SIZE_247(_) MSGPACK_PP_SEQ_SIZE_248
# define MSGPACK_PP_SEQ_SIZE_248(_) MSGPACK_PP_SEQ_SIZE_249
# define MSGPACK_PP_SEQ_SIZE_249(_) MSGPACK_PP_SEQ_SIZE_250
# define MSGPACK_PP_SEQ_SIZE_250(_) MSGPACK_PP_SEQ_SIZE_251
# define MSGPACK_PP_SEQ_SIZE_251(_) MSGPACK_PP_SEQ_SIZE_252
# define MSGPACK_PP_SEQ_SIZE_252(_) MSGPACK_PP_SEQ_SIZE_253
# define MSGPACK_PP_SEQ_SIZE_253(_) MSGPACK_PP_SEQ_SIZE_254
# define MSGPACK_PP_SEQ_SIZE_254(_) MSGPACK_PP_SEQ_SIZE_255
# define MSGPACK_PP_SEQ_SIZE_255(_) MSGPACK_PP_SEQ_SIZE_256
# define MSGPACK_PP_SEQ_SIZE_256(_) MSGPACK_PP_SEQ_SIZE_257
#
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_0 0
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_1 1
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_2 2
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_3 3
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_4 4
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_5 5
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_6 6
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_7 7
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_8 8
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_9 9
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_10 10
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_11 11
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_12 12
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_13 13
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_14 14
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_15 15
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_16 16
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_17 17
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_18 18
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_19 19
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_20 20
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_21 21
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_22 22
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_23 23
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_24 24
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_25 25
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_26 26
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_27 27
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_28 28
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_29 29
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_30 30
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_31 31
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_32 32
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_33 33
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_34 34
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_35 35
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_36 36
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_37 37
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_38 38
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_39 39
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_40 40
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_41 41
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_42 42
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_43 43
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_44 44
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_45 45
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_46 46
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_47 47
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_48 48
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_49 49
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_50 50
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_51 51
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_52 52
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_53 53
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_54 54
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_55 55
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_56 56
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_57 57
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_58 58
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_59 59
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_60 60
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_61 61
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_62 62
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_63 63
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_64 64
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_65 65
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_66 66
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_67 67
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_68 68
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_69 69
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_70 70
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_71 71
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_72 72
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_73 73
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_74 74
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_75 75
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_76 76
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_77 77
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_78 78
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_79 79
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_80 80
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_81 81
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_82 82
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_83 83
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_84 84
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_85 85
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_86 86
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_87 87
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_88 88
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_89 89
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_90 90
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_91 91
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_92 92
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_93 93
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_94 94
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_95 95
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_96 96
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_97 97
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_98 98
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_99 99
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_100 100
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_101 101
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_102 102
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_103 103
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_104 104
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_105 105
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_106 106
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_107 107
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_108 108
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_109 109
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_110 110
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_111 111
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_112 112
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_113 113
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_114 114
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_115 115
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_116 116
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_117 117
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_118 118
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_119 119
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_120 120
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_121 121
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_122 122
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_123 123
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_124 124
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_125 125
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_126 126
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_127 127
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_128 128
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_129 129
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_130 130
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_131 131
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_132 132
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_133 133
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_134 134
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_135 135
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_136 136
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_137 137
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_138 138
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_139 139
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_140 140
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_141 141
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_142 142
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_143 143
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_144 144
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_145 145
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_146 146
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_147 147
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_148 148
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_149 149
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_150 150
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_151 151
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_152 152
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_153 153
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_154 154
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_155 155
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_156 156
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_157 157
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_158 158
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_159 159
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_160 160
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_161 161
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_162 162
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_163 163
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_164 164
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_165 165
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_166 166
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_167 167
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_168 168
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_169 169
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_170 170
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_171 171
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_172 172
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_173 173
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_174 174
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_175 175
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_176 176
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_177 177
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_178 178
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_179 179
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_180 180
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_181 181
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_182 182
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_183 183
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_184 184
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_185 185
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_186 186
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_187 187
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_188 188
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_189 189
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_190 190
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_191 191
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_192 192
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_193 193
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_194 194
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_195 195
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_196 196
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_197 197
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_198 198
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_199 199
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_200 200
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_201 201
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_202 202
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_203 203
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_204 204
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_205 205
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_206 206
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_207 207
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_208 208
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_209 209
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_210 210
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_211 211
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_212 212
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_213 213
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_214 214
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_215 215
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_216 216
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_217 217
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_218 218
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_219 219
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_220 220
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_221 221
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_222 222
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_223 223
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_224 224
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_225 225
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_226 226
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_227 227
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_228 228
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_229 229
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_230 230
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_231 231
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_232 232
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_233 233
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_234 234
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_235 235
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_236 236
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_237 237
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_238 238
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_239 239
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_240 240
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_241 241
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_242 242
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_243 243
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_244 244
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_245 245
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_246 246
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_247 247
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_248 248
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_249 249
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_250 250
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_251 251
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_252 252
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_253 253
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_254 254
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_255 255
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_256 256
# define MSGPACK_PP_SEQ_SIZE_MSGPACK_PP_SEQ_SIZE_257 257
#
# endif
