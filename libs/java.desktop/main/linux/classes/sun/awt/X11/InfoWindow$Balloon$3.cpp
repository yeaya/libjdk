#include <sun/awt/X11/InfoWindow$Balloon$3.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/InfoWindow$LiveArguments.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$Balloon$3::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Balloon$3::run() {
	$useLocalObjectStack();
	if ($nc(this->this$0->liveArguments)->isDisposed()) {
		return;
	}
	$var($Point, parLoc, $$nc(this->this$0->getParent())->getLocationOnScreen());
	$var($Dimension, parSize, $$nc(this->this$0->getParent())->getSize());
	this->this$0->show($$new($Point, $nc(parLoc)->x + $nc(parSize)->width / 2, $nc(parLoc)->y + $nc(parSize)->height / 2), 0);
	if (this->this$0->iconImage != nullptr) {
		$nc(this->this$0->iconCanvas)->updateImage(this->this$0->iconImage);
	}
}

InfoWindow$Balloon$3::InfoWindow$Balloon$3() {
}

$Class* InfoWindow$Balloon$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, 0, $method(InfoWindow$Balloon$3, init$, void, $InfoWindow$Balloon*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Balloon$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.InfoWindow$Balloon",
		"_display",
		"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$Balloon$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Balloon$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Balloon$3);
	});
	return class$;
}

$Class* InfoWindow$Balloon$3::class$ = nullptr;

		} // X11
	} // awt
} // sun