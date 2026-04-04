#include <PopupMenuTest$PopupListener.h>
#include <PopMenuUIExt.h>
#include <PopupMenuTest.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <jcpp.h>

using $PopMenuUIExt = ::PopMenuUIExt;
using $PopupMenuTest = ::PopupMenuTest;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;

void PopupMenuTest$PopupListener::init$($PopupMenuTest* this$0) {
	$set(this, this$0, this$0);
}

void PopupMenuTest$PopupListener::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void PopupMenuTest$PopupListener::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$useLocalObjectStack();
	$var($Popup, popup, $$sure($PopMenuUIExt, $cast($PopupMenuUI, $nc(this->this$0->jpopup)->getUI()))->getPopup());
	if (popup != nullptr) {
		$PopupMenuTest::isLightWeight = !$$nc(popup->getClass()->toString())->contains("HeavyWeightPopup"_s);
	}
}

void PopupMenuTest$PopupListener::popupMenuCanceled($PopupMenuEvent* e) {
}

PopupMenuTest$PopupListener::PopupMenuTest$PopupListener() {
}

$Class* PopupMenuTest$PopupListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPopupMenuTest;", nullptr, $FINAL | $SYNTHETIC, $field(PopupMenuTest$PopupListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPopupMenuTest;)V", nullptr, 0, $method(PopupMenuTest$PopupListener, init$, void, $PopupMenuTest*)},
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$PopupListener, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$PopupListener, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$PopupListener, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PopupMenuTest$PopupListener", "PopupMenuTest", "PopupListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PopupMenuTest$PopupListener",
		"java.lang.Object",
		"javax.swing.event.PopupMenuListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PopupMenuTest"
	};
	$loadClass(PopupMenuTest$PopupListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuTest$PopupListener);
	});
	return class$;
}

$Class* PopupMenuTest$PopupListener::class$ = nullptr;