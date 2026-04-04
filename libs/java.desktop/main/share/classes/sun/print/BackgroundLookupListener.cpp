#include <sun/print/BackgroundLookupListener.h>
#include <javax/print/PrintService.h>
#include <jcpp.h>

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$Class* BackgroundLookupListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notifyServices", "([Ljavax/print/PrintService;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BackgroundLookupListener, notifyServices, void, $PrintServiceArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.print.BackgroundLookupListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BackgroundLookupListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BackgroundLookupListener);
	});
	return class$;
}

$Class* BackgroundLookupListener::class$ = nullptr;

	} // print
} // sun