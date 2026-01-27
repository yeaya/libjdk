#include <sun/util/resources/cldr/ext/LocaleNames_ko.h>

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

$MethodInfo _LocaleNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ko",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ko_MethodInfo_
};

$Object* allocate$LocaleNames_ko($Class* clazz) {
	return $of($alloc(LocaleNames_ko));
}

void LocaleNames_ko::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_GH, u"가나"_s);
	$var($String, metaValue_key_nu, u"숫자"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"콜로그니안어"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"오검 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"미란데어"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"기호"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"앗삼어"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"마르와리어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"타이 탐탐 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"타그반와 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"이모티콘"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"차크마어"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"고대 이집트어"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"라자스탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"파스파 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"팀니어"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"테조어"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"라파뉴이"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"테레노어"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"어센션 섬"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"라로통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"테툼어"_s)
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
			$of("nl_BE"_s),
			$of(u"플라망어"_s)
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
			$of("type.ca.ethiopic"_s),
			$of(u"에티오피아력"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"길라키어"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"앵귈라"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"시간대"_s)
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
			$of("Teng"_s),
			$of(u"텡과르 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"앙골라"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"남극 대륙"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"아르헨티나"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"명문 파라티아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"아메리칸 사모아"_s)
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
			$of("mye"_s),
			$of(u"미예네어"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"아제르바이잔"_s)
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
			$of("ceb"_s),
			$of(u"세부아노어"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"방글라데시"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"쿠믹어"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"벨기에"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"중세 고지 독일어"_s)
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
			$of(u"베냉"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"생바르텔레미"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"버뮤다"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"쿠테네어"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"엘즈야어"_s)
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
			$of("BQ"_s),
			$of(u"네덜란드령 카리브"_s)
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
			$of("xog"_s),
			$of(u"소가어"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"부탄"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"부베섬"_s)
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
			$of("Visp"_s),
			$of(u"시화법"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"페르시안력"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"히브리 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"캐나다"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"코코스 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"마잔데라니어"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"콩고-킨샤사"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"중앙 아프리카 공화국"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"콩고-브라자빌"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"스위스"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"코트디부아르"_s)
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
			$of("Kthi"_s),
			$of(u"카이시 문자"_s)
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
			$of("CP"_s),
			$of(u"클리퍼턴섬"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"코스타리카"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"쿠바"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"카보베르데"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"퀴라소"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"크리스마스섬"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"키프로스"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"발리 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"체코"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"이카죽어"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"독일"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"고대 고지 독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"아체어"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"치가어"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"디에고 가르시아"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"고아 콘칸어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"데바나가리 숫자"_s)
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
			$of("ach"_s),
			$of(u"아콜리어"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"곤디어"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"브라유 점자"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"브라미"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"도미니카"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"아르메니아 소문자 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"도미니카 공화국"_s)
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
			$of("Mtei"_s),
			$of(u"메이테이 마옉 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"주니어"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"티그레어"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"타크리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"알제리"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"판가시난어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"반각"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"팔레비어"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"세우타 및 멜리야"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"치브차어"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"팜팡가어"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"에콰도르"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"파피아먼토어"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"아당메어"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"에스토니아"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"티브어"_s)
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
			$of("chg"_s),
			$of(u"차가타이어"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"팔라우어"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"추크어"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"치누크 자곤"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"마리어"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"치페우얀"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"촉토어"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"체로키어"_s)
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
			$of(u"에티오피아"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"유럽 연합"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"엘람어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"양력"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"유로존"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"샤이엔어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"구자라트 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"인더스 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"아디게어"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"튀니지 아랍어"_s)
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
			$of(u"미크로네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"방언"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"페로 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"타밀 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"프랑스"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"크펠레 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"토켈라우제도어"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"게르보어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"인도력"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"고대 그리스어"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"가봉"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"차후르어"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"보틱어"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"영국"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"나이지리아 피진어"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"그레나다"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"조지아"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"프랑스령 기아나"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"건지"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(metaValue_GH)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"타이 레 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"지브롤터"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"아프리힐리어"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"그린란드"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"중세 영어"_s)
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
			$of(u"과들루프"_s)
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
			$of(u"사우스조지아 사우스샌드위치 제도"_s)
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
			$of(u"기니비사우"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"틀링깃족어"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"클링온어"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"신 타이 루에"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"가이아나"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"소라니 쿠르드어"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"언어 관련 내용 없음"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"줄첸 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"탈리쉬어"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"홍콩(중국 특별행정구)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"바이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"허드 맥도널드 제도"_s)
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
			$of("agq"_s),
			$of(u"아그햄어"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"독일어(스위스)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"이슬람력(움 알 쿠라)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"아이티"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"헝가리"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"타마섹어"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"카나리아 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"민난어"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"인도네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"고대 페르시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"카야 리식 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"아일랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"나폴리어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"느듀카 방언"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"나마어"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"자자어"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"탕구트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"이스라엘"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"나바테아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"맨섬"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"인도"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"유럽 정렬 규칙"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"영국령 인도양 식민지"_s)
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
			$of("Zmth"_s),
			$of(u"수학 기호"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"태국 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Computer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"뱅골 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"저지"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"이슬람력"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"자메이카"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"벵골 문자"_s)
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
			$of("%%1606NICT"_s),
			$of(u"중세 후기 프랑스어(1606년까지)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"아이누어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"멘데 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"구시어"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"니아사 통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"칸나다 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"카야 리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"실담자"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"고지 독일어(스위스)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"소리나는 대로 정렬 순서"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"불교력"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"케냐"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"라틴 아메리카"_s)
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
			$of(u"코모로"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"세인트키츠 네비스"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"칸나다 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"구전 문자"_s)
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
			$of("Plrd"_s),
			$of(u"폴라드 표음 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"쿠웨이트"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"토크 피신어"_s)
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
			$of("Cyrl"_s),
			$of(u"키릴 문자"_s)
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
			$of(u"세인트루시아"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"페니키아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"고대교회슬라브어 키릴문자"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"그위친어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"루나1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"저지 독일어"_s)
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
			$of("akk"_s),
			$of(u"아카드어"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"콥트어"_s)
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
			$of("Phlv"_s),
			$of(u"북 팔라비 문자"_s)
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
			$of("Kana"_s),
			$of(u"가타카나"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"소라 솜펭 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"리비아"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"라디노어"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"분조어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"라우키카"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"라한다어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"마하자니 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"랑기어"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"타나 문자"_s)
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
			$of("Nshu"_s),
			$of(u"누슈 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"몬테네그로"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"생마르탱"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"람바어"_s)
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
			$of("ale"_s),
			$of(u"알류트어"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"타이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"바이 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"북마케도니아"_s)
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
			$of("new"_s),
			$of(u"네와르어"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"마카오(중국 특별행정구)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"북마리아나제도"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"마르티니크"_s)
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
			$of("type.m0.ungegn"_s),
			$of(u"유엔 지명전문가 그룹(UNGEGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"모리셔스"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"남부 알타이어"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"일본력"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"말레이시아"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"모잠비크"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"명문 팔라비 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"나미비아"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"사하라 사막 이남 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"히브리력"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"사전 정렬순"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"뉴칼레도니아"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"통합 개정 표기법"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"니제르"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"노퍽섬"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"나이지리아"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"타로코어"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"솔터 팔라비 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"니카라과"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"파하우 몽 문자"_s)
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
			$of("Phnx"_s),
			$of(u"페니키아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"롬보어"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"트심시안어"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"뉴질랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"메로에 필기체"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"집시어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"메로에 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"크리민 터키어; 크리민 타타르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"고대 영어"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"오만"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"앙가어"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"세이셸 크리올 프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"고대 페르시아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"파나마"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"이슬람 상용력"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"카슈비아어"_s)
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
			$of("ewo"_s),
			$of(u"이원도어"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"생피에르 미클롱"_s)
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
			$of(u"팔레스타인 지구"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"발리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"포르투갈"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"팔라우"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"니아스어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"그리스어 소문자 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"파라과이"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"툼부카어"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"히브리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"카타르"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"스코틀랜드 표준 영어"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"니웨언어"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"오세아니아 외곽"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"레즈기안어"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"투발루어"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"태국 베트남 문자"_s)
		}),
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
			$of("RE"_s),
			$of(u"레위니옹"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"남아메리카"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"링구아 프랑카 노바"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"로반어"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"폰틱어"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"레장 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"오세아니아"_s)
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
			$of("Mroo"_s),
			$of(u"므로 문자"_s)
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
			$of("Mani"_s),
			$of(u"마니교 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"우가리트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"카로슈티 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"사우디아라비아"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"폼페이어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"만다이아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"솔로몬 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"타사와크어"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"서부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"세이셸"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"수단"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"중앙 아메리카"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"스웨덴"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"동부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"아람어"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"로마 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"북부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"싱가포르"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"세인트헬레나"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"줄바꿈 - 좁게"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"중부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"슬로베니아"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"남부 아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"스발바르제도-얀마웬섬"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"아메리카 대륙"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"슬로바키아"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"바뭄 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"울레아이"_s)
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
			$of("arn"_s),
			$of(u"마푸둥군어"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"아라파호어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"고대 타밀 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"수리남"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"남수단"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"상투메 프린시페"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"알제리 아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"엘살바도르"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"아랍어(나즈디)"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"신트마르턴"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"시리아"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"야오족어"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"에스와티니"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"아라와크어"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"이집트 아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"모로코 아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"얍페세어"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"트리스탄다쿠나"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"아수어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"미국 계량법"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"북부 아메리카"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"터크스 케이커스 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"양본어"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"차드"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"저지 문자"_s)
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
			$of("029"_s),
			$of(u"카리브 제도"_s)
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
			$of("ybb"_s),
			$of(u"옘바어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"한글 자음으로 검색"_s)
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
			$of("ast"_s),
			$of(u"아스투리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"루신어"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"오르혼어"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"탄자니아"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"크와시오어"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"알 수 없는 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"쿠다와디 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"우크라이나"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"아로마니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"동아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"투비니안어"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"콩고 스와힐리어"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"남아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"하이다어"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"동남아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"우간다"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"하카어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"병음순"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"남유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"신할라 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"미국령 해외 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"국제연합"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"미국"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"하와이어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"중국어 간체 정렬 순서 (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"우루과이"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"프러시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"우즈베키스탄"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"중앙 모로코 타마지트어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"자획순"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"느기엠본어"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"바티칸 시국"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"고대 프로방스어"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"세인트빈센트그레나딘"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"베네수엘라"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"영국령 버진아일랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"미국령 버진아일랜드"_s)
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
			$of("nog"_s),
			$of(u"노가이어"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"르와어"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"고대 노르웨이어"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"오스트랄라시아"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"멜라네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"왈리스-푸투나 제도"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"전통 역법"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"미크로네시아 지역"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"응곰바어"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"라코타어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"재무 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"헵번식 로마자 표기법"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"호환성을 위해 이전 정렬 순서"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"월저어"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"사모아"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"바사바흐 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"메이테이 마옉 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"월라이타어"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"와쇼어"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"유사 억양"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"와라이어"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"유사 양방향"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"아와히어"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"폴리네시아"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"코소보"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"브라미 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"구자라트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"구전"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"올 치키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"왈피리어"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"바타크 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"블리스기호 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"예멘"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"응코어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"표준 정렬 순서"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"팡그어"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"판티어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"수화 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"마요트"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"참 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"남아프리카"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"순다 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"줄바꿈 - 넓게"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"데바나가리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"조지아 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"주음순"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"히라가나"_s)
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
			$of("ZZ"_s),
			$of(u"알려지지 않은 지역"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"룬 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"미터법"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 달력"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"몽고어"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"북부 소토어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"텔루구 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"루이지애나 크리올어"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"로지어"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"나시 게바 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"마차메어"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"피지 힌디어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"중국어 간체 재무 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"헤리가뇬어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"확장형 아라비아-인도식 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"누에르어"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"다코타어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"전자 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"하타이트어"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"다르그와어"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"타이타어"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"마야 상형 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"북부 루리어"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"콥트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"고전 네와르어"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"우드말트어"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"크메르 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"림부 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"산다웨어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"로마 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"야쿠트어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"샤라다 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"사마리아 아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"코카시안 알바니아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"삼부루어"_s)
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
			$of("Tfng"_s),
			$of(u"티피나그 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"유대-페르시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"기본 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"느감바이어"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"구르무키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"알루꾸 방언"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"루바-룰루아어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"비스카얀"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"전각"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"상구어"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"루이세노어"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"니안콜어"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"니암웨지어"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"룬다어"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"뉴로어"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"루오어"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"필리핀어"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"히몸어"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"델라웨어어"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"루샤이어"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"발루치어"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"슬라브어"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"발리어"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"유가리틱어"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"루야어"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"바사어"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"바문어"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"유대-아라비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"스페인어(유럽)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"느지마어"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"스코틀랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"시칠리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"아파르어"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"압카즈어"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"나스탈리크체"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"아베스타어"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"아프리칸스어"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"아칸어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"챠크마 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"고말라어"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"암하라어"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"아라곤어"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"아랍 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"일본 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(metaValue_GH)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"아삼어"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"선형 문자(A)"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"아바릭어"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"선형 문자(B)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"남부 쿠르드어"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"아이마라어"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"아제르바이잔어"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"코즈키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"바슈키르어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"부수순"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"벨라루스어"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"불가리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"비슬라마어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"자바 숫자"_s)
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
			$of("bo"_s),
			$of(u"티베트어"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"도그리브어"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"브르타뉴어"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"보스니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"세네카어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"미얀마 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"라오 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"세나어"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"응코 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"셀쿠프어"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"카탈로니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"코이야보로 세니어"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"체첸어"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"차모로어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"개정"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"코르시카어"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"오리야 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"크리어"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"체코어"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"교회 슬라브어"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"추바시어"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"웨일스어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"에티오피아 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"이 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"덴마크어"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"포르투갈어(유럽)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"독일어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"표준 통화 형식"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"베자어"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"딩카어"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"부기 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"벰바어"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"고대 아일랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"몽골 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"디베히어"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"종카어"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"베나어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"음력"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"프레이저 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"자르마어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"그리스 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"에웨어"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"바푸트어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"줄바꿈 - 보통"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"몰도바어"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"그리스어"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"영어"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"에스페란토어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"중국어 번체 정렬 순서 (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"스페인어"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"에스토니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"주음 자모"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"바스크어"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"부히드 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"한글"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"사마리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"타셸히트어"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"고지 소르비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"한자"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"얼스터"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"샨어"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"하누누 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"페르시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"간체"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"서양 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"번체"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"풀라어"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"차디언 아라비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"샹어"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"핀란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"피지어"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"폰어"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"서부 발로치어"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"광둥어"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"페로어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"미국 지명위원회(BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"움분두어"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"시다모어"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"서부 프리지아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"아일랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"스코틀랜드 게일어"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"갈리시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"과라니어"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"호즈푸리어"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"알 수 없는 언어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"에티오피아 아메테 알렘력"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"구자라트어"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"맹크스어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"오스마냐 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"하우사어"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"히브리어"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"힌디어"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"후파어"_s)
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
			$of("ho"_s),
			$of(u"히리 모투어"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"크로아티아어"_s)
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
			$of("hy"_s),
			$of(u"아르메니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"헤레로어"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"케이준 프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"인터링구아"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"자모"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"인도네시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"티벳 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"인테르링구에"_s)
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
			$of("frm"_s),
			$of(u"중세 프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"이누피아크어"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"고대 프랑스어"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"이도어"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"동부 프리슬란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"북부 프리지아어"_s)
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
			$of("iu"_s),
			$of(u"이눅티투트어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"호그노르스크"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"일본어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"말라얄람 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"옛 남부 아라비아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"사라티"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"도그리어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"렙차 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"콤어"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"남부 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"자바어"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"샤비안 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"바우다"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"마두라어"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"룰레 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"마가히어"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"마파어"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"마이틸리어"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"이나리 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"조지아어"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"식시카어"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"마카사어"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"우어"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"스콜트 사미어"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"만딩고어"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"콩고어"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"고트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"키쿠유어"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"마사이어"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"쿠안야마어"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"카자흐어"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"그린란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"크메르어"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"칸나다어"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"한국어"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"칸누리어"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"카슈미르어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"키르쓰"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"렙차 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"아베스타 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"쿠르드어"_s)
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
			$of("snk"_s),
			$of(u"소닌케어"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"라틴어"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"룩셈부르크어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"말라얄람 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"간다어"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"롱고롱고"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"림버거어"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"티베트 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"링갈라어"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"프리울리어"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"라오어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"야드파운드법"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"타이 탐 호라 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"리투아니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"루바-카탄가어"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"라트비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"소그디엔어"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"말라가시어"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"마셜어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"기본 유니코드 정렬 순서"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"마오리어"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"마케도니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"말라얄람어"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"몽골어"_s)
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
			$of("my"_s),
			$of(u"버마어"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"사우라슈트라 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"아르메니아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"모크샤어"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"마바어"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"저지 소르비아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"아랍제국 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"나우루어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"범용 검색"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"노르웨이어(보크말)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"북부 은데벨레어"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"네팔어"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"느동가어"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"만다르어"_s)
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
			$of("no"_s),
			$of(u"노르웨이어"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"남부 은데벨레어"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"나바호어"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"카라칼파크어"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"냔자어"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"카친어"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"커바일어"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"오크어"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"까꼬토끄어"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"캄바어"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"멘데어"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"오지브와어"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"메루어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"아르메니아 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"오로모어"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"카위어"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"오리야어"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"오세트어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC 로마자 표기법(1997년 개정)"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"카바르디어"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"모리스얀어"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"스라난 통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"펀잡어"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"두알라어"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"세레르어"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"카넴부어"_s)
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
			$of("dum"_s),
			$of(u"중세 네덜란드어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"사우라슈트라 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"단기력"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"발라더"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"파슈토어"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"포르투갈어"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"중세 아일랜드어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"정렬 순서"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"티얍어"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"마크후와-메토어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"통화 형식"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"브라지어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"달력"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"야우어"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"라오 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"서미안"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"메타어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24시간제(0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24시간제(1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"사호어"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"브라후이어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"미얀마 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"케추아어"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"사포테크어"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"보도어"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"란나 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"마콘데어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"바이디카"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"에티오피아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12시간제(1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12시간제(0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"로만시어"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"룬디어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"통화"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"루마니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"오리야 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"중국어 십진 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"러시아어"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"아쿠즈어"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"르완다어"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"블리스 심볼"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"크리올어"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"미크맥어"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"수쿠마어"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"듀플로이안 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"산스크리트어"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"사르디니아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"수수어"_s)
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
			$of("min"_s),
			$of(u"미낭카바우어"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"산고어"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"세르비아-크로아티아어"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"싱할라어"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"수메르어"_s)
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
			$of("Gran"_s),
			$of(u"그란타 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"사모아어"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"쇼나어"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"소말리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"아라비아-인도식 숫자"_s)
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
			$of("ss"_s),
			$of(u"시스와티어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"회계 통화 형식"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"남부 소토어"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"자바 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"순다어"_s)
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
			$of("type.nu.hantfin"_s),
			$of(u"중국어 번체 재무 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"이비비오어"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"이반어"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"타밀어"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"부리아타"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"중앙 아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"텔루구어"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"서아시아"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"타지크어"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"태국어"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"티그리냐어"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"부기어"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"코로어"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"투르크멘어"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"타갈로그어"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"츠와나어"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"통가어"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"불루어"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"졸라 포니어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"일본 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"터키어"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"총가어"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"코모로어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"차크마 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"타타르어"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"드율라어"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"트위어"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"타히티어"_s)
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
			$of("dzg"_s),
			$of(u"다장가어"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"서유럽"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"위구르어"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"고대 이탈리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"한국 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"일반 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"우크라이나어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"콥트력"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"우르두어"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"칼미크어"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"제나가어"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"우즈베크어"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"카시어"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"저지 색슨어"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"실헤티 나가리"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"벤다어"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"바랑 크시티 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"대만력"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"베트남어"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"호탄어"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"코이라 친니어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"시간표시법(12시, 24시)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"볼라퓌크어"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"코와르어"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"고전 시리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"오스마니아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"키체어"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"가어"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"왈론어"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"가가우스어"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"시리아어"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"그리스 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"간어"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"리디아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"수메르-아카드어 설형문자"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"월로프어"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"표준 모로코 타마지트어"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"현대 표준 아랍어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"통합 캐나다 토착어"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"가요어"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"몽골 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"만주어"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"독일식 로마자"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"아나톨리아 상형문자"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"그바야어"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"마니푸리어"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"로마자"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"아일랜드식 로마자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"중국어 간체 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"중국어 번체 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"코사어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"로마 소문자 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"브린어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"파마카 방언"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"리키아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"오세이지어"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"메둠바어"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"조로아스터 다리어"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"문 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"모호크어"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"카코어"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"이디시어"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"모시어"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"디저렛 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"요루바어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"전통적인 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"서부 시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"오스만 터키어"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"에스트랑겔로식 시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"바이어"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"주앙어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"카리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"칼렌진어"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"중국어"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"아파카 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"주음부호"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"고대 페름 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"줄바꿈 스타일"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"줄루어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"전화번호부순"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"조지아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"사라다 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"킴분두어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"일본 재무 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"칸 고어"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"게이즈어"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"서부 마리어"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"동부 시리아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"미얀마 샨 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"엘바산 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"옛 북부 아라비아 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"올치키 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"개정 정렬순"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"타갈로그 문자"_s)
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
			$of("%%ITIHASA"_s),
			$of(u"이띠아사"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"팔미라 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"엠부어"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"고대 이집트 신성문자"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"그루지야 쿠츠리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"코미페르먀크어"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"고대 헝가리 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"코카니어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"전통 독일어 표기법"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"코스라이엔어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"림부 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"순다 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"크펠레어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"크메르 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"티르후타 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"이로코어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"키프로스 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"문당어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"굴묵키 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"다중 언어"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"퓨터"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"카도어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"계량법"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"크리크어"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"글라골 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"키리바시어"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"체로키 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"카리브어"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"카유가어"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"타밀 숫자"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"카라챠이-발카르어"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"인귀시어"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"다리어"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"카렐리야어"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"이픽어"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"쿠르크어"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"샴발라어"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"텔루구 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"바피아어"_s)
		})
	}));
	return data;
}

LocaleNames_ko::LocaleNames_ko() {
}

$Class* LocaleNames_ko::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ko, name, initialize, &_LocaleNames_ko_ClassInfo_, allocate$LocaleNames_ko);
	return class$;
}

$Class* LocaleNames_ko::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun