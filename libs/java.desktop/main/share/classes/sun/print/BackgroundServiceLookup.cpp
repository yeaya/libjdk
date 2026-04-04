#include <sun/print/BackgroundServiceLookup.h>
#include <sun/print/BackgroundLookupListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BackgroundLookupListener = ::sun::print::BackgroundLookupListener;

namespace sun {
	namespace print {

$Class* BackgroundServiceLookup::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getServicesInbackground", "(Lsun/print/BackgroundLookupListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BackgroundServiceLookup, getServicesInbackground, void, $BackgroundLookupListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.print.BackgroundServiceLookup",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BackgroundServiceLookup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BackgroundServiceLookup);
	});
	return class$;
}

$Class* BackgroundServiceLookup::class$ = nullptr;

	} // print
} // sun