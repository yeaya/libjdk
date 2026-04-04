#include <sun/text/resources/ext/CollationData_hu.h>
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

void CollationData_hu::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_hu::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& C < cs , cS , Cs , CS & D < đ, Đ & G < gy, Gy, gY, GY & L < ly, Ly, lY, LY & O < ö , Ö < ő , Ő & S < sz , sZ , Sz , SZ & U < ü , Ü < ű , Ű & Z < zs , zS , Zs , ZS "_s
	})});
}

CollationData_hu::CollationData_hu() {
}

$Class* CollationData_hu::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_hu, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_hu, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_hu",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_hu, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_hu);
	});
	return class$;
}

$Class* CollationData_hu::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun