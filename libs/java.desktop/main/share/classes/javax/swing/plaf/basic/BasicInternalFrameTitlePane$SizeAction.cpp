#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$SizeAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameTitlePane$SizeAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.sizeButtonText"_s)));
}

void BasicInternalFrameTitlePane$SizeAction::actionPerformed($ActionEvent* e) {
}

BasicInternalFrameTitlePane$SizeAction::BasicInternalFrameTitlePane$SizeAction() {
}

$Class* BasicInternalFrameTitlePane$SizeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$SizeAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(BasicInternalFrameTitlePane$SizeAction, init$, void, $BasicInternalFrameTitlePane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$SizeAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SizeAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "SizeAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SizeAction",
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
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
	};
	$loadClass(BasicInternalFrameTitlePane$SizeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicInternalFrameTitlePane$SizeAction));
	});
	return class$;
}

$Class* BasicInternalFrameTitlePane$SizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax