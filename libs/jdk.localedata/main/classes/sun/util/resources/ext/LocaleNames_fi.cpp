#include <sun/util/resources/ext/LocaleNames_fi.h>

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

$MethodInfo _LocaleNames_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_fi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_fi_MethodInfo_
};

$Object* allocate$LocaleNames_fi($Class* clazz) {
	return $of($alloc(LocaleNames_fi));
}

void LocaleNames_fi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_fi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilia"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Sveitsi"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tsekin tasavalta"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Tanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanja"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Suomi"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Ranska"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Iso-Britannia"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Kreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanti"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Alankomaat"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norja"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Puola"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Venäjä"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Ruotsi"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkki"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Yhdysvallat"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baski"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalaani"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tsekki"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("tanska"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("kreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("englanti"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanja"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("suomi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("ranska"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("heprea"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italia"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("heprea"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japani"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("liettua"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("hollanti"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norja"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("puola"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"venäjä"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("ruotsi"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkki"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kiina"_s)
		})
	});
}

LocaleNames_fi::LocaleNames_fi() {
}

$Class* LocaleNames_fi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fi, name, initialize, &_LocaleNames_fi_ClassInfo_, allocate$LocaleNames_fi);
	return class$;
}

$Class* LocaleNames_fi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun