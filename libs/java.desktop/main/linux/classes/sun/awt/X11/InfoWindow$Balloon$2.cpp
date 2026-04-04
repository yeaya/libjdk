#include <sun/awt/X11/InfoWindow$Balloon$2.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$Balloon$2::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Balloon$2::actionPerformed($ActionEvent* e) {
	this->this$0->hide();
}

InfoWindow$Balloon$2::InfoWindow$Balloon$2() {
}

$Class* InfoWindow$Balloon$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, 0, $method(InfoWindow$Balloon$2, init$, void, $InfoWindow$Balloon*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Balloon$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.InfoWindow$Balloon",
		"<init>",
		"(Ljava/awt/Frame;Ljava/lang/Object;Lsun/awt/X11/InfoWindow$Balloon$LiveArguments;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$2", nullptr, nullptr, 0},
		{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$Balloon$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
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
	$loadClass(InfoWindow$Balloon$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Balloon$2);
	});
	return class$;
}

$Class* InfoWindow$Balloon$2::class$ = nullptr;

		} // X11
	} // awt
} // sun