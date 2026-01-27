#include <sun/util/resources/cldr/ext/CurrencyNames_es_GT.h>

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

$MethodInfo _CurrencyNames_es_GT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_GT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_GT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_GT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_GT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_GT_MethodInfo_
};

$Object* allocate$CurrencyNames_es_GT($Class* clazz) {
	return $of($alloc(CurrencyNames_es_GT));
}

void CurrencyNames_es_GT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_GT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("Q"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal"_s)
		})
	}));
	return data;
}

CurrencyNames_es_GT::CurrencyNames_es_GT() {
}

$Class* CurrencyNames_es_GT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_GT, name, initialize, &_CurrencyNames_es_GT_ClassInfo_, allocate$CurrencyNames_es_GT);
	return class$;
}

$Class* CurrencyNames_es_GT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun