#include <sun/util/resources/ext/LocaleNames_hi.h>

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

$MethodInfo _LocaleNames_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_hi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_hi_MethodInfo_
};

$Object* allocate$LocaleNames_hi($Class* clazz) {
	return $of($alloc(LocaleNames_hi));
}

void LocaleNames_hi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_hi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारत"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"संयुक्त राज्य अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"अँग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"हिंदी"_s)
		})
	});
}

LocaleNames_hi::LocaleNames_hi() {
}

$Class* LocaleNames_hi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hi, name, initialize, &_LocaleNames_hi_ClassInfo_, allocate$LocaleNames_hi);
	return class$;
}

$Class* LocaleNames_hi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun