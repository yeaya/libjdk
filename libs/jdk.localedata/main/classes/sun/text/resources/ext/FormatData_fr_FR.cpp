#include <sun/text/resources/ext/FormatData_fr_FR.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void FormatData_fr_FR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_FR::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_fr_FR::FormatData_fr_FR() {
}

$Class* FormatData_fr_FR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_FR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_FR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_fr_FR",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_fr_FR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_fr_FR);
	});
	return class$;
}

$Class* FormatData_fr_FR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun