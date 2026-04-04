#include <sun/text/resources/ext/CollationData_vi.h>
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

void CollationData_vi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_vi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"&̀;̉;̃;́;̣&D<đ,Đ&Z<̆<̂<̛"_s
	})});
}

CollationData_vi::CollationData_vi() {
}

$Class* CollationData_vi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_vi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_vi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_vi",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_vi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_vi);
	});
	return class$;
}

$Class* CollationData_vi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun