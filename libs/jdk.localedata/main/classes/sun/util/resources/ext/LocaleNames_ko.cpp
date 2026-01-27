#include <sun/util/resources/ext/LocaleNames_ko.h>

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

$MethodInfo _LocaleNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ko",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ko_MethodInfo_
};

$Object* allocate$LocaleNames_ko($Class* clazz) {
	return $of($alloc(LocaleNames_ko));
}

void LocaleNames_ko::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"세계"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"북아메리카"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"남아메리카[남미]"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"오세아니아, 대양주"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"서아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"중앙 아메리카"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"동부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"북부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"중부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"남부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"아메리카 대륙"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"북부 아메리카"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"카리브 해 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"동아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"남아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"동남 아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"남유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"오스트레일리아와 뉴질랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"멜라네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"마이크로네시아 지역"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"폴리네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"중앙 아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"서아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"동유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"북유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"서유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"라틴 아메리카 및 카리브 해 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"안도라"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"아랍에미리트"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"아프가니스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"앤티가 바부다"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"안길라"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"알바니아"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"아르메니아"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"네덜란드령 안틸레스"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"앙골라"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"남극"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"아르헨티나"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"미국령 사모아"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"오스트리아"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"오스트레일리아"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"아루바"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"올란드 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"아제르바이잔"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"아랍 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"제국 아람어"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"아르메니아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"아베스타어"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"보스니아 헤르체고비나"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"바베이도스"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"방글라데시"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"벨기에"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"부르키나파소"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"불가리아"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"바레인"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"부룬디"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"베넹"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"버뮤다"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"브루나이"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"볼리비아"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"브라질"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"바하마"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"부탄"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"부베이 섬"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"보츠와나"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"벨라루스"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"벨리즈"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"발리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"바뭄어"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"바사어"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"바타크 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"벵골 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"블리스기호 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"주음부호"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"브라미"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"브라유 점자"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"부기 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"부히드 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"캐나다"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"코코스 군도"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"콩고 민주 공화국"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"중앙 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"콩고"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"스위스"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"코트디부와르"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"쿡 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"칠레"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"카메룬"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"중국"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"콜롬비아"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"코스타리카"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"세르비아 몬테네그로(유고슬라비아)"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"쿠바"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"까뽀베르데"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"크리스마스 섬"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"사이프러스"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"체코"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"차크마어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"통합 캐나다 토착어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"카리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"칸 고어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"체로키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"키르쓰"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"콥트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"키프로스 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"키릴 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"고대교회슬라브어 키릴문자"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"독일"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"지부티"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"덴마크"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"도미니카"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"도미니카 공화국"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"알제리"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"데바나가리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"디저렛 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"듀플로이안 속기"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"에쿠아도르"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"에스토니아"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"이집트"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"서사하라"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"에리트리아"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"스페인"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"이디오피아"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"고대 이집트 민중문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"고대 이집트 신관문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"고대 이집트 신성문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"엘바산어"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"에티오피아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"핀란드"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"피지"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"포클랜드 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"마이크로네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"페로 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"프랑스"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"가봉"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"영국"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"그레나다"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"그루지야"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"프랑스령 기아나"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"가나"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"지브롤터"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"그린랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"감비아"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"기니"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"과달로프"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"적도 기니"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"그리스"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"사우스 조지아 및 사우스 샌드위치 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"과테말라"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"괌"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"기네비쏘"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"가이아나"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"쿠추리어"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"그루지야 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"글라골 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"고트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"그란타어"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"그리스 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"구자라트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"구르무키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"홍콩"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"허드 섬 및 맥도널드 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"온두라스"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"크로아티아"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"하이티"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"헝가리"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"한글"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"한자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"하누누 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"한자(간체)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"한자(번체)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"히브리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"히라가나"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"파화 흐몽"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"가타카나/히라가나"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"고대 헝가리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"인도네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"아일랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"이스라엘"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"인도"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"영인도 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"이라크"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"이란"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"아이슬란드"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"이탈리아"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"인더스 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"고대 이탈리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"자메이카"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"요르단"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"일본"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"자바 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"일본 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"케냐"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"키르기스스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"캄보디아"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"키리바시"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"코모르"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"세인트 크리스토퍼 니비스"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"북한"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"대한민국"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"쿠웨이트"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"케이맨 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"카자흐스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"카야 리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"가타카나"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"카로슈티 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"크메르 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"칸나다 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"한국어"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"크펠레어"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"카이티어"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"라오스"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"레바논"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"세인트 루시아"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"리히텐슈타인"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"스리랑카"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"라이베리아"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"레소토"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"리투아니아"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"룩셈부르크"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"라트비아"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"리비아"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"란나 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"라오 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"독일식 로마자"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"아일랜드식 로마자"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"로마자"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"렙차 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"림부 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"선형 문자 A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"선형 문자 B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"리수어"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"로마어"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"리키아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"리디아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"모로코"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"모나코"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"몰도바"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"몬테네그로"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"마다가스카르"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"마셜 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"마케도니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"말리"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"미얀마"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"몽골"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"마카오"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"북마리아나 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"말티니크"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"모리타니"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"몬트세라트"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"몰타"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"모리셔스"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"몰디브"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"말라위"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"멕시코"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"말레이지아"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"모잠비크"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"만다이아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"마니어"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"마야 상형 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"멘데어"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"메로에 문자 흘림"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"메로에 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"말라얄람 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"몽골 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"문식 선문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"메이테이어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"미얀마 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"나미비아"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"뉴 칼레도니아"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"니제르"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"노퍽 섬"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"나이지리아"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"니카라과"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"네덜란드"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"노르웨이"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"네팔"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"나우루"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"니우에"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"뉴질랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"고대 북아라비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"나바티아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"나시 게바어"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"응코어"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"오만"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"오검 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"올치키어"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"오르혼어"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"오리야 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"오스마니아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"파나마"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"페루"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"프랑스령 폴리네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"파푸아뉴기니"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"필리핀"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"파키스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"폴란드"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"세인트 피에르 미켈론"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"핏케언 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"푸에르토리코"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"팔레스타인"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"포르투칼"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"팔라우"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"파라과이"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"팔미라어"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"고대 페름 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"파스파어"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"초기 팔레비어"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"중기 팔레비어"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"후기 팔레비어"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"페니키아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"먀오어"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"파르티아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"카타르"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"리유니언"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"루마니아"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"세르비아"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"러시아"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"르완다"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"레장어"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"롱고롱고어"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"룬 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"사우디아라비아"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"솔로몬 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"쉐이쉘"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"수단"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"스웨덴"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"싱가포르"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"세인트 헬레나"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"슬로베니아"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"스발바르 및 얀마웬"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"슬로바키아"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"시에라리온"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"산마리노"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"세네갈"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"소말리아"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"수리남"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"상투메 프린시페"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"엘살바도르"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"시리아"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"스와질랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"사마리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"사라티어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"고대 남아라비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"사우라슈트라어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"수화 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"샤비안 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"신디어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"스리랑카어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"순단어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"실헤티 나가리"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"에스트랑겔로식 시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"서부 시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"동부 시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"터크스 케이커스 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"차드"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"프랑스 남부 지방"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"토고"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"태국"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"타지키스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"토켈라우"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"동티모르"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"투르크메니스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"튀니지"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"통가"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"터키"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"트리니다드 토바고"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"투발루"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"대만"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"탄자니아"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"타그반와 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"타이 레 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"신 타이 루에"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"타밀 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"타이 비엣어"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"텔루구 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"텡과르 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"티피나그 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"타갈로그 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"타나 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"타이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"티베트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"우크라이나"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"우간다"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"미국령 군도"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"미국"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"우루과이"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"우즈베키스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"우가리트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"바티칸"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"세인트 빈센트 그레나딘스"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"베네수엘라"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"영국령 버진 아일랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"미국령 버진 아일랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"베트남"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"바누아투"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"바이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"시화 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"윌리스 푸투나"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"사모아"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"와룽 시티어"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"고대 페르시아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"수메르-아카드 설형 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"예멘"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"마요티"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"남아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"잠비아"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"짐바브웨"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"상속 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"수학 표기"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"기호"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"작성되지 않음"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"일반 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"기록되지 않은 문자(구전)"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"아파르어"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of(u"아파르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"압카즈어"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of(u"아브하즈어"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"아체어"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"아콜리어"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"아당메어"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"아닥헤어"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"아베스타어"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"남아공 공용어"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"아프가니(1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"아프리히리어"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of(u"남아공 공용어"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"아이누어"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"아칸어"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of(u"아칸어"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"아카드어"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of(u"알바니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"알류트어"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of(u"알공킨어족"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"남부 알타이제어"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"암하라어"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of(u"암하라어"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"아라곤어"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"네덜란드령 안틸레스 길더"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"앙가어"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of(u"아파치어"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"아람어"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of(u"아라곤어"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"아르메니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"아라우칸어"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"아라파호어"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of(u"기계어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"아라와크어"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"아샘어"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of(u"아샘어"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"아스투리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of(u"아타파스카어군"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of(u"오스트레일리아어족"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"아바르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of(u"아바르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of(u"아베스타어"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"아와히어"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"아이마라어"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of(u"아이마라어"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"아제르바이잔어"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of(u"아제르바이잔어"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"바슈키르어"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"보스니아-헤르체고비나 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of(u"바밀레케어족"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of(u"바슈키르어"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"발루치어"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"밤바라어"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"발리어"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of(u"바스크어"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"바사어"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of(u"발트어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"벨로루시어"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"베자어"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"벨라루스어"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"벰바어"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of(u"벵골어"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of(u"베르베르어"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"불가리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"비하르어"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"호즈푸리어"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"비슬라마어"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of(u"비하르어"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"비콜어"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"비니어"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of(u"비슬라마어"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"식시카어"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"밤바라어"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"벵골어"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of(u"반투어"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"티베트어"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of(u"보스니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"브르타뉴어"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"브라지어"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"브라질 크루제이루 (1990-1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"보스니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of(u"바타크어"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"부리아타"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"부기어"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of(u"불가리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of(u"버마어"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"브린어"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"카탈로니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"카도어"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of(u"중앙 아메리카 인디안어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"카리브어"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of(u"카탈로니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of(u"카프카스어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"체첸어"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"세부아노어"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of(u"켈트어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"차모로어"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of(u"차모로어"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"치브차어"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"체첸어"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"차가타이어"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of(u"중국어"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"추크어"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"마리어"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"치누크어와 영어 프랑스어의 혼성어"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"촉토어"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"치페우얀"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"체로키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of(u"교회 슬라브어"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of(u"추바쉬어"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"샤이엔어"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of(u"참어군"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"코르시카어"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"콥트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of(u"콘월어"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of(u"코르시카어"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"크리올어 및 피진어(영어를 기반으로 한 기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"크리올어 및 피진어(프랑스어를 기반으로 한 기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"크리올어 및 피진어(포르투칼어를 기반으로 한 기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"크리어"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of(u"크리어"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"크리민 터키어; 크리민 타타르어"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of(u"크리올어 및 피진어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"체코어"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"카슈비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"교회 슬라브어"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of(u"쿠시어족"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"추바쉬어"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"웨일스어"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of(u"체코어"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"덴마크어"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"다코타어"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of(u"덴마크어"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"다르그와어"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of(u"다야크어"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"델라웨어어"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"슬라브어"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"도그리브어"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"딩카어"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of(u"디베히어"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"도그리어"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of(u"드라비다어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"저지 소르비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"드와라어"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"중세 네덜란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"네덜란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"디베히어"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"드율라어"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"부탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of(u"부탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"에웨어"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"이픽어"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"이집트어 (고대)"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"이카죽어"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"그리스어"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"엘람어"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"영어"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of(u"영어"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"영어, 중세(1100 - 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"에스페란토어"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of(u"에스페란토어"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"스페인어"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of(u"에스토니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"에스토니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"바스크어"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of(u"에웨어"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"이원도어"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"이란어"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"팡그어"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"페로스어"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"판티어"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"풀라니어"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"핀란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of(u"피지어"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"필리핀어"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of(u"핀란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of(u"피노우그리아어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"피지어"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"페로스어"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"폰어"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"중세 프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"고대 프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"북부 프리슬란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"동부 프리슬란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of(u"서부 프리슬란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of(u"풀라니어"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"프리우리안어"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"프리지아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"아일랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"가어"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"가요어"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"그바야어"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"스코갤릭어"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of(u"독일어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of(u"그루지야어"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of(u"독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"게이즈어"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"키리바시어"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"갈리시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of(u"게일어"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of(u"아일랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of(u"갈리시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of(u"맹크스어"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"중세 고지 독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"구아라니어"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"고대 고지 독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"곤디어"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"고론탈로어"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"고트어"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"게르보어"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"그리스어, 고대 (1453년까지)"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of(u"그리스어, 근세(1453년부터)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of(u"구아라니어"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"독일어(스위스)"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"구자라트어"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of(u"구자라트어"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"맹크스어"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"그위친어"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"하우자어"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"하이다어"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of(u"아이티어"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of(u"하우자어"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"하와이어"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"히브리어"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of(u"히브리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of(u"헤레로어"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"힌디어"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"헤리가뇬어"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of(u"히마차리어"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of(u"힌디어"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"하타이트어"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"히몸어"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of(u"히리모투어"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"히리모투어"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"크로아티아어"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of(u"크로아티아어"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"고지 소르비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"아이티어"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"헝가리어"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of(u"헝가리어"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"후파어"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"아르메니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"헤레로어"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"인터링거"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"이반어"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of(u"이그보어"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of(u"아이슬란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"인도네시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of(u"이도어"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"인터링게어"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"이그보어"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"쓰촨 이어"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of(u"쓰촨 이어"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of(u"이조어"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"이누피아크어"_s)
		}),
		$$new($ObjectArray, {
			$of("iku"_s),
			$of(u"이눅티투트어"_s)
		}),
		$$new($ObjectArray, {
			$of("ile"_s),
			$of(u"인터링게어"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"이로코어"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"인도네시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of(u"인터링거(국제 보조 언어 협회)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of(u"인도어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of(u"인도네시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of(u"인도유럽어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"인귀시어"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"이도어"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of(u"이누피아크어"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of(u"이란어 [ira]"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of(u"이러쿼이어"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"아이슬란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"이탈리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ita"_s),
			$of(u"이탈리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"이눅티투트어"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"히브리어"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"일본어"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of(u"자바어"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"로반어"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"이디시어"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of(u"일본어"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"유대-페르시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"유대-아라비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"자바어"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"그루지야어"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"카라칼파크어"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"커바일어"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"카친어"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of(u"칼랄리수트"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"캄바어"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of(u"칸나다 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of(u"카렌어"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of(u"카슈미르어"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of(u"카누리어"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"카위어"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of(u"카자흐어"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"카바르디어"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"콩고어"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"카시어"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of(u"코이산어"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of(u"중앙 크메르 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"호탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"키쿠유어"_s)
		}),
		$$new($ObjectArray, {
			$of("kik"_s),
			$of(u"키쿠유어"_s)
		}),
		$$new($ObjectArray, {
			$of("kin"_s),
			$of(u"반투어(루완다)"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of(u"키르기스어"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"콴야마어"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"카자흐어"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"그린랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"캄보디아어"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"킴분두어"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"카나다어"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"한국어"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"코카니어"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of(u"코미어"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of(u"콩고어"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of(u"한국어"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"코스라이엔어"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"크펠레어"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"카누리어"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"카라챠이-발카르어"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"카렐리야어"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"크루어"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"쿠르크어"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"카슈미르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"크르드어"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of(u"쿠안야마어"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"쿠믹어"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of(u"크르드어"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"쿠테네어"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"코미어"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"콘월어"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"키르기스어"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"라틴어"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"라디노어"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"라한다어"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"람바어"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of(u"라오어"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of(u"라틴어"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of(u"라트비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"룩셈부르크어"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"레즈기안어"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"간다어"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"림버그어"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of(u"림버그어"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of(u"링갈라어"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of(u"리투아니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"링갈라어"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"라오어"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"몽구어"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"로지어"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"리투아니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of(u"룩셈부르크어"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"루바어(카탕가)"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"루바-룰루아어"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of(u"루바어(카탕가)"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of(u"간다어"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"루이세노어"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"룬다어"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"루오어"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"루샤이어"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"라트비아어(레트어)"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of(u"마케도니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"모로코 디렘"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"마가히"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of(u"말살레스어"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"마이틸리"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"마카사어"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of(u"말라얄람어"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"만딩고어"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of(u"마오리어"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of(u"남도어"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of(u"마라티어"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"마사이어"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of(u"말레이어"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"모크샤어"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"만다르어"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"멘데어"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"마다가스카르어"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"아일랜드어, 중세(900 - 1200년)"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"마셜제도어"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"마오리어"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"미크맥어"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"미낭카바우"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of(u"기타 언어"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"마케도니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of(u"몬크메르어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"말라얄람어"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of(u"마다가스카르어"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of(u"몰타어"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"몽골어"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"만주어"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"마니푸리어"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of(u"마노보어"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"몰다비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"모호크어"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of(u"몽골어"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"모시어"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"마라티어"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"말레이어"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"몰타어"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"다중 언어"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of(u"문다어"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"크리크어"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"미란데어"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"마르와리어"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"버마어"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of(u"마야어"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"엘즈야어"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"나우루어"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of(u"나우아틀어"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of(u"북아메리카 인디언어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"나폴리어"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of(u"나우루어"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of(u"나바호어"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"노르웨이어(북몰)"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of(u"데베레어, 남부"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"북부 은데벨레"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of(u"데베레어, 북부"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of(u"은동가어"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"저지 독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"네팔어"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of(u"네팔어"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"네와르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"은동가어"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"니아스어"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"니카라과 코르도바"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"니웨언어"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"네덜란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"노르웨이어(니노르스크)"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of(u"노르웨이어(니노르스크)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"노르웨이어"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"노르웨이어(북몰)"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"노가이어"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"노르웨이, 고대"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of(u"노르웨이어"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"응코어"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"남부 은데벨레"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"소토어(북부)"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of(u"누비안어"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"나바호어"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"네와르어 (고전)"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"니얀자어"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of(u"치체와어"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"니암웨지어"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"니안콜어"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"뉴로어"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"느지마어"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"옥시트어"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of(u"옥시트어(1500년 이후)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"오지브와어"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of(u"오지브와어"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"오로모어(아판)"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"오리야어"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of(u"오리야어"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of(u"오로모어"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"오세티안어"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"오세이지어"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of(u"오세티안어"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"터키어, 오스만(1500-1928)"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of(u"오토미안어"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"펀잡어"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of(u"파푸아어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"판가시난어"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"팔레비어"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"팜팡가어"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of(u"펀잡어"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"파피아먼토어"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"파라우안어"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"고대 페르시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of(u"페르시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of(u"필리핀어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"페니키아어"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"팔리어"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"폴란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of(u"팔리어"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of(u"폴란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"폼페이어"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of(u"포르투칼어"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of(u"프라크리트어"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"고대 프로방스어"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"파시토어(푸시토)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"포르투칼어"_s)
		}),
		$$new($ObjectArray, {
			$of("pus"_s),
			$of(u"파슈토(파슈토어)"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"케추아어"_s)
		}),
		$$new($ObjectArray, {
			$of("que"_s),
			$of(u"케추아어"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"라자스탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"라파뉴이"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"라로통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"레토로만어"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"반투어(부룬디)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"루마니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of(u"로망스어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of(u"로망슈어"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"집시어"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"러시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of(u"루마니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of(u"룬디어"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"아로마니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of(u"러시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"반투어(루완다)"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"산스크리트어"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"산다웨어"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of(u"산고어"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"야큐트어"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"남아메리카 인디언어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of(u"샐리시어어"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"사마리아 아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of(u"산스크리트어"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"사사크어"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"산탈리어"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"사르디니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"시칠리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"스코틀랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"신디어"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"북부 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"셀쿠프어"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"셈어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"산고어"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"아일랜드, 고대 (900년까지)"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of(u"수화"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"샨어"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"스리랑카어"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"시다모어"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of(u"스리랑카어"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of(u"수족어"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"슬로베니아 톨라르"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"슬로바키아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"슬로베니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of(u"슬라브어"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of(u"슬로바키아어"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of(u"슬로베니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"사모아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"남부 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of(u"북부 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of(u"사미어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"룰레 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"이나리 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of(u"사모아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"스콜트 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"쇼나어"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of(u"쇼나어"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of(u"신디어"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"소닌케어"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"소말리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"소그디엔어"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of(u"소말리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of(u"송가이족어"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of(u"소토어, 남부"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of(u"스페인어"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"알바니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"세르비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"사르디니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"스라난 통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of(u"세르비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"세레르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"시스와티어"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of(u"니로-사하람어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of(u"시스와티어"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"세소토어"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"순단어"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"수쿠마족어"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of(u"순단어"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"수수어"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"수메르어"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"스웨덴어"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"스와힐리어"_s)
		}),
		$$new($ObjectArray, {
			$of("swa"_s),
			$of(u"스와힐리어"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of(u"스웨덴어"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"시리아어(고전)"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"시리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"타밀어"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of(u"타히티안어"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of(u"태국어(기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of(u"타밀어"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of(u"타타르어"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"텔루구어"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of(u"텔루구어"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"팀니어"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"테레노어"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"테툼어"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"타지키스탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of(u"타지키스탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of(u"타갈로그어"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"태국어"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"태국어"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"티그리냐어"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of(u"티베트어"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"티그레어"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of(u"티그리냐어"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"티비어"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"투르크멘어"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"토켈라우제도"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"타갈로그어"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"클링온어"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"틀링깃족어"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"타마섹어"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"세츠와나어"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"통가어(니아살랜드)"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of(u"통가어(통가 섬)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"토크 피신어"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"터키어"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"트심시안어"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of(u"세츠와나어"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of(u"통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"타타르어"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of(u"투르크멘어"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"툼부카어"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of(u"투피어"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of(u"터키어"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of(u"알타이제어 (기타)"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"투발루어"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"트위어"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of(u"트위어"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"타히티안어"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"투비니안어"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"우드말트어"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"위구르어"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"우가리트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of(u"위구르어"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"우크라이나어"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of(u"우크라이나어"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"윤번두어"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"결정되지않음"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"우르두어"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of(u"우르두어"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"우즈베크어"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of(u"우즈베크어"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"바이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"벤다어"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of(u"벤다어"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"베트남어"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of(u"베트남어"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"볼라퓌크어"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"볼라퓌크어"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"보틱어"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"왈룬어"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of(u"와카샨어"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"와라모어"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"와라이어"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"와쇼어"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of(u"웨일스어"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of(u"소르브어"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of(u"왈룬어"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"올로프어"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of(u"올로프어"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"칼미크어"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"반투어(남아프리카)"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of(u"반투어(남아프리카)"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"야오족어"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"얍페세어"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"이디시어"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of(u"이디시어"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"요루바어"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of(u"요루바어"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of(u"야픽어"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"주앙어"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"사포테크어"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"블리스기호 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"제나가어"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"중국어"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of(u"주앙어"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of(u"아잔데족어"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"줄루어"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of(u"줄루어"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"주니어"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"언어 콘텐츠 없음"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"자자어"_s)
		})
	});
}

LocaleNames_ko::LocaleNames_ko() {
}

$Class* LocaleNames_ko::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ko, name, initialize, &_LocaleNames_ko_ClassInfo_, allocate$LocaleNames_ko);
	return class$;
}

$Class* LocaleNames_ko::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun