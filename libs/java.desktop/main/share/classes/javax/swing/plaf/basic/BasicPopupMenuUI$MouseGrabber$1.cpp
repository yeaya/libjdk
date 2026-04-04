#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Toolkit.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef GRAB_EVENT_MASK
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_WHEEL_EVENT_MASK
#undef WINDOW_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicPopupMenuUI$MouseGrabber$1::init$($BasicPopupMenuUI$MouseGrabber* this$0, $Toolkit* val$tk) {
	$set(this, this$0, this$0);
	$set(this, val$tk, val$tk);
}

$Object* BasicPopupMenuUI$MouseGrabber$1::run() {
	$nc(this->val$tk)->addAWTEventListener(this->this$0, ((($AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::MOUSE_MOTION_EVENT_MASK) | $AWTEvent::MOUSE_WHEEL_EVENT_MASK) | $AWTEvent::WINDOW_EVENT_MASK) | $SunToolkit::GRAB_EVENT_MASK);
	return nullptr;
}

BasicPopupMenuUI$MouseGrabber$1::BasicPopupMenuUI$MouseGrabber$1() {
}

$Class* BasicPopupMenuUI$MouseGrabber$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$1, this$0)},
		{"val$tk", "Ljava/awt/Toolkit;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$1, val$tk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;Ljava/awt/Toolkit;)V", "()V", 0, $method(BasicPopupMenuUI$MouseGrabber$1, init$, void, $BasicPopupMenuUI$MouseGrabber*, $Toolkit*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicPopupMenuUI$MouseGrabber$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber",
		"grabWindow",
		"([Ljavax/swing/MenuElement;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber", "javax.swing.plaf.basic.BasicPopupMenuUI", "MouseGrabber", $STATIC},
		{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicPopupMenuUI"
	};
	$loadClass(BasicPopupMenuUI$MouseGrabber$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicPopupMenuUI$MouseGrabber$1);
	});
	return class$;
}

$Class* BasicPopupMenuUI$MouseGrabber$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax