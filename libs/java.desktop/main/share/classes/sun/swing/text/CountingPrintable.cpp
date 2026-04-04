#include <sun/swing/text/CountingPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace text {

$Class* CountingPrintable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNumberOfPages", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CountingPrintable, getNumberOfPages, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.text.CountingPrintable",
		nullptr,
		"java.awt.print.Printable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CountingPrintable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CountingPrintable);
	});
	return class$;
}

$Class* CountingPrintable::class$ = nullptr;

		} // text
	} // swing
} // sun