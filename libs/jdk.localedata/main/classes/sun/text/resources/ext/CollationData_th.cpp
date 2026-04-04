#include <sun/text/resources/ext/CollationData_th.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void CollationData_th::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_th::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		$cstr({'!', ' ', '&', ' ', 'Z', ' ', '<', ' ', 0x0e01, ' ', '<', ' ', 0x0e02, ' ', '<', ' ', 0x0e03, ' ', '<', ' ', 0x0e04, ' ', '<', ' ', 0x0e05, ' ', '<', ' ', 0x0e06, ' ', '<', ' ', 0x0e07, ' ', '<', ' ', 0x0e08, ' ', '<', ' ', 0x0e09, ' ', '<', ' ', 0x0e0a, ' ', '<', ' ', 0x0e0b, ' ', '<', ' ', 0x0e0c, ' ', '<', ' ', 0x0e0d, ' ', '<', ' ', 0x0e0e, ' ', '<', ' ', 0x0e0f, ' ', '<', ' ', 0x0e10, ' ', '<', ' ', 0x0e11, ' ', '<', ' ', 0x0e12, ' ', '<', ' ', 0x0e13, ' ', '<', ' ', 0x0e14, ' ', '<', ' ', 0x0e15, ' ', '<', ' ', 0x0e16, ' ', '<', ' ', 0x0e17, ' ', '<', ' ', 0x0e18, ' ', '<', ' ', 0x0e19, ' ', '<', ' ', 0x0e1a, ' ', '<', ' ', 0x0e1b, ' ', '<', ' ', 0x0e1c, ' ', '<', ' ', 0x0e1d, ' ', '<', ' ', 0x0e1e, ' ', '<', ' ', 0x0e1f, ' ', '<', ' ', 0x0e20, ' ', '<', ' ', 0x0e21, ' ', '<', ' ', 0x0e22, ' ', '<', ' ', 0x0e23, ' ', '<', ' ', 0x0e24, ' ', '<', ' ', 0x0e25, ' ', '<', ' ', 0x0e26, ' ', '<', ' ', 0x0e27, ' ', '<', ' ', 0x0e28, ' ', '<', ' ', 0x0e29, ' ', '<', ' ', 0x0e2a, ' ', '<', ' ', 0x0e2b, ' ', '<', ' ', 0x0e2c, ' ', '<', ' ', 0x0e2d, ' ', '<', ' ', 0x0e2e, ' ', '<', ' ', 0x0e4d, ' ', '<', ' ', 0x0e30, ' ', '<', ' ', 0x0e31, ' ', '<', ' ', 0x0e32, ' ', '<', ' ', 0x0e33, ' ', '=', ' ', 0x0e4d, 0x0e32, ' ', '<', ' ', 0x0e34, ' ', '<', ' ', 0x0e35, ' ', '<', ' ', 0x0e36, ' ', '<', ' ', 0x0e37, ' ', '<', ' ', 0x0e38, ' ', '<', ' ', 0x0e39, ' ', '<', ' ', 0x0e40, ' ', '<', ' ', 0x0e41, ' ', '<', ' ', 0x0e42, ' ', '<', ' ', 0x0e43, ' ', '<', ' ', 0x0e44, ' ', '<', ' ', 0x0e3a, ' ', '<', ' ', 0x0e45, ' ', '&', ' ', 0x0e32, ' ', ',', ' ', '\0', 'E', '4', '5', ' ', '&', ' ', 0x0301, ' ', ',', ' ', 0x0e2f, ' ', ',', ' ', 0x0e46, ' ', ',', ' ', 0x0e4f, ' ', ',', ' ', 0x0e5a, ' ', ',', ' ', 0x0e5b, ' ', ';', ' ', 0x0e4e, ' ', ';', ' ', 0x0e4c, ' ', ';', ' ', 0x0e47, ' ', ';', ' ', 0x0e48, ' ', ';', ' ', 0x0e49, ' ', ';', ' ', 0x0e4a, ' ', ';', ' ', 0x0e4b, ' ', '&', ' ', '0', ' ', '=', ' ', 0x0e50, ' ', '&', ' ', '1', ' ', '=', ' ', 0x0e51, ' ', '&', ' ', '2', ' ', '=', ' ', 0x0e52, ' ', '&', ' ', '3', ' ', '=', ' ', 0x0e53, ' ', '&', ' ', '4', ' ', '=', ' ', 0x0e54, ' ', '&', ' ', '5', ' ', '=', ' ', 0x0e55, ' ', '&', ' ', '6', ' ', '=', ' ', 0x0e56, ' ', '&', ' ', '7', ' ', '=', ' ', 0x0e57, ' ', '&', ' ', '8', ' ', '=', ' ', 0x0e58, ' ', '&', ' ', '9', ' ', '=', ' ', 0x0e59, ' '})
	})});
}

CollationData_th::CollationData_th() {
}

$Class* CollationData_th::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_th, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_th, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_th",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_th, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_th);
	});
	return class$;
}

$Class* CollationData_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun