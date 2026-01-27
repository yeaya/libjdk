#include <sun/util/resources/ext/CurrencyNames_ko.h>

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

$MethodInfo _CurrencyNames_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ko",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ko_MethodInfo_
};

$Object* allocate$CurrencyNames_ko($Class* clazz) {
	return $of($alloc(CurrencyNames_ko));
}

void CurrencyNames_ko::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"안도라 페세타"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"아랍에미리트 디르함"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"아프가니 (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"아프가니"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"알바니아 레크"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"아르메니아 드람"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"네덜란드령 안틸레스 길더"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"앙골라 콴자"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"아르헨티나 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"호주 실링"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"호주 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"아루바 길더"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"아제르바이젠 마나트(1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"아제르바이잔 마나트"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"보스니아-헤르체고비나 태환 마르크"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"바베이도스 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"방글라데시 타카"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"벨기에 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"불가리아 동전 렛"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"불가리아 신권 렛"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"바레인 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"부룬디 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"버뮤다 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"부루나이 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"볼리비아노"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"볼리비아노 Mvdol(기금)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"브라질 레알"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"바하마 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"부탄 눌투눔"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"보츠와나 폴라"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"벨라루스 신권 루블 (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"벨라루스 루블"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"벨리즈 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"캐나다 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"콩고 프랑 콩골라스"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"스위스 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"칠레 UF (Unidades de Fomento)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"칠레 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"중국 위안 인민폐"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"콜롬비아 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"코스타리카 콜론"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"고 세르비아 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"쿠바 태환 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"쿠바 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"카보베르데 에스쿠도"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"싸이프러스 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"체코 공화국 코루나"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"독일 마르크"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"지부티 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"덴마크 크로네"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"도미니카 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"알제리 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"에스토니아 크룬"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"이집트 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"에리트리아 나크파"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"스페인 페세타"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"이디오피아 비르"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"유로화"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"핀란드 마르카"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"피지 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"포클랜드제도 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"프랑스 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"영국령 파운드 스털링"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"그루지야 라리"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"가나 시디 (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"가나 시디"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"지브롤터 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"감비아 달라시"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"기니 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"그리스 드라크마"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"과테말라 케트살"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"기네비쏘 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"가이아나 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"홍콩 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"온두라스 렘피라"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"크로아티아 쿠나"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"하이티 구르드"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"헝가리 포린트"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"인도네시아 루피아"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"아일랜드 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"이스라엘 신권 세켈"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"인도 루피"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"이라크 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"이란 리얄"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"아이슬란드 크로나"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"이탈리아 리라"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"자메이카 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"요르단 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"일본 엔화"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"케냐 실링"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"키르기스스탄 솜"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"캄보디아 리얄"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"코모르 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"조선 민주주의 인민 공화국 원"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"대한민국 원"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"쿠웨이트 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"케이맨 제도 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"카자흐스탄 텐게"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"라오스 키프"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"레바논 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"스리랑카 루피"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"라이베리아 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"레소토 로티"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"리투아니아 리타"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"룩셈부르크 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"라트비아 라트"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"리비아 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"모로코 디렘"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"몰도바 레이"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"마다가스카르 아리아리"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"마다가스카르 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"마케도니아 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"미얀마 키얏"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"몽골 투그릭"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"마카오 파타카"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"모리타니 우기야"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"몰타 리라"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"모리셔스 루피"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"몰디브 제도 루피아"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"말라위 콰쳐"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"멕시코 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"멕시코 UDI(Unidad de Inversion)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"말레이시아 링깃"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"고 모잠비크 메티칼"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"모잠비크 메티칼"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"나미비아 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"니제르 나이라"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"니카라과 코르도바 오로"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"네델란드 길더"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"노르웨이 크로네"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"네팔 루피"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"뉴질랜드 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"오만 리얄"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"파나마 발보아"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"페루 솔 누에보"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"파푸아뉴기니 키나"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"필리핀 페소"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"파키스탄 루피"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"폴란드 즐로티"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"포르투갈 에스쿠도"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"파라과이 과라니"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"카타르 리얄"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"루마니아 레이"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"루마니아 레우"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"세르비아 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"러시아 루블"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"러시아 루블 (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"르완다 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"사우디아라비아 리얄"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"솔로몬 제도 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"세이쉴 루피"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"수단 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"수단 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"스웨덴 크로나"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"싱가폴 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"세인트헬레나 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"슬로베니아 톨라르"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"슬로바키아 코루나"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"시에라리온 리온"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"소말리아 실링"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"수리남 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"수리남 길더"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"상투메 프린시페 도브라"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"엘살바도르 콜론"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"시리아 파운드"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"스와질란드 릴랑게니"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"태국 바트"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"타지키스탄 소모니"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"투르크메니스탄 마나트"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"튀니지 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"통가 파앙가"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"티모르 에스쿠도"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"터키 리라"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"신 터키 리라"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"트리니다드 토바고 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"대만 신권 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"탄자니아 실링"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"우크라이나 그리브나"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"우간다 실링"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"미국 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"미국 달러(다음날)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"미국 달러(당일)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"우루과이 페소 우루과요"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"우즈베키스탄 숨"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"베네주엘라 볼리바르"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"베네주엘라 볼리바르 푸에르떼"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"베트남 동"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"바누아투 바투"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"서 사모아 탈라"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA 프랑 BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"은화"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"금"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"유르코 (유럽 회계 단위)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"유럽 통화 동맹"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"유럽 계산 단위 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"유럽 계산 단위 (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"동카리브 달러"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"특별인출권"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"프랑스 Gold 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"프랑스 UIC-프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"CFA 프랑 BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"팔라듐"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP 프랑"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"백금"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"테스트 통화 코드"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"알수없거나 유효하지않은 통화단위"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"예멘 리알"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"유고슬라비아 노비 디나르"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"남아프리카 랜드"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"쟘비아 콰쳐"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"짐바브웨 달러"_s)
		})
	});
}

CurrencyNames_ko::CurrencyNames_ko() {
}

$Class* CurrencyNames_ko::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ko, name, initialize, &_CurrencyNames_ko_ClassInfo_, allocate$CurrencyNames_ko);
	return class$;
}

$Class* CurrencyNames_ko::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun