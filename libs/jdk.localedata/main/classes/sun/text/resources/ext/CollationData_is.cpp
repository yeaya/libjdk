#include <sun/text/resources/ext/CollationData_is.h>
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

void CollationData_is::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_is::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"@& A < á, Á & D < ð, Ð& E < é, É & I < í, Í & O < ó, Ó & U < ú, Ú & Y < ý, Ý & Z < þ, Þ < æ, Æ< ö, Ö ; ø, Ø"_s
	})});
}

CollationData_is::CollationData_is() {
}

$Class* CollationData_is::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_is, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_is, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_is",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_is, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_is);
	});
	return class$;
}

$Class* CollationData_is::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun