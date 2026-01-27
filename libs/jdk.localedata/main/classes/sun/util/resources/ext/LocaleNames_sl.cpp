#include <sun/util/resources/ext/LocaleNames_sl.h>

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

$MethodInfo _LocaleNames_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_sl",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_sl_MethodInfo_
};

$Object* allocate$LocaleNames_sl($Class* clazz) {
	return $of($alloc(LocaleNames_sl));
}

void LocaleNames_sl::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_sl::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenija"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Slovenščina"_s)
		})
	});
}

LocaleNames_sl::LocaleNames_sl() {
}

$Class* LocaleNames_sl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sl, name, initialize, &_LocaleNames_sl_ClassInfo_, allocate$LocaleNames_sl);
	return class$;
}

$Class* LocaleNames_sl::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun