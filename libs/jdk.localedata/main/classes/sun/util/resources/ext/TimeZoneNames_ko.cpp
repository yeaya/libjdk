#include <sun/util/resources/ext/TimeZoneNames_ko.h>
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

void TimeZoneNames_ko::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ko::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		u"에이커 시간"_s,
		"ACT"_s,
		u"에이커 일광절약시간"_s,
		"ACST"_s,
		u"에이커 시간"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"중부 표준시(남부 오스트레일리아)"_s,
		"ACST"_s,
		u"중부 일광 절약 시간(남부 오스트레일리아)"_s,
		"ACDT"_s,
		u"중부 표준시(남부 오스트레일리아)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		u"아르헨티나 시간"_s,
		"ART"_s,
		u"아르헨티나 일광절약시간"_s,
		"ARST"_s,
		u"아르헨티나 표준시"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"알래스카 표준시"_s,
		"AKST"_s,
		u"알래스카 일광절약시간"_s,
		"AKDT"_s,
		u"알래스카 표준시"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"아마존 시간"_s,
		"AMT"_s,
		u"아마존 일광절약시간"_s,
		"AMST"_s,
		u"아마존 표준시"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"아랍 표준시"_s,
		"AST"_s,
		u"아랍 일광절약시간"_s,
		"ADT"_s,
		u"아라비아 표준시"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"아르메니아 시간"_s,
		"AMT"_s,
		u"아르메니아 일광절약시간"_s,
		"AMST"_s,
		u"아르메니아 표준시"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"대서양 표준시"_s,
		"AST"_s,
		u"대서양 일광절약시간"_s,
		"ADT"_s,
		u"대서양 표준시"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		u"방글라데시 시간"_s,
		"BDT"_s,
		u"방글라데시 일광절약시간"_s,
		"BDST"_s,
		u"방글라데시 표준시"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"동부 표준시(퀸즐랜드)"_s,
		"AEST"_s,
		u"동부 일광 절약 시간(퀸즐랜드)"_s,
		"AEDT"_s,
		u"동부 표준시(퀸즐랜드)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"중부 표준시(남부 오스트레일리아/뉴사우스웨일즈)"_s,
		"ACST"_s,
		u"중부 일광 절약 시간(남부 오스트레일리아/뉴사우스웨일즈)"_s,
		"ACDT"_s,
		u"중부 표준시(남부 오스트레일리아/뉴사우스웨일즈)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"브라질리아 시간"_s,
		"BRT"_s,
		u"브라질리아 일광절약시간"_s,
		"BRST"_s,
		u"브라질리아 표준시"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"부탄 시간"_s,
		"BTT"_s,
		u"부탄 일광절약시간"_s,
		"BTST"_s,
		u"부탄 표준시"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"중앙 아프리카 시간"_s,
		"CAT"_s,
		u"중앙 아프리카 일광절약시간"_s,
		"CAST"_s,
		u"중앙 아프리카 표준시"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"중앙 유럽 시간"_s,
		"CET"_s,
		u"중앙 유럽 일광절약시간"_s,
		"CEST"_s,
		u"중앙 유럽 표준시"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"Chatham 표준시"_s,
		"CHAST"_s,
		u"Chatham 일광절약시간"_s,
		"CHADT"_s,
		u"채텀 표준시"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		u"추크 표준시"_s,
		"CHUT"_s,
		u"추크 일광 절약 시간"_s,
		"CHUST"_s,
		u"추크 표준시"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"중앙 인도네시아 시간"_s,
		"WITA"_s,
		u"중앙 인도네시아 일광절약시간"_s,
		"CIST"_s,
		u"중부 인도네시아 표준시"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		u"칠레 시간"_s,
		"CLT"_s,
		u"칠레 일광절약시간"_s,
		"CLST"_s,
		u"칠레 표준시"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"중부 표준시"_s,
		"CST"_s,
		u"중부 일광절약시간"_s,
		"CDT"_s,
		u"중부 표준시"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"중국 표준시"_s,
		"CST"_s,
		u"중국 일광절약시간"_s,
		"CDT"_s,
		u"중국 표준시"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"쿠바 표준시"_s,
		"CST"_s,
		u"쿠바 일광절약시간"_s,
		"CDT"_s,
		u"쿠바 표준시"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"중부 표준시(북부 지역)"_s,
		"ACST"_s,
		u"중부 일광 절약 시간(북부 지역)"_s,
		"ACDT"_s,
		u"중부 표준시(북부 지역)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"그리니치 표준시"_s,
		"GMT"_s,
		u"아일랜드 일광절약시간"_s,
		"IST"_s,
		u"아일랜드 표준시"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"동부 아프리카 시간"_s,
		"EAT"_s,
		u"동부 아프리카 일광절약시간"_s,
		"EAST"_s,
		u"동부 아프리카 표준시"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"Easter Is. 시간"_s,
		"EAST"_s,
		u"Easter Is. 일광절약시간"_s,
		"EASST"_s,
		u"이스터 섬 표준시"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"동유럽 시간"_s,
		"EET"_s,
		u"동유럽 일광절약시간"_s,
		"EEST"_s,
		u"동부 유럽 표준시"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"동부 그린랜드 시간"_s,
		"EGT"_s,
		u"동부 그린랜드 일광절약시간"_s,
		"EGST"_s,
		u"동부 그린란드 표준시"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"동부 표준시"_s,
		"EST"_s,
		u"동부 일광절약시간"_s,
		"EDT"_s,
		u"동부 표준시"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"동부 표준시(뉴사우스웨일즈)"_s,
		"AEST"_s,
		u"동부 일광 절약 시간(뉴사우스웨일즈)"_s,
		"AEDT"_s,
		u"동부 표준시(뉴사우스웨일즈)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"극동 유럽 표준시"_s,
		"FET"_s,
		u"극동 유럽 일광 절약 시간"_s,
		"FEST"_s,
		u"극동 유럽 표준시"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		u"가나 표준시"_s,
		"GMT"_s,
		u"가나 일광절약시간"_s,
		"GHST"_s,
		u"가나 표준시"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		u"감비아 시간"_s,
		"GAMT"_s,
		u"감비아 일광절약시간"_s,
		"GAMST"_s,
		u"잠비아 표준시"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		u"그리니치 표준시"_s,
		"GMT"_s,
		u"그리니치 표준시"_s,
		"GMT"_s,
		u"그리니치 표준시"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"그리니치 표준시"_s,
		"GMT"_s,
		u"영국 일광절약시간"_s,
		"BST"_s,
		u"영국 표준시"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"걸프만 표준시"_s,
		"GST"_s,
		u"걸프만 일광절약시간"_s,
		"GDT"_s,
		u"걸프만 표준시"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		u"홍콩 시간"_s,
		"HKT"_s,
		u"홍콩 일광절약시간"_s,
		"HKST"_s,
		u"홍콩 표준시"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"하와이 표준시"_s,
		"HST"_s,
		u"하와이 일광절약시간"_s,
		"HDT"_s,
		u"하와이 표준시"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		u"인도차이나 반도 시간"_s,
		"ICT"_s,
		u"인도차이나 반도 일광절약시간"_s,
		"ICST"_s,
		u"인도차이나 반도 표준시"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		u"이르쿠츠크 시간"_s,
		"IRKT"_s,
		u"이르쿠츠크 일광절약시간"_s,
		"IRKST"_s,
		u"이르쿠츠크 표준시"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"이란 표준시"_s,
		"IRST"_s,
		u"이란 일광절약시간"_s,
		"IRDT"_s,
		u"이란 표준시"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"이스라엘 표준시"_s,
		"IST"_s,
		u"이스라엘 일광절약시간"_s,
		"IDT"_s,
		u"아스라엘 표준시"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"인도 표준시"_s,
		"IST"_s,
		u"인도 일광절약시간"_s,
		"IDT"_s,
		u"인도 표준시"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"일본 표준시"_s,
		"JST"_s,
		u"일본 일광절약시간"_s,
		"JDT"_s,
		u"일본 표준시"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"크라스노야르스크 시간"_s,
		"KRAT"_s,
		u"크라스노야르스크 일광절약시간"_s,
		"KRAST"_s,
		u"크라스노야르스크 표준시"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"한국 표준시"_s,
		"KST"_s,
		u"한국 일광절약시간"_s,
		"KDT"_s,
		u"대한민국 표준시"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"로드 하우 표준시"_s,
		"LHST"_s,
		u"로드 하우 일광절약시간"_s,
		"LHDT"_s,
		u"로드하우 표준시"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"마셜제도 시간"_s,
		"MHT"_s,
		u"마셜제도 일광절약시간"_s,
		"MHST"_s,
		u"마셜 제도 표준시"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		u"미얀마 시간"_s,
		"MMT"_s,
		u"미얀마 일광절약시간"_s,
		"MMST"_s,
		u"미얀마 표준시"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"모스크바 표준시"_s,
		"MSK"_s,
		u"모스크바 일광절약시간"_s,
		"MSD"_s,
		u"모스크바 표준시"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"산지 표준시"_s,
		"MST"_s,
		u"산지 일광절약시간"_s,
		"MDT"_s,
		u"산지 표준시"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		u"말레이시아 시간"_s,
		"MYT"_s,
		u"말레이시아 일광절약시간"_s,
		"MYST"_s,
		u"말레이시아 표준시"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		u"Fernando de Noronha 시간"_s,
		"FNT"_s,
		u"Fernando de Noronha 일광절약시간"_s,
		"FNST"_s,
		u"페르난도 드 노로하 표준시"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		u"노브시빌스크 시간"_s,
		"NOVT"_s,
		u"노브시빌스크 일광절약시간"_s,
		"NOVST"_s,
		u"노보시비르스크 표준시"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"네팔 시간"_s,
		"NPT"_s,
		u"네팔 일광절약시간"_s,
		"NPST"_s,
		u"네팔 표준시"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"뉴펀들랜드 표준시"_s,
		"NST"_s,
		u"뉴펀들랜드 일광절약시간"_s,
		"NDT"_s,
		u"뉴펀들랜드 표준시"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"뉴질랜드 표준시"_s,
		"NZST"_s,
		u"뉴질랜드 일광절약시간"_s,
		"NZDT"_s,
		u"뉴질랜드 표준시"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"Pitcairn 표준시"_s,
		"PST"_s,
		u"Pitcairn 일광절약시간"_s,
		"PDT"_s,
		u"핏케언 표준시"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"파키스탄 시간"_s,
		"PKT"_s,
		u"파키스탄 일광절약시간"_s,
		"PKST"_s,
		u"파키스탄 표준시"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		u"폰페이 표준시"_s,
		"PONT"_s,
		u"폰페이 일광 절약 시간"_s,
		"PONST"_s,
		u"포나페 표준시"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"태평양 표준시"_s,
		"PST"_s,
		u"태평양 일광절약시간"_s,
		"PDT"_s,
		u"태평양 표준시"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"남아프리카 표준시"_s,
		"SAST"_s,
		u"남아프리카 일광절약시간"_s,
		"SAST"_s,
		u"남아프리카 표준시"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"솔로몬 군도 시간"_s,
		"SBT"_s,
		u"솔로몬 군도 일광절약시간"_s,
		"SBST"_s,
		u"솔로몬 제도 표준시"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		u"싱가포르 시간"_s,
		"SGT"_s,
		u"싱가포르 일광절약시간"_s,
		"SGST"_s,
		u"싱가포르 표준시"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"동부 표준시(태즈메이니아)"_s,
		"AEST"_s,
		u"동부 일광 절약 시간(태즈메이니아)"_s,
		"AEDT"_s,
		u"동부 표준시(태즈메이니아)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"투르크메니스탄 시간"_s,
		"TMT"_s,
		u"투르크메니스탄 일광절약시간"_s,
		"TMST"_s,
		u"투르크메니스탄 표준시"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		u"울란바타르 시간"_s,
		"ULAT"_s,
		u"울란바타르 일광절약시간"_s,
		"ULAST"_s,
		u"울란바토르 표준시"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"서부 아프리카 시간"_s,
		"WAT"_s,
		u"서부 아프리카 일광절약시간"_s,
		"WAST"_s,
		u"서부 아프리카 표준시"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"서유럽 시간"_s,
		"WET"_s,
		u"서유럽 일광절약시간"_s,
		"WEST"_s,
		u"서부 유럽 표준시"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"서부 그린랜드 시간"_s,
		"WGT"_s,
		u"서부 그린랜드 일광절약시간"_s,
		"WGST"_s,
		u"서부 그린란드 표준시"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"서인도네시아 시간"_s,
		"WIB"_s,
		u"서인도네시아 일광절약시간"_s,
		"WIST"_s,
		u"서부 인도네시아 표준시"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"서부 표준시(오스트레일리아)"_s,
		"AWST"_s,
		u"서부 일광 절약 시간(오스트레일리아)"_s,
		"AWDT"_s,
		u"서부 표준시(오스트레일리아)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"사모아 표준시"_s,
		"SST"_s,
		u"사모아 일광절약시간"_s,
		"SDT"_s,
		u"사모아 표준시"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"서사모아 시간"_s,
		"WSST"_s,
		u"서사모아 일광절약시간"_s,
		"WSDT"_s,
		u"서사모아 표준시"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"차모로 표준시"_s,
		"ChST"_s,
		u"차모로 일광절약시간"_s,
		"ChDT"_s,
		u"차모르 표준시"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"동부 표준시(빅토리아)"_s,
		"AEST"_s,
		u"동부 일광 절약 시간(빅토리아)"_s,
		"AEDT"_s,
		u"동부 표준시(빅토리아)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		u"세계 표준시"_s,
		"UTC"_s,
		u"세계 표준시"_s,
		"UTC"_s,
		u"지역 표준시"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"우즈베키스탄 시간"_s,
		"UZT"_s,
		u"우즈베키스탄 일광절약시간"_s,
		"UZST"_s,
		u"우즈베키스탄 표준시"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"중국 표준시"_s,
		"XJT"_s,
		u"중국 일광절약시간"_s,
		"XJDT"_s,
		u"중국 표준시"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		u"야츠크 시간"_s,
		"YAKT"_s,
		u"야츠크 일광절약시간"_s,
		"YAKST"_s,
		u"야쿠츠크 표준시"_s,
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
				u"파라과이 시간"_s,
				"PYT"_s,
				u"파라과이 일광절약시간"_s,
				"PYST"_s,
				u"파라과이 표준시"_s,
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
				u"콜롬비아 시간"_s,
				"COT"_s,
				u"콜롬비아 일광절약시간"_s,
				"COST"_s,
				u"콜롬비아 표준시"_s,
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
				u"베네수엘라 시간"_s,
				"VET"_s,
				u"베네수엘라 일광절약시간"_s,
				"VEST"_s,
				u"베네수엘라 표준시"_s,
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
				u"프랑스령 기아나 시간"_s,
				"GFT"_s,
				u"프랑스령 기아나 일광절약시간"_s,
				"GFST"_s,
				u"프랑스령 기아나 표준시"_s,
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
				u"에쿠아도르 시간"_s,
				"ECT"_s,
				u"에쿠아도르 일광절약시간"_s,
				"ECST"_s,
				u"에콰도르 표준시"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				u"가이아나 시간"_s,
				"GYT"_s,
				u"가이아나 일광절약시간"_s,
				"GYST"_s,
				u"가이아나 표준시"_s,
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
				u"볼리비아 시간"_s,
				"BOT"_s,
				u"볼리비아 일광절약시간"_s,
				"BOST"_s,
				u"볼리비아 표준시"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				u"페루 시간"_s,
				"PET"_s,
				u"페루 일광절약시간"_s,
				"PEST"_s,
				u"페루 표준시"_s,
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
				u"피에르 미크론 표준시"_s,
				"PMST"_s,
				u"피에르 미크론 일광절약시간"_s,
				"PMDT"_s,
				u"피에르 미클롱 표준시"_s,
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
				u"우루과이 시간"_s,
				"UYT"_s,
				u"우루과이 일광절약시간"_s,
				"UYST"_s,
				u"우루과이 표준시"_s,
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
				u"수리남 시간"_s,
				"SRT"_s,
				u"수리남 일광절약시간"_s,
				"SRST"_s,
				u"수리남 표준시"_s,
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
				u"Davis 시간"_s,
				"DAVT"_s,
				u"Davis 일광절약시간"_s,
				"DAVST"_s,
				u"데이비스 표준시"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				u"뒤몽 뒤르빌 시간"_s,
				"DDUT"_s,
				u"뒤몽 뒤르빌 일광절약시간"_s,
				"DDUST"_s,
				u"두몬트우르빌 표준시"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				u"매콰리 섬 표준시"_s,
				"MIST"_s,
				u"매콰리 섬 일광 절약 시간"_s,
				"MIST"_s,
				u"매콰리 섬 표준시"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				u"모슨 시간"_s,
				"MAWT"_s,
				u"모슨 일광절약시간"_s,
				"MAWST"_s,
				u"마슨 표준시"_s,
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
				u"로제라 표준시"_s,
				"ROTT"_s,
				u"로제라 일광절약시간"_s,
				"ROTST"_s,
				u"로더라 표준시"_s,
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
				u"Syowa 시간"_s,
				"SYOT"_s,
				u"Syowa 일광절약시간"_s,
				"SYOST"_s,
				u"쇼와 표준시"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				u"세계 표준시"_s,
				"UTC"_s,
				u"중앙 유럽 일광절약시간"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				u"Vostok 시간"_s,
				"VOST"_s,
				u"Vostok 일광절약시간"_s,
				"VOSST"_s,
				u"보스톡 표준시"_s,
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
				u"알마아타 시간"_s,
				"ALMT"_s,
				u"알마아타 일광절약시간"_s,
				"ALMST"_s,
				u"알마아타 표준시"_s,
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
				u"아나디르 시간"_s,
				"ANAT"_s,
				u"아나디르 일광절약시간"_s,
				"ANAST"_s,
				u"아나디리 표준시"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				u"악타우 시간"_s,
				"AQTT"_s,
				u"악타우 일광절약시간"_s,
				"AQTST"_s,
				u"아크타우 표준시"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				u"악토브 시간"_s,
				"AQTT"_s,
				u"악토브 일광절약시간"_s,
				"AQTST"_s,
				u"아크토베 표준시"_s,
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
				u"아제르바이잔 시간"_s,
				"AZT"_s,
				u"아제르바이잔 일광절약시간"_s,
				"AZST"_s,
				u"아제르바이잔 표준시"_s,
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
				u"키르키즈스탄 시간"_s,
				"KGT"_s,
				u"키르기즈스탄 일광절약시간"_s,
				"KGST"_s,
				u"키르기스스탄 표준시"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				u"브루나이 시간"_s,
				"BNT"_s,
				u"브루나이 일광절약시간"_s,
				"BNST"_s,
				u"브루나이 표준시"_s,
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
				u"Choibalsan 시간"_s,
				"CHOT"_s,
				u"Choibalsan 일광절약시간"_s,
				"CHOST"_s,
				u"초이발산 표준시"_s,
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
				u"티모르-레스테 시간"_s,
				"TLT"_s,
				u"티모르-레스테 일광절약시간"_s,
				"TLST"_s,
				u"동티모르 표준시"_s,
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
				u"타지키스탄 시간"_s,
				"TJT"_s,
				u"타지키스탄 일광절약시간"_s,
				"TJST"_s,
				u"타지키스탄 표준시"_s,
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
				u"Hovd 시간"_s,
				"HOVT"_s,
				u"Hovd 일광절약시간"_s,
				"HOVST"_s,
				u"호브드 표준시"_s,
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
				u"동부 인도네시아 시간"_s,
				"WIT"_s,
				u"동부 인도네시아 일광절약시간"_s,
				"EIST"_s,
				u"동부 인도네시아 표준시"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				u"아프가니스탄 시간"_s,
				"AFT"_s,
				u"아프가니스탄 일광절약시간"_s,
				"AFST"_s,
				u"아프가니스탄 표준시"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				u"페트로파블로프스크-캄차츠키 시간"_s,
				"PETT"_s,
				u"페트로파블로프스크-캄차츠키 일광절약시간"_s,
				"PETST"_s,
				u"페트로파브로프스크-캄차츠키 표준시"_s,
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
				u"마가단 시간"_s,
				"MAGT"_s,
				u"마가단 일광절약시간"_s,
				"MAGST"_s,
				u"마가단 표준시"_s,
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
				u"Oral 표준시"_s,
				"ORAT"_s,
				u"Oral 일광절약시간"_s,
				"ORAST"_s,
				u"오럴 표준시"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				u"Omsk 시간"_s,
				"OMST"_s,
				u"Omsk 일광절약시간"_s,
				"OMSST"_s,
				u"옴스크 표준시"_s,
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
				u"Qyzylorda 표준시"_s,
				"QYZT"_s,
				u"Qyzylorda 일광절약시간"_s,
				"QYZST"_s,
				u"키질로르다 표준시"_s,
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
				u"사할린 시간"_s,
				"SAKT"_s,
				u"사할린 일광절약시간"_s,
				"SAKST"_s,
				u"사할린 표준시"_s,
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
				u"그루지야 시간"_s,
				"GET"_s,
				u"그루지야 일광절약시간"_s,
				"GEST"_s,
				u"그루지야 표준시"_s,
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
				u"우스티네라 표준시"_s,
				"VLAT"_s,
				u"우스티네라 일광 절약 시간"_s,
				"VLAST"_s,
				u"우스티네라 표준시"_s,
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
				u"블라디보스톡 시간"_s,
				"VLAT"_s,
				u"블라디보스톡 일광절약시간"_s,
				"VLAST"_s,
				u"블라디보스톡 표준시"_s,
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
				u"예카테린버그 시간"_s,
				"YEKT"_s,
				u"예카테린버그 일광절약시간"_s,
				"YEKST"_s,
				u"예카테린부르크 표준시"_s,
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
				u"아조레스 시간"_s,
				"AZOT"_s,
				u"아조레스 일광절약시간"_s,
				"AZOST"_s,
				u"아조레스 표준시"_s,
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
				u"까뽀베르데 시간"_s,
				"CVT"_s,
				u"까뽀베르데 일광절약시간"_s,
				"CVST"_s,
				u"케이프베르데 표준시"_s,
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
				u"사우스 조지아 표준시"_s,
				"GST"_s,
				u"사우스 조지아 일광절약시간"_s,
				"GDT"_s,
				u"사우스조지아 표준시"_s,
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
				u"포클랜드 군도 시간"_s,
				"FKT"_s,
				u"포클랜드 군도 일광절약시간"_s,
				"FKST"_s,
				u"포클랜드 제도 표준시"_s,
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
				u"중앙 서부 표준시(오스트레일리아)"_s,
				"ACWST"_s,
				u"중앙 서부 일광 절약 시간(오스트레일리아)"_s,
				"ACWDT"_s,
				u"중앙 서부 표준시(오스트레일리아)"_s,
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
				u"사마라 시간"_s,
				"SAMT"_s,
				u"사마라 일광절약시간"_s,
				"SAMST"_s,
				u"사마라 표준시"_s,
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
				u"영인도 제도 시간"_s,
				"IOT"_s,
				u"영인도 제도 일광절약시간"_s,
				"IOST"_s,
				u"인도양 식민지 표준시"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				u"크리스마스섬 시간"_s,
				"CXT"_s,
				u"크리스마스섬 일광절약시간"_s,
				"CXST"_s,
				u"크리스마스 섬 표준시"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				u"코코스 군도 시간"_s,
				"CCT"_s,
				u"코코스 군도 일광절약시간"_s,
				"CCST"_s,
				u"코코스 제도 표준시"_s,
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
				u"프랑스 남부 지방 및 남극 지역 시간"_s,
				"TFT"_s,
				u"프랑스 남부 지방 및 남극 지역 일광절약시간"_s,
				"TFST"_s,
				u"프랑스령 남부 및 남극 대륙 표준시"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				u"세이셀 시간"_s,
				"SCT"_s,
				u"세이쉘 일광절약시간"_s,
				"SCST"_s,
				u"세이셸 표준시"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				u"몰디브 시간"_s,
				"MVT"_s,
				u"몰디브 일광절약시간"_s,
				"MVST"_s,
				u"몰디브 표준시"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				u"모리셔스 시간"_s,
				"MUT"_s,
				u"모리셔스 일광절약시간"_s,
				"MUST"_s,
				u"모리셔스 표준시"_s,
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
				u"리유니언 시간"_s,
				"RET"_s,
				u"리유니언 일광절약시간"_s,
				"REST"_s,
				u"레위니옹 표준시"_s,
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
				u"중부 유럽 시간"_s,
				"MET"_s,
				u"중부 유럽 일광절약시간"_s,
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
				u"비누아투 시간"_s,
				"VUT"_s,
				u"바누아투 일광절약시간"_s,
				"VUST"_s,
				u"바누아투 표준시"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				u"피닉스 군도 시간"_s,
				"PHOT"_s,
				u"피닉스 군도 일광절약시간"_s,
				"PHOST"_s,
				u"피닉스 제도 표준시"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				u"토켈라우 시간"_s,
				"TKT"_s,
				u"토켈라우 일광절약시간"_s,
				"TKST"_s,
				u"토켈라우 표준시"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				u"피지 시간"_s,
				"FJT"_s,
				u"피지 일광절약시간"_s,
				"FJST"_s,
				u"피지 표준시"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				u"투발루 시간"_s,
				"TVT"_s,
				u"투발루 일광절약시간"_s,
				"TVST"_s,
				u"투발루 표준시"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				u"갈라파고스 시간"_s,
				"GALT"_s,
				u"갈라파고스 일광절약시간"_s,
				"GALST"_s,
				u"갈라파고스 표준시"_s,
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
				u"라인 군도 시간"_s,
				"LINT"_s,
				u"라인 군도 일광절약시간"_s,
				"LINST"_s,
				u"라인 제도 표준시"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				u"코스래 시간"_s,
				"KOST"_s,
				u"코스래 일광절약시간"_s,
				"KOSST"_s,
				u"코스레 표준시"_s,
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
				u"마르케사스 시간"_s,
				"MART"_s,
				u"마르케사스 일광절약시간"_s,
				"MARST"_s,
				u"마키저스 표준시"_s,
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
				u"나우루 시간"_s,
				"NRT"_s,
				u"나우루 일광절약시간"_s,
				"NRST"_s,
				u"나우루 표준시"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				u"니우에 시간"_s,
				"NUT"_s,
				u"니우에 일광절약시간"_s,
				"NUST"_s,
				u"니우에 표준시"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				u"노퍽 시간"_s,
				"NFT"_s,
				u"노퍽 일광절약시간"_s,
				"NFST"_s,
				u"노퍽 표준시"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				u"뉴 칼레도니아 시간"_s,
				"NCT"_s,
				u"뉴 칼레도니아 일광절약시간"_s,
				"NCST"_s,
				u"뉴 칼레도니아 표준시"_s,
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
				u"팔라우 시간"_s,
				"PWT"_s,
				u"팔라우 일광절약시간"_s,
				"PWST"_s,
				u"팔라우 표준시"_s,
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
				u"파푸아뉴기니 시간"_s,
				"PGT"_s,
				u"파푸아뉴기니 일광절약시간"_s,
				"PGST"_s,
				u"파푸아 뉴기니아 표준시"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				u"쿠크 군도 시간"_s,
				"CKT"_s,
				u"쿠크 군도 일광절약시간"_s,
				"CKHST"_s,
				u"쿡 제도 표준시"_s,
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
				u"타히티 시간"_s,
				"TAHT"_s,
				u"타히티 일광절약시간"_s,
				"TAHST"_s,
				u"타히티 표준시"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				u"길버트 군도 시간"_s,
				"GILT"_s,
				u"길버트 군도 일광절약시간"_s,
				"GILST"_s,
				u"길버트 제도 표준시"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				u"통가 시간"_s,
				"TOT"_s,
				u"통가 일광절약시간"_s,
				"TOST"_s,
				u"통가 표준시"_s,
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
				u"웨이크 시간"_s,
				"WAKT"_s,
				u"웨이크 일광절약시간"_s,
				"WAKST"_s,
				u"웨이크 표준시"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				u"월리스 후투나 시간"_s,
				"WFT"_s,
				u"월리스 후트나 일광절약시간"_s,
				"WFST"_s,
				u"월리스 푸투나 표준시"_s,
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

TimeZoneNames_ko::TimeZoneNames_ko() {
}

$Class* TimeZoneNames_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_ko",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_ko);
	});
	return class$;
}

$Class* TimeZoneNames_ko::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun