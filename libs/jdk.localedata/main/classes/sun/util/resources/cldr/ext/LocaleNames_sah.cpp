#include <sun/util/resources/cldr/ext/LocaleNames_sah.h>

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

$MethodInfo _LocaleNames_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sah, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sah, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sah",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sah_MethodInfo_
};

$Object* allocate$LocaleNames_sah($Class* clazz) {
	return $of($alloc(LocaleNames_sah));
}

void LocaleNames_sah::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sah::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_el, u"Гириэктии"_s);
	$var($String, metaValue_hy, u"Эрмээннии"_s);
	$var($String, metaValue_ja, u"Дьоппуоннуу"_s);
	$var($String, metaValue_ko, u"Кэриэйдии"_s);
	$var($String, metaValue_la, u"Латыынныы"_s);
	$var($String, metaValue_mn, u"Моҕуоллуу"_s);
	$var($String, metaValue_ru, u"Нууччалыы"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Португааллыы"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Пилипииннии"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Бэҥгиэрдии"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Халандаар"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 чаастаах тиһик (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 чаастаах тиһик (0–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирландия"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Абхаастыы"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Мэн арыы"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Аппырыкааныстыы"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Исландия"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ытаалыйалыы"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Амхаардыы"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Арааптыы"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Кытайдыы"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Аан дойду"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Араабтыы"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Аапырыка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Хотугу Эмиэрикэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 чаастаах тиһик (0–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Соҕуруу Эмиэрикэ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"Аваардыы"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 чаастаах тиһик (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Адьырбайдьаанныы"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Зуулулуу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Ислаам халандаара"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Уларытыы"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Румыынныы"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_ru)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Дьамаайка"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Арассыыйа"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Бөлөрүүстүү"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Булҕаардыы"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Бенгаллыы"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Тибиэттии"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилия"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судаан"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Босныйалыы"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеция"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Курусууннуу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Буудда халандаара"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Словаактыы"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канаада"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Каталаанныы"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Албаанныы"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Хаһаахтыы"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Чэчиэннии"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чиили"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Кытай"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Тамыллыы"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Кыргыстыы"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(metaValue_ru)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Чиэхтии"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"Төлүгүлүү"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Кууба"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Тадьыыктыы"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Даатскайдыы"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Татаардыы"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Ниэмэстии"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Астуурдуу"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Литва"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Латвия"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Биллибэт сурук"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Лиибийэ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Уйгуурдуу"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Украйыыньыстыы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Кытай халандаара"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"Алеуттуу"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Таайдыы"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Америка Холбоһуктаах Штааттара"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстония"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Үзбиэктии"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Малаайдыы"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ааҥыллыы"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Миэксикэ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Дьоппуон халандаара"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Ыспаанныы"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Эстиэнийэлии"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Дьэбириэй халандаара"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Ньыпааллыы"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Пиэристии"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Норвегия"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финляндия"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Пииннии"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"Нагаайдыы"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Боронсуустуу"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Улуу Британия"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"саха тыла"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Пандьаабтыы"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Суруллубатах"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Киин куурдуу"_s)
		})
	}));
	return data;
}

LocaleNames_sah::LocaleNames_sah() {
}

$Class* LocaleNames_sah::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sah, name, initialize, &_LocaleNames_sah_ClassInfo_, allocate$LocaleNames_sah);
	return class$;
}

$Class* LocaleNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun