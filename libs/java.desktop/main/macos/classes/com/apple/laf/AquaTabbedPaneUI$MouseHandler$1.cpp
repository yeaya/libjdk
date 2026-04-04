#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$1.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaTabbedPaneTabState.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneUI$MouseHandler = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneUI$MouseHandler$1::init$($AquaTabbedPaneUI$MouseHandler* this$1) {
	$set(this, this$1, this$1);
}

void AquaTabbedPaneUI$MouseHandler$1::popupMenuCanceled($PopupMenuEvent* e) {
}

void AquaTabbedPaneUI$MouseHandler$1::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void AquaTabbedPaneUI$MouseHandler$1::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$useLocalObjectStack();
	$nc(this->this$1->this$0)->pressedTab = -3;
	$nc(this->this$1->this$0->tabPane)->repaint($($nc(this->this$1->this$0->visibleTabState)->getLeftScrollTabRect()));
	$nc(this->this$1->this$0->tabPane)->repaint($(this->this$1->this$0->visibleTabState->getRightScrollTabRect()));
}

AquaTabbedPaneUI$MouseHandler$1::AquaTabbedPaneUI$MouseHandler$1() {
}

$Class* AquaTabbedPaneUI$MouseHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;)V", nullptr, 0, $method(AquaTabbedPaneUI$MouseHandler$1, init$, void, $AquaTabbedPaneUI$MouseHandler*)},
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneUI$MouseHandler$1, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneUI$MouseHandler$1, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneUI$MouseHandler$1, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTabbedPaneUI$MouseHandler",
		"showFullPopup",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneUI$MouseHandler", "com.apple.laf.AquaTabbedPaneUI", "MouseHandler", 0},
		{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneUI$MouseHandler$1",
		"java.lang.Object",
		"javax.swing.event.PopupMenuListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneUI"
	};
	$loadClass(AquaTabbedPaneUI$MouseHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneUI$MouseHandler$1);
	});
	return class$;
}

$Class* AquaTabbedPaneUI$MouseHandler$1::class$ = nullptr;

		} // laf
	} // apple
} // com