#include <javax/swing/plaf/basic/BasicScrollBarUI$ModelListener.h>
#include <java/awt/Container.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicScrollBarUI$ModelListener::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollBarUI$ModelListener::stateChanged($ChangeEvent* e) {
	if (!this->this$0->useCachedValue) {
		this->this$0->scrollBarValue = $nc(this->this$0->scrollbar)->getValue();
	}
	this->this$0->layoutContainer(this->this$0->scrollbar);
	this->this$0->useCachedValue = false;
}

BasicScrollBarUI$ModelListener::BasicScrollBarUI$ModelListener() {
}

$Class* BasicScrollBarUI$ModelListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$ModelListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PROTECTED, $method(BasicScrollBarUI$ModelListener, init$, void, $BasicScrollBarUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicScrollBarUI$ModelListener, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicScrollBarUI$ModelListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ModelListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicScrollBarUI$ModelListener",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicScrollBarUI"
	};
	$loadClass(BasicScrollBarUI$ModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicScrollBarUI$ModelListener);
	});
	return class$;
}

$Class* BasicScrollBarUI$ModelListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax