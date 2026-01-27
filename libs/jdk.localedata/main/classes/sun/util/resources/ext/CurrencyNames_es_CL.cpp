#include <sun/util/resources/ext/CurrencyNames_es_CL.h>

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

$MethodInfo _CurrencyNames_es_CL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_CL_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_CL",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_CL_MethodInfo_
};

$Object* allocate$CurrencyNames_es_CL($Class* clazz) {
	return $of($alloc(CurrencyNames_es_CL));
}

void CurrencyNames_es_CL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CLP"_s),
		$of("Ch$"_s)
	})});
}

CurrencyNames_es_CL::CurrencyNames_es_CL() {
}

$Class* CurrencyNames_es_CL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_CL, name, initialize, &_CurrencyNames_es_CL_ClassInfo_, allocate$CurrencyNames_es_CL);
	return class$;
}

$Class* CurrencyNames_es_CL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun