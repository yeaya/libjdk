#include <sun/util/resources/cldr/ext/LocaleNames_os.h>

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

$MethodInfo _LocaleNames_os_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_os, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_os, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_os_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_os",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_os_MethodInfo_
};

$Object* allocate$LocaleNames_os($Class* clazz) {
	return $of($alloc(LocaleNames_os));
}

void LocaleNames_os::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_os::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Дуне"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африкӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океани"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Америкӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразили"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Китай"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Герман"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франц"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Стыр Британи"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Гуырдзыстон"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Инди"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Итали"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Япон"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Уӕрӕсе"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"АИШ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Нӕзонгӕ бӕстӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"авестӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"араббаг"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"авайраг"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"тӕтӕйраг"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкираг"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"болгайраг"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"босниаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталайнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"цӕцӕйнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чехаг"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашаг"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"даниаг"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"немыцаг"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"бердзейнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"есперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"испайнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"естойнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"персайнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"финнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фиджи"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарераг"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"францаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирландиаг"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"уираг"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорватаг"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"венгериаг"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"сомихаг"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"италиаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"япойнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"гуырдзиаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдаг"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"латинаг"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"мӕчъидон"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ирон"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португалиаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"уырыссаг"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"китайаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адыгейаг"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"рагон англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"бурятаг"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"коптаг"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"рагон египтаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филиппинаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"рагон францаг"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"рагон бердзейнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"мӕхъӕлон"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кӕсгон"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"бӕлхъӕрон"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"хъуымыхъхъаг"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лекъаг"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"цигайнаг"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"нӕзонгӕ ӕвзаг"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Араббаг"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Киррилицӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Ӕнцонгонд китайаг"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Традицион китайаг"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Латинаг"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Нӕфысгӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Нӕзонгӕ скрипт"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"австралиаг немыцаг"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"швйецариаг немыцаг"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"австралиаг англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадӕйаг англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"бритайнаг англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"америкаг англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"европӕйаг англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канадӕйаг францаг"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швейцариаг францаг"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"бразилиаг португалиаг"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"европӕйаг полтугалиаг"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"латинаг америкаг англисаг"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Къӕлиндар"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Нымӕцтӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ӕнцонгонд китайаг"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"традицион китайаг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Нырыккон цифрӕтӕ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Уирӕгты къӕлиндар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Персайнаг къӕлиндар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Грегориан къӕлиндар"_s)
		})
	}));
	return data;
}

LocaleNames_os::LocaleNames_os() {
}

$Class* LocaleNames_os::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_os, name, initialize, &_LocaleNames_os_ClassInfo_, allocate$LocaleNames_os);
	return class$;
}

$Class* LocaleNames_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun