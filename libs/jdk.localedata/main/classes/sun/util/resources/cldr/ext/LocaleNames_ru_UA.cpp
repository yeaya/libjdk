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

$MethodInfo _LocaleNames_ru_UA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ru_UA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ru_UA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ru_UA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ru_UA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ru_UA_MethodInfo_
};

$Object* allocate$LocaleNames_ru_UA($Class* clazz) {
	return $of($alloc(LocaleNames_ru_UA));
}

void LocaleNames_ru_UA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ru_UA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"О-в Вознесения"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Объединенные Арабские Эмираты"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"О-в Буве"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"О-ва Кука"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"О-в Клиппертон"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"О-в Рождества"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"О-ва Херд и Макдональд"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"О-в Норфолк"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тимор-Лесте"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Малые Тихоокеанские Отдаленные Острова США"_s)
		})
	}));
	return data;
}

LocaleNames_ru_UA::LocaleNames_ru_UA() {
}

$Class* LocaleNames_ru_UA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ru_UA, name, initialize, &_LocaleNames_ru_UA_ClassInfo_, allocate$LocaleNames_ru_UA);
	return class$;
}

$Class* LocaleNames_ru_UA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun