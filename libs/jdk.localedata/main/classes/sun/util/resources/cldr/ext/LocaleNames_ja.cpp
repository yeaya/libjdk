#include <sun/util/resources/cldr/ext/LocaleNames_ja.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ja",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ja_MethodInfo_
};

$Object* allocate$LocaleNames_ja($Class* clazz) {
	return $of($alloc(LocaleNames_ja));
}

void LocaleNames_ja::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ssy, u"サホ語"_s);
	$var($String, metaValue_zbl, u"ブリスシンボル"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"ケルン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"オガム文字"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"ミランダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"記号文字"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"チャワイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"マールワーリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"ラーンナー・タム数字"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"エミリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"メンタワイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"タグバンワ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"絵文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"ニヴァ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"メグレル語"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"チャクマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"古代エジプト語"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ラージャスターン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"パスパ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"テムネ語"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"テソ語"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ラパヌイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"テレーノ語"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"アセンション島"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ラロトンガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"テトゥン語"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"アンドラ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"アラブ首長国連邦"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"フラマン語"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"アフガニスタン"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"アンティグア・バーブーダ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"エチオピア暦"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"ギラキ語"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"アンギラ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"タイムゾーン"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"アルバニア"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"アルメニア"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"テングワール文字"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"アンゴラ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"南極"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"アルゼンチン"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"碑文パルティア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"米領サモア"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"オーストリア"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"オーストラリア"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"アルバ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"アメリカ英語"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"オーランド諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"ミエネ語"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"アゼルバイジャン"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"東アルメニア文語"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ボスニア・ヘルツェゴビナ"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"バルバドス"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"セブアノ語"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"バングラデシュ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"クムク語"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ベルギー"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"中高ドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ブルキナファソ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ブルガリア"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"バーレーン"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ブルンジ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ベナン"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"サン・バルテルミー"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"バミューダ"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"クテナイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"エルジャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ブルネイ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ボリビア"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"オランダ領カリブ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ブラジル"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"バハマ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ソガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ブータン"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ブーベ島"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ボツワナ"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ベラルーシ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ベリーズ"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"視話法"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ペルシア暦"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ヘブライ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"カナダ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ココス(キーリング)諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"マーザンダラーン語"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"コンゴ民主共和国(キンシャサ)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"中央アフリカ共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"コンゴ共和国(ブラザビル)"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"スイス"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"コートジボワール"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"クック諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"チリ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"カイティ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"カメルーン"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"中国"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"コロンビア"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"クリッパートン島"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"コスタリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"キューバ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"カーボベルデ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"キュラソー"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"クリスマス島"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"キプロス"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"バリ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"チェコ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"エカジュク語"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of(u"パウ・チン・ハウ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"西フラマン語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"古典ヴォラピュク語"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ドイツ"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"古高ドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"アチェ語"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"チガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ディエゴガルシア島"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"ゴア・コンカニ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"デーバナーガリー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ジブチ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"デンマーク"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"アチョリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"ゴーンディー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ブライユ点字"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ブラーフミー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ドミニカ国"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"アルメニア数字(小文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ドミニカ共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ゴロンタロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"ゴート語"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"マインフランク語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"メイテイ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ズニ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ティグレ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"タークリー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"アルジェリア"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"パンガシナン語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"半角"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"パフラヴィー語"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"セウタ・メリリャ"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"チブチャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"パンパンガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"エクアドル"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"パピアメント語"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"アダングメ語"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"エストニア"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"ティブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"エジプト"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"西サハラ"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"チャガタイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"パラオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"チューク語"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"チヌーク混成語"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"マリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"チペワイアン語"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"チョクトー語"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"チェロキー語"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"エリトリア"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"スペイン"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"エチオピア"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"欧州連合"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"エラム語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"西暦(グレゴリオ暦)"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ユーロ圏"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"シャイアン語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"グジャラート数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"インダス文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"アディゲ語"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"チュニジア・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"フィンランド"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"フィジー"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"フォークランド諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ミクロネシア連邦"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"ロケールのバリアント"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"フェロー諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"タミル文字"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"フランス"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"クペレ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"ピカルディ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"トケラウ語"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"グレボ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"ダインチッツァ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"インド国定暦"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"ロマーニャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"古代ギリシャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ガボン"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"ツァフル語"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ヴォート語"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"イギリス"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ナイジェリア・ピジン語"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"グレナダ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ジョージア"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"仏領ギアナ"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ガーンジー"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ガーナ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"タイ・レ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ジブラルタル"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"アフリヒリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"グリーンランド"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"中英語"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ガンビア"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ギニア"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"グアドループ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"赤道ギニア"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ギリシャ"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"サウスジョージア・サウスサンドウィッチ諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"グアテマラ"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"グアム"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"ペンシルベニア・ドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ギニアビサウ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"トリンギット語"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"クリンゴン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"新タイ・ルー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ガイアナ"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"中央クルド語"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"言語的内容なし"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"女真文字"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"タリシュ語"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"メノナイト低地ドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"中華人民共和国香港特別行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"ヴァイ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ハード島・マクドナルド諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ホンジュラス"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"クロアチア"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"アゲム語"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"スイスドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"イスラム暦(ウンム・アルクラー)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ハイチ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ハンガリー"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"リーフ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"タマシェク語"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"カナリア諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"閩南語"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"インドネシア"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"古代ペルシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"カヤー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"アイルランド"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ナポリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"ンジュカ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ナマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"ソラ・ソンペン数字"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ザザ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"西夏文字"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"イスラエル"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"ナバテア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"マン島"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"インド"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"ヨーロッパ言語文字の並べ替え規則"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"英領インド洋地域"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"イラク"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"イラン"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"アイスランド"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"イタリア"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"数学記号"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"タイ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"ヴォロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"ワユ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"コンピュータ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ベンガル数字"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"プファルツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ジャージー"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"イスラム暦"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ジャマイカ"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"ベンガル文字"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ヨルダン"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of(u"フラフラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"日本"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"後期中世フランス語(〜1606)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"アイヌ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"メンデ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"グシイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"トンガ語(ニアサ)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"カンナダ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"カヤー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"梵字"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"標準ドイツ語 (スイス)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"音声順による並べ替え"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"イングリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"仏暦"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ケニア"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ラテンアメリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"キルギス"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"カンボジア"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"キリバス"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"コモロ"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"セントクリストファー・ネーヴィス"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"カンナダ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"基底文字の種別を継承する結合文字"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"北朝鮮"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"韓国"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"ポラード音声記号"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"クウェート"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"トク・ピシン語"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ケイマン諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"カザフスタン"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"キリル文字"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ラオス"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"レバノン"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"セントルシア"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"フェニキア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"古代教会スラブ語キリル文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"グウィッチン語"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"低地ドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"リヒテンシュタイン"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"スリランカ"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"アッカド語"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"コプト語"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"リベリア"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"中央アラスカ・ユピック語"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"レソト"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"書物用パフラヴィー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"リトアニア"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ルクセンブルク"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ラトビア"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"カタカナ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"ソラング・ソンペング文字"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"リビア"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ラディノ語"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ヴンジョ語"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"アラバマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"ラウキカ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ラフンダー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"マハージャニー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ランギ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ターナ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"モロッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"モナコ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"モルドバ"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"女書"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"モンテネグロ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"サン・マルタン"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ランバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"マダガスカル"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"マーシャル諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"アレウト語"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"タイ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"ヴァイ文字の記数法"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"北マケドニア"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"マリ"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ミャンマー (ビルマ)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"モンゴル"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ネワール語"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"中華人民共和国マカオ特別行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"ゲグ・アルバニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"北マリアナ諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"マルティニーク"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"モーリタニア"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"モントセラト"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"マルタ"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"カピス語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"モーリシャス"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"南アルタイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"モルディブ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"マラウイ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"メキシコ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"和暦"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"マレーシア"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"モザンビーク"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"碑文パフラヴィー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ナミビア"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"サブサハラアフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ユダヤ暦"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"辞書順"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ニューカレドニア"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"ウェード式ローマ字表記法"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"トゥロヨ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"改訂統一コーンウォール語正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ニジェール"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ノーフォーク島"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ナイジェリア"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"タロコ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"詩編用パフラヴィー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ニカラグア"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"パハウ・フモン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"オランダ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ノルウェー"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ネパール"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"ナウル"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"ツァコン語"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ニウエ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"フェニキア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ロンボ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"チムシュ語"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ニュージーランド"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"メロエ文字草書体"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ロマーニー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"メロエ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"クリミア・タタール語"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"古英語"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"オマーン"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"アンギカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"セーシェル・クレオール語"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"古代ペルシア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"パナマ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"イスラム歴(定周期、公民紀元)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"カシューブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"イギリス英語"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ペルー"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"ムスリム・タタール語"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"仏領ポリネシア"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"パプアニューギニア"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"フィリピン"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"パキスタン"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ポーランド"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"エウォンド語"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"サンピエール島・ミクロン島"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ピトケアン諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"プエルトリコ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"パレスチナ自治区"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"バリ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ポルトガル"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"パラオ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ニアス語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ギリシャ数字(小文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"パラグアイ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"トゥンブカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"ヘブライ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"カタール"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"スコットランド標準英語"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"ジャマイカ・クレオール語"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"ピエモンテ語"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ニウーエイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"オセアニア周辺地域"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"エストレマドゥーラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"レズギ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"ウラル音声記号"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"タークリー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"ツバル語"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"タイ・ヴェト文字"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"世界"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"アオ・ナガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"北アメリカ大陸"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"レユニオン"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"南アメリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"リングア・フランカ・ノバ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ロジバン語"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"ポントス・ギリシャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"ルジャン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"オセアニア"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"スルシルヴァン"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ルーマニア"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"セルビア"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"ムロ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ロシア"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ルワンダ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"新タイ・ルー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"メテルチッツァ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"マニ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ウガリット文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"カローシュティー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"サウジアラビア"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ポンペイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"マンダ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ソロモン諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"タサワク語"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"西アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"セーシェル"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"スーダン"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"中央アメリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"スウェーデン"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"東アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"アラム語"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"ロマ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"北アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"シンガポール"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"セントヘレナ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"禁則処理(強)"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"中部アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"スロベニア"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"南部アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"スバールバル諸島・ヤンマイエン島"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"アメリカ大陸"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"スロバキア"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"バムン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"ウォレアイ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"シエラレオネ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"サンマリノ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"セネガル"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"ソマリア"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"マプチェ語"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"アラパホー語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"伝統的タミル数字"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"スリナム"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"アラオナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"南スーダン"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"サントメ・プリンシペ"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"アルジェリア・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"エルサルバドル"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"ナジュド地方・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"シント・マールテン"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"シリア"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ヤオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"エスワティニ"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"アラワク語"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"エジプト・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"モロッコ・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"ヤップ語"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"ロツマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"トリスタン・ダ・クーニャ"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"アス語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"米慣習単位"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"北アメリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"タークス・カイコス諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ヤンベン語"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"チャド"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"仏領極南諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"アメリカ手話"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"トーゴ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"タイ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"タジキスタン"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"カリブ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"トケラウ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"東ティモール"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"イエンバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"ハングル語頭子音による並べ替え"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"トルクメニスタン"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"ブーントリング"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"チュニジア"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"トンガ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"現代ヴォラピュク語"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"トルコ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"トリニダード・トバゴ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"ツバル"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"台湾"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"アストゥリアス語"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"ルシン語"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"ロヴィアナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"オルホン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"タンザニア"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"クワシオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"不明な文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"クダワディ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ウクライナ"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"リグリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"アルーマニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"東アジア"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"トゥヴァ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"コンゴ・スワヒリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"南アジア"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ハイダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"東南アジア"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ウガンダ"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"客家語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"ピンイン順"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"南ヨーロッパ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"シンハラ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"合衆国領有小離島"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"リヴォニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"国際連合"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"アメリカ合衆国"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ハワイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"標準ベラルーシ語 (1959)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"簡体字中国語順(GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ウルグアイ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"プロシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ウズベキスタン"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"中央アトラス・タマジクト語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"画数順"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ンジエムブーン語"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"バチカン市国"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"古期プロバンス語"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"セントビンセント及びグレナディーン諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ベネズエラ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"英領ヴァージン諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"米領ヴァージン諸島"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ベトナム"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"バヌアツ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ノガイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ルワ語"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"古ノルド語"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"オーストララシア"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"西アルメニア文語"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"メラネシア"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ウォリス・フツナ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"トラディッショナル"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"ミクロネシア"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ンゴンバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ラコタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of(u"ノヴィアル"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"財務用漢数字"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of(u"コタヴァ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"ヘボン式ローマ字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"以前の順序（互換性）"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ヴァリス語"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"サモア"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"バサ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"マニプリ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ウォライタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"ワショ語"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"疑似アクセント"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ワライ語"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"疑似 BIDI"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"アワディー語"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ポリネシア"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"標準コーンウォール語正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"コソボ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"ブラーフミー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"グジャラート文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"非表記"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"オルチキ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ワルピリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"バタク文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"イエメン"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"ンコ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"標準並べ替え順序"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"ロンバルド語"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ファング語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"レシア方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"ストシルヴァン"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ファンティー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"手話文字"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"マヨット"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"チャム数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"南アフリカ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"スンダ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"禁則処理(弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"デーバナーガリー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ジョージア数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"注音順"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ひらがな"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ザンビア"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"ピン音(ローマ字表記法)"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ジンバブエ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"不明な地域"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"ルーン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"メートル法"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"モンゴ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"北部ソト語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"テルグ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"ルイジアナ・クレオール語"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ロジ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"ナシ族ゲバ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"マチャメ語"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"フィジー・ヒンディー語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"簡体大字"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ヒリガイノン語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"ペルシア数字"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ヌエル語"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ダコタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"全角数字"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ヒッタイト語"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ダルグワ語"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"タイタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"マヤ象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"北ロル語"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"コプト文字"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"古典ネワール語"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ウドムルト語"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"クメール文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"イスラム暦(サウジアラビア、月観測)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"リンブ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"サンダウェ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ローマ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"サハ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"シャーラダー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"ラトガリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"サマリア・アラム語"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"カフカス・アルバニア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"リバプール方言"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"サンブル語"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"ササク語"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"サンターリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"ティフナグ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ユダヤ・ペルシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"サウラーシュトラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"独自の記数法"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ンガムバイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"グルムキー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"アロコ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ルバ・ルルア語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"ビスカヤ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"全角"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"サング語"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"ルイセーニョ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ニャンコレ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ニャムウェジ語"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ルンダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ニョロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ルオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"フィリピノ語"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"フモン語"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"デラウェア語"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ミゾ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"バルーチー語"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"スレイビー語"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"バリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ウガリト語"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"トルネダール・フィンランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ルヒヤ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"バイエルン・オーストリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"バサ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"バムン語"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ユダヤ・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"スペイン語 (イベリア半島)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ンゼマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"スコットランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"シチリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"アファル語"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"アブハズ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"ナスタアリーク体"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"トバ・バタク語"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"アヴェスタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"アフリカーンス語"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"アカン語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"チャクマ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"ゴーマラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"アムハラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"アラゴン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"アラビア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"ストルヴィッツァ/ソルビツァ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"日本語の文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"仮名"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"アッサム語"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"サッサリ・サルデーニャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"線文字A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"アヴァル語"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"線文字B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"南部クルド語"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"アイマラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"アゼルバイジャン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"ホジャ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"オゼアッコ/オソヤネ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"バシキール語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"部首順"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ベラルーシ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ブルガリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ビスラマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"ジャワ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"バンバラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ベンガル語"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"チベット語"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ドグリブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ブルトン語"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ボスニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"セネカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ミャンマー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of(u"セリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ラオ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"セナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"ンコ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"セリクプ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"カタロニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"コイラボロ・センニ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"チェチェン語"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"チャモロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"改訂版"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"コルシカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"オディア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"クリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"チェコ語"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"教会スラブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"ニェエンガトゥ語"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"チュヴァシ語"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ウェールズ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"エチオピア数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"イ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"デンマーク語"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ポルトガル語 (イベリア半島)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ドイツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"標準通貨フォーマット"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ベジャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ディンカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"ユトランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"ブギス文字"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ベンバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"古アイルランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"モンゴル数字"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ディベヒ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"ベタウィ語"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ゾンカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ベナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"中国暦"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"漢文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"フレイザー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ザルマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"サモギティア語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ギリシャ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"エウェ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"バフット語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"禁則処理(標準)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"モルダビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"ギリシャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"英語"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"エスペラント語"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"バダガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"ラズ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"繁体字中国語順(Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"スペイン語"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"エストニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"漢語注音字母"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"バスク語"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"ブヒッド文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ハングル"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"サマリア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"タシルハイト語"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"高地ソルブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"漢字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"アルスター"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"シャン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ハヌノオ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ペルシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"簡体字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"算用数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"繁体字"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"フラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"チャド・アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"湘語"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"フィンランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"フィジー語"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"フォン語"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"西バローチー語"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"広東語"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"フェロー語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ムブンドゥ語"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"フランス語"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"シダモ語"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"西フリジア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"アイルランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"スコットランド・ゲール語"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ガリシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"グアラニー語"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ボージュプリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"言語不明"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"エチオピア創世紀元暦"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"グジャラート語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"イスラム歴(定周期、天文紀元)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"マン島語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"オスマニア数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ハウサ語"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ヘブライ語"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ヒンディー語"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"フパ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ビコル語"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ビニ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ヒリモツ語"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"クロアチア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ハイチ・クレオール語"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ハンガリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"アルメニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ヘレロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"ケイジャン・フランス語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"国際音声記号"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"インターリングア"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"字母"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"インドネシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"チベット数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"インターリング"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"イボ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"四川イ語"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"中期フランス語"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"イヌピアック語"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"古フランス語"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"アルピタン語"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"イド語"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"東フリジア語"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"バンジャル語"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"北フリジア語"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"アイスランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"イタリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"イヌクティトット語"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"低シレジア語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"ヘグノシュク"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"日本語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"マラヤーラム文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"古代南アラビア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"サラティ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ドーグリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"スラヤール語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"レプチャ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"コム語"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"南サーミ語"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ジャワ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"ショー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"バウッダ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"マドゥラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ルレ・サーミ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"マガヒー語"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"マファ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"マイティリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"イナリ・サーミ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"ジョージア語"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"シクシカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"マカッサル語"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"呉語"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"スコルト・サーミ語"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"マンディンゴ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"コンゴ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"ゴート文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"キクユ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"マサイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"クワニャマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"カザフ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"グリーンランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"クメール語"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"カンナダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"韓国語"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"カヌリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"カシミール語"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"キアス文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"レプチャ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"アヴェスター文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"クルド語"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"コミ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"コーンウォール語"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"キルギス語"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ソニンケ語"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"ラテン語"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ルクセンブルク語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"マラヤーラム数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ガンダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ロンゴロンゴ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"リンブルフ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"チベット文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"リンガラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"フリウリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"ラオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ヤード・ポンド法"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"ラーンナー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"リトアニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ルバ・カタンガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ラトビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"ソグド語"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}、{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"マダガスカル語"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"マーシャル語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ユニコード照合順"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"マオリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"マケドニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"マラヤーラム語"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"モンゴル語"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"マラーティー語"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"マレー語"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"マルタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ミャンマー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"サウラーシュトラ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"アルメニア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"モクシャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"マバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"低地ソルブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"帝国アラム文字"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"ナウル語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"汎用検索"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ノルウェー語(ブークモール)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"北ンデベレ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ネパール語"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ンドンガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"マンダル語"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"オランダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ノルウェー語(ニーノシュク)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ノルウェー語"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"南ンデベレ語"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ナバホ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"カラカルパク語"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ニャンジャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"カチン語"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"カビル語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"ポリトニック"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"オック語"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"カジェ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"カンバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"メンデ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"初期近代英語"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"オジブウェー語"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"メル語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"アルメニア数字"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"オロモ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"カウィ語"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"中央ドゥスン語"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"オディア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"モーディー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"オセット語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LCラテン文字化(1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"ビシュヌプリヤ・マニプリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"カバルド語"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"モーリシャス・クレオール語"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"スリナム語"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"パンジャブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ドゥアラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"セレル語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"レージア方言 リポヴァツ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"カネンブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"パーリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"バフティヤーリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ポーランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"中世オランダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"サウラーシュトラ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ダンギ暦"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"ヴァラダー"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"パシュトゥー語"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ポルトガル語"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"中期アイルランド語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"並べ替え順序"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"ボホリッツ・アルファベット"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"カタブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"マクア・ミート語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"通貨フォーマット"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"ンコ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ブラジ語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"暦法"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"ヤウエル"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"ラオ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"スルミラン"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"メタ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24時間制(0〜23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24時間制(1〜24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"ブラフイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ミャンマー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ケチュア語"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"サポテカ語"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ボド語"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ラーンナー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"マコンデ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"ヴァイディカ"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"ザーターフリジア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"エチオピア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"略称粤拼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12時間制(1〜12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12時間制(0〜11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ロマンシュ語"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ルンディ語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"通貨"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ルーマニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"オディア数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"漢数字(位取り記数法)"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ロシア語"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"アコース語"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"キニアルワンダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"カーボベルデ・クレオール語"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ミクマク語"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"スクマ語"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"オーストラリア英語"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"デュプロワエ式速記"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"サンスクリット語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"統一コーンウォール語正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"サルデーニャ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"スス語"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"シンド語"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"北サーミ語"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"ミナンカバウ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"サンゴ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"セルボ・クロアチア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of(u"ニャン語"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"シンハラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"シュメール語"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"スロバキア語"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"スロベニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"グランタ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"サモア語"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ショナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ソマリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"アラビア・インド数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"アルバニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"セルビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"スワジ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"会計通貨フォーマット"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"南部ソト語"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"ジャワ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"スンダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"ナティゾーネ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"スウェーデン語"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"スワヒリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"繁体大字"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"イビビオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"イバン語"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"タミル語"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"アジア"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ブリヤート語"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"中央アジア"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"テルグ語"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"西アジア"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"タジク語"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"タイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ティグリニア語"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ブギ語"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"コロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"カナダ英語"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"トルクメン語"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"タガログ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ツワナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"トンガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"ブル語"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ジョラ＝フォニィ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"漢数字"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"トルコ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ツォンガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"コモロ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"チャクマ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"タタール語"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ジュラ語"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"トウィ語"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"タヒチ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"サン・ジョルジョ/ビーラ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ヨーロッパ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"東ヨーロッパ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"北ヨーロッパ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ダザガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"西ヨーロッパ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ウイグル語"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"古イタリア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"韓国語の文字"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"カインガング語"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"共通文字"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ウクライナ語"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"ゼーラント語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"コプト暦"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ウルドゥー語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"標準レージア方言正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"カルムイク語"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ゼナガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ウズベク語"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"カシ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"ドイツ語正書法(1996)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"シロティ・ナグリ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ベンダ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"バラン・クシティ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"中華民国暦"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ベトナム語"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"コータン語"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"コイラ・チーニ語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"時間制(12 / 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"タラシケヴィツァ正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ヴォラピュク語"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"コワール語"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"古典シリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"オスマニア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"キチェ語"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"チンボラソ高地ケチュア語"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ワロン語"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ガガウズ語"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"シリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"ギリシャ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"贛語"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"キルマンジュキ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"リディア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"シュメール＝アッカド語楔形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ウォロフ語"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"標準モロッコ タマジクト語"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"現代標準アラビア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"統合カナダ先住民音節文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"フォンクサンプ"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"ガヨ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"モンゴル文字"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"満州語"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ラテン文字(ドイツ文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"シレジア語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"アナトリア象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"バヤ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"マニプリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ラテン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ラテン文字 (ゲール文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"簡体漢数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"繁体漢数字"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"コサ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ローマ数字(小文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ビリン語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"パマカ方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"リキア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"オセージ語"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"メドゥンバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"ダリー語(ゾロアスター教)"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"ムーン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"モーホーク語"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"カコ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"初期現代フランス語"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"イディッシュ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"モシ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"シリア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"デセレット文字"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ヨルバ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"従来の記数法"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"シリア文字(西方シリア文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"オスマントルコ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"シリア文字(エストランゲロ文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ヴァイ語"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"チワン語"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"カリア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"カレンジン語"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"中国語"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"アファカ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"注音字母"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"古ぺルム文字"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"禁則処理"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ズールー語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"電話帳順"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"モノトニック"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"ジョージア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"シャーラダー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"キンブンド語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"大字"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"チャム文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ゲエズ語"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"山地マリ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"シリア文字(東方シリア文字)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"ミャンマー・シャン数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"エルバサン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"古代北アラビア文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"オルチキ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"リフォーム"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"タガログ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"エジプト民衆文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"エジプト神官文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"イティハーサ"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"パルミラ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"エンブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"エジプト聖刻文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ジョージア文字(フツリ)"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"簡体中国語"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"コミ・ペルミャク語"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"古代ハンガリー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"コンカニ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ドイツ語旧正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"コスラエ語"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"ヴェネト語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"リンブ数字"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"繁体中国語"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"スンダ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"ヴェプス語"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"クペレ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"クメール数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"ティルフータ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"イロカノ語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"バレンシア方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"キプロス文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"統一トルコラテン文字"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"ムンダン語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"グルムキー数字"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"複数言語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"プーター"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"カドー語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"単位系"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"クリーク語"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"グラゴル文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"キリバス語"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"共通コーンウォール語正書法"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"チェロキー文字"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"カリブ語"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"カユーガ語"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"タミル数字"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"カラチャイ・バルカル語"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"イングーシ語"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"キナライア語"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"クリオ語"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ダリー語"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"カレリア語"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"エフィク語"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"トゥル語"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"数値書式"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"クルク語"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"サンバー語"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"テルグ文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"バフィア語"_s)
		})
	}));
	return data;
}

LocaleNames_ja::LocaleNames_ja() {
}

$Class* LocaleNames_ja::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ja, name, initialize, &_LocaleNames_ja_ClassInfo_, allocate$LocaleNames_ja);
	return class$;
}

$Class* LocaleNames_ja::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun