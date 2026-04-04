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

void CurrencyNames_nl_SR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_SR::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		"SRD"_s,
		"$"_s
	})}));
	return data;
}

CurrencyNames_nl_SR::CurrencyNames_nl_SR() {
}

$Class* CurrencyNames_nl_SR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_SR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_SR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_nl_SR",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_nl_SR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_nl_SR);
	});
	return class$;
}

$Class* CurrencyNames_nl_SR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun