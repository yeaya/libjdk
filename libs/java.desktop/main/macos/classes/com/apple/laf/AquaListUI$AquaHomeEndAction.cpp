#include <com/apple/laf/AquaListUI$AquaHomeEndAction.h>
#include <com/apple/laf/AquaListUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JList = ::javax::swing::JList;

namespace com {
	namespace apple {
		namespace laf {

void AquaListUI$AquaHomeEndAction::init$(bool isHomeAction) {
	$AbstractAction::init$();
	this->fHomeAction = false;
	this->fHomeAction = isHomeAction;
}

void AquaListUI$AquaHomeEndAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JList, list, $cast($JList, $nc(e)->getSource()));
	if (this->fHomeAction) {
		$nc(list)->ensureIndexIsVisible(0);
	} else {
		int32_t size = $$nc($nc(list)->getModel())->getSize();
		list->ensureIndexIsVisible(size - 1);
	}
}

AquaListUI$AquaHomeEndAction::AquaListUI$AquaHomeEndAction() {
}

$Class* AquaListUI$AquaHomeEndAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fHomeAction", "Z", nullptr, $PRIVATE, $field(AquaListUI$AquaHomeEndAction, fHomeAction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PROTECTED, $method(AquaListUI$AquaHomeEndAction, init$, void, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaListUI$AquaHomeEndAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaListUI$AquaHomeEndAction", "com.apple.laf.AquaListUI", "AquaHomeEndAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaListUI$AquaHomeEndAction",
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
		"com.apple.laf.AquaListUI"
	};
	$loadClass(AquaListUI$AquaHomeEndAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaListUI$AquaHomeEndAction));
	});
	return class$;
}

$Class* AquaListUI$AquaHomeEndAction::class$ = nullptr;

		} // laf
	} // apple
} // com