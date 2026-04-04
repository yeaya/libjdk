#include <javax/swing/plaf/basic/BasicButtonUI$SelectPreviousBtn.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicButtonUI$SelectPreviousBtn::init$($BasicButtonUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("Previous"_s);
}

void BasicButtonUI$SelectPreviousBtn::actionPerformed($ActionEvent* e) {
	this->this$0->selectToggleButton(e, false);
}

BasicButtonUI$SelectPreviousBtn::BasicButtonUI$SelectPreviousBtn() {
}

$Class* BasicButtonUI$SelectPreviousBtn::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$SelectPreviousBtn, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;)V", nullptr, $PUBLIC, $method(BasicButtonUI$SelectPreviousBtn, init$, void, $BasicButtonUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI$SelectPreviousBtn, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectPreviousBtn", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicButtonUI"
	};
	$loadClass(BasicButtonUI$SelectPreviousBtn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicButtonUI$SelectPreviousBtn));
	});
	return class$;
}

$Class* BasicButtonUI$SelectPreviousBtn::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax