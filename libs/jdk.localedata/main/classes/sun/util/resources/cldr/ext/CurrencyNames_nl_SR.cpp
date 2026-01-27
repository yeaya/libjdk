#include <sun/util/resources/cldr/ext/CurrencyNames_nl_SR.h>

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

$MethodInfo _CurrencyNames_nl_SR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_SR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_SR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nl_SR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nl_SR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nl_SR_MethodInfo_
};

$Object* allocate$CurrencyNames_nl_SR($Class* clazz) {
	return $of($alloc(CurrencyNames_nl_SR));
}

void CurrencyNames_nl_SR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_SR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SRD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_nl_SR::CurrencyNames_nl_SR() {
}

$Class* CurrencyNames_nl_SR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nl_SR, name, initialize, &_CurrencyNames_nl_SR_ClassInfo_, allocate$CurrencyNames_nl_SR);
	return class$;
}

$Class* CurrencyNames_nl_SR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun