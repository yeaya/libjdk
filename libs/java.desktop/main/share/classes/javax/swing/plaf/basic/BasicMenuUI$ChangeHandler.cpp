#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>
#include <java/awt/Component.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicMenuUI$ChangeHandler::init$($BasicMenuUI* this$0, $JMenu* m, $BasicMenuUI* ui) {
	$set(this, this$0, this$0);
	this->isSelected = false;
	$set(this, menu, m);
	$set(this, ui, ui);
}

void BasicMenuUI$ChangeHandler::stateChanged($ChangeEvent* e) {
}

BasicMenuUI$ChangeHandler::BasicMenuUI$ChangeHandler() {
}

$Class* BasicMenuUI$ChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuUI$ChangeHandler, this$0)},
		{"menu", "Ljavax/swing/JMenu;", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, menu)},
		{"ui", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, ui)},
		{"isSelected", "Z", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, isSelected)},
		{"wasFocused", "Ljava/awt/Component;", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, wasFocused)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuUI;Ljavax/swing/JMenu;Ljavax/swing/plaf/basic/BasicMenuUI;)V", nullptr, $PUBLIC, $method(BasicMenuUI$ChangeHandler, init$, void, $BasicMenuUI*, $JMenu*, $BasicMenuUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$ChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler", "javax.swing.plaf.basic.BasicMenuUI", "ChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler",
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
		"javax.swing.plaf.basic.BasicMenuUI"
	};
	$loadClass(BasicMenuUI$ChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicMenuUI$ChangeHandler);
	});
	return class$;
}

$Class* BasicMenuUI$ChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax