#include <sun/util/resources/cldr/ext/LocaleNames_be.h>

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

$MethodInfo _LocaleNames_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_be, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_be, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_be",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_be_MethodInfo_
};

$Object* allocate$LocaleNames_be($Class* clazz) {
	return $of($alloc(LocaleNames_be));
}

void LocaleNames_be::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_be::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"гуджараці"_s);
	$var($String, metaValue_kn, u"канада"_s);
	$var($String, metaValue_ml, u"малаялам"_s);
	$var($String, metaValue_or, u"орыя"_s);
	$var($String, metaValue_te, u"тэлугу"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"кёльнская"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мірандыйская"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"сімвалы"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"эмодзі"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"старажытнаегіпецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"раджастханская"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"тэмнэ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"тэсо"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"рапануі"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Востраў Узнясення"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"раратонг"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"тэтум"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андора"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Аб’яднаныя Арабскія Эміраты"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламандская"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганістан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антыгуа і Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"эфіопскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангілья"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албанія"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Арменія"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангола"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Антарктыка"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргенціна"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Амерыканскае Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Аўстрыя"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Аўстралія"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"амерыканская англійская"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аландскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайджан"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Боснія і Герцагавіна"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Барбадас"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"себуана"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладэш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумыцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Бельгія"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркіна-Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Балгарыя"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Бахрэйн"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Бурундзі"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Бенін"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Сен-Бартэльмі"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермудскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"эрзянская"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Балівія"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Карыбскія Нідэрланды"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразілія"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багамскія астравы"_s)
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
			$of(u"Востраў Бувэ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Батсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Беларусь"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Беліз"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"персідскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"яўрэйскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Какосавыя (Кілінг) астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандэранская"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конга (Кіншаса)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Цэнтральна-Афрыканская Рэспубліка"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конга - Бразавіль"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцарыя"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот-д’Івуар"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Астравы Кука"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чылі"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Камерун"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Кітай"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Калумбія"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Востраў Кліпертан"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Коста-Рыка"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Каба-Вердэ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Кюрасаа"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Востраў Каляд"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кіпр"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чэхія"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"экаджук"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германія"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачэх"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"чыга"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Востраў Дыега-Гарсія"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"лічбы дэванагары"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Джыбуці"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Данія"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"шрыфт Брайля"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Дамініка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"армянскія лічбы ў ніжнім рэгістры"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Дамініканская Рэспубліка"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"гарантала"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуні"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"тыгрэ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжыр"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"пангасінан"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута і Мелілья"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"чыбча"_s)
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
			$of(u"пап’яменту"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"адангмэ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстонія"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Егіпет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Заходняя Сахара"_s)
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
			$of(u"мары"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чокта"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"чэрокі"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Эрытрэя"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Іспанія"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Эфіопія"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Еўрапейскі саюз"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"грыгарыянскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Еўразона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"шэйен"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"лічбы гуджараці"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адыгейская"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Фінляндыя"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фіджы"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Фалклендскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Мікранезія"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарэрскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"тамільскае"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Францыя"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"старажытнагрэчаская"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Вялікабрытанія"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нігерыйскі піджын"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Грэнада"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Грузія"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Французская Гвіяна"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Гернсі"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Гібралтар"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Грэнландыя"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Гамбія"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Гвінея"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Гвадэлупа"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Экватарыяльная Гвінея"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Грэцыя"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Паўднёвая Георгія і Паўднёвыя Сандвічавы астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Гватэмала"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Гуам"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Гвінея-Бісау"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"клінган"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гаяна"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"цэнтральнакурдская"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"няма моўнага матэрыялу"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"аўстрыйская нямецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Ганконг, САР (Кітай)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Астравы Херд і Макдональд"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Гандурас"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Харватыя"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"агем"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швейцарская нямецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Гаіці"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Венгрыя"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Інданезія"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"стараперсідская"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ірландыя"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неапалітанская"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"нама"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"зазакі"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Ізраіль"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Востраў Мэн"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Індыя"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Брытанская тэрыторыя ў Індыйскім акіяне"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ірак"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Іран"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Ісландыя"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Італія"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"матэматычныя знакі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"тайскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"бенгальскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Джэрсі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"мусульманскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"бенгальскае"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Іарданія"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Японія"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"айнская"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гусіі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"лічбы канада"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"швейцарская літаратурная нямецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"будыйскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кенія"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Лацінская Амерыка"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Кыргызстан"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Камбоджа"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Кірыбаці"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Каморскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Кітс і Невіс"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канадская французская"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Паўночная Карэя"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Паўднёвая Карэя"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швейцарская французская"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток-пісін"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайманавы астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кірыліца"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Лаос"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Ліван"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Сент-Люсія"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"фінікійская"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гуіч’ін"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ніжненямецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Ліхтэнштэйн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шры-Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"акадская"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"копцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Ліберыя"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Лесота"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Літва"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Люксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Латвія"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Лівія"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ладына"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"вунджо"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"лангі"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"тана"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Марока"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Манака"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Малдова"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Чарнагорыя"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сен-Мартэн"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршалавы астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеуцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"тайскае"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Паўночная Македонія"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Малі"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"М’янма (Бірма)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Манголія"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"неўары"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макаа, САР (Кітай)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Паўночныя Марыянскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Марцініка"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Маўрытанія"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Мантсерат"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Мальта"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маўрыкій"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"паўднёваалтайская"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдывы"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Малаві"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Мексіка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"японскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Малайзія"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мазамбік"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намібія"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Трапічная Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"яўрэйскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Новая Каледонія"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нігер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Востраў Норфалк"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нігерыя"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"тарока"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Нікарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Нідэрланды"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Нарвегія"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Непал"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Науру"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ніуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромба"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Новая Зеландыя"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"стараанглійская"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Аман"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ангіка"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"сэсэльва"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"мусульманскі свецкі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"брытанская англійская"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Французская Палінезія"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа-Новая Гвінея"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Філіпіны"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Пакістан"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Польшча"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"эвонда"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен-П’ер і Мікелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Астравы Піткэрн"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрта-Рыка"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палесцінскія Тэрыторыі"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Партугалія"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ніас"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"грэчаскія лічбы ў ніжнім рэгістры"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвай"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"тумбука"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"яўрэйскае"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ніўэ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Аддаленыя тэрыторыі Акіяніі"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгінская"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Свет"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Паўночная Амерыка"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Рэюньён"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Паўднёвая Амерыка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Акіянія"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румынія"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Сербія"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Расія"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудаўская Аравія"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Саламонавы астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасаўак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Заходняя Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшэльскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Цэнтральная Амерыка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швецыя"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Усходняя Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"арамейская"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Паўночная Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сінгапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Востраў Святой Алены"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"строгія правілы разрыву радка"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Сярэдняя Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Славенія"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Паўднёвая Афрыка"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Шпіцберген і Ян-Маен"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Паўночная і Паўднёвая Амерыкі"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Славакія"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьера-Леонэ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Сан-Марына"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Сенегал"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Самалі"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"мапудунгун"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапаха"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"тамільскія традыцыйныя лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Сурынам"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Паўднёвы Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Тамэ і Прынсіпі"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Сінт-Мартэн"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сірыя"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Эсватыні"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Трыстан-да-Кунья"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"амерыканская сістэма мер"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Паўночнаамерыканскі рэгіён"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Астравы Цёркс і Кайкас"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"янгбэн"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Французскія паўднёвыя тэрыторыі"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Тога"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Тайланд"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Таджыкістан"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Карыбскі рэгіён"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Такелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тымор-Лешці"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"йемба"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Туркменістан"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Туніс"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Турцыя"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Трынідад і Табага"_s)
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
			$of(u"астурыйская"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзанія"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"нгумба"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"невядомае пісьмо"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украіна"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"арумунская"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Усходняя Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувінская"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"кангалезская суахілі"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Паўднёвая Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Паўднёва-Усходняя Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Паўднёвая Еўропа"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"сінгальскае"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Малыя Аддаленыя астравы ЗША"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Арганізацыя Аб’яднаных Нацый"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Злучаныя Штаты"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"гавайская"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"пруская"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекістан"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"сярэднеатлаская тамазігхт"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"нг’ембон"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватыкан"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"стараправансальская"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Вінсент і Грэнадзіны"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуэла"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Брытанскія Віргінскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Амерыканскія Віргінскія астравы"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"В’етнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"нагайская"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"руа"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"старанарвежская"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Аўстралазія"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланезія"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уоліс і Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Мікранезійскі рэгіён"_s)
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
			$of(u"вальшская"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"волайта"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Псеўдаакцэнты"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варай"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"псеўдадвухнапрамкавы"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхі"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Палінезія"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Косава"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"беспісьменная"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"варлпіры"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Емен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"нко"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандартны парадак сартавання"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Маёта"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Паўднёва-Афрыканская Рэспубліка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"нястрогія правілы разрыву радка"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"дэванагары"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"грузінскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"хірагана"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замбія"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зімбабвэ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Невядомы рэгіён"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"метрычная сістэма мер"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"каляндар ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"монга"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"паўночная сота"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"лічбы тэлугу"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лозі"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачамбэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"кітайскія спрошчаныя лічбы (фінансы)"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хілігайнон"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"пашыраная сістэма арабска-індыйскіх лічбаў"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"нуэр"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакота"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"поўнашырынныя лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргінская"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таіта"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"паўночная луры"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмурцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"кхмерскае"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандаўэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"рымскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"якуцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуру"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"санталі"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбай"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"гурмукхі"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-касаі"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангу"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ньянколе"_s)
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
			$of(u"філіпінская"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"мізо"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балійская"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"луйя"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"басаа"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"еўрапейская іспанская"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шатландская"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сіцылійская"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарская"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазская"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"афрыкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"акан"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхарская"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагонская"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"арабскае"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"японскае"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арабская"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"японскія складовыя пісьмы"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"асамская"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварская"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"паўднёвакурдская"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймара"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайджанская"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкірская"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"беларуская"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"балгарская"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"біслама"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбара"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бенгальская"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"тыбецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догрыб"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"брэтонская"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"баснійская"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"бірманскае"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"лаоскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сена"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталанская"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"кайрабора сэні"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"чачэнская"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чамора"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"карсіканская"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чэшская"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"царкоўнаславянская"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашская"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"валійская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"эфіопскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"дацкая"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"еўрапейская партугальская"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"нямецкая"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"стандартны фармат валюты"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"стараірландская"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"мальдыўская"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"лацінаамерыканская іспанская"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"дзонг-кэ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"кітайскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"зарма"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"грэчаскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"эве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"звычайныя правілы разрыву радка"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"малдаўская"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"грэчаская"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"англійская"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"эсперанта"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"іспанская"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"эстонская"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"хан з бапамофа"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскская"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангыль"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ташэльхіт"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"верхнялужыцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"хан"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шан"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"фарсі"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"спрошчанае кітайскае"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"сучасныя арабскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традыцыйнае кітайскае"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фула"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фінская"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фіджыйская"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"фон"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"заходняя белуджская"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантонскі дыялект кітайскай"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарэрская"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"французская"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"заходняя фрызская"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ірландская"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шатландская гэльская"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галісійская"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гуарані"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"бхаджпуры"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"невядомая мова"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"мэнская"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хауса"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"іўрыт"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"хіндзі"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"хупа"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"эда"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"харвацкая"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"гаіцянская крэольская"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"венгерская"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"армянская"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"герэра"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"інтэрлінгва"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"чамо"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"інданезійская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"тыбецкія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"інтэрлінгвэ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ігба"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сычуаньская йі"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"старафранцузская"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"іда"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ісландская"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"італьянская"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"інуктытут"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"японская"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"паўднёвасаамская"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"яванская"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурская"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле-саамская"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахі"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"майтхілі"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"інары-саамская"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузінская"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"блэкфут"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасар"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"колта-саамская"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"мандынг"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кікуйю"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"маасай"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"куаньяма"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казахская"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"грэнландская"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"кхмерская"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"карэйская"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"кануры"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмірская"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдская"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"комі"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнская"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"кіргізская"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"санінке"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"лацінская"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"люксембургская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"лічбы малаялам"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лімбургская"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"тыбецкае"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лінгала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фрыульская"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаоская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"брытанская сістэма мер"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"літоўская"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латышская"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасійская"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршальская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"стандартны парадак сартавання Унікод"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маары"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македонская"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"мангольская"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"маратхі"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малайская"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"мальтыйская"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бірманская"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"армянскае"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"макшанская"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ніжнялужыцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"універсальны пошук"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"нарвежская (букмол)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"паўночная ндэбеле"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непальская"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонга"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"нідэрландская"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"нарвежская (нюношк)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"нарвежская"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"паўднёвая ндэбеле"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"наваха"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ньянджа"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качынская"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабільская"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"аксітанская"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"дджу"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"камба"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"мендэ"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"аджыбва"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"армянскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"арома"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"асецінская"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардзінская"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"марысьен"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан-тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"панджабі"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"дуала"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"польская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"каляндар дангі"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пушту"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"партугальская"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"парадак сартавання"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"бразільская партугальская"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"т’яп"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макуўа-меета"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"фармат валюты"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"лаоскае"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-гадзінны фармат часу (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-гадзінны фармат часу (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"саха"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"бірманскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"сапатэк"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бода"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"макондэ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"эфіопскае"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-гадзінны фармат часу (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-гадзінны фармат часу (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"рэтараманская"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рундзі"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"валюта"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румынская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"лічбы орыя"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"кітайскія дзесятковыя лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"руская"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабувердыяну"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"мікмак"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"сукума"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"аўстралійская англійская"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрыт"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардзінская"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"сіндхі"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"паўночнасаамская"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"мінангкабау"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"санга"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"сербскахарвацкая"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"сінгальская"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"шумерская"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"славацкая"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"славенская"_s)
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
			$of(u"самалі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"арабска-індыйскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албанская"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"сербская"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"суаці"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"бухгалтарскі фармат валюты"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сесута"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сунда"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведская"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"суахілі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"кітайскія традыцыйныя лічбы (фінансы)"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ібібія"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ібан"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"тамільская"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"бурацкая"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Цэнтральная Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Заходняя Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таджыкская"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"тайская"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тыгрынья"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугіс"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"кора"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадская англійская"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменская"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"танганская"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"джола-фоньі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"японскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"турэцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"тсонга"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"каморская"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарская"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таіці"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Еўропа"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Усходняя Еўропа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Паўночная Еўропа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"дазага"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Заходняя Еўропа"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгурская"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"карэйскае"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"агульнае"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украінская"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"калмыцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбекская"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"кхасі"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ніжнесаксонская"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"каляндар Міньго"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"в’етнамская"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чыіні"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"гадзінны цыкл (12 або 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"валапюк"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"кічэ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"га"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"валонская"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагаузская"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сірыйская"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"грэчаскае"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"валоф"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандартная мараканская тамазіхт"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"сучасная стандартная арабская"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"старамангольскае"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"мейтэй"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"лацініца"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"кітайскія спрошчаныя лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"кітайскія традыцыйныя лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"коса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"рымскія лічбы ў ніжнім рэгістры"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"білен"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохак"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ідыш"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"мосі"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ёруба"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"мексіканская іспанская"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ваі"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"календжын"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"кітайская"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"бапамофа"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"правілы разрыву радка"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулу"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"грузінскае"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кімбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"японскія лічбы (фінансы)"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"геэз"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"эмбу"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"кітайская (спрошчаныя іерогліфы)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"комі-пярмяцкая"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"канкані"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"кітайская (традыцыйныя іерогліфы)"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпеле"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"кхмерскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ілакана"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"лічбы гурмукхі"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"некалькі моў"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"сістэма мер"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"мускогі"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"кірыбаці"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"тамільскія лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачай-балкарская"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"інгушская"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"дары"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карэльская"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"эфік"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"лічбы"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курух"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"шамбала"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафія"_s)
		})
	}));
	return data;
}

LocaleNames_be::LocaleNames_be() {
}

$Class* LocaleNames_be::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_be, name, initialize, &_LocaleNames_be_ClassInfo_, allocate$LocaleNames_be);
	return class$;
}

$Class* LocaleNames_be::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun