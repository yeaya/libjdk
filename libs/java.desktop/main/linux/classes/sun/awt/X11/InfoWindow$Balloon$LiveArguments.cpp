#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* InfoWindow$Balloon$LiveArguments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InfoWindow$Balloon$LiveArguments, getActionCommand, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.InfoWindow$Balloon$LiveArguments",
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
	$loadClass(InfoWindow$Balloon$LiveArguments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Balloon$LiveArguments);
	});
	return class$;
}

$Class* InfoWindow$Balloon$LiveArguments::class$ = nullptr;

		} // X11
	} // awt
} // sun