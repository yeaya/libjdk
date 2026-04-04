#include <javax/swing/plaf/basic/BasicComboBoxUI$ItemHandler.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboBoxUI$ItemHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$ItemHandler::itemStateChanged($ItemEvent* e) {
}

BasicComboBoxUI$ItemHandler::BasicComboBoxUI$ItemHandler() {
}

$Class* BasicComboBoxUI$ItemHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$ItemHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(BasicComboBoxUI$ItemHandler, init$, void, $BasicComboBoxUI*)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ItemHandler, itemStateChanged, void, $ItemEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "ItemHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler",
		"java.lang.Object",
		"java.awt.event.ItemListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicComboBoxUI"
	};
	$loadClass(BasicComboBoxUI$ItemHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboBoxUI$ItemHandler);
	});
	return class$;
}

$Class* BasicComboBoxUI$ItemHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax