#include <sun/util/resources/ext/TimeZoneNames_ja.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ACT
#undef ADELAIDE
#undef AGT
#undef AKST
#undef AMT
#undef ARAST
#undef ARMT
#undef AST
#undef BDT
#undef BRISBANE
#undef BROKEN_HILL
#undef BRT
#undef BTT
#undef CAT
#undef CET
#undef CHAST
#undef CHUT
#undef CIT
#undef CLT
#undef CST
#undef CTT
#undef CUBA
#undef DARWIN
#undef DUBLIN
#undef EASTER
#undef EAT
#undef EET
#undef EGT
#undef EST
#undef EST_NSW
#undef FET
#undef GAMBIER
#undef GHMT
#undef GMT
#undef GMTBST
#undef GST
#undef HKT
#undef HST
#undef ICT
#undef IRKT
#undef IRT
#undef ISRAEL
#undef IST
#undef JST
#undef KRAT
#undef KST
#undef LORD_HOWE
#undef MHT
#undef MMT
#undef MSK
#undef MST
#undef MYT
#undef NORONHA
#undef NOVT
#undef NPT
#undef NST
#undef NZST
#undef PITCAIRN
#undef PKT
#undef PONT
#undef PST
#undef SAMOA
#undef SAST
#undef SBT
#undef SGT
#undef TASMANIA
#undef TMT
#undef ULAT
#undef UTC
#undef UZT
#undef VICTORIA
#undef WAT
#undef WET
#undef WGT
#undef WIT
#undef WST_AUS
#undef WST_SAMOA
#undef XJT
#undef YAKT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void TimeZoneNames_ja::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ja::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		u"アクレ時間"_s,
		"ACT"_s,
		u"アクレ夏時間"_s,
		"ACST"_s,
		u"アクレ時間"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"中部標準時(南オーストラリア)"_s,
		"ACST"_s,
		u"中部夏時間(南オーストラリア)"_s,
		"ACDT"_s,
		u"中部標準時(南オーストラリア)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		u"アルゼンチン時間"_s,
		"ART"_s,
		u"アルゼンチン夏時間"_s,
		"ARST"_s,
		u"アルゼンチン時間"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"アラスカ標準時"_s,
		"AKST"_s,
		u"アラスカ夏時間"_s,
		"AKDT"_s,
		u"アラスカ時間"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"アマゾン時間"_s,
		"AMT"_s,
		u"アマゾン夏時間"_s,
		"AMST"_s,
		u"アマゾン時間"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"アラビア標準時"_s,
		"AST"_s,
		u"アラビア夏時間"_s,
		"ADT"_s,
		u"アラビア時間"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"アルメニア時間"_s,
		"AMT"_s,
		u"アルメニア夏時間"_s,
		"AMST"_s,
		u"アルメニア時間"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"大西洋標準時"_s,
		"AST"_s,
		u"大西洋夏時間"_s,
		"ADT"_s,
		u"大西洋標準時"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		u"バングラデシュ時間"_s,
		"BDT"_s,
		u"バングラデシュ夏時間"_s,
		"BDST"_s,
		u"バングラデシュ時間"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"東部標準時(クイーンズランド)"_s,
		"AEST"_s,
		u"東部夏時間(クイーンズランド)"_s,
		"AEDT"_s,
		u"東部標準時(クイーンズランド)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"中部標準時(南オーストラリア/ニューサウスウェールズ)"_s,
		"ACST"_s,
		u"中部夏時間(南オーストラリア/ニューサウスウェールズ)"_s,
		"ACDT"_s,
		u"中部標準時(南オーストラリア/ニューサウスウェールズ)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"ブラジル時間"_s,
		"BRT"_s,
		u"ブラジル夏時間"_s,
		"BRST"_s,
		u"ブラジリア時間"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"ブータン時間"_s,
		"BTT"_s,
		u"ブータン夏時間"_s,
		"BTST"_s,
		u"ブータン時間"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"中部アフリカ時間"_s,
		"CAT"_s,
		u"中部アフリカ夏時間"_s,
		"CAST"_s,
		u"中部アフリカ時間"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"中部ヨーロッパ時間"_s,
		"CET"_s,
		u"中部ヨーロッパ夏時間"_s,
		"CEST"_s,
		u"中部ヨーロッパ時間"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"チャタム標準時"_s,
		"CHAST"_s,
		u"チャタム夏時間"_s,
		"CHADT"_s,
		u"チャタム時間"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		u"チューク時間"_s,
		"CHUT"_s,
		"Chuuk Time"_s,
		"CHUST"_s,
		u"チューク時間"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"中央インドネシア時間"_s,
		"WITA"_s,
		u"中央インドネシア夏時間"_s,
		"CIST"_s,
		u"中部インドネシア時間"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		u"チリ時間"_s,
		"CLT"_s,
		u"チリ夏時間"_s,
		"CLST"_s,
		u"チリ時間"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"中部標準時"_s,
		"CST"_s,
		u"中部夏時間"_s,
		"CDT"_s,
		u"中部標準時"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"中国標準時"_s,
		"CST"_s,
		u"中国夏時間"_s,
		"CDT"_s,
		u"中国時間"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"キューバ標準時"_s,
		"CST"_s,
		u"キューバ夏時間"_s,
		"CDT"_s,
		u"キューバ時間"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"中部標準時(ノーザンテリトリー)"_s,
		"ACST"_s,
		u"中部夏時間(ノーザンテリトリー)"_s,
		"ACDT"_s,
		u"中部標準時(ノーザンテリトリー)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"グリニッジ標準時"_s,
		"GMT"_s,
		u"アイルランド夏時間"_s,
		"IST"_s,
		u"アイルランド時間"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"東アフリカ時間"_s,
		"EAT"_s,
		u"東アフリカ夏時間"_s,
		"EAST"_s,
		u"東部アフリカ時間"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"イースター島時間"_s,
		"EAST"_s,
		u"イースター島夏時間"_s,
		"EASST"_s,
		u"イースター島時間"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"東ヨーロッパ時間"_s,
		"EET"_s,
		u"東ヨーロッパ夏時間"_s,
		"EEST"_s,
		u"東部ヨーロッパ時間"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"東グリーンランド時間"_s,
		"EGT"_s,
		u"東グリーンランド夏時間"_s,
		"EGST"_s,
		u"東部グリーンランド時間"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"東部標準時"_s,
		"EST"_s,
		u"東部夏時間"_s,
		"EDT"_s,
		u"東部標準時"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"東部標準時(ニューサウスウェールズ)"_s,
		"AEST"_s,
		u"東部夏時間(ニューサウスウェールズ)"_s,
		"AEDT"_s,
		u"東部標準時(ニューサウスウェールズ)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"極東ヨーロッパ時間"_s,
		"FET"_s,
		u"極東ヨーロッパ夏時間"_s,
		"FEST"_s,
		u"極東ヨーロッパ時間"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		u"ガーナ標準時"_s,
		"GMT"_s,
		u"ガーナ夏時間"_s,
		"GHST"_s,
		u"ガーナ標準時"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		u"ガンビア時間"_s,
		"GAMT"_s,
		u"ガンビア夏時間"_s,
		"GAMST"_s,
		u"ガンビエ時間"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		u"グリニッジ標準時"_s,
		"GMT"_s,
		u"グリニッジ標準時"_s,
		"GMT"_s,
		u"グリニッジ標準時"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"グリニッジ標準時"_s,
		"GMT"_s,
		u"英国夏時間"_s,
		"BST"_s,
		u"イギリス時間"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"湾岸標準時"_s,
		"GST"_s,
		u"湾岸夏時間"_s,
		"GDT"_s,
		u"湾岸時間"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		u"香港時間"_s,
		"HKT"_s,
		u"香港夏時間"_s,
		"HKST"_s,
		u"香港時間"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"ハワイ標準時"_s,
		"HST"_s,
		u"ハワイ夏時間"_s,
		"HDT"_s,
		u"ハワイ時間"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		u"インドシナ時間"_s,
		"ICT"_s,
		u"インドシナ夏時間"_s,
		"ICST"_s,
		u"インドシナ時間"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		u"イルクーツク時間"_s,
		"IRKT"_s,
		u"イルクーツク夏時間"_s,
		"IRKST"_s,
		u"イルクーツク時間"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"イラン標準時"_s,
		"IRST"_s,
		u"イラン夏時間"_s,
		"IRDT"_s,
		u"イラン時間"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"イスラエル標準時"_s,
		"IST"_s,
		u"イスラエル夏時間"_s,
		"IDT"_s,
		u"イスラエル時間"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"インド標準時"_s,
		"IST"_s,
		u"インド夏時間"_s,
		"IDT"_s,
		u"インド時間"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"日本標準時"_s,
		"JST"_s,
		u"日本夏時間"_s,
		"JDT"_s,
		u"日本時間"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"クラスノヤルスク時間"_s,
		"KRAT"_s,
		u"クラスノヤルスク夏時間"_s,
		"KRAST"_s,
		u"クラスノヤルスク時間"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"韓国標準時"_s,
		"KST"_s,
		u"韓国夏時間"_s,
		"KDT"_s,
		u"韓国時間"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"ロードハウ島標準時"_s,
		"LHST"_s,
		u"ロードハウ島夏時間"_s,
		"LHDT"_s,
		u"ロードハウ時間"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"マーシャル島時間"_s,
		"MHT"_s,
		u"マーシャル島夏時間"_s,
		"MHST"_s,
		u"マーシャル諸島時間"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		u"ミャンマー時間"_s,
		"MMT"_s,
		u"ミャンマー夏時間"_s,
		"MMST"_s,
		u"ミャンマー時間"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"モスクワ標準時"_s,
		"MSK"_s,
		u"モスクワ夏時間"_s,
		"MSD"_s,
		u"モスクワ時間"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"山地標準時"_s,
		"MST"_s,
		u"山地夏時間"_s,
		"MDT"_s,
		u"山地標準時"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		u"マレーシア時間"_s,
		"MYT"_s,
		u"マレーシア夏時間"_s,
		"MYST"_s,
		u"マレーシア時間"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		u"フェルナンド・デ・ノローニャ時間"_s,
		"FNT"_s,
		u"フェルナンド・デ・ノローニャ夏時間"_s,
		"FNST"_s,
		u"フェルナンド・デ・ノローニャ時間"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		u"ノボシビルスク時間"_s,
		"NOVT"_s,
		u"ノボシビルスク夏時間"_s,
		"NOVST"_s,
		u"ノヴォシビルスク時間"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"ネパール時間"_s,
		"NPT"_s,
		u"ネパール夏時間"_s,
		"NPST"_s,
		u"ネパール時間"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"ニューファンドランド標準時"_s,
		"NST"_s,
		u"ニューファンドランド夏時間"_s,
		"NDT"_s,
		u"ニューファンドランド時間"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"ニュージーランド標準時"_s,
		"NZST"_s,
		u"ニュージーランド夏時間"_s,
		"NZDT"_s,
		u"ニュージーランド時間"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"ピトケルン島標準時"_s,
		"PST"_s,
		u"ピトケルン島夏時間"_s,
		"PDT"_s,
		u"ピトケアン時間"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"パキスタン時間"_s,
		"PKT"_s,
		u"パキスタン夏時間"_s,
		"PKST"_s,
		u"パキスタン時間"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		u"ポンペイ時間"_s,
		"PONT"_s,
		u"ポンペイ夏時間"_s,
		"PONST"_s,
		u"ポナペ時間"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"太平洋標準時"_s,
		"PST"_s,
		u"太平洋夏時間"_s,
		"PDT"_s,
		u"太平洋標準時"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"南アフリカ標準時"_s,
		"SAST"_s,
		u"南アフリカ夏時間"_s,
		"SAST"_s,
		u"南アフリカ時間"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"ソロモン諸島時間"_s,
		"SBT"_s,
		u"ソロモン諸島夏時間"_s,
		"SBST"_s,
		u"ソロモン諸島時間"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		u"シンガポール時間"_s,
		"SGT"_s,
		u"シンガポール夏時間"_s,
		"SGST"_s,
		u"シンガポール時間"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"東部標準時(タスマニア)"_s,
		"AEST"_s,
		u"東部夏時間(タスマニア)"_s,
		"AEDT"_s,
		u"東部標準時(タスマニア)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"トルクメニスタン時間"_s,
		"TMT"_s,
		u"トルクメニスタン夏時間"_s,
		"TMST"_s,
		u"トルクメニスタン時間"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		u"ウラーンバートル時間"_s,
		"ULAT"_s,
		u"ウラーンバートル夏時間"_s,
		"ULAST"_s,
		u"ウランバートル時間"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"西アフリカ時間"_s,
		"WAT"_s,
		u"西アフリカ夏時間"_s,
		"WAST"_s,
		u"西部アフリカ時間"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"西ヨーロッパ時間"_s,
		"WET"_s,
		u"西ヨーロッパ夏時間"_s,
		"WEST"_s,
		u"西部ヨーロッパ時間"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"西グリーンランド時間"_s,
		"WGT"_s,
		u"西グリーンランド夏時間"_s,
		"WGST"_s,
		u"西部グリーンランド時間"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"西インドネシア時間"_s,
		"WIB"_s,
		u"西インドネシア夏時間"_s,
		"WIST"_s,
		u"西部インドネシア時間"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"西部標準時(オーストラリア)"_s,
		"AWST"_s,
		u"西部夏時間(オーストラリア)"_s,
		"AWDT"_s,
		u"西部時間(オーストラリア)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"サモア標準時"_s,
		"SST"_s,
		u"サモア夏時間"_s,
		"SDT"_s,
		u"サモア時間"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"西サモア時間"_s,
		"WSST"_s,
		u"西サモア夏時間"_s,
		"WSDT"_s,
		u"西サモア時間"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"グアム標準時"_s,
		"ChST"_s,
		u"グアム夏時間"_s,
		"ChDT"_s,
		u"チャモロ時間"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"東部標準時(ビクトリア)"_s,
		"AEST"_s,
		u"東部夏時間(ビクトリア)"_s,
		"AEDT"_s,
		u"東部標準時(ビクトリア)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		u"協定世界時"_s,
		"UTC"_s,
		u"協定世界時"_s,
		"UTC"_s,
		u"協定世界時"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"ウズベキスタン時間"_s,
		"UZT"_s,
		u"ウズベキスタン夏時間"_s,
		"UZST"_s,
		u"ウズベキスタン時間"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"中国標準時"_s,
		"XJT"_s,
		u"中国夏時間"_s,
		"XJDT"_s,
		u"中国時間"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		u"ヤクーツク時間"_s,
		"YAKT"_s,
		u"ヤクーツク夏時間"_s,
		"YAKST"_s,
		u"ヤクーツク時間"_s,
		"YAKT"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			PST
		}),
		$$new($ObjectArray, {
			"PST"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			MST
		}),
		$$new($ObjectArray, {
			"MST"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			MST
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			CST
		}),
		$$new($ObjectArray, {
			"CST"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			EST
		}),
		$$new($ObjectArray, {
			"EST"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			EST
		}),
		$$new($ObjectArray, {
			"IET"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			HST
		}),
		$$new($ObjectArray, {
			"HST"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"AST"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			NST
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			NST
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			CET
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			CET
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Casablanca"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			JST
		}),
		$$new($ObjectArray, {
			"JST"_s,
			JST
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"AET"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"AGT"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"ART"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GHMT
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Asmara"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Douala"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/El_Aaiun"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Windhoek"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Buenos_Aires"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Catamarca"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/ComodRivadavia"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Cordoba"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Jujuy"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Mendoza"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			$$new($StringArray, {
				u"パラグアイ時間"_s,
				"PYT"_s,
				u"パラグアイ夏時間"_s,
				"PYST"_s,
				u"パラグアイ時間"_s,
				"PYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Atikokan"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Atka"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			$$new($StringArray, {
				u"コロンビア時間"_s,
				"COT"_s,
				u"コロンビア夏時間"_s,
				"COST"_s,
				u"コロンビア時間"_s,
				"COT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			$$new($StringArray, {
				u"ベネズエラ時間"_s,
				"VET"_s,
				u"ベネズエラ夏時間"_s,
				"VEST"_s,
				u"ベネズエラ時間"_s,
				"VET"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			$$new($StringArray, {
				u"仏領ギアナ時間"_s,
				"GFT"_s,
				u"仏領ギアナ夏時間"_s,
				"GFST"_s,
				u"フランス領ギアナ時間"_s,
				"GFT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Eirunepe"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Ensenada"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Fort_Wayne"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			WGT
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			$$new($StringArray, {
				u"エクアドル時間"_s,
				"ECT"_s,
				u"エクアドル夏時間"_s,
				"ECST"_s,
				u"エクアドル時間"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				u"ガイアナ時間"_s,
				"GYT"_s,
				u"ガイアナ夏時間"_s,
				"GYST"_s,
				u"ガイアナ時間"_s,
				"GYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			CUBA
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Indianapolis"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Louisville"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Knox_IN"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			$$new($StringArray, {
				u"ボリビア時間"_s,
				"BOT"_s,
				u"ボリビア夏時間"_s,
				"BOST"_s,
				u"ボリビア時間"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				u"ペルー時間"_s,
				"PET"_s,
				u"ペルー夏時間"_s,
				"PEST"_s,
				u"ペルー時間"_s,
				"PET"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			$$new($StringArray, {
				u"サンピエール・ミクロン諸島標準時"_s,
				"PMST"_s,
				u"サンピエール・ミクロン諸島夏時間"_s,
				"PMDT"_s,
				u"ピエール・ミクロン時間"_s,
				"PMT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			$$new($StringArray, {
				u"ウルグアイ時間"_s,
				"UYT"_s,
				u"ウルグアイ夏時間"_s,
				"UYST"_s,
				u"ウルグアイ時間"_s,
				"UYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			NORONHA
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Nuuk"_s,
			WGT
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			$$new($StringArray, {
				u"スリナム時間"_s,
				"SRT"_s,
				u"スリナム夏時間"_s,
				"SRST"_s,
				u"スリナム時間"_s,
				"SRT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Porto_Acre"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Rio_Branco"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/Rosario"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			EGT
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Virgin"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Antarctica/Casey"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			$$new($StringArray, {
				u"デイビス時間"_s,
				"DAVT"_s,
				u"デイビス夏時間"_s,
				"DAVST"_s,
				u"デービス時間"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				u"デュモンデュルヴィル時間"_s,
				"DDUT"_s,
				u"デュモンデュルヴィル夏時間"_s,
				"DDUST"_s,
				u"デュモン・デュルビル時間"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				u"マッコーリー島時間"_s,
				"MIST"_s,
				u"マッコーリー島夏時間"_s,
				"MIST"_s,
				u"マッコーリー島時間"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				u"モーソン時間"_s,
				"MAWT"_s,
				u"モーソン夏時間"_s,
				"MAWST"_s,
				u"モーソン時間"_s,
				"MAWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Antarctica/Palmer"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			$$new($StringArray, {
				u"ロゼラ時間"_s,
				"ROTT"_s,
				u"ロゼラ夏時間"_s,
				"ROTST"_s,
				u"ロゼラ時間"_s,
				"ROTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			$$new($StringArray, {
				u"昭和基地時間"_s,
				"SYOT"_s,
				u"昭和基地夏時間"_s,
				"SYOST"_s,
				u"昭和基地時間"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				u"協定世界時"_s,
				"UTC"_s,
				u"中部ヨーロッパ夏時間"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				u"ボストーク基地時間"_s,
				"VOST"_s,
				u"ボストーク基地夏時間"_s,
				"VOSST"_s,
				u"ボストーク時間"_s,
				"VOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			$$new($StringArray, {
				u"アルマアタ時間"_s,
				"ALMT"_s,
				u"アルマアタ夏時間"_s,
				"ALMST"_s,
				u"アルマアタ時間"_s,
				"ALMT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			$$new($StringArray, {
				u"アナドゥイリ時間"_s,
				"ANAT"_s,
				u"アナドゥイリ夏時間"_s,
				"ANAST"_s,
				u"アナディリ時間"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				u"アクタウ時間"_s,
				"AQTT"_s,
				u"アクタウ夏時間"_s,
				"AQTST"_s,
				u"アクタウ時間"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				u"アクトベ時間"_s,
				"AQTT"_s,
				u"アクトベ夏時間"_s,
				"AQTST"_s,
				u"アクトベ時間"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			TMT
		}),
		$$new($ObjectArray, {
			"Asia/Ashkhabad"_s,
			TMT
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			$$new($StringArray, {
				u"アゼルバイジャン時間"_s,
				"AZT"_s,
				u"アゼルバイジャン夏時間"_s,
				"AZST"_s,
				u"アゼルバイジャン時間"_s,
				"AZT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			$$new($StringArray, {
				u"キルギスタン時間"_s,
				"KGT"_s,
				u"キルギスタン夏時間"_s,
				"KGST"_s,
				u"キルギス時間"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				u"ブルネイ時間"_s,
				"BNT"_s,
				u"ブルネイ夏時間"_s,
				"BNST"_s,
				u"ブルネイ時間"_s,
				"BNT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			$$new($StringArray, {
				u"チョイバルサン時間"_s,
				"CHOT"_s,
				u"チョイバルサン夏時間"_s,
				"CHOST"_s,
				u"チョイバルサン時間"_s,
				"CHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Chungking"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Dacca"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			$$new($StringArray, {
				u"東ティモール時間"_s,
				"TLT"_s,
				u"東ティモール夏時間"_s,
				"TLST"_s,
				u"東ティモール時間"_s,
				"TLT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			GST
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			$$new($StringArray, {
				u"タジキスタン時間"_s,
				"TJT"_s,
				u"タジキスタン夏時間"_s,
				"TJST"_s,
				u"タジキスタン時間"_s,
				"TJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Ho_Chi_Minh"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			HKT
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			$$new($StringArray, {
				u"ホブド時間"_s,
				"HOVT"_s,
				u"ホブド夏時間"_s,
				"HOVST"_s,
				u"ホブド時間"_s,
				"HOVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			IRKT
		}),
		$$new($ObjectArray, {
			"Asia/Istanbul"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			WIT
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			$$new($StringArray, {
				u"東インドネシア時間"_s,
				"WIT"_s,
				u"東インドネシア夏時間"_s,
				"EIST"_s,
				u"東部インドネシア時間"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				u"アフガニスタン時間"_s,
				"AFT"_s,
				u"アフガニスタン夏時間"_s,
				"AFST"_s,
				u"アフガニスタン時間"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				u"ペトロパブロフスクカムチャツキー時間"_s,
				"PETT"_s,
				u"ペトロパブロフスクカムチャツキー夏時間"_s,
				"PETST"_s,
				u"ペトロパブロフスク・カムチャツキー時間"_s,
				"PETT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			PKT
		}),
		$$new($ObjectArray, {
			"Asia/Kashgar"_s,
			XJT
		}),
		$$new($ObjectArray, {
			"Asia/Kathmandu"_s,
			NPT
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			NPT
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Kolkata"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			KRAT
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			MYT
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			MYT
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Macao"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			$$new($StringArray, {
				u"マガダン時間"_s,
				"MAGT"_s,
				u"マガダン夏時間"_s,
				"MAGST"_s,
				u"マガダン時間"_s,
				"MAGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			CIT
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			$$new($StringArray, {
				"Philippines Standard Time"_s,
				"PST"_s,
				"Philippines Daylight Time"_s,
				"PDT"_s,
				"Philippines Time"_s,
				"PT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			GST
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			KRAT
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			NOVT
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			$$new($StringArray, {
				u"オラル時間"_s,
				"ORAT"_s,
				u"オラル夏時間"_s,
				"ORAST"_s,
				u"オラル時間"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				u"オムスク時間"_s,
				"OMST"_s,
				u"オムスク夏時間"_s,
				"OMSST"_s,
				u"オムスク時間"_s,
				"OMST"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			WIT
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			$$new($StringArray, {
				u"キジルオルダ時間"_s,
				"QYZT"_s,
				u"キジルオルダ夏時間"_s,
				"QYZST"_s,
				u"クズロルダ時間"_s,
				"QYZT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			MMT
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			$$new($StringArray, {
				u"樺太時間"_s,
				"SAKT"_s,
				u"樺太夏時間"_s,
				"SAKST"_s,
				u"サハリン時間"_s,
				"SAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			UZT
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			SGT
		}),
		$$new($ObjectArray, {
			"Asia/Srednekolymsk"_s,
			$$new($StringArray, {
				"Srednekolymsk Time"_s,
				"SRET"_s,
				"Srednekolymsk Daylight Time"_s,
				"SREDT"_s,
				"Srednekolymsk Time"_s,
				"SRET"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Tel_Aviv"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			UZT
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			$$new($StringArray, {
				u"グルジア時間"_s,
				"GET"_s,
				u"グルジア夏時間"_s,
				"GEST"_s,
				u"グルジア時間"_s,
				"GET"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			IRT
		}),
		$$new($ObjectArray, {
			"Asia/Thimbu"_s,
			BTT
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			BTT
		}),
		$$new($ObjectArray, {
			"Asia/Ujung_Pandang"_s,
			CIT
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			ULAT
		}),
		$$new($ObjectArray, {
			"Asia/Ulan_Bator"_s,
			ULAT
		}),
		$$new($ObjectArray, {
			"Asia/Urumqi"_s,
			XJT
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			$$new($StringArray, {
				u"ウスチネラ時間"_s,
				"VLAT"_s,
				u"ウスチネラ夏時間"_s,
				"VLAST"_s,
				u"ウスチネラ時間"_s,
				"VLAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			$$new($StringArray, {
				u"ウラジオストク時間"_s,
				"VLAT"_s,
				u"ウラジオストク夏時間"_s,
				"VLAST"_s,
				u"ウラジオストク時間"_s,
				"VLAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Yangon"_s,
			MMT
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			$$new($StringArray, {
				u"エカテリンブルグ時間"_s,
				"YEKT"_s,
				u"エカテリンブルグ夏時間"_s,
				"YEKST"_s,
				u"エカテリンブルク時間"_s,
				"YEKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			ARMT
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			$$new($StringArray, {
				u"アゾレス時間"_s,
				"AZOT"_s,
				u"アゾレス夏時間"_s,
				"AZOST"_s,
				u"アゾレス時間"_s,
				"AZOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			$$new($StringArray, {
				u"カーボベルデ時間"_s,
				"CVT"_s,
				u"カーボベルデ夏時間"_s,
				"CVST"_s,
				u"カーボベルデ時間"_s,
				"CVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Faroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			$$new($StringArray, {
				u"南ジョージア島標準時"_s,
				"GST"_s,
				u"南ジョージア島夏時間"_s,
				"GDT"_s,
				u"南ジョージア時間"_s,
				"GT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			$$new($StringArray, {
				u"フォークランド諸島時間"_s,
				"FKT"_s,
				u"フォークランド諸島夏時間"_s,
				"FKST"_s,
				u"フォークランド諸島時間"_s,
				"FKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Australia/ACT"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			ADELAIDE
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			BROKEN_HILL
		}),
		$$new($ObjectArray, {
			"Australia/Canberra"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			$$new($StringArray, {
				u"中西部標準時(オーストラリア)"_s,
				"ACWST"_s,
				u"中西部夏時間(オーストラリア)"_s,
				"ACWDT"_s,
				u"中西部時間(オーストラリア)"_s,
				"ACWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			TASMANIA
		}),
		$$new($ObjectArray, {
			"Australia/LHI"_s,
			LORD_HOWE
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			LORD_HOWE
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			VICTORIA
		}),
		$$new($ObjectArray, {
			"Australia/North"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"Australia/NSW"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Australia/Queensland"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/South"_s,
			ADELAIDE
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Tasmania"_s,
			TASMANIA
		}),
		$$new($ObjectArray, {
			"Australia/Victoria"_s,
			VICTORIA
		}),
		$$new($ObjectArray, {
			"Australia/West"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Australia/Yancowinna"_s,
			BROKEN_HILL
		}),
		$$new($ObjectArray, {
			"BET"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"BST"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Brazil/Acre"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"Brazil/DeNoronha"_s,
			NORONHA
		}),
		$$new($ObjectArray, {
			"Brazil/East"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"Brazil/West"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"Canada/Atlantic"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Canada/Central"_s,
			CST
		}),
		$$new($ObjectArray, {
			"Canada/Eastern"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Canada/Mountain"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Canada/Newfoundland"_s,
			NST
		}),
		$$new($ObjectArray, {
			"Canada/Pacific"_s,
			PST
		}),
		$$new($ObjectArray, {
			"Canada/Yukon"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Canada/Saskatchewan"_s,
			CST
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"CET"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Chile/Continental"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"Chile/EasterIsland"_s,
			EASTER
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			CST
		}),
		$$new($ObjectArray, {
			"Cuba"_s,
			CUBA
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"EET"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Egypt"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Eire"_s,
			DUBLIN
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Etc/Greenwich"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UCT"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/Universal"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/Zulu"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			DUBLIN
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Istanbul"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Nicosia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Samara"_s,
			$$new($StringArray, {
				u"サマラ時間"_s,
				"SAMT"_s,
				u"サマラ夏時間"_s,
				"SAMST"_s,
				u"サマラ時間"_s,
				"SAMT"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Tiraspol"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			CET
		}),
		$$new($ObjectArray, {
			"GB"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"GB-Eire"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Greenwich"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Hongkong"_s,
			HKT
		}),
		$$new($ObjectArray, {
			"Iceland"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Iran"_s,
			IRT
		}),
		$$new($ObjectArray, {
			"IST"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			$$new($StringArray, {
				u"インド洋地域時間"_s,
				"IOT"_s,
				u"インド洋地域夏時間"_s,
				"IOST"_s,
				u"インド洋地域時間"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				u"クリスマス諸島時間"_s,
				"CXT"_s,
				u"クリスマス諸島夏時間"_s,
				"CXST"_s,
				u"クリスマス島時間"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				u"ココス諸島時間"_s,
				"CCT"_s,
				u"ココス諸島夏時間"_s,
				"CCST"_s,
				u"ココス諸島時間"_s,
				"CCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			$$new($StringArray, {
				u"仏南方領および南極時間"_s,
				"TFT"_s,
				u"仏南方領および南極夏時間"_s,
				"TFST"_s,
				u"フランス領南方および南極大陸時間"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				u"セイシェル時間"_s,
				"SCT"_s,
				u"セイシェル夏時間"_s,
				"SCST"_s,
				u"セーシェル時間"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				u"モルジブ時間"_s,
				"MVT"_s,
				u"モルジブ夏時間"_s,
				"MVST"_s,
				u"モルジブ時間"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				u"モーリシャス時間"_s,
				"MUT"_s,
				u"モーリシャス夏時間"_s,
				"MUST"_s,
				u"モーリシャス時間"_s,
				"MUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			$$new($StringArray, {
				u"レユニオン時間"_s,
				"RET"_s,
				u"レユニオン夏時間"_s,
				"REST"_s,
				u"レユニオン時間"_s,
				"RET"_s
			})
		}),
		$$new($ObjectArray, {
			"Israel"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Jamaica"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Japan"_s,
			JST
		}),
		$$new($ObjectArray, {
			"Kwajalein"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Libya"_s,
			EET
		}),
		$$new($ObjectArray, {
			"MET"_s,
			$$new($StringArray, {
				u"中部ヨーロッパ時間"_s,
				"MET"_s,
				u"中部ヨーロッパ夏時間"_s,
				"MEST"_s,
				"MET"_s,
				"MET"_s
			})
		}),
		$$new($ObjectArray, {
			"Mexico/BajaNorte"_s,
			PST
		}),
		$$new($ObjectArray, {
			"Mexico/BajaSur"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Mexico/General"_s,
			CST
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			WST_SAMOA
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Navajo"_s,
			MST
		}),
		$$new($ObjectArray, {
			"NET"_s,
			ARMT
		}),
		$$new($ObjectArray, {
			"NST"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"NZ"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"NZ-CHAT"_s,
			CHAST
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			PKT
		}),
		$$new($ObjectArray, {
			"Portugal"_s,
			WET
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			WST_SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Pacific/Bougainville"_s,
			$$new($StringArray, {
				"Bougainville Standard Time"_s,
				"BST"_s,
				"Bougainville Daylight Time"_s,
				"BST"_s,
				"Bougainville Time"_s,
				"BT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			CHAST
		}),
		$$new($ObjectArray, {
			"Pacific/Chuuk"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			EASTER
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			$$new($StringArray, {
				u"バヌアツ時間"_s,
				"VUT"_s,
				u"バヌアツ夏時間"_s,
				"VUST"_s,
				u"バヌアツ時間"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				u"フェニックス諸島時間"_s,
				"PHOT"_s,
				u"フェニックス諸島夏時間"_s,
				"PHOST"_s,
				u"フェニックス諸島時間"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				u"トケラウ諸島時間"_s,
				"TKT"_s,
				u"トケラウ諸島夏時間"_s,
				"TKST"_s,
				u"トケラウ時間"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				u"フィジー時間"_s,
				"FJT"_s,
				u"フィジー夏時間"_s,
				"FJST"_s,
				u"フィジー時間"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				u"ツバル時間"_s,
				"TVT"_s,
				u"ツバル夏時間"_s,
				"TVST"_s,
				u"ツバル時間"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				u"ガラパゴス時間"_s,
				"GALT"_s,
				u"ガラパゴス夏時間"_s,
				"GALST"_s,
				u"ガラパゴス時間"_s,
				"GALT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			GAMBIER
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			SBT
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			ChST
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			HST
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			$$new($StringArray, {
				u"ライン諸島時間"_s,
				"LINT"_s,
				u"ライン諸島夏時間"_s,
				"LINST"_s,
				u"ライン諸島時間"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				u"コスラエ時間"_s,
				"KOST"_s,
				u"コスラエ夏時間"_s,
				"KOSST"_s,
				u"コスラエ時間"_s,
				"KOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			$$new($StringArray, {
				u"マルケサス時間"_s,
				"MART"_s,
				u"マルケサス夏時間"_s,
				"MARST"_s,
				u"マルキーズ時間"_s,
				"MART"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			$$new($StringArray, {
				u"ナウル時間"_s,
				"NRT"_s,
				u"ナウル夏時間"_s,
				"NRST"_s,
				u"ナウル時間"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				u"ニウエ島時間"_s,
				"NUT"_s,
				u"ニウエ島夏時間"_s,
				"NUST"_s,
				u"ニウエ時間"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				u"ノーフォーク時間"_s,
				"NFT"_s,
				u"ノーフォーク夏時間"_s,
				"NFST"_s,
				u"ノーフォーク時間"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				u"ニューカレドニア時間"_s,
				"NCT"_s,
				u"ニューカレドニア夏時間"_s,
				"NCST"_s,
				u"ニューカレドニア時間"_s,
				"NCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			$$new($StringArray, {
				u"パラオ時間"_s,
				"PWT"_s,
				u"パラオ夏時間"_s,
				"PWST"_s,
				u"パラオ時間"_s,
				"PWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			PITCAIRN
		}),
		$$new($ObjectArray, {
			"Pacific/Pohnpei"_s,
			PONT
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			PONT
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			$$new($StringArray, {
				u"パプアニューギニア時間"_s,
				"PGT"_s,
				u"パプアニューギニア夏時間"_s,
				"PGST"_s,
				u"パプアニューギニア時間"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				u"クック諸島時間"_s,
				"CKT"_s,
				u"クック諸島夏時間"_s,
				"CKHST"_s,
				u"クック諸島時間"_s,
				"CKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			ChST
		}),
		$$new($ObjectArray, {
			"Pacific/Samoa"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			$$new($StringArray, {
				u"タヒチ時間"_s,
				"TAHT"_s,
				u"タヒチ夏時間"_s,
				"TAHST"_s,
				u"タヒチ時間"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				u"ギルバート諸島時間"_s,
				"GILT"_s,
				u"ギルバート諸島夏時間"_s,
				"GILST"_s,
				u"ギルバート諸島時間"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				u"トンガ時間"_s,
				"TOT"_s,
				u"トンガ夏時間"_s,
				"TOST"_s,
				u"トンガ時間"_s,
				"TOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			$$new($StringArray, {
				u"ウェーク時間"_s,
				"WAKT"_s,
				u"ウェーク夏時間"_s,
				"WAKST"_s,
				u"ウェーク時間"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				u"ワリス及びフツナ時間"_s,
				"WFT"_s,
				u"ワリス及びフツナ夏時間"_s,
				"WFST"_s,
				u"ウォリス・フツナ時間"_s,
				"WFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Poland"_s,
			CET
		}),
		$$new($ObjectArray, {
			"PRC"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			PST
		}),
		$$new($ObjectArray, {
			"ROK"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Singapore"_s,
			SGT
		}),
		$$new($ObjectArray, {
			"SST"_s,
			SBT
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			AST
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			AST
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			CST
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			CST
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			EST
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			EST
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			HST
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			MST
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			PST
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			PST
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"Turkey"_s,
			EET
		}),
		$$new($ObjectArray, {
			"UCT"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Universal"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"US/Alaska"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"US/Aleutian"_s,
			HST
		}),
		$$new($ObjectArray, {
			"US/Arizona"_s,
			MST
		}),
		$$new($ObjectArray, {
			"US/Central"_s,
			CST
		}),
		$$new($ObjectArray, {
			"US/Eastern"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Hawaii"_s,
			HST
		}),
		$$new($ObjectArray, {
			"US/Indiana-Starke"_s,
			CST
		}),
		$$new($ObjectArray, {
			"US/East-Indiana"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Michigan"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Mountain"_s,
			MST
		}),
		$$new($ObjectArray, {
			"US/Pacific"_s,
			PST
		}),
		$$new($ObjectArray, {
			"US/Samoa"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"VST"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"W-SU"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"WET"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Zulu"_s,
			UTC
		})
	});
}

TimeZoneNames_ja::TimeZoneNames_ja() {
}

$Class* TimeZoneNames_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_ja",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_ja);
	});
	return class$;
}

$Class* TimeZoneNames_ja::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun