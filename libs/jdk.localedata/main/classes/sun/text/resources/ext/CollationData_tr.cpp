#include <sun/text/resources/ext/CollationData_tr.h>
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

void CollationData_tr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_tr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& A < ä , Ä & C < ç , Ç & G < ğ , Ğ & H < ı , I & I < i , İ < Ĳ , ĳ & O < ö , Ö & S < ş , Ş & U < ü , Ü "_s
	})});
}

CollationData_tr::CollationData_tr() {
}

$Class* CollationData_tr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_tr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_tr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_tr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_tr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_tr);
	});
	return class$;
}

$Class* CollationData_tr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun