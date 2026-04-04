#include <sun/util/resources/cldr/ext/LocaleNames_ru_UA.h>
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

void LocaleNames_ru_UA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ru_UA::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AC"_s,
			u"О-в Вознесения"_s
		}),
		$$new($ObjectArray, {
			"AE"_s,
			u"Объединенные Арабские Эмираты"_s
		}),
		$$new($ObjectArray, {
			"BV"_s,
			u"О-в Буве"_s
		}),
		$$new($ObjectArray, {
			"CK"_s,
			u"О-ва Кука"_s
		}),
		$$new($ObjectArray, {
			"CP"_s,
			u"О-в Клиппертон"_s
		}),
		$$new($ObjectArray, {
			"CX"_s,
			u"О-в Рождества"_s
		}),
		$$new($ObjectArray, {
			"HM"_s,
			u"О-ва Херд и Макдональд"_s
		}),
		$$new($ObjectArray, {
			"NF"_s,
			u"О-в Норфолк"_s
		}),
		$$new($ObjectArray, {
			"TL"_s,
			u"Тимор-Лесте"_s
		}),
		$$new($ObjectArray, {
			"UM"_s,
			u"Малые Тихоокеанские Отдаленные Острова США"_s
		})
	}));
	return data;
}

LocaleNames_ru_UA::LocaleNames_ru_UA() {
}

$Class* LocaleNames_ru_UA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ru_UA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ru_UA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_ru_UA",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ru_UA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ru_UA);
	});
	return class$;
}

$Class* LocaleNames_ru_UA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun