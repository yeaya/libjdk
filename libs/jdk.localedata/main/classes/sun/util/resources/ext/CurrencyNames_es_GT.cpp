#include <sun/util/resources/ext/CurrencyNames_es_GT.h>

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

$MethodInfo _CurrencyNames_es_GT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_GT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_GT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_GT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_GT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_GT_MethodInfo_
};

$Object* allocate$CurrencyNames_es_GT($Class* clazz) {
	return $of($alloc(CurrencyNames_es_GT));
}

void CurrencyNames_es_GT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_GT::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GTQ"_s),
		$of("Q"_s)
	})});
}

CurrencyNames_es_GT::CurrencyNames_es_GT() {
}

$Class* CurrencyNames_es_GT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_GT, name, initialize, &_CurrencyNames_es_GT_ClassInfo_, allocate$CurrencyNames_es_GT);
	return class$;
}

$Class* CurrencyNames_es_GT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun