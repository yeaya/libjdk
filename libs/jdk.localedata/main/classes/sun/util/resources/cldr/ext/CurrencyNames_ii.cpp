#include <sun/util/resources/cldr/ext/CurrencyNames_ii.h>

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

$MethodInfo _CurrencyNames_ii_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ii, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ii, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ii_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ii",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ii_MethodInfo_
};

$Object* allocate$CurrencyNames_ii($Class* clazz) {
	return $of($alloc(CurrencyNames_ii));
}

void CurrencyNames_ii::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ii::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ꅉꀋꐚꌠꌋꆀꎆꃀꀋꈁꀐꌠ"_s)
		})
	}));
	return data;
}

CurrencyNames_ii::CurrencyNames_ii() {
}

$Class* CurrencyNames_ii::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ii, name, initialize, &_CurrencyNames_ii_ClassInfo_, allocate$CurrencyNames_ii);
	return class$;
}

$Class* CurrencyNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun