#include <javax/print/FlavorException.h>
#include <javax/print/DocFlavor.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$Class* FlavorException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getUnsupportedFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FlavorException, getUnsupportedFlavors, $DocFlavorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.FlavorException",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FlavorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlavorException);
	});
	return class$;
}

$Class* FlavorException::class$ = nullptr;

	} // print
} // javax