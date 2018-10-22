// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, Worktips Developers
// 
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{1000,  "7dfeccfd5af2b48dcceff05516ffc150b4179d7d5d0a8edd7f8dbb3276bd5fba"},
{1755,  "548a574df54b9c0303635c2191ddd912131721597792d028578f9ef55a8e682e"},
{2966,  "bac75a7fbe416ed33cb206f058a657ff767844207ae2ba0b6feecf062261f640"},
{3911,  "793fc5af99ea4ea41c2b69037543c534c95d7365eda79abb09bf6351412c757f"},
{4307,  "8e846b9765b9075be9e4d8d7162186c5e8fee77658f7aab35f075d53ec86b455"},
{5730,  "2063405a8e4a17e8bed3e08cefd225337076bc444b6155d8f77abbb5114e8e2c"},
{6550,  "faf02b92d0d87676f19cd1333552f0924e974ff99d5153ebac662433bab2e1bb"},
{7800,  "5548824a26bad00205a50245338d4e3fa3e40e34968d291b3e99d1bb6cd5bfa4"},
{9485,  "de106c95b3ddc49aac997992ec6aa8c18f89fedc5947a3e6a2e47e47a3fa033d"},
{9710,  "dff92af071ec0e388fc57e46599551d9cf885aa88055d3384fb10a7e4b8e40f4"},
{15894,  "51999fe53c445d131790439000940279df797ddd779049f5776bb7a01f576e5d"},
{22500,  "ad7c84ac33fb8cf0aa914be95be26f907f91493efa94285621efc2985cae560a"},
{27850,  "2b368d553dbf373c0916c17368afd5f7da77c332ce990597f985ccb9215962e9"},
{33050,  "e309a7dba6413ce8b2ef47c86115f9c2a45c47870296587f07ddd143441c63d4"},
{36905,  "07f894174d20da58e583e8cb28e7ffc2705209531ffdec380de1e8647c73fd09"},
{40175,  "322e6b97eb53c70a67c379a3e2094c896e932301deed57cb2c898538f492e00b"},
{42280,  "43cb86807d40ac0c5fdd15af7f78a31f38edaa2bc67383a18ed9f8bd950c5352"},
{45085,  "359747d45403d30b42a8a7d6731aa240444cd20c64f46c6c403fe900f501c9db"},
{48000,  "f83ee516630182326bdcaf1fd2df44b9d0841677a506b208159b2b96a1349f28"},
{48380,  "58e8247328d7654d5f6e657f9a29dcd95511fea7045dc663fba9e74938ad9c41"},
{49000,  "e18561ecf0ee6a34aa65e794202fe6e094f442626a6f0285acbf8eebe44beda6"},
{49998,  "f8611898a35875860ece9a6afbdeaf353aabeba9d8ee8f327373bec117d9048f"},
{53441,  "f63a7584906d5d93be51ebe084e20f884361ede5bd11b77746afa5c3b98165d7"},
{55467,  "d2f059371ff2d6ff07b57292467e9aae9844ff3d4dd204ca08472b629a484270"},
{57600,  "0faeeace9ac89b9ee6c4e28dec5b9c93b576e2be2776d84e242aeae7015900a8"},
{59700,  "a5ec9e45bd22eb713ba682557aa37b030b934f14d709986dd458ea0f0f3bcd99"},
{60542,  "9dc571e2fdbb6e5790d1af038e2bc333ba4ad0880c0f5eaa24dde84ac137932b"},
{63000,  "0d6df89f69f5c6fe79a65fd5980b10937b1c54e8b32c72b2da9cdaf8a95508d8"},
{63470,  "a014d03c4f4b7f7ad08315b100cda504baa198d76eeab3767ba3e163d041bd45"},
{64130,  "4e381087e78180cea5a000195cce23b032f7346197401515714f46c88734b9a2"},
{64710,  "d72af31c600eba874d01802b47cf4872fd395446afd5ef1b5a84f445b2654975"},
{66700,  "1a598c01eccd1c8f7baef45556fc0d54b88c1886dbae7e651cad9d61b58d4f57"},
{67315,  "6719d6e73f959f31691fafb7f8f8a6d9fcffcc864a367e36bc9f27bce08c758d"},
{67985,  "444998b7a7be9fc1160abdeb578421a046fa3d2b803171f0b30582101966b702"},
{68725,  "1c715ae448e83ae5b5199f35e372dea98a1297e6fe8a1652b7e9e951996c12f7"},
{69399,  "d4d342db19d825e390c9b898d08a63eafdfde2d773135e3dc6caa8bd6e95bd38"},
{70055,  "c9991cb6431c2994ae10351125787323f10de2f17d4d8414f8f4810a4fbdde97"},
{70750,  "e192309a49ad5ca3154fac0eb8bd847c5cd03d7665221b1070b4f95473202211"},
{71510,  "96ca3f1249ace1e0d5a613693a62ff2be2a58d8f35346b6b080464ab98cd3211"},
{72711,  "69fdb2129b657b572b56484668ca0ca4b195b1ed6225458836e5e0478e81f17f"},
{73437,  "53494ffdc34e02be385b1421f132dbfdedd8eef030b1b369a17594363fc54138"},
{74960,  "ad199c794abce5b188a8a468776097a4564170984436d42c8e26f789eed96bc8"},
{76145,  "6c4c6fe83c58c59e536be2ba9daac937b361a67866e3a7795fc3e36404360655"},
{78250,  "f97d0ab437ed342de2ab3351d30aad7e791cd500b11a03a50170c074e1b530aa"},
{100000, "00774e8f84544e14e3ae89fdfa63ef92d8bb284eaae4cd87f9f8eb1b16d7de13"},
{101777, "a6ee02a9798e7abfd34937abe466c1735591c8ea3212527d9688ceb9e5f374c6"},
{102468, "38185df84fa1d3c49e42ef08c1777f9492a3a4b48231e5cb8076d21e13516bf1"},
{103398, "04c056394c54813a2a3c079e1a7d38762844d67bdc62a44a8f1d5ace972701c6"},
{105444, "a3847d21cfc7da820696fca7bef0054ada4d93ac677d18b1466798f95887732a"},
{107583, "79fbd8e4455e4b90fb5df57722a5627c5fc79fd6078ab7b4bae8dd3c600e03ac"},
{109645, "e7f1b1db27a731514f8f0fd84063dc963b5daa3ed00e2b13c3664a48fd73f4a7"},
{111386, "11d32fabbea61777c8dbb631cf01a45662c00554664ce503440861b651aea86d"},
{112524, "d77afff78577f0086b0d1d16a54bda92b12d8efaaaca585390ffbcf26904b60b"},
{114576, "f837929983e1e22830173254a4f4fc4de855558681c6fb5c2ab7981cd717c9db"},
{115591, "f46acc7d612943c63543777745210c1f8ad93f5729964f2fb74b6abe875ad686"},
{115971, "38bc79667ec2570a55db89b5d6e239f8b7112b087901de481b79111604ce3df3"},
{116796, "e53564dded0084d665516040ca5b3f102d74d1071a1841e62925b0540e7d91e9"},
{118137, "8d33501bce6dfb6e6ada51d8523ce7f5d5643e5ea1af74e4ca545e363f4e9cdf"},
{120988, "c03f430f95eeba06124618f15e8c640b00a22c0369f6ba596cda3d3be4aa9663"},
{122464, "c83716edc59852c8da5c79478777ad0346ad31c8c1150ac860ee40fa024ac3c5"},
{123798, "07439072411a53b444abf00679b02e7c81a9d41129e8bb5a39a44bcc0fa0b022"},
{125393, "17636d100104de9822b4d1648848b921b23f39adbd9288fa474a893e5ed9d355"},
{127571, "91fa877722294021eadacf963dfd5f94e280d1ee44f859469242a74908f9a75b"},
{129078, "3e42a77763aaa80e2bf55acf03f981390dfc140edb8830e31662e09bfbbbed70"},
{130381, "da742a1938332923df0304e82ebbbbbea782969266729eb5402ec8bad4b4379c"},
{132676, "869d54f57fb6af9c258e543300032bca642b4312f9a8e4a7cb8469a0c83deca9"},
{134135, "7684c527dfa60f805179bab9b326a6d6d75444f7c8baaa2ba81d8513c6109391"},
{135514, "7b5bbf0d9991c4e8c5ee2f8a9cbff1b825e11244c599f0bc00d5d57c899e7320"},
{138287, "cff635cfbb48875c110154fce79ce0ed395b6a77719cb35896d00dc44a3237ce"},
{141111, "1272f8793d89e4ae9e3ae186afc97260ad525c98214b47802638a315f63508c9"},
{142444, "f5cee8356b8e5a48f8fc5a9a0d0a5390d0bbd63626341236b0c0dcd799d32a21"},
{144593, "32560638c7e544440b6d9b1d1306dfe8c23dbd7a5e9b7cf4dc51e15be0a4903a"},
{147348, "34b4dde3e826c8388576971f1ba91612c77fb44ca6e727c19cf0aeba043f353d"},
{148875, "3df9a27bb1abc8d65f3a316e183f88eaa4345066028137775a5898adabd0e7df"},
{150777, "b6d2dca2cefbfbbf5e9ca30b685668fe0102d142086861de232c4e08ec1c1f9e"},
{152734, "f4360453bb0ff1fbf5972c8a3d6f6b97938f9066d754250f6fa37aee88fb5728"},
{154697, "0e3149d08cb6674ec89987fb34c6fc37be9da3b2b4c419d4ff801d9b88168a7c"},
{155781, "aa404e2b9b40e0a160f6e111585a7f18c32e7779963ddbef445d6dbe53b44abc"}
};
}
