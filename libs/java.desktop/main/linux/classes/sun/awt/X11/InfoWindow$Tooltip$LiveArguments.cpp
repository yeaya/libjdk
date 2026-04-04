#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* InfoWindow$Tooltip$LiveArguments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTooltipString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InfoWindow$Tooltip$LiveArguments, getTooltipString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Tooltip$LiveArguments", "sun.awt.X11.InfoWindow$Tooltip", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.InfoWindow$Tooltip$LiveArguments",
		nullptr,
		"sun.awt.X11.InfoWindow$LiveArguments",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Tooltip$LiveArguments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Tooltip$LiveArguments);
	});
	return class$;
}

$Class* InfoWindow$Tooltip$LiveArguments::class$ = nullptr;

		} // X11
	} // awt
} // sun