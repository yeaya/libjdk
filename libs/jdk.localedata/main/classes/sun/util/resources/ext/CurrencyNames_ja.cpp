#include <sun/util/resources/ext/CurrencyNames_ja.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ja",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ja_MethodInfo_
};

$Object* allocate$CurrencyNames_ja($Class* clazz) {
	return $of($alloc(CurrencyNames_ja));
}

void CurrencyNames_ja::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"アンドラ ペセタ"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"UAE ディルハム"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"アフガニー (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"アフガニー"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"アルバニア レク"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"アルメニア ドラム"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"オランダ領アンティル ギルダー"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"クワンザ"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"アルゼンチン ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"オーストリア シリング"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"オーストラリア ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"アルバ ギルダー"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"アゼルバイジャン マナト (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"アゼルバイジャン マナト"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"ボスニア マルク (BAM)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"バルバドス ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"バングラデシュ タカ"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"ベルギー フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"ブルガリア レフ"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"ブルガリア 新レフ"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"バーレーン ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"ブルンジ フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"バミューダ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"ブルネイ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"ボリビアーノ"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"ボリビア Mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ブラジル レアル"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"バハマ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ブータン ニュルタム"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ボツワナ プラ"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"ベラルーシ ルーブル (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"ベラルーシ ルーブル"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"ベリーズ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"カナダ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"コンゴ フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"スイス フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"チリ ウニダ デ フォメント"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"チリ ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"中国人民元"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"コロンビア ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"コスタリカ コロン"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"セルビアン ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"キューバ 兌換ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"キューバ ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"カーボベルデ エスクード"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"キプロス ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"チェコ コルナ"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"ドイツ マルク"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"ジブチ フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"デンマーク クローネ"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"ドミニカ ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"アルジェリア ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"エストニア クルーン"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"エジプト ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"エリトリア ナクファ"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"スペイン ペセタ"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"エチオピア ブル"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ユーロ"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"フィンランド マルカ"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"フィジー諸島 ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"フォークランド（マルビナス）諸島 ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"フランス フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"英国ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"グルジア ラリ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ガーナ セディ (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ガーナ セディ"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"ジブラルタル ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"ガンビア ダラシ"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"ギニア フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"ギリシャ ドラクマ"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"グアテマラ ケツァル"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"ギニアビサウ ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"ガイアナ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"香港ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"ホンジュラス レンピラ"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"クロアチア クーナ"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"ハイチ グールド"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"ハンガリー フォリント"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"インドネシア ルピア"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"アイリッシュ ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"イスラエル新シェケル"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"インド ルピー"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"イラク ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"イラン リアル"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"アイスランド クローナ"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"イタリア リラ"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"ジャマイカ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"ヨルダン ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"日本円"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"ケニア シリング"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"キルギスタン ソム"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"カンボジア リエル"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"コモロ フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"北朝鮮 ウォン"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"韓国 ウォン"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"クウェート ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"ケイマン諸島 ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"カザフスタン テンゲ"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"ラオス キープ"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"レバノン ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"スリランカ ルピー"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"リベリア ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"レソト ロティ"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"リトアニア リタス"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"ルクセンブルグ フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"ラトビア ラッツ"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"リビア ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"モロッコ ディルハム"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"モルドバ レイ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"マダガスカル アリアリ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"マダガスカル フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"マケドニア デナル"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"ミャンマー チャット"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"モンゴル トグログ"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"マカオ パタカ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"モーリタニア ウギア"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"マルタ リラ"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"モーリシャス ルピー"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"モルディブ諸島 ルフィア"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"マラウィ クワチャ"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"メキシコ ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"メキシコ UDI"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"マレーシア リンギット"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"モザンピーク メティカル"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"モザンビーク メティカル"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"ナミビア ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"ナイジェリア ナイラ"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"ニカラグア コルドバ オロ"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"オランダ ギルダー"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"ノルウェー クローネ"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"ネパール ルピー"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"ニュージーランド ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"オマーン リアル"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"パナマ バルボア"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"ペルー 新ソル"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"パプアニューギニア キナ"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"フィリピン ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"パキスタン ルピー"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"ポーランド ズウォティ"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"ポルトガル エスクード"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"パラグアイ グアラニ"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"カタール リアル"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"ルーマニア 旧レイ"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"ルーマニア レイ"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"ディナール (セルビア)"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"ロシア ルーブル"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"ロシア ルーブル (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ルワンダ フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"サウジ リヤル"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"ソロモン諸島 ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"セイシェル ルピー"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"スーダン ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"スーダン ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"スウェーデン クローナ"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"シンガポール ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"セントヘレナ島 ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"スロベニア トラール"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"スロバキア コルナ"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"シエラレオネ レオン"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"ソマリア シリング"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"スリナム ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"スリナム ギルダー"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"サントメ・プリンシペ ドブラ"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"エルサルバドル コロン"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"シリア ポンド"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"スワジランド リランゲニ"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"タイ バーツ"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"タジキスタン ソモニ"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"トルクメニスタン マナト"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"トルクメニスタン 新マナト"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"チュニジア ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"トンガ パ・アンガ"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"ティモール エスクード"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"トルコ リラ"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"新トルコリラ"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"トリニダードトバゴ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"新台湾ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"タンザニア シリング"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ウクライナ グリブナ"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ウガンダ シリング"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"米ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"米ドル (翌日)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"米ドル (当日)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"ウルグアイ ペソ"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"ウズベキスタン スム"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"ベネズエラ ボリバル"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"ベネズエラ ボリバルフエルテ"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"ベトナム ドン"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"バヌアツ バツ"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"西サモア タラ"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA フラン BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"銀"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"金"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"ヨーロッパ混合単位 (EURCO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"ヨーロッパ通貨単位 (EMU-6)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"ヨーロッパ勘定単位 (EUA-9)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"ヨーロッパ勘定単位 (EUA-17)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"東カリブ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"特別引き出し権"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"フランス金フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"フランス UIC フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"CFA フラン BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"パラジウム"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP フラン"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"プラチナ"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"テスト用通貨コード"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"不明または無効な通貨"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"イエメン リアル"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"ユーゴスラビア スーパー ディナール"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"南アフリカ ランド"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"ザンビア クワチャ"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"ジンバブエ ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"ジンバブエ ドル (2009)"_s)
		})
	});
}

CurrencyNames_ja::CurrencyNames_ja() {
}

$Class* CurrencyNames_ja::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ja, name, initialize, &_CurrencyNames_ja_ClassInfo_, allocate$CurrencyNames_ja);
	return class$;
}

$Class* CurrencyNames_ja::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun