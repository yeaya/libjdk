#include <sun/util/resources/cldr/ext/LocaleNames_mn.h>

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

$MethodInfo _LocaleNames_mn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mn_MethodInfo_
};

$Object* allocate$LocaleNames_mn($Class* clazz) {
	return $of($alloc(LocaleNames_mn));
}

void LocaleNames_mn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"араб"_s);
	$var($String, metaValue_bn, u"бенгал"_s);
	$var($String, metaValue_bo, u"төвд"_s);
	$var($String, metaValue_el, u"грек"_s);
	$var($String, metaValue_gu, u"гужарати"_s);
	$var($String, metaValue_he, u"еврей"_s);
	$var($String, metaValue_ja, u"япон"_s);
	$var($String, metaValue_ka, u"гүрж"_s);
	$var($String, metaValue_km, u"кхмер"_s);
	$var($String, metaValue_kn, u"каннада"_s);
	$var($String, metaValue_ko, u"солонгос"_s);
	$var($String, metaValue_la, u"латин"_s);
	$var($String, metaValue_lo, u"лаос"_s);
	$var($String, metaValue_ml, u"малаялам"_s);
	$var($String, metaValue_or, u"ория"_s);
	$var($String, metaValue_si, u"синхала"_s);
	$var($String, metaValue_ta, u"тамил"_s);
	$var($String, metaValue_te, u"тэлүгү"_s);
	$var($String, metaValue_th, u"тай"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"кёльш"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"меранди"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"тэмдэг"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"эможи"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"тимн"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"тэсо"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"рапануи"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Асенсион арал"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"раротонг"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"тетум"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андорра"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Арабын Нэгдсэн Эмирт Улс"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламанд"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигуа ба Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"этиоп цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангилья"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албани"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Армени"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангол"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Антарктид"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргентин"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Америкийн Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Австри"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Австрали"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"америк-англи"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аландын арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайжан"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Босни-Герцеговин"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Барбадос"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"себуано"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумук"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Бельги"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркина Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Болгар"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Бахрейн"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Бурунди"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Бенин"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Сент-Бартельми"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермуда"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"эрзя"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливи"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Карибын Нидерланд"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразил"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багамын арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"сога"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Бутан"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Буве арал"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Ботсван"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Беларусь"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Белизе"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"перс цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"еврей тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канад"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокос (Кийлинг) арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандерани"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конго-Киншаса"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Төв Африкийн Бүгд Найрамдах Улс"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго-Браззавиль"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцарь"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот-д’Ивуар"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Күүкийн арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чили"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Камерун"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Хятад"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Колумби"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Клиппертон арал"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Коста-Рика"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Кабо-Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Кюрасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Зул сарын арал"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипр"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чех"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"экажук"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Герман"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачин"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"чига"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Диего Гарсиа"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"деванагари тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Джибути"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Дани"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"брайл"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"жижиг армен тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Бүгд Найрамдах Доминикан Улс"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонтало"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуни"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"тигр"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"пангасин"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута ба Мелилья"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"пампанга"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Эквадор"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"папьяменто"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"адангмэ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстони"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Египет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Баруун Сахар"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палау"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чуук"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"мари хэл"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чоктау"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"чероки"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Эритрей"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Испани"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Этиоп"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Европын Холбоо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"грегорийн цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Евро бүс"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"чэенн"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"гүжарати тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адигэ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финлянд"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фижи"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Фолклендийн арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронези"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарерын арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франц"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Их Британи"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нигерийн пиджин"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Гренада"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Гүрж"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Францын Гвиана"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Гернси"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Гибралтар"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Гренланд"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Гамби"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Гвиней"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Гваделуп"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Экваторын Гвиней"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Грек"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Өмнөд Жоржиа ба Өмнөд Сэндвичийн арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Гватемал"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Гуам"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Гвиней-Бисау"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"клингон"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гайана"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"төв курд"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"хэл зүйн агуулгагүй"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"австри-герман"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"БНХАУ-ын Тусгай захиргааны бүс Хонг Конг"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Херд ба Макдональдийн арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Гондурас"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Хорват"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"агем"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швейцари-герман"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Гаити"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Унгар"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарын арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонез"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирланд"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неаполитан"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"нама"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"заза"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израиль"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Мэн Арал"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Энэтхэг"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британийн харьяа Энэтхэгийн далай дахь нутаг дэвсгэр"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ирак"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Иран"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Исланд"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Итали"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"математик тооллын систем"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"тай тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"бенгал тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Жерси"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"исламын цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Йордан"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Япон"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"айну"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гузы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"каннада тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"швейцарь-герман"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"буддын цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кени"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Латин Америк"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Кыргызстан"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Камбож"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Кирибати"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Коморын арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Киттс ба Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канад-франц"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Хойд Солонгос"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Өмнөд Солонгос"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швейцари-франц"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток писин"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайманы арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кирилл"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Лаос"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Ливан"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Сент Люсиа"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвичин"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"доод герман"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Лихтенштейн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шри-Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Либери"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Лесото"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Литва"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Люксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Латви"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Ливи"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ладин"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"вунжо"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ланги"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"тана"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Морокко"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Монако"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Молдова"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Монтенегро"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сент-Мартин"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршаллын арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алют"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Хойд Македон"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мьянмар"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монгол"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"невари"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"БНХАУ-ын Тусгай захиргааны бүс Макао"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Хойд Марианы арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Мартиник"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Мавритани"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Монтсеррат"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Мальта"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврикий"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"өмнөд алтай"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдив"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Малави"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Мексик"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"япон цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Малайз"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мозамбик"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намиби"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Сахарын цөлийн урд хэсгийн Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"еврей цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Шинэ Каледони"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Норфолк арал"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигери"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"тароко"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Нидерланд"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Норвеги"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Балба"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Науру"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромбо"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Шинэ Зеланд"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Оман"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ангик"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"сеселва креол франц"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панам"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"британи-англи"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Францын Полинез"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа Шинэ Гвиней"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Филиппин"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Пакистан"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Польш"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"эвондо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сент-Пьер ба Микело"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Питкэрн арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестины нутаг дэвсгэр"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португал"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ниас хэл"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"жижиг грек тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвай"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"тумбула"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Номхон далайг тойрсон улс орнууд"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезги"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Дэлхий"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Хойд Америк"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюнион"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Өмнөд Америк"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Номхон далайн орнууд"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румын"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Серби"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Орос"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудын Араб"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломоны арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасавак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Баруун Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшелийн арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Төв Америк"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швед"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Зүүн Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Хойд Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Сент Хелена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"шулуун мөрийн зайн загвар"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Төв Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словени"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Өмнөд Африк тив"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Свалбард ба Ян Майен"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Америк"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словак"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьерра-Леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Сан-Марино"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Сенегал"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Сомали"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"мапүчи"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапаго"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"уламжлалт тамил тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Өмнөд Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Томе ба Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Эль Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Синт Мартен"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сири"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Эсватини"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Тристан да Кунъя"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Америк нэгжийн систем"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Хойд Америк тив"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Турк ба Кайкосын Арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"янгбен"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Францын өмнөд газар нутаг"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Тайланд"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Тажикистан"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Карибын тэнгис"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тимор-Лесте"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"емба"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Туркменистан"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Тунис"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Турк"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринидад ба Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Тайвань"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"астури"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзани"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квазио"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"тодорхойгүй бичиг"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украин"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ароманы"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Зүүн Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тува"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"конгогийн свахили"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Өмнөд Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Зүүн өмнөд Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Өмнөд Европ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Америкийн Нэгдсэн Улсын бага арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Нэгдсэн Үндэстний Байгууллага"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Америкийн Нэгдсэн Улс"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"хавай"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"прусс"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекистан"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Төв Атласын тамазигхт"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"нгиембүүн"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватикан хот улс"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Винсент ба Гренадин"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуэл"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британийн Виржиний арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"АНУ-ын Виржиний арлууд"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Вьетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ногаи"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"рва"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австрали-Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланези"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уоллис ба Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Микронезийн бүс"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"нгомба"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"лакота"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"уолсэр"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"уоллайтта"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"хуурмаг аялга"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варай"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"хуурмаг хоёр чиглэлт"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхи"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Полинези"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Косово"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"бичигдээгүй"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Йемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"нко"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандарт эрэмбэлэх дараалал"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотта"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Өмнөд Африк"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"урт мөрийн зайн загвар"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"гүрж тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"хирагана"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замби"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Тодорхойгүй бүс"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"метрийн систем"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"хойд сото"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"тэлүгү тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лози"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачамэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"хялбаршуулсан хятад санхүүгийн тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигайнон"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"өргөтгөсөн араб-энэтхэг тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"нуер"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакота"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"бүтэн-өргөнтэй тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргва"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"тайта"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"хойд лури"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмурт"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандавэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ром тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"саха"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбүрү"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантали"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбай"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"гүрмүх"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-лулуа"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангү"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"нянколе"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"лунда"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"луо"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филипино"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"мизо"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"бали"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"луяа"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"басаа"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"испани хэл (Европ)"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шотланд"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицил"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афар"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхаз"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"акан"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхар"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагон"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"япон хэлний үеийн цагаан толгой"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ассам"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"авар"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймара"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайжан"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкир"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"беларусь"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"болгар"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"бислам"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбара"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догриб"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретон"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"босни"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"мьянмар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"лаос тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сена"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталан"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"кёраборо сени"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"чечень"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чаморро"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсик"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чех"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"сүмийн славян"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чуваш"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"уэльс"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"этиоп тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"дани"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"португал хэл (Европ)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"герман"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"мөнгөн тэмдэгтийн стандарт хэлбэр"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"монгол тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"дивехи"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"испани хэл (Латин Америк)"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"зонха"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"хятад цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"зарма"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"грек тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"эвэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"энгийн мөрийн зайн загвар"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдав"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"англи"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"эсперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"испани"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"эстони"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Бопомофотой ханз"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баск"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангыль"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"тачелхит"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"дээд сорби"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ханз"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шань"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"перс"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"хялбаршуулсан"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"араб тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"уламжлалт"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фула"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фин"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фижи"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"фон"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантон"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарер"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"франц"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"баруун фриз"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирланд"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шотландын гел"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галего"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"божпури"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Үл мэдэгдэх хэл"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"манкс"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хауса"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"хинди"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"хупа"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"бини"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорват"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Гаитийн креол"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"мажар"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"армен"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"хереро"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"интерлингво"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"жамо"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонези"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"төвд тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"нэгдмэл хэл"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сычуань и"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идо"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"исланд"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"итали"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"инуктитут"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"өмнөд сами"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ява"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадури хэл"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"люле сами"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахи"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"май"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари сами"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сиксика"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасар"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"сколт сами"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кикуюү"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масай"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"куаньяма"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казах"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"калалисут"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"канури"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмир"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курд"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"коми"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корн"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"киргиз"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"сонинке"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"люксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"малаялам тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбург"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фриулан"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Англи нэгжийн систем"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литва"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латви"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагаси"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршалл"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"юникодын үндсэн эрэмбэлэх дараалал"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маори"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македон"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"монгол"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"марати"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малай"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"малта"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бирм"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"армени"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокша"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"доод сорби"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ерөнхий хайлт"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвегийн букмол"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"хойд ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"балба"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонга"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"нидерланд"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"норвегийн нинорск"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвеги"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"өмнөд ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"нянжа"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качин"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабиле"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситан"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"жжу"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"камба"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"менде"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"армен тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"оромо"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"оссетин"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардин"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"морисен"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан тонго"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"панжаби"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"дуала"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"польш"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"данги цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пушту"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португал"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"эрэмбэлэх дараалал"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"португал хэл (Бразил)"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тяп"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макува-мито"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"мөнгөн тэмдэгтийн хэлбэр"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 цагийн систем (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 цагийн систем (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"мьянмар тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бодо"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"маконде"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"этиоп"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 цагийн систем (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 цагийн систем (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"романш"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рунди"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"мөнгөн тэмдэгт"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румын"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ория тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"хятад аравтын тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"орос"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"киньяруанда"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабүвердиану"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"микмак"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"сукума"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"австрали-англи"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардин"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синдхи"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"хойд сами"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"минангкабау"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"санго"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"хорватын серб"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словак"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словени"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"шона"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"сомали"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"араб-энэтхэг тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албани"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"серб"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"свати"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"мөнгөн тэмдэгтийн нягтлан бодох бүртгэлийн хэлбэр"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сесото"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сундан"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"швед"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"свахили"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"уламжлалт хятад санхүүгийн тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ибибио"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ибан"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Төв Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Баруун Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"тажик"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигринья"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"буги"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канад-англи"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркмен"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"цвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"жола-фони"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"япон тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"турк"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"цонга"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"комори"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татар"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тви"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таити"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Зүүн Европ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Хойд Европ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"дазага"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Баруун Европ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгур"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"нийтлэг"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украин"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"халимаг"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбек"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"каси"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"бага саксон"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"минго цаглавар"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вьетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чини"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"цагийн мөчлөг (12 эсвэл 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапюк"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"киче"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"га"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"уоллун"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагуз"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сири"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандарт тамазайт (Морокко)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"стандарт араб"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"монгол бичиг"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипури"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"хялбаршуулсан хятад тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"уламжлалт хятад тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"хоса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"жижиг ром тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"блин"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохаук"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"иддиш"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"мосси"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ёруба"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"испани хэл (Мексик)"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"вай"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"каленжин"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"хятад"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"вопомофо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"мөрийн зайн загвар"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулу"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кимбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"япон санхүүгийн тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"гийз"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"эмбу"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"хялбаршуулсан хятад"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"коми-пермяк"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"уламжлалт хятад"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпелле"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"кхмер тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илоко"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"гүрмүхи тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"олон хэл"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"нэгжийн систем"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"крик"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гилберт"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"тамил тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачай-балкар"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ингуш"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карель"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"эфик"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"тоо"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курук"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"шамбал"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафиа"_s)
		})
	}));
	return data;
}

LocaleNames_mn::LocaleNames_mn() {
}

$Class* LocaleNames_mn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mn, name, initialize, &_LocaleNames_mn_ClassInfo_, allocate$LocaleNames_mn);
	return class$;
}

$Class* LocaleNames_mn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun