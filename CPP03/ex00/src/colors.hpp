/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:41:02 by doriani           #+#    #+#             */
/*   Updated: 2024/01/04 12:02:30 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
#define COLORS_HPP

// Regular Colors
#define BLACK         "\e[38;5;0m"
#define RED           "\e[38;5;1m"
#define GREEN         "\e[38;5;2m"
#define YELLOW        "\e[38;5;3m"
#define BLUE          "\e[38;5;4m"
#define PURPLE        "\e[38;5;5m"
#define CYAN          "\e[38;5;6m"
#define WHITE         "\e[38;5;7m"
#define BRIGHT_BLACK  "\e[38;5;8m"
#define BRIGHT_RED    "\e[38;5;9m"
#define BRIGHT_GREEN  "\e[38;5;10m"
#define BRIGHT_YELLOW "\e[38;5;11m"
#define BRIGHT_BLUE   "\e[38;5;12m"
#define BRIGHT_PURPLE "\e[38;5;13m"
#define BRIGHT_CYAN   "\e[38;5;14m"
#define BRIGHT_WHITE  "\e[38;5;15m"
#define LIGHT_GRAY    "\e[38;5;249m"
#define GRAY          "\e[38;5;244m"
#define DARK_GREY     "\e[38;5;236m"

// Bold Colors
#define BLACK_B         "\e[1;38;5;0m"
#define RED_B           "\e[1;38;5;1m"
#define GREEN_B         "\e[1;38;5;2m"
#define YELLOW_B        "\e[1;38;5;3m"
#define BLUE_B          "\e[1;38;5;4m"
#define PURPLE_B        "\e[1;38;5;5m"
#define CYAN_B          "\e[1;38;5;6m"
#define WHITE_B         "\e[1;38;5;7m"
#define BRIGHT_BLACK_B  "\e[1;38;5;8m"
#define BRIGHT_RED_B    "\e[1;38;5;9m"
#define BRIGHT_GREEN_B  "\e[1;38;5;10m"
#define BRIGHT_YELLOW_B "\e[1;38;5;11m"
#define BRIGHT_BLUE_B   "\e[1;38;5;12m"
#define BRIGHT_PURPLE_B "\e[1;38;5;13m"
#define BRIGHT_CYAN_B   "\e[1;38;5;14m"
#define BRIGHT_WHITE_B  "\e[1;38;5;15m"
#define LIGHT_GRAY_B    "\e[1;38;5;249m"
#define GRAY_B          "\e[1;38;5;244m"
#define DARK_GREY_B     "\e[1;38;5;236m"

// Underline Colors
#define BLACK_U         "\e[4;38;5;0m"
#define RED_U           "\e[4;38;5;1m"
#define GREEN_U         "\e[4;38;5;2m"
#define YELLOW_U        "\e[4;38;5;3m"
#define BLUE_U          "\e[4;38;5;4m"
#define PURPLE_U        "\e[4;38;5;5m"
#define CYAN_U          "\e[4;38;5;6m"
#define WHITE_U         "\e[4;38;5;7m"
#define BRIGHT_BLACK_U  "\e[4;38;5;8m"
#define BRIGHT_RED_U    "\e[4;38;5;9m"
#define BRIGHT_GREEN_U  "\e[4;38;5;10m"
#define BRIGHT_YELLOW_U "\e[4;38;5;11m"
#define BRIGHT_BLUE_U   "\e[4;38;5;12m"
#define BRIGHT_PURPLE_U "\e[4;38;5;13m"
#define BRIGHT_CYAN_U   "\e[4;38;5;14m"
#define BRIGHT_WHITE_U  "\e[4;38;5;15m"
#define LIGHT_GRAY_U    "\e[4;38;5;249m"
#define GRAY_U          "\e[4;38;5;244m"
#define DARK_GREY_U     "\e[4;38;5;236m"

// Background Colors
#define BLACK_K         "\e[48;5;0m"
#define RED_K           "\e[48;5;1m"
#define GREEN_K         "\e[48;5;2m"
#define YELLOW_K        "\e[48;5;3m"
#define BLUE_K          "\e[48;5;4m"
#define PURPLE_K        "\e[48;5;5m"
#define CYAN_K          "\e[48;5;6m"
#define WHITE_K         "\e[48;5;7m"
#define BRIGHT_BLACK_K  "\e[48;5;8m"
#define BRIGHT_RED_K    "\e[48;5;9m"
#define BRIGHT_GREEN_K  "\e[48;5;10m"
#define BRIGHT_YELLOW_K "\e[48;5;11m"
#define BRIGHT_BLUE_K   "\e[48;5;12m"
#define BRIGHT_PURPLE_K "\e[48;5;13m"
#define BRIGHT_CYAN_K   "\e[48;5;14m"
#define BRIGHT_WHITE_K  "\e[48;5;15m"
#define LIGHT_GRAY_K    "\e[48;5;249m"
#define GRAY_K          "\e[48;5;244m"
#define DARK_GREY_K     "\e[48;5;236m"

// Color cubes
#define COLOR_1   "\e[38;5;16m"
#define COLOR_2   "\e[38;5;17m"
#define COLOR_3   "\e[38;5;18m"
#define COLOR_4   "\e[38;5;19m"
#define COLOR_5   "\e[38;5;20m"
#define COLOR_6   "\e[38;5;21m"
#define COLOR_7   "\e[38;5;22m"
#define COLOR_8   "\e[38;5;23m"
#define COLOR_9   "\e[38;5;24m"
#define COLOR_10  "\e[38;5;25m"
#define COLOR_11  "\e[38;5;26m"
#define COLOR_12  "\e[38;5;27m"
#define COLOR_13  "\e[38;5;28m"
#define COLOR_14  "\e[38;5;29m"
#define COLOR_15  "\e[38;5;30m"
#define COLOR_16  "\e[38;5;31m"
#define COLOR_17  "\e[38;5;32m"
#define COLOR_18  "\e[38;5;33m"
#define COLOR_19  "\e[38;5;34m"
#define COLOR_20  "\e[38;5;35m"
#define COLOR_21  "\e[38;5;36m"
#define COLOR_22  "\e[38;5;37m"
#define COLOR_23  "\e[38;5;38m"
#define COLOR_24  "\e[38;5;39m"
#define COLOR_25  "\e[38;5;40m"
#define COLOR_26  "\e[38;5;41m"
#define COLOR_27  "\e[38;5;42m"
#define COLOR_28  "\e[38;5;43m"
#define COLOR_29  "\e[38;5;44m"
#define COLOR_30  "\e[38;5;45m"
#define COLOR_31  "\e[38;5;46m"
#define COLOR_32  "\e[38;5;47m"
#define COLOR_33  "\e[38;5;48m"
#define COLOR_34  "\e[38;5;49m"
#define COLOR_35  "\e[38;5;50m"
#define COLOR_36  "\e[38;5;51m"
#define COLOR_37  "\e[38;5;52m"
#define COLOR_38  "\e[38;5;53m"
#define COLOR_39  "\e[38;5;54m"
#define COLOR_40  "\e[38;5;55m"
#define COLOR_41  "\e[38;5;56m"
#define COLOR_42  "\e[38;5;57m"
#define COLOR_43  "\e[38;5;58m"
#define COLOR_44  "\e[38;5;59m"
#define COLOR_45  "\e[38;5;60m"
#define COLOR_46  "\e[38;5;61m"
#define COLOR_47  "\e[38;5;62m"
#define COLOR_48  "\e[38;5;63m"
#define COLOR_49  "\e[38;5;64m"
#define COLOR_50  "\e[38;5;65m"
#define COLOR_51  "\e[38;5;66m"
#define COLOR_52  "\e[38;5;67m"
#define COLOR_53  "\e[38;5;68m"
#define COLOR_54  "\e[38;5;69m"
#define COLOR_55  "\e[38;5;70m"
#define COLOR_56  "\e[38;5;71m"
#define COLOR_57  "\e[38;5;72m"
#define COLOR_58  "\e[38;5;73m"
#define COLOR_59  "\e[38;5;74m"
#define COLOR_60  "\e[38;5;75m"
#define COLOR_61  "\e[38;5;76m"
#define COLOR_62  "\e[38;5;77m"
#define COLOR_63  "\e[38;5;78m"
#define COLOR_64  "\e[38;5;79m"
#define COLOR_65  "\e[38;5;80m"
#define COLOR_66  "\e[38;5;81m"
#define COLOR_67  "\e[38;5;82m"
#define COLOR_68  "\e[38;5;83m"
#define COLOR_69  "\e[38;5;84m"
#define COLOR_70  "\e[38;5;85m"
#define COLOR_71  "\e[38;5;86m"
#define COLOR_72  "\e[38;5;87m"
#define COLOR_73  "\e[38;5;88m"
#define COLOR_74  "\e[38;5;89m"
#define COLOR_75  "\e[38;5;90m"
#define COLOR_76  "\e[38;5;91m"
#define COLOR_77  "\e[38;5;92m"
#define COLOR_78  "\e[38;5;93m"
#define COLOR_79  "\e[38;5;94m"
#define COLOR_80  "\e[38;5;95m"
#define COLOR_81  "\e[38;5;96m"
#define COLOR_82  "\e[38;5;97m"
#define COLOR_83  "\e[38;5;98m"
#define COLOR_84  "\e[38;5;99m"
#define COLOR_85  "\e[38;5;100m"
#define COLOR_86  "\e[38;5;101m"
#define COLOR_87  "\e[38;5;102m"
#define COLOR_88  "\e[38;5;103m"
#define COLOR_89  "\e[38;5;104m"
#define COLOR_90  "\e[38;5;105m"
#define COLOR_91  "\e[38;5;106m"
#define COLOR_92  "\e[38;5;107m"
#define COLOR_93  "\e[38;5;108m"
#define COLOR_94  "\e[38;5;109m"
#define COLOR_95  "\e[38;5;110m"
#define COLOR_96  "\e[38;5;111m"
#define COLOR_97  "\e[38;5;112m"
#define COLOR_98  "\e[38;5;113m"
#define COLOR_99  "\e[38;5;114m"
#define COLOR_100 "\e[38;5;115m"
#define COLOR_101 "\e[38;5;116m"
#define COLOR_102 "\e[38;5;117m"
#define COLOR_103 "\e[38;5;118m"
#define COLOR_104 "\e[38;5;119m"
#define COLOR_105 "\e[38;5;120m"
#define COLOR_106 "\e[38;5;121m"
#define COLOR_107 "\e[38;5;122m"
#define COLOR_108 "\e[38;5;123m"
#define COLOR_109 "\e[38;5;124m"
#define COLOR_110 "\e[38;5;125m"
#define COLOR_111 "\e[38;5;126m"
#define COLOR_112 "\e[38;5;127m"
#define COLOR_113 "\e[38;5;128m"
#define COLOR_114 "\e[38;5;129m"
#define COLOR_115 "\e[38;5;130m"
#define COLOR_116 "\e[38;5;131m"
#define COLOR_117 "\e[38;5;132m"
#define COLOR_118 "\e[38;5;133m"
#define COLOR_119 "\e[38;5;134m"
#define COLOR_120 "\e[38;5;135m"
#define COLOR_121 "\e[38;5;136m"
#define COLOR_122 "\e[38;5;137m"
#define COLOR_123 "\e[38;5;138m"
#define COLOR_124 "\e[38;5;139m"
#define COLOR_125 "\e[38;5;140m"
#define COLOR_126 "\e[38;5;141m"
#define COLOR_127 "\e[38;5;142m"
#define COLOR_128 "\e[38;5;143m"
#define COLOR_129 "\e[38;5;144m"
#define COLOR_130 "\e[38;5;145m"
#define COLOR_131 "\e[38;5;146m"
#define COLOR_132 "\e[38;5;147m"
#define COLOR_133 "\e[38;5;148m"
#define COLOR_134 "\e[38;5;149m"
#define COLOR_135 "\e[38;5;150m"
#define COLOR_136 "\e[38;5;151m"
#define COLOR_137 "\e[38;5;152m"
#define COLOR_138 "\e[38;5;153m"
#define COLOR_139 "\e[38;5;154m"
#define COLOR_140 "\e[38;5;155m"
#define COLOR_141 "\e[38;5;156m"
#define COLOR_142 "\e[38;5;157m"
#define COLOR_143 "\e[38;5;158m"
#define COLOR_144 "\e[38;5;159m"
#define COLOR_145 "\e[38;5;160m"
#define COLOR_146 "\e[38;5;161m"
#define COLOR_147 "\e[38;5;162m"
#define COLOR_148 "\e[38;5;163m"
#define COLOR_149 "\e[38;5;164m"
#define COLOR_150 "\e[38;5;165m"
#define COLOR_151 "\e[38;5;166m"
#define COLOR_152 "\e[38;5;167m"
#define COLOR_153 "\e[38;5;168m"
#define COLOR_154 "\e[38;5;169m"
#define COLOR_155 "\e[38;5;170m"
#define COLOR_156 "\e[38;5;171m"
#define COLOR_157 "\e[38;5;172m"
#define COLOR_158 "\e[38;5;173m"
#define COLOR_159 "\e[38;5;174m"
#define COLOR_160 "\e[38;5;175m"
#define COLOR_161 "\e[38;5;176m"
#define COLOR_162 "\e[38;5;177m"
#define COLOR_163 "\e[38;5;178m"
#define COLOR_164 "\e[38;5;179m"
#define COLOR_165 "\e[38;5;180m"
#define COLOR_166 "\e[38;5;181m"
#define COLOR_167 "\e[38;5;182m"
#define COLOR_168 "\e[38;5;183m"
#define COLOR_169 "\e[38;5;184m"
#define COLOR_170 "\e[38;5;185m"
#define COLOR_171 "\e[38;5;186m"
#define COLOR_172 "\e[38;5;187m"
#define COLOR_173 "\e[38;5;188m"
#define COLOR_174 "\e[38;5;189m"
#define COLOR_175 "\e[38;5;190m"
#define COLOR_176 "\e[38;5;191m"
#define COLOR_177 "\e[38;5;192m"
#define COLOR_178 "\e[38;5;193m"
#define COLOR_179 "\e[38;5;194m"
#define COLOR_180 "\e[38;5;195m"
#define COLOR_181 "\e[38;5;196m"
#define COLOR_182 "\e[38;5;197m"
#define COLOR_183 "\e[38;5;198m"
#define COLOR_184 "\e[38;5;199m"
#define COLOR_185 "\e[38;5;200m"
#define COLOR_186 "\e[38;5;201m"
#define COLOR_187 "\e[38;5;202m"
#define COLOR_188 "\e[38;5;203m"
#define COLOR_189 "\e[38;5;204m"
#define COLOR_190 "\e[38;5;205m"
#define COLOR_191 "\e[38;5;206m"
#define COLOR_192 "\e[38;5;207m"
#define COLOR_193 "\e[38;5;208m"
#define COLOR_194 "\e[38;5;209m"
#define COLOR_195 "\e[38;5;210m"
#define COLOR_196 "\e[38;5;211m"
#define COLOR_197 "\e[38;5;212m"
#define COLOR_198 "\e[38;5;213m"
#define COLOR_199 "\e[38;5;214m"
#define COLOR_200 "\e[38;5;215m"
#define COLOR_201 "\e[38;5;216m"
#define COLOR_202 "\e[38;5;217m"
#define COLOR_203 "\e[38;5;218m"
#define COLOR_204 "\e[38;5;219m"
#define COLOR_205 "\e[38;5;220m"
#define COLOR_206 "\e[38;5;221m"
#define COLOR_207 "\e[38;5;222m"
#define COLOR_208 "\e[38;5;223m"
#define COLOR_209 "\e[38;5;224m"
#define COLOR_210 "\e[38;5;225m"
#define COLOR_211 "\e[38;5;226m"
#define COLOR_212 "\e[38;5;227m"
#define COLOR_213 "\e[38;5;228m"
#define COLOR_214 "\e[38;5;229m"
#define COLOR_215 "\e[38;5;230m"

// Background color cubes
#define COLOR_1_K   "\e[48;5;16m"
#define COLOR_2_K   "\e[48;5;17m"
#define COLOR_3_K   "\e[48;5;18m"
#define COLOR_4_K   "\e[48;5;19m"
#define COLOR_5_K   "\e[48;5;20m"
#define COLOR_6_K   "\e[38;5;21m"
#define COLOR_7_K   "\e[38;5;22m"
#define COLOR_8_K   "\e[38;5;23m"
#define COLOR_9_K   "\e[38;5;24m"
#define COLOR_10_K  "\e[38;5;25m"
#define COLOR_11_K  "\e[38;5;26m"
#define COLOR_12_K  "\e[38;5;27m"
#define COLOR_13_K  "\e[38;5;28m"
#define COLOR_14_K  "\e[38;5;29m"
#define COLOR_15_K  "\e[38;5;30m"
#define COLOR_16_K  "\e[38;5;31m"
#define COLOR_17_K  "\e[38;5;32m"
#define COLOR_18_K  "\e[38;5;33m"
#define COLOR_19_K  "\e[38;5;34m"
#define COLOR_20_K  "\e[38;5;35m"
#define COLOR_21_K  "\e[38;5;36m"
#define COLOR_22_K  "\e[38;5;37m"
#define COLOR_23_K  "\e[38;5;38m"
#define COLOR_24_K  "\e[38;5;39m"
#define COLOR_25_K  "\e[38;5;40m"
#define COLOR_26_K  "\e[38;5;41m"
#define COLOR_27_K  "\e[38;5;42m"
#define COLOR_28_K  "\e[38;5;43m"
#define COLOR_29_K  "\e[38;5;44m"
#define COLOR_30_K  "\e[38;5;45m"
#define COLOR_31_K  "\e[38;5;46m"
#define COLOR_32_K  "\e[38;5;47m"
#define COLOR_33_K  "\e[38;5;48m"
#define COLOR_34_K  "\e[38;5;49m"
#define COLOR_35_K  "\e[38;5;50m"
#define COLOR_36_K  "\e[38;5;51m"
#define COLOR_37_K  "\e[38;5;52m"
#define COLOR_38_K  "\e[38;5;53m"
#define COLOR_39_K  "\e[38;5;54m"
#define COLOR_40_K  "\e[38;5;55m"
#define COLOR_41_K  "\e[38;5;56m"
#define COLOR_42_K  "\e[38;5;57m"
#define COLOR_43_K  "\e[38;5;58m"
#define COLOR_44_K  "\e[38;5;59m"
#define COLOR_45_K  "\e[38;5;60m"
#define COLOR_46_K  "\e[38;5;61m"
#define COLOR_47_K  "\e[38;5;62m"
#define COLOR_48_K  "\e[38;5;63m"
#define COLOR_49_K  "\e[38;5;64m"
#define COLOR_50_K  "\e[38;5;65m"
#define COLOR_51_K  "\e[38;5;66m"
#define COLOR_52_K  "\e[38;5;67m"
#define COLOR_53_K  "\e[38;5;68m"
#define COLOR_54_K  "\e[38;5;69m"
#define COLOR_55_K  "\e[38;5;70m"
#define COLOR_56_K  "\e[38;5;71m"
#define COLOR_57_K  "\e[38;5;72m"
#define COLOR_58_K  "\e[38;5;73m"
#define COLOR_59_K  "\e[38;5;74m"
#define COLOR_60_K  "\e[38;5;75m"
#define COLOR_61_K  "\e[38;5;76m"
#define COLOR_62_K  "\e[38;5;77m"
#define COLOR_63_K  "\e[38;5;78m"
#define COLOR_64_K  "\e[38;5;79m"
#define COLOR_65_K  "\e[38;5;80m"
#define COLOR_66_K  "\e[38;5;81m"
#define COLOR_67_K  "\e[38;5;82m"
#define COLOR_68_K  "\e[38;5;83m"
#define COLOR_69_K  "\e[38;5;84m"
#define COLOR_70_K  "\e[38;5;85m"
#define COLOR_71_K  "\e[38;5;86m"
#define COLOR_72_K  "\e[38;5;87m"
#define COLOR_73_K  "\e[38;5;88m"
#define COLOR_74_K  "\e[38;5;89m"
#define COLOR_75_K  "\e[38;5;90m"
#define COLOR_76_K  "\e[38;5;91m"
#define COLOR_77_K  "\e[38;5;92m"
#define COLOR_78_K  "\e[38;5;93m"
#define COLOR_79_K  "\e[38;5;94m"
#define COLOR_80_K  "\e[38;5;95m"
#define COLOR_81_K  "\e[38;5;96m"
#define COLOR_82_K  "\e[38;5;97m"
#define COLOR_83_K  "\e[38;5;98m"
#define COLOR_84_K  "\e[38;5;99m"
#define COLOR_85_K  "\e[38;5;100m"
#define COLOR_86_K  "\e[38;5;101m"
#define COLOR_87_K  "\e[38;5;102m"
#define COLOR_88_K  "\e[38;5;103m"
#define COLOR_89_K  "\e[38;5;104m"
#define COLOR_90_K  "\e[38;5;105m"
#define COLOR_91_K  "\e[38;5;106m"
#define COLOR_92_K  "\e[38;5;107m"
#define COLOR_93_K  "\e[38;5;108m"
#define COLOR_94_K  "\e[38;5;109m"
#define COLOR_95_K  "\e[38;5;110m"
#define COLOR_96_K  "\e[38;5;111m"
#define COLOR_97_K  "\e[38;5;112m"
#define COLOR_98_K  "\e[38;5;113m"
#define COLOR_99_K  "\e[38;5;114m"
#define COLOR_100_K "\e[38;5;115m"
#define COLOR_101_K "\e[38;5;116m"
#define COLOR_102_K "\e[38;5;117m"
#define COLOR_103_K "\e[38;5;118m"
#define COLOR_104_K "\e[38;5;119m"
#define COLOR_105_K "\e[38;5;120m"
#define COLOR_106_K "\e[38;5;121m"
#define COLOR_107_K "\e[38;5;122m"
#define COLOR_108_K "\e[38;5;123m"
#define COLOR_109_K "\e[38;5;124m"
#define COLOR_110_K "\e[38;5;125m"
#define COLOR_111_K "\e[38;5;126m"
#define COLOR_112_K "\e[38;5;127m"
#define COLOR_113_K "\e[38;5;128m"
#define COLOR_114_K "\e[38;5;129m"
#define COLOR_115_K "\e[38;5;130m"
#define COLOR_116_K "\e[38;5;131m"
#define COLOR_117_K "\e[38;5;132m"
#define COLOR_118_K "\e[38;5;133m"
#define COLOR_119_K "\e[38;5;134m"
#define COLOR_120_K "\e[38;5;135m"
#define COLOR_121_K "\e[38;5;136m"
#define COLOR_122_K "\e[38;5;137m"
#define COLOR_123_K "\e[38;5;138m"
#define COLOR_124_K "\e[38;5;139m"
#define COLOR_125_K "\e[38;5;140m"
#define COLOR_126_K "\e[38;5;141m"
#define COLOR_127_K "\e[38;5;142m"
#define COLOR_128_K "\e[38;5;143m"
#define COLOR_129_K "\e[38;5;144m"
#define COLOR_130_K "\e[38;5;145m"
#define COLOR_131_K "\e[38;5;146m"
#define COLOR_132_K "\e[38;5;147m"
#define COLOR_133_K "\e[38;5;148m"
#define COLOR_134_K "\e[38;5;149m"
#define COLOR_135_K "\e[38;5;150m"
#define COLOR_136_K "\e[38;5;151m"
#define COLOR_137_K "\e[38;5;152m"
#define COLOR_138_K "\e[38;5;153m"
#define COLOR_139_K "\e[38;5;154m"
#define COLOR_140_K "\e[38;5;155m"
#define COLOR_141_K "\e[38;5;156m"
#define COLOR_142_K "\e[38;5;157m"
#define COLOR_143_K "\e[38;5;158m"
#define COLOR_144_K "\e[38;5;159m"
#define COLOR_145_K "\e[38;5;160m"
#define COLOR_146_K "\e[38;5;161m"
#define COLOR_147_K "\e[38;5;162m"
#define COLOR_148_K "\e[38;5;163m"
#define COLOR_149_K "\e[38;5;164m"
#define COLOR_150_K "\e[38;5;165m"
#define COLOR_151_K "\e[38;5;166m"
#define COLOR_152_K "\e[38;5;167m"
#define COLOR_153_K "\e[38;5;168m"
#define COLOR_154_K "\e[38;5;169m"
#define COLOR_155_K "\e[38;5;170m"
#define COLOR_156_K "\e[38;5;171m"
#define COLOR_157_K "\e[38;5;172m"
#define COLOR_158_K "\e[38;5;173m"
#define COLOR_159_K "\e[38;5;174m"
#define COLOR_160_K "\e[38;5;175m"
#define COLOR_161_K "\e[38;5;176m"
#define COLOR_162_K "\e[38;5;177m"
#define COLOR_163_K "\e[38;5;178m"
#define COLOR_164_K "\e[38;5;179m"
#define COLOR_165_K "\e[38;5;180m"
#define COLOR_166_K "\e[38;5;181m"
#define COLOR_167_K "\e[38;5;182m"
#define COLOR_168_K "\e[38;5;183m"
#define COLOR_169_K "\e[38;5;184m"
#define COLOR_170_K "\e[38;5;185m"
#define COLOR_171_K "\e[38;5;186m"
#define COLOR_172_K "\e[38;5;187m"
#define COLOR_173_K "\e[38;5;188m"
#define COLOR_174_K "\e[38;5;189m"
#define COLOR_175_K "\e[38;5;190m"
#define COLOR_176_K "\e[38;5;191m"
#define COLOR_177_K "\e[38;5;192m"
#define COLOR_178_K "\e[38;5;193m"
#define COLOR_179_K "\e[38;5;194m"
#define COLOR_180_K "\e[38;5;195m"
#define COLOR_181_K "\e[38;5;196m"
#define COLOR_182_K "\e[38;5;197m"
#define COLOR_183_K "\e[38;5;198m"
#define COLOR_184_K "\e[38;5;199m"
#define COLOR_185_K "\e[38;5;200m"
#define COLOR_186_K "\e[38;5;201m"
#define COLOR_187_K "\e[38;5;202m"
#define COLOR_188_K "\e[38;5;203m"
#define COLOR_189_K "\e[38;5;204m"
#define COLOR_190_K "\e[38;5;205m"
#define COLOR_191_K "\e[38;5;206m"
#define COLOR_192_K "\e[38;5;207m"
#define COLOR_193_K "\e[38;5;208m"
#define COLOR_194_K "\e[38;5;209m"
#define COLOR_195_K "\e[38;5;210m"
#define COLOR_196_K "\e[38;5;211m"
#define COLOR_197_K "\e[38;5;212m"
#define COLOR_198_K "\e[38;5;213m"
#define COLOR_199_K "\e[38;5;214m"
#define COLOR_200_K "\e[38;5;215m"
#define COLOR_201_K "\e[38;5;216m"
#define COLOR_202_K "\e[38;5;217m"
#define COLOR_203_K "\e[38;5;218m"
#define COLOR_204_K "\e[38;5;219m"
#define COLOR_205_K "\e[38;5;220m"
#define COLOR_206_K "\e[38;5;221m"
#define COLOR_207_K "\e[38;5;222m"
#define COLOR_208_K "\e[38;5;223m"
#define COLOR_209_K "\e[38;5;224m"
#define COLOR_210_K "\e[38;5;225m"
#define COLOR_211_K "\e[38;5;226m"
#define COLOR_212_K "\e[38;5;227m"
#define COLOR_213_K "\e[38;5;228m"
#define COLOR_214_K "\e[38;5;229m"
#define COLOR_215_K "\e[38;5;230m"

// Reset
#define RESET "\e[0m"
#endif