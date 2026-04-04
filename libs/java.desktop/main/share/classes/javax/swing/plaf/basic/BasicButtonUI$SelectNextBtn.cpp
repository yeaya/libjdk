#include <javax/swing/plaf/basic/BasicButtonUI$SelectNextBtn.h>
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

void BasicButtonUI$SelectNextBtn::init$($BasicButtonUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("Next"_s);
}

void BasicButtonUI$SelectNextBtn::actionPerformed($ActionEvent* e) {
	this->this$0->selectToggleButton(e, true);
}

BasicButtonUI$SelectNextBtn::BasicButtonUI$SelectNextBtn() {
}

$Class* BasicButtonUI$SelectNextBtn::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$SelectNextBtn, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;)V", nullptr, $PUBLIC, $method(BasicButtonUI$SelectNextBtn, init$, void, $BasicButtonUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI$SelectNextBtn, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectNextBtn", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn",
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
	$loadClass(BasicButtonUI$SelectNextBtn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicButtonUI$SelectNextBtn));
	});
	return class$;
}

$Class* BasicButtonUI$SelectNextBtn::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax