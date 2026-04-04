#include <sun/lwawt/macosx/CMenuItem$1.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $MenuItem = ::java::awt::MenuItem;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CMenuItem$1::init$($CMenuItem* this$0, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void CMenuItem$1::run() {
	$useLocalObjectStack();
	$var($String, cmd, $$sure($MenuItem, this->this$0->getTarget())->getActionCommand());
	$var($ActionEvent, event, $new($ActionEvent, $(this->this$0->getTarget()), $ActionEvent::ACTION_PERFORMED, cmd, this->val$when, this->val$modifiers));
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext($(this->this$0->getTarget()))), event);
}

CMenuItem$1::CMenuItem$1() {
}

$Class* CMenuItem$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CMenuItem$1, this$0)},
		{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(CMenuItem$1, val$modifiers)},
		{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(CMenuItem$1, val$when)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CMenuItem;JI)V", "()V", 0, $method(CMenuItem$1, init$, void, $CMenuItem*, int64_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CMenuItem$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CMenuItem",
		"handleAction",
		"(JI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CMenuItem$1",
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
		"sun.lwawt.macosx.CMenuItem"
	};
	$loadClass(CMenuItem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMenuItem$1);
	});
	return class$;
}

$Class* CMenuItem$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun