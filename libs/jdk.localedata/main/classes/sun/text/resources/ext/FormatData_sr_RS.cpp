#include <sun/text/resources/ext/FormatData_sr_RS.h>
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

void FormatData_sr_RS::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_RS::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_sr_RS::FormatData_sr_RS() {
}

$Class* FormatData_sr_RS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_RS, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_RS, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_sr_RS",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_sr_RS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_sr_RS);
	});
	return class$;
}

$Class* FormatData_sr_RS::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun