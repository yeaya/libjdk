#include <sun/text/resources/ext/BreakIteratorResources_th.h>
#include <java/util/ResourceBundle.h>
#include <sun/text/resources/ext/BreakIteratorInfo_th.h>
#include <sun/util/resources/BreakIteratorResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;
using $BreakIteratorInfo_th = ::sun::text::resources::ext::BreakIteratorInfo_th;
using $BreakIteratorResourceBundle = ::sun::util::resources::BreakIteratorResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void BreakIteratorResources_th::init$() {
	$BreakIteratorResourceBundle::init$();
}

$ResourceBundle* BreakIteratorResources_th::getBreakIteratorInfo() {
	return $new($BreakIteratorInfo_th);
}

BreakIteratorResources_th::BreakIteratorResources_th() {
}

$Class* BreakIteratorResources_th::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorResources_th, init$, void)},
		{"getBreakIteratorInfo", "()Ljava/util/ResourceBundle;", nullptr, $PROTECTED, $virtualMethod(BreakIteratorResources_th, getBreakIteratorInfo, $ResourceBundle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.BreakIteratorResources_th",
		"sun.util.resources.BreakIteratorResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BreakIteratorResources_th, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorResources_th);
	});
	return class$;
}

$Class* BreakIteratorResources_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun