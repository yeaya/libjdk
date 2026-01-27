#include <sun/util/resources/cldr/ext/LocaleNames_bn_IN.h>

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

$MethodInfo _LocaleNames_bn_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bn_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bn_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bn_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bn_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bn_IN_MethodInfo_
};

$Object* allocate$LocaleNames_bn_IN($Class* clazz) {
	return $of($alloc(LocaleNames_bn_IN));
}

void LocaleNames_bn_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bn_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"মার্কিন যুক্তরাষ্ট্রের পার্শ্ববর্তী দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"কোলোনিয়ান"_s)
		})
	}));
	return data;
}

LocaleNames_bn_IN::LocaleNames_bn_IN() {
}

$Class* LocaleNames_bn_IN::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bn_IN, name, initialize, &_LocaleNames_bn_IN_ClassInfo_, allocate$LocaleNames_bn_IN);
	return class$;
}

$Class* LocaleNames_bn_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun