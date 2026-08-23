// Header by cotone

#pragma once

namespace mc
{
    enum class ItemId : int
    {
        AIR                      = 0,    // 空気
        STONE                    = 1,    // 石
        GRANITE                  = 1,    // 花崗岩
        DIORITE                  = 1,    // 閃緑岩
        ANDESITE                 = 1,    // 安山岩
        GRASS                    = 2,    // 草ブロック
        DIRT                     = 3,    // 土
        COBBLESTONE              = 4,    // 丸石
        WOOD_PLANK               = 5,    // オークの木の板
        SAPLING                  = 6,    // オークの苗木
        BEDROCK                  = 7,    // 岩盤
        DIRTY_WATER              = 8,    // 汚れた水
        WATER                    = 9,    // 水
        DIRTY_LAVA               = 10,   // 汚れた溶岩
        LAVA                     = 11,   // 溶岩
        SAND                     = 12,   // 砂
        GRAVEL                   = 13,   // 砂利
        ORE                      = 14,   // 金鉱石
        WOOD                     = 17,   // オークの原木
        LEAVES                   = 18,   // オークの葉
        SPONGE                   = 19,   // スポンジ
        GLASS                    = 20,   // ガラス
        LAZULI_ORE               = 21,   // ラピスラズリ鉱石
        LAZULI_BLOCK             = 22,   // ラピスラズリブロック
        DISPENSER                = 23,   // ディスペンサー
        SANDSTONE                = 24,   // 砂岩
        BLOCK                    = 25,   // 音ブロック
        TEXTURE_BED              = 26,   // チェスト型ベッド
        RAIL                     = 27,   // パワードレール
        PISTON                   = 29,   // 粘着ピストン
        COBWEB                   = 30,   // クモの巣
        SHRUB                    = 31,   // 低木
        FERN                     = 31,   // シダ
        BUSH                     = 32,   // 枯れ木
        HEAD                     = 34,   // ピストンヘッド
        WOOL                     = 35,   // 白の羊毛
        DANDELION                = 37,   // タンポポ
        POPPY                    = 38,   // ポピー
        MUSHROOM                 = 39,   // 茶色のきのこ
        STONE_SLAB               = 43,   // 重ねた石のハーフブロック
        SLAB                     = 44,   // 石のハーフブロック
        BRICKS                   = 45,   // レンガ
        TNT                      = 46,   // TNT
        BOOKSHELF                = 47,   // 本棚
        MOSSY_COBBLESTONE        = 48,   // コケ石
        OBSIDIAN                 = 49,   // 黒曜石
        TORCH                    = 50,   // 松明
        FIRE                     = 51,   // 火
        SPAWNER                  = 52,   // スポナー
        WOOD_STAIRS              = 53,   // オークの木の階段
        CHEST                    = 54,   // チェスト
        WIRE                     = 55,   // レッドストーン
        TABLE                    = 58,   // 作業台
        CROPS                    = 59,   // 小麦
        FARMLAND                 = 60,   // 農地
        FURNACE                  = 61,   // かまど
        SIGN_BLOCK               = 63,   // 立った看板
        DOOR_BLOCK               = 64,   // オークのドア
        LADDER                   = 65,   // はしご
        STAIRS                   = 67,   // 丸石の階段
        LEVER                    = 69,   // レバー
        PRESSURE_PLATE           = 70,   // 石の感圧版
        REDSTONE_ORE             = 74,   // 光るレッドストーン鉱石
        TORCH__OFF_              = 75,   // レッドストーンのたいまつ(オフ)
        TORCH__ON_               = 76,   // レッドストーンのたいまつ
        BUTTON                   = 77,   // 石のボタン
        SNOW                     = 78,   // 雪
        ICE                      = 79,   // 氷
        CACTUS                   = 81,   // サボテン
        CLAY                     = 82,   // 粘土
        CANES                    = 83,   // サトウキビ
        JUKEBOX                  = 84,   // ジュークボックス
        FENCE                    = 85,   // オークのフェンス
        PUMPKIN                  = 1025, // かぼちゃ
        HOLLOWED_OUT_PUMPKIN     = 86,   // くりぬいたかぼちゃ
        NETHERRACK               = 87,   // ネザーラック
        GLOWSTONE                = 89,   // グロウストーン
        PORTAL                   = 90,   // ネザーポータル
        O_LANTERN                = 91,   // ジャックオランタン
        REPEATER_BLOCK__OFF_     = 93,   // レッドストーンリーピーター(オフ)
        REPEATER_BLOCK__ON_      = 94,   // レッドストーンリーピーター(オン)
        STAINED_GLASS            = 95,   // 白のステンドグラス
        TRAPDOOR                 = 96,   // オークの木のトラップドア
        MONSTER_EGG              = 97,   // シルバーフィッシュ入りの石
        STONE_BRICKS             = 98,   // 苔石レンガ
        MUSHROOM_BLOCK           = 99,   // キノコ
        BARS                     = 101,  // 鉄インゴット
        PANE                     = 102,  // ガラス板
        STEM                     = 104,  // かぼちゃの茎
        VINES                    = 106,  // つた
        FENCE_GATE               = 107,  // オークのフェンスゲート
        BRICK_STAIRS             = 109,  // 石レンガの階段
        MYCELIUM                 = 110,  // 菌糸ブロック
        PAD                      = 111,  // ハスの葉
        BRICK                    = 112,  // ネザーレンガ
        BRICK_FENCE              = 113,  // ネザーレンガフェンス
        WART                     = 115,  // ネザーウォート
        STAND                    = 117,  // 醸造台
        CAULDRON                 = 118,  // 大釜
        PORTAL_FRAME             = 120,  // エンドポータルフレーム
        EGG                      = 122,  // ドラゴンエッグ
        LAMP__INACTIVE_          = 123,  // レッドストーンランプ
        LAMP__ACTIVE_            = 124,  // 光っているレッドストーンランプ
        OAK_WOOD_SLAB            = 125,  // 重ねた木のハーフブロック
        WOOD_SLAB                = 126,  // オークのハーフブロック
        COCOA                    = 127,  // ココア
        HOOK                     = 131,  // トリップワイヤーフック
        TRIPWIRE                 = 132,  // トリップワイヤー
        BEACON                   = 138,  // ビーコン
        WALL                     = 139,  // 丸石の壁
        POT                      = 140,  // 花瓶
        CARROTS                  = 141,  // 人参
        POTATOES                 = 142,  // じゃがいも
        ANVIL                    = 145,  // 金床
        PRESSURE_PLATE__LIGHT_   = 147,  // 鉄の重力感圧版
        PRESSURE_PLATE__HEAVY_   = 148,  // 金の重力感圧版
        COMPARATOR__INACTIVE_    = 149,  // 消えたレッドストーンコンパレーター
        COMPARATOR__ACTIVE_      = 150,  // ついているレッドストーンコンパレーター
        SENSOR                   = 151,  // 日照センサー
        QUARTZ_ORE               = 153,  // ネザークォーツ鉱石
        HOPPER                   = 154,  // ホッパー
        QUARTZ_BLOCK             = 155,  // 模様入りネザークォーツ
        DROPPER                  = 158,  // ドロッパー
        HARDENED_CLAY            = 159,  // 白の堅焼き粘土
        STAINED_GLASS_PANE       = 160,  // 白のステンドグラス板
        OAK_LEAVES               = 161,  // ダークオークの葉
        OAK_WOOD                 = 162,  // ダークオークの原木
        OAK_WOOD_STAIRS          = 164,  // ダークオークの階段
        BARRIER                  = 166,  // バリアブロック
        PRISMARINE               = 168,  // プリズマリンブロック
        LANTERN                  = 169,  // シーランタン
        BALE                     = 170,  // 干し草の俵
        CARPET                   = 171,  // 白のカーペット
        OF_COAL                  = 173,  // 石炭ブロック
        SUNFLOWER                = 175,  // ひまわり
        LILAC                    = 175,  // ライラック
        TALLGRASS                = 175,  // ダブルトールグラス
        PEONY                    = 175,  // ボタン
        BANNER                   = 176,  // 旗
        DAYLIGHT_SENSOR          = 178,  // 日照センサー(夜)
        RED_SANDSTONE            = 179,  // 模様入り赤砂岩
        SANDSTONE_STAIRS         = 180,  // 赤砂岩の階段
        RED_SANDSTONE_SLAB       = 181,  // 重ねた赤砂岩のハーフブロック
        OAK_FENCE_GATE           = 186,  // ダークオークのフェンスゲート
        OAK_FENCE                = 191,  // ダークオークのフェンスゲート
        OAK_DOOR_BLOCK           = 197,  // ダークオークのドア
        ROD                      = 198,  // エンドロッド
        PLANT                    = 199,  // コーラスプラント
        FLOWER                   = 200,  // コーラスフラワー
        PILLAR                   = 202,  // プルプァの柱
        DOUBLE_SLAB              = 204,  // 重ねたプルプァのハーフブロック
        PATH                     = 208,  // 草の道
        GATEWAY                  = 209,  // エンドゲートウェイ
        WART_BLOCK               = 214,  // ネザーウォート
        NETHER_BRICK             = 215,  // 赤いネザーレンガ
        OBSERVER                 = 218,  // オブザーバー
        WHITE_SHULKER_BOX        = 219,  // 白のシュルカーボックス
        ORANGE_SHULKER_BOX       = 220,  // オレンジ色のシュルカーボックス
        MAGENTA_SHULKER_BOX      = 221,  // 赤紫色のシュルカーボックス
        LIGHT_BLUE_SHULKER_BOX   = 222,  // 空色のシュルカーボックス
        YELLOW_SHULKER_BOX       = 223,  // 黄色のシュルカーボックス
        LIME_SHULKER_BOX         = 224,  // 黄緑色のシュルカーボックス
        PINK_SHULKER_BOX         = 225,  // ピンク色のシュルカーボックス
        GRAY_SHULKER_BOX         = 226,  // 灰色のシュルカーボックス
        LIGHT_GRAY_SHULKER_BOX   = 227,  // 薄灰色のシュルカーボックス
        CYAN_SHULKER_BOX         = 228,  // 水色のシュルカーボックス
        PURPLE_SHULKER_BOX       = 229,  // 紫色のシュルカーボックス
        BLUE_SHULKER_BOX         = 230,  // 青色のシュルカーボックス
        BROWN_SHULKER_BOX        = 231,  // 茶色のシュルカーボックス
        GREEN_SHULKER_BOX        = 232,  // 緑色のシュルカーボックス
        RED_SHULKER_BOX          = 233,  // 赤色のシュルカーボックス
        BLACK_SHULKER_BOX        = 234,  // 黒色のシュルカーボックス
        WHITE_TERRACOTTA         = 235,  // 白の彩釉テラコッタ
        ORANGE_TERRACOTTA        = 236,  // オレンジ色の彩釉テラコッタ
        MAGENTA_TERRACOTTA       = 237,  // 赤紫色の彩釉テラコッタ
        LIGHT_BLUE_TERRACOTTA    = 238,  // 空色の彩釉テラコッタ
        YELLOW_TERRACOTTA        = 239,  // 黄色の彩釉テラコッタ
        LIME_TERRACOTTA          = 240,  // 黄緑色の彩釉テラコッタ
        PINK_TERRACOTTA          = 241,  // ピンク色の彩釉テラコッタ
        GRAY_TERRACOTTA          = 242,  // 灰色の彩釉テラコッタ
        LIGHT_GRAY_TERRACOTTA    = 243,  // 薄灰色の彩釉テラコッタ
        CYAN_TERRACOTTA          = 244,  // 水色の彩釉テラコッタ
        PURPLE_TERRACOTTA        = 245,  // 紫色の彩釉テラコッタ
        BLUE_TERRACOTTA          = 246,  // 青色の彩釉テラコッタ
        BROWN_TERRACOTTA         = 247,  // 茶色の彩釉テラコッタ
        GREEN_TERRACOTTA         = 248,  // 緑色の彩釉テラコッタ
        RED_TERRACOTTA           = 249,  // 赤色の彩釉テラコッタ
        BLACK_TERRACOTTA         = 250,  // 黒色の彩釉テラコッタ
        CONCRETE                 = 251,  // コンクリート
        CONCRETE_POWDER          = 252,  // コンクリートパウダー
        SHOVEL                   = 256,  // 鉄のシャベル
        PICKAXE                  = 257,  // 鉄のピッケル
        AXE                      = 258,  // 鉄の斧
        AND_STEEL                = 259,  // 火打石と打ちがね
        APPLE                    = 260,  // リンゴ
        BOW                      = 261,  // 弓
        ARROW                    = 262,  // 矢
        COAL                     = 263,  // 石炭
        CHARCOAL                 = 263,  // 木炭
        DIAMOND                  = 264,  // ダイヤモンド
        IRON_INGOT               = 265,  // 鉄インゴット
        IRON_SWORD               = 267,  // 鉄の剣
        STICK                    = 280,  // 棒
        BOWL                     = 281,  // ボウル
        STEW                     = 282,  // キノコシチュー
        STRING                   = 287,  // 糸
        FEATHER                  = 288,  // 羽
        GUNPOWDER                = 289,  // 火薬
        HOE                      = 290,  // 木のくわ
        SEEDS                    = 295,  // 種
        WHEAT                    = 296,  // 小麦
        BREAD                    = 297,  // パン
        HELMET                   = 298,  // 革のヘルメット
        TUNIC                    = 299,  // 革の服
        PANTS                    = 300,  // 革のパンツ
        BOOTS                    = 301,  // 革のブーツ
        IRON_HELMET              = 302,  // チェーンヘルメット
        IRON_TUNIC               = 303,  // チェーンチェストプレート
        IRON_PANTS               = 304,  // チェーンレギンス
        IRON_BOOTS               = 305,  // チェーンブーツ
        FLINT                    = 318,  // 打ちがね
        PORKCHOP                 = 319,  // 生の豚肉
        PAINTING                 = 321,  // 絵画
        GOLDEN_APPLE             = 322,  // 上位金リンゴ
        SIGN                     = 323,  // 看板
        DOOR                     = 324,  // オークのドア
        BUCKET                   = 325,  // バケツ
        MINECART                 = 328,  // トロッコ
        SADDLE                   = 329,  // サドル
        REDSTONE                 = 331,  // レッドストーン
        SNOWBALL                 = 332,  // 雪玉
        BOAT                     = 333,  // オークのボート
        LEATHER                  = 334,  // 革
        PAPER                    = 339,  // 紙
        BOOK                     = 340,  // 本
        SLIMEBALL                = 341,  // スライムボール
        WITH_CHEST               = 342,  // チェスト付きトロッコ
        WITH_FURNACE             = 343,  // かまど付きトロッコ
        COMPASS                  = 345,  // コンパス
        CLOCK                    = 347,  // 時計
        DUST                     = 348,  // グロウストーンダスト
        FISH                     = 349,  // 生のタラ
        SALMON                   = 349,  // 生の鮭
        CLOWNFISH                = 349,  // 熱帯魚
        PUFFERFISH               = 349,  // ふぐ
        SACK                     = 351,  // イカスミ
        BONE                     = 352,  // 骨
        SUGAR                    = 353,  // 砂糖
        CAKE                     = 354,  // ケーキ
        BED                      = 355,  // ベッド
        REPEATER                 = 356,  // レッドストーンリピーター
        COOKIE                   = 357,  // クッキー
        MAP                      = 358,  // 地図
        SHEARS                   = 359,  // はさみ
        MELON                    = 360,  // スイカ
        BEEF                     = 363,  // 生の牛肉
        STEAK                    = 364,  // ステーキ
        CHICKEN                  = 365,  // 生の鶏肉
        FLESH                    = 367,  // 腐肉
        PEARL                    = 368,  // エンダーパール
        TEAR                     = 370,  // ガストの涙
        NUGGET                   = 371,  // 金塊
        POTION                   = 373,  // ポーション
        BOTTLE                   = 374,  // ガラス瓶
        EYE                      = 375,  // クモの目
        SPIDER_EYE               = 376,  // 発酵したクモの目
        POWDER                   = 377,  // ブレイズパウダー
        CREAM                    = 378,  // マグマクリーム
        OF_ENDER                 = 381,  // エンダーアイ
        O__ENCHANTING            = 384,  // エンチャントの瓶
        CHARGE                   = 385,  // 発火剤
        AND_QUILL                = 386,  // 本と羽ペン
        EMERALD                  = 388,  // エメラルド
        FRAME                    = 389,  // 額縁
        CARROT                   = 391,  // にんじん
        POTATO                   = 392,  // じゃがいも
        HEAD__SKELETON_          = 397,  // スケルトンヘッド
        ON_A_STICK               = 398,  // 人参付きの棒
        STAR                     = 399,  // ネザースター
        PIE                      = 400,  // パンプキンパイ
        ROCKET                   = 401,  // 花火
        COMPARATOR               = 404,  // レッドストーンコンパレーター
        QUARTZ                   = 406,  // ネザークオーツ
        TNT_TRUCK                = 407,  // TNTトロッコ
        WITH_HOPPER              = 408,  // ホッパー付きトロッコ
        SHARD                    = 409,  // プリズマリンのかけら
        CRYSTALS                 = 410,  // プリズマリンクリスタル
        RABBIT                   = 411,  // 生の兎肉
        FOOT                     = 414,  // ウサギの足
        HIDE                     = 415,  // ウサギの皮
        HORSE_ARMOR              = 417,  // 鉄の馬鎧
        LEAD                     = 420,  // リード
        TAG                      = 421,  // 名札
        WITH_COMMAND_BLOCK       = 422,  // コマンドブロック付きトロッコ
        MUTTON                   = 423,  // 生の羊肉
        CRYSTAL                  = 426,  // エンドクリスタル
        OAK_DOOR                 = 431,  // ダークオークのドア
        FRUIT                    = 432,  // コーラスフルーツ
        CHORUS_FRUIT             = 433,  // 焼いたコーラスフルーツ
        BEETROOT                 = 434,  // ビートルート
        SOUP                     = 436,  // ビートルートスープ
        BREATH                   = 437,  // ドラゴンブレス
        ELYTRA                   = 443,  // エリトラ
        OAK_BOAT                 = 448,  // ダークオークのボート
        OF_UNDYING               = 449,  // 不死のトーテム
        SHELL                    = 450,  // シュルカーの殻
        DISC_13                  = 2256, // ディスク13
        DISC_CAT                 = 2257, // ディスクネコ
        DISC_BLOCKS              = 2258, // ディスクブロック
        DISC_CHIRP               = 2259, // ディスクさえずり
        DISC_FAR                 = 2260, // ディスク彼方へ
        DISC_MALL                = 2261, // ディスク散歩
        DISC_MELLOHI             = 2262, // ディスクメロヒー
        DISC_STAL                = 2263, // ディスクスタル
        DISC_STRAD               = 2264, // ディスクストラド
        DISC_WARD                = 2265, // ディスク区切り
        DISC_11                  = 2266, // ディスク11
        DISC_WAIT                = 2267, // ディスクウェイト
        KELP_BLOCK               = 1037, // 乾燥昆布ブロック
        STRIPPED_LOG_OAK         = 1068, // 皮をはがしたオークの木
        STRIPPED_LOG_SPRUCE      = 1063, // 皮をはがしたマツの木
        STRIPPED_LOG_BIRCH       = 1064, // 皮をはがしたシラカバの木
        STRIPPED_LOG_JUNGLE      = 1065, // 皮をはがしたジャングルの木
        STRIPPED_LOG_ACACIA      = 1066, // 皮をはがしたアカシアの木
        STRIPPED_LOG_DARK_OAK    = 1067, // 皮をはがしたダークオークの木
        BLUE_ICE                 = 1041, // 青の氷
        SPRUCE_TRAPDOOR          = 1042, // マツのトラップドア
        BIRCH_TRAPDOOR           = 1043, // シラカバのトラップドア
        JUNGLE_TRAPDOOR          = 1044, // ジャングルのトラップドア
        ACACIA_TRAPDOOR          = 1045, // アカシアのトラップドア
        DARK_OAK_TRAPDOOR        = 1046, // ダークオークのトラップドア
        PRISMARINE_SLAB          = 1080, // プリズマリンのハーフブロック
        PRISMARINE_DOUBLE_SLAB   = 1079, // 重ねたプリズマリンのハーフブロック
        PRISMARINE_STAIRS        = 1059, // プリズマリンの階段
        PRISMARINE_BRICKS_STAIRS = 1060, // プリズマリンレンガの階段
        DARK_PRISMARINE_STAIRS   = 1061, // ダークプリズマリンの階段
        COMMAND_BLOCK            = 137,  // コマンドブロック
        REPEATING_COMMAND_BLOCK  = 210,  // リピートコマンドブロック
        CHAIN_COMMAND_BLOCK      = 211,  // チェーンコマンドブロック
        SEA_PICKLE               = 1039, // ナマコ
        KELP                     = 457,  // 昆布
        CORAL                    = 1031, // クダサンゴ
        CORAL_FAN                = 1032, // 扇形のクダサンゴ
        CORAL_FAN_DEAD           = 1033, // 枯れた扇形のクダサンゴ
        CORAL_BLOCK              = 1027, // クダサンゴブロック
        SPRUCE_BUTTON            = 1078, // マツのボタン
        BIRCH_BUTTON             = 1075, // シラカバのボタン
        JUNGLE_BUTTON            = 1077, // ジャングルのボタン
        ACACIA_BUTTON            = 1074, // アカシアのボタン
        DARK_OAK_BUTTON          = 1076, // ダークオークのボタン
        SPRUCE_PRESSURE_PLATE    = 1073, // マツの重力感知版
        BIRCH_PRESSURE_PLATE     = 1070, // シラカバの重力感知版
        JUNGLE_PRESSURE_PLATE    = 1071, // ジャングルの重力感知版
        ACACIA_PRESSURE_PLATE    = 1072, // アカシアの重力感知版
        DARK_OAK_PRESSURE_PLATE  = 1073, // ダークオークの重力感知版
        BARK_OAK                 = 1076, // オークの樹幹ブロック
        BARK_SPRUCE              = 1071, // マツの樹幹ブロック
        BARK_BIRCH               = 1072, // シラカバの樹幹ブロック
        BARK_JUNGLE              = 1073, // ジャングルの樹幹ブロック
        BARK_ACACIA              = 1074, // アカシアの樹幹ブロック
        BARK_DARK_OAK            = 1075, // ダークオークの樹幹ブロック
        DEBUG_FOURJ_ITEM         = 2255, // 偽バリアブロック
        SEA_GRASS                = 1038, // 海草
        NAUTILUS                 = 464,  // オウムガイの殻
        NAUTILUS_CORE            = 464,  // 海の中心
        TURTLE_SHELL_PIECE       = 455,  // カメの甲羅のかけら
        DRIED_KELP               = 458,  // 乾燥昆布
        TURTLE_HELMET            = 456,  // 亀の甲羅
        LEATHER_HORSE_ARMOR      = 453,  // 革の馬鎧
        FISH_BUCKET              = 459,  // タラ入りバケツ
        SALMON_BUCKET            = 463,  // サケ入りバケツ
        PUFFER_BUCKET            = 461,  // ふぐ入りバケツ
        TROPICAL_BUCKET          = 462,  // 熱帯魚入りバケツ
        TURTLE_EGG               = 1047, // ウミガメの卵
        PHANTOM_MEMBRANE         = 470,  // ファントムの皮膜
        CONDUIT                  = 412,  // コンジット
        TRIDENT                  = 454,  // トライデント
        FULL_BARK_OAK            = 1086, // 全面オークの木
        FULL_BARK_SPRUCE         = 1081, // 全面マツの木
        FULL_BARK_BIRCH          = 1082, // 全面シラカバの木
        FULL_BARK_JUNGLE         = 1083, // 全面ジャングルの木
        FULL_BARK_ACACIA         = 1084, // 全面アカシアの木
        FULL_BARK_DARK_OAK       = 1085, // 全面ダークオークの木
        LIT_FURNACE              = 62,   // 焼きかまど
    };

    enum class stoneDamageId : int
    {
        Stone            = 0, // 石
        Granite          = 1, // 花崗岩
        PolishedGranite  = 2, // 磨かれた花崗岩
        Diorite          = 3, // 閃緑岩
        PolishedDiorite  = 4, // 磨かれた閃緑岩
        Andesite         = 5, // 安山岩
        PolishedAndesite = 6, // 磨かれた安山岩
    };

    enum class dirtDamageId : int
    {
        Dirt   = 0, // 土
        Coarse = 1, // 荒れた土
        Podzol = 2, // ポドゾル
    };

    enum class planksDamageId : int
    {
        Oak    = 0, // オークの木の板
        Spruce = 1, // 松の木の板
        Birch  = 2, // シラカバの木の板
        Jungle = 3, // ジャングルの木の板
        Acacia = 4, // アカシアの木の板
        Dark   = 5, // ダークオークの木の板
    };

    enum class saplingDamageId : int
    {
        Oak    = 0, // オークの苗木
        Spruce = 1, // 松の苗木
        Birch  = 2, // シラカバの苗木
        Jungle = 3, // ジャングルの苗木
        Acacia = 4, // アカシアの苗木
        Dark   = 5, // ダークオークの苗木
    };

    enum class sandDamageId : int
    {
        Sand = 0, // 砂
        Red  = 1, // 赤砂
    };

    enum class logDamageId : int
    {
        Oak    = 0, // オークの原木
        Spruce = 1, // 松の原木
        Birch  = 2, // シラカバの原木
        Jungle = 3, // ジャングルの原木
    };

    enum class leavesDamageId : int
    {
        Oak    = 0, // オークの葉
        Spruce = 1, // 松の葉
        Birch  = 2, // シラカバの葉
        Jungle = 3, // ジャングルの葉
    };

    enum class spongeDamageId : int
    {
        Sponge = 0, // スポンジ
        Wet    = 1, // 濡れたスポンジ
    };

    enum class sandstoneDamageId : int
    {
        Sandstone = 0, // 砂岩
        Chiseled  = 1, // 模様入り砂岩
        Smooth    = 2, // なめらかな砂岩
    };

    enum class tallgrassDamageId : int
    {
        Dead  = 0, // 低木
        Grass = 1, // 背の高い草
        Fern  = 2, // シダ
    };

    enum class woolDamageId : int
    {
        White     = 0,  // 白の羊毛
        Orange    = 1,  // オレンジの羊毛
        Magenta   = 2,  // 赤紫の羊毛
        LightBlue = 3,  // 水色の羊毛
        Yellow    = 4,  // 黄色の羊毛
        Lime      = 5,  // 黄緑の羊毛
        Pink      = 6,  // ピンクの羊毛
        Gray      = 7,  // 灰色の羊毛
        LightGray = 8,  // 薄灰色の羊毛
        Cyan      = 9,  // 空色の羊毛
        Purple    = 10, // 紫の羊毛
        Blue      = 11, // 青色の羊毛
        Brown     = 12, // 茶色の羊毛
        Green     = 13, // 緑色の羊毛
        Red       = 14, // 赤色の羊毛
        Black     = 15, // 黒色の羊毛
    };

    enum class red_flowerDamageId : int
    {
        Poppy  = 0, // ポピー
        Blue   = 1, // ヒスイラン
        Allium = 2, // アリウム
        Azure  = 3, // ヒナソウ
        Red    = 4, // 赤いチューリップ
        Orange = 5, // オレンジのチューリップ
        White  = 6, // 白のチューリップ
        Pink   = 7, // ピンクのチューリップ
        Oxeye  = 8, // フランスギク
    };

    enum class double_stone_slabDamageId : int
    {
        Stone       = 0, // 重ねた石のハーフブロック
        Sandstone   = 1, // 重ねた砂岩のハーフブロック
        Wooden      = 2, // 重ねた木のハーフブロック
        Cobblestone = 3, // 重ねた丸石のハーフブロック
        Brick       = 4, // 重ねたレンガのハーフブロック
        StoneBrick  = 5, // 重ねた石レンガのハーフブロック
        Nether      = 6, // 重ねたネザーレンガのハーフブロック
        Quartz      = 7, // 重ねたクォーツのハーフブロック
    };

    enum class stone_slabDamageId : int
    {
        Stone       = 0, // 石のハーフブロック
        Sandstone   = 1, // 砂岩のハーフブロック
        Wooden      = 2, // 木のハーフブロック
        Cobblestone = 3, // 丸石のハーフブロック
        Brick       = 4, // レンガのハーフブロック
        StoneBrick  = 5, // 石レンガのハーフブロック
        Nether      = 6, // ネザーレンガのハーフブロック
        Quartz      = 7, // クォーツのハーフブロック
    };

    enum class stained_glassDamageId : int
    {
        White     = 0,  // 白のステンドグラス
        Orange    = 1,  // オレンジのステンドグラス
        Magenta   = 2,  // 赤紫のステンドグラス
        LightBlue = 3,  // 水色のステンドグラス
        Yellow    = 4,  // 黄色のステンドグラス
        Lime      = 5,  // 黄緑のステンドグラス
        Pink      = 6,  // ピンクのステンドグラス
        Gray      = 7,  // 灰色のステンドグラス
        LightGray = 8,  // 薄灰色のステンドグラス
        Cyan      = 9,  // 空色のステンドグラス
        Purple    = 10, // 紫のステンドグラス
        Blue      = 11, // 青色のステンドグラス
        Brown     = 12, // 茶色のステンドグラス
        Green     = 13, // 緑色のステンドグラス
        Red       = 14, // 赤色のステンドグラス
        Black     = 15, // 黒のステンドグラス
    };

    enum class monster_eggDamageId : int
    {
        Stone       = 0, // シルバーフィッシュ入りの石
        Cobblestone = 1, // シルバーフィッシュ入りの丸石
        StoneBrick  = 2, // シルバーフィッシュ入りの石レンガ
        Mossy       = 3, // シルバーフィッシュ入りの苔石レンガ
        Cracked     = 4, // シルバーフィッシュ入りのひび割れた石レンガ
        Chiseled    = 5, // シルバーフィッシュ入りの模様入りレンガ
    };

    enum class stonebrickDamageId : int
    {
        Stone    = 0, // 石レンガ
        Mossy    = 1, // 苔石レンガ
        Cracked  = 2, // ひび割れた石レンガ
        Chiseled = 3, // 模様入り石レンガ
    };

    enum class double_wooden_slabDamageId : int
    {
        Oak    = 0, // 重ねたオークのハーフブロック
        Spruce = 1, // 重ねたマツのハーフブロック
        Birch  = 2, // 重ねたシラカバのハーフブロック
        Jungle = 3, // 重ねたジャングルのハーフブロック
        Acacia = 4, // 重ねたアカシアのハーフブロック
        Dark   = 5, // 重ねたダークオークのハーフブロック
    };

    enum class wooden_slabDamageId : int
    {
        Oak    = 0, // オークのハーフブロック
        Spruce = 1, // マツのハーフブロック
        Birch  = 2, // シラカバのハーフブロック
        Jungle = 3, // ジャングルのハーフブロック
        Acacia = 4, // アカシアのハーフブロック
        Dark   = 5, // ダークオークのハーフブロック
    };

    enum class cobblestone_wallDamageId : int
    {
        Cobblestone       = 0, // 丸石の壁
        苔の丸石の壁Mossy = 1,
    };

    enum class skullDamageId : int
    {
        Skeleton       = 0, // スケルトンヘッド
        WitherSkeleton = 1, // ウィザースケルトンヘッド
        Zombie         = 2, // ゾンビヘッド
        Steve          = 3, // ヘッド
        Creeper        = 4, // クリーパーヘッド
        EnderDragon    = 5, // ドラゴンヘッド
        BugSkeleton    = 9, // バグスケルトンヘッド
    };

    enum class quartz_blockDamageId : int
    {
        Quartz   = 0, // ネザークォーツブロック
        Chiseled = 1, // 模様入りネザークォーツ
        Pillar   = 2, // ネザークォーツの柱
    };

    enum class stained_hardened_clayDamageId : int
    {
        White     = 0,  // 白の堅焼き粘土
        Orange    = 1,  // オレンジの堅焼き粘土
        Magenta   = 2,  // 赤紫の堅焼き粘土
        LightBlue = 3,  // 水色の堅焼き粘土
        Yellow    = 4,  // 黄色の堅焼き粘土
        Lime      = 5,  // 黄緑の堅焼き粘土
        Pink      = 6,  // ピンクの堅焼き粘土
        Gray      = 7,  // 灰色の堅焼き粘土
        LightGray = 8,  // 薄灰色の堅焼き粘土
        Cyan      = 9,  // 空色の堅焼き粘土
        Purple    = 10, // 紫の堅焼き粘土
        Blue      = 11, // 青の堅焼き粘土
        Brown     = 12, // 茶色の堅焼き粘土
        Green     = 13, // 緑の堅焼き粘土
        Red       = 14, // 赤の堅焼き粘土
        Black     = 15, // 黒の堅焼き粘土
    };

    enum class stained_glass_paneDamageId : int
    {
        White     = 0,  // 白のステンドグラス板
        Orange    = 1,  // オレンジのステンドグラス板
        Magenta   = 2,  // 赤紫のステンドグラス板
        LightBlue = 3,  // 水色のステンドグラス板
        Yellow    = 4,  // 黄色のステンドグラス板
        Lime      = 5,  // 黄緑のステンドグラス板
        Pink      = 6,  // ピンクのステンドグラス板
        Gray      = 7,  // 灰色のステンドグラス板
        LightGray = 8,  // 薄灰色のステンドグラス板
        Cyan      = 9,  // 空色のステンドグラス板
        Purple    = 10, // 紫のステンドグラス板
        Blue      = 11, // 青のステンドグラス板
        Brown     = 12, // 茶色のステンドグラス板
        Green     = 13, // 緑のステンドグラス板
        Red       = 14, // 赤のステンドグラス板
        Black     = 15, // 黒のステンドグラス板
    };

    enum class leaves2DamageId : int
    {
        Acacia = 0, // アカシアの葉
        Dark   = 1, // ダークオークの葉
    };

    enum class log2DamageId : int
    {
        Acacia = 0, // アカシアの原木
        Dark   = 1, // ダークオークの原木
    };

    enum class prismarineDamageId : int
    {
        Prismarine      = 0, // プリズマリンブロック
        PrismarineBrick = 1, // プリズマリンレンガ
        Dark            = 2, // ダークプリズマリンブロック
    };

    enum class carpetDamageId : int
    {
        White     = 0,  // 白のカーペット
        Orange    = 1,  // オレンジのカーペット
        Magenta   = 2,  // 赤紫のカーペット
        LightBlue = 3,  // 水色のカーペット
        Yellow    = 4,  // 黄色のカーペット
        Lime      = 5,  // 黄緑のカーペット
        Pink      = 6,  // ピンクのカーペット
        Gray      = 7,  // 灰色のカーペット
        LightGray = 8,  // 薄灰色のカーペット
        Cyan      = 9,  // 空色のカーペット
        Purple    = 10, // 紫のカーペット
        Blue      = 11, // 青のカーペット
        Brown     = 12, // 茶色のカーペット
        Green     = 13, // 緑のカーペット
        Red       = 14, // 赤のカーペット
        Black     = 15, // 黒のカーペット
    };

    enum class double_plantDamageId : int
    {
        Sunflower = 0, // ひまわり
        Lilac     = 1, // ライラック
        Double    = 2, // ダブルトールグラス
        Large     = 3, // 大きいシダ
        Rose      = 4, // バラの低木
        Peony     = 5, // ボタン
    };

    enum class red_sandstoneDamageId : int
    {
        Red      = 0, // 赤砂岩
        Chiseled = 1, // 模様入り赤砂岩
        Smooth   = 2, // 滑らかな赤砂岩
    };

    enum class concreteDamageId : int
    {
        White     = 0,  // 白のコンクリート
        Orange    = 1,  // オレンジのコンクリート
        Magenta   = 2,  // 赤紫のコンクリート
        LightBlue = 3,  // 水色のコンクリート
        Yellow    = 4,  // 黄色のコンクリート
        Lime      = 5,  // 黄緑のコンクリート
        Pink      = 6,  // ピンクのコンクリート
        Gray      = 7,  // 灰色のコンクリート
        LightGray = 8,  // 薄灰色のコンクリート
        Cyan      = 9,  // 空色のコンクリート
        Purple    = 10, // 紫のコンクリート
        Blue      = 11, // 青のコンクリート
        Brown     = 12, // 茶色のコンクリート
        Green     = 13, // 緑のコンクリート
        Red       = 14, // 赤のコンクリート
        Black     = 15, // 黒のコンクリート
    };

    enum class concrete_powderDamageId : int
    {
        White     = 0,  // 白のコンクリートパウダー
        Orange    = 1,  // オレンジのコンクリートパウダー
        Magenta   = 2,  // 赤紫のコンクリートパウダー
        LightBlue = 3,  // 水色のコンクリートパウダー
        Yellow    = 4,  // 黄色のコンクリートパウダー
        Lime      = 5,  // 黄緑のコンクリートパウダー
        Pink      = 6,  // ピンクのコンクリートパウダー
        Gray      = 7,  // 灰色のコンクリートパウダー
        LightGray = 8,  // 薄灰色のコンクリートパウダー
        Cyan      = 9,  // 空色のコンクリートパウダー
        Purple    = 10, // 紫のコンクリートパウダー
        Blue      = 11, // 青のコンクリートパウダー
        Brown     = 12, // 茶色のコンクリートパウダー
        Green     = 13, // 緑のコンクリートパウダー
        Red       = 14, // 赤のコンクリートパウダー
        Black     = 15, // 黒のコンクリートパウダー
    };

    enum class coalDamageId : int
    {
        Coal     = 0, // 石炭
        Charcoal = 1, // 木炭
    };

    enum class golden_appleDamageId : int
    {
        Golden    = 0, // 金リンゴ
        Enchanted = 1, // 上位金リンゴ
    };

    enum class fishDamageId : int
    {
        Raw        = 0, // 生のタラ
        Salmon     = 1, // 生の鮭
        Clownfish  = 2, // 熱帯魚
        Pufferfish = 3, // ふぐ
    };

    enum class cooked_fishDamageId : int
    {
        Raw    = 0, // 調理したタラ
        Salmon = 1, // 調理したサケ
    };

    enum class dyeDamageId : int
    {
        Ink       = 0,  // イカスミ
        Rose      = 1,  // 赤の染料
        Cactus    = 2,  // 緑の染料
        Coco      = 3,  // ココアビーンズ
        Lapis     = 4,  // ラピスラズリ
        Urple     = 5,  // 紫の染料
        Cyan      = 6,  // 空色の染料
        LightGray = 7,  // 薄灰色の染料
        Gray      = 8,  // 灰色の染料
        Pink      = 9,  // ピンクの染料
        Lime      = 10, // 黄緑の染料
        Dandelion = 11, //黄色の染料
        LightBlue = 12, // 水色の染料
        Magenta   = 13, // 赤紫の染料
        Orange    = 14, // オレンジの染料
        Bone      = 15, // 骨粉
    };

    enum class prismarine_slabDamageId : int
    {
        Prismarine      = 0, // プリズマリンのハーフブロック
        PrismarineBrick = 1, // プリズマリンレンガのハーフブロック
        DarkPrismarine  = 2, // ダークプリズマリンのハーフブロック
    };

    enum class prismarine_double_slabDamageId : int
    {
        PrismarineDouble      = 0, // 重ねたプリズマリンのハーフブロック
        PrismarineDoubleBrick = 1, // 重ねたプリズマリンレンガのハーフブロック
        DarkPrismarineDouble  = 5, // 重ねたダークプリズマリンのハーフブロック
    };

    enum class coralDamageId : int
    {
        Tube   = 0, // クダサンゴ
        Brain  = 1, // 水玉サンゴ
        Bubble = 2, // 脳サンゴ
        Fire   = 3, // 穴サンゴもどき
        Horn   = 4, // 四放サンゴ
    };

    enum class coral_fanDamageId : int
    {
        Tube    = 0, // 扇形のクダサンゴ
        Brain   = 1, // 扇形の水玉サンゴ
        Bubblel = 2, // 扇形の脳サンゴ
        Fire    = 3, // 扇形の穴サンゴもどき
        Horn    = 4, // 扇形の四放サンゴ
    };

    enum class coral_fan_deadDamageId : int
    {
        Tube   = 0, // 枯れた扇形のクダサンゴ
        Brain  = 1, // 枯れた扇形の水玉サンゴ
        Bubble = 2, // 枯れた扇形の脳サンゴ
        Fire   = 3, // 枯れた扇形の穴サンゴもどき
        Horn   = 4, // 枯れた扇形の四放サンゴ
    };

    enum class coral_blockDamageId : int
    {
        Tube       = 0, // クダサンゴブロック
        Brain      = 1, // 水玉サンゴブロック
        Bubble     = 2, // 脳サンゴブロック
        Fire       = 3, // 穴サンゴもどきブロック
        Horn       = 4, // 四放サンゴブロック
        DeadTube   = 0, // 枯れたクダサンゴブロック
        DeadBrain  = 1, // 枯れた水玉サンゴブロック
        DeadBubble = 2, // 枯れた脳サンゴブロック
        DeadFire   = 3, // 枯れた穴サンゴもどきブロック
        DeadHorn   = 4, // 枯れた四放サンゴブロック
    };
} // namespace mc
