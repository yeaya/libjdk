#include <sun/awt/X11/InfoWindow$LiveArguments.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/X11/InfoWindow.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* InfoWindow$LiveArguments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InfoWindow$LiveArguments, getBounds, $Rectangle*)},
		{"isDisposed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InfoWindow$LiveArguments, isDisposed, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.awt.X11.InfoWindow$LiveArguments",
		nullptr,
		nullptr,
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
	$loadClass(InfoWindow$LiveArguments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$LiveArguments);
	});
	return class$;
}

$Class* InfoWindow$LiveArguments::class$ = nullptr;

		} // X11
	} // awt
} // sun