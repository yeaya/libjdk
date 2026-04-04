#include <sun/awt/X11/InfoWindow$Balloon$ActionPerformer.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef BUTTON1

using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$Balloon$ActionPerformer::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void InfoWindow$Balloon$ActionPerformer::mouseClicked($MouseEvent* e) {
	$useLocalObjectStack();
	this->this$0->hide();
	if ($nc(e)->getButton() == $MouseEvent::BUTTON1) {
		$var($Object, var$0, this->this$0->target);
		$var($String, var$1, $nc(this->this$0->liveArguments)->getActionCommand());
		int64_t var$2 = e->getWhen();
		$var($ActionEvent, aev, $new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, var$1, var$2, e->getModifiers()));
		$XToolkit::postEvent($($XToolkit::targetToAppContext($(aev->getSource()))), aev);
	}
}

InfoWindow$Balloon$ActionPerformer::InfoWindow$Balloon$ActionPerformer() {
}

$Class* InfoWindow$Balloon$ActionPerformer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$ActionPerformer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, $PRIVATE, $method(InfoWindow$Balloon$ActionPerformer, init$, void, $InfoWindow$Balloon*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Balloon$ActionPerformer, mouseClicked, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$ActionPerformer", "sun.awt.X11.InfoWindow$Balloon", "ActionPerformer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$Balloon$ActionPerformer",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Balloon$ActionPerformer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InfoWindow$Balloon$ActionPerformer));
	});
	return class$;
}

$Class* InfoWindow$Balloon$ActionPerformer::class$ = nullptr;

		} // X11
	} // awt
} // sun