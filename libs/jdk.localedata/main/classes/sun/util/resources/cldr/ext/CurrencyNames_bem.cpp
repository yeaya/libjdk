#include <sun/util/resources/cldr/ext/CurrencyNames_bem.h>

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

$MethodInfo _CurrencyNames_bem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bem, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bem, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bem",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bem_MethodInfo_
};

$Object* allocate$CurrencyNames_bem($Class* clazz) {
	return $of($alloc(CurrencyNames_bem));
}

void CurrencyNames_bem::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bem::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ZMW"_s),
		$of("K"_s)
	})}));
	return data;
}

CurrencyNames_bem::CurrencyNames_bem() {
}

$Class* CurrencyNames_bem::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bem, name, initialize, &_CurrencyNames_bem_ClassInfo_, allocate$CurrencyNames_bem);
	return class$;
}

$Class* CurrencyNames_bem::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun