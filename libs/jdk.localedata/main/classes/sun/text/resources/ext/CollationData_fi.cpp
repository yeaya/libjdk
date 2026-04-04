#include <sun/text/resources/ext/CollationData_fi.h>
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

void CollationData_fi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_fi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& V ; w , W & Z < å , Å< ä , Ä < ö , Ö< ő , Ő ; ø , Ø&  Y ; ű, Ű ; ü , Ü"_s
	})});
}

CollationData_fi::CollationData_fi() {
}

$Class* CollationData_fi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_fi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_fi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_fi",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_fi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_fi);
	});
	return class$;
}

$Class* CollationData_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun