#include <javax/swing/plaf/basic/BasicOptionPaneUI$2.h>
#include <java/awt/Component.h>
#include <java/awt/event/HierarchyEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef PARENT_CHANGED

using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicOptionPaneUI$2::init$($BasicOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicOptionPaneUI$2::hierarchyChanged($HierarchyEvent* e) {
	$useLocalObjectStack();
	if (($nc(e)->getChangeFlags() & $HierarchyEvent::PARENT_CHANGED) != 0) {
		$var($JButton, defaultButton, $cast($JButton, e->getComponent()));
		$var($JRootPane, root, $SwingUtilities::getRootPane(defaultButton));
		if (root != nullptr) {
			root->setDefaultButton(defaultButton);
		}
	}
}

BasicOptionPaneUI$2::BasicOptionPaneUI$2() {
}

$Class* BasicOptionPaneUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;)V", nullptr, 0, $method(BasicOptionPaneUI$2, init$, void, $BasicOptionPaneUI*)},
		{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicOptionPaneUI$2, hierarchyChanged, void, $HierarchyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicOptionPaneUI",
		"addButtonComponents",
		"(Ljava/awt/Container;[Ljava/lang/Object;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$2",
		"java.lang.Object",
		"java.awt.event.HierarchyListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicOptionPaneUI"
	};
	$loadClass(BasicOptionPaneUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicOptionPaneUI$2);
	});
	return class$;
}

$Class* BasicOptionPaneUI$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax