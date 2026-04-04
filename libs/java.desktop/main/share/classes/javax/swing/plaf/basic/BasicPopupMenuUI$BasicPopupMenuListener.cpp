#include <javax/swing/plaf/basic/BasicPopupMenuUI$BasicPopupMenuListener.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicPopupMenuUI$BasicPopupMenuListener::init$($BasicPopupMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicPopupMenuUI$BasicPopupMenuListener::popupMenuCanceled($PopupMenuEvent* e) {
}

void BasicPopupMenuUI$BasicPopupMenuListener::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
}

void BasicPopupMenuUI$BasicPopupMenuListener::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
	$BasicLookAndFeel::playSound($$cast($JPopupMenu, $nc(e)->getSource()), "PopupMenu.popupSound"_s);
}

BasicPopupMenuUI$BasicPopupMenuListener::BasicPopupMenuUI$BasicPopupMenuListener() {
}

$Class* BasicPopupMenuUI$BasicPopupMenuListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$BasicPopupMenuListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI;)V", nullptr, $PRIVATE, $method(BasicPopupMenuUI$BasicPopupMenuListener, init$, void, $BasicPopupMenuUI*)},
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicPopupMenuUI$BasicPopupMenuListener, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicPopupMenuUI$BasicPopupMenuListener, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicPopupMenuUI$BasicPopupMenuListener, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener", "javax.swing.plaf.basic.BasicPopupMenuUI", "BasicPopupMenuListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener",
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
		"javax.swing.plaf.basic.BasicPopupMenuUI"
	};
	$loadClass(BasicPopupMenuUI$BasicPopupMenuListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicPopupMenuUI$BasicPopupMenuListener);
	});
	return class$;
}

$Class* BasicPopupMenuUI$BasicPopupMenuListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax