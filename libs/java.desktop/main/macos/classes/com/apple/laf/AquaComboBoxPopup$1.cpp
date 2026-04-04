#include <com/apple/laf/AquaComboBoxPopup$1.h>
#include <com/apple/laf/AquaComboBoxPopup.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <jcpp.h>

#undef META_MASK
#undef NOBUTTON

using $AquaComboBoxPopup = ::com::apple::laf::AquaComboBoxPopup;
using $Component = ::java::awt::Component;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxPopup$1::init$($AquaComboBoxPopup* this$0, $ListModel* dataModel) {
	$set(this, this$0, this$0);
	$JList::init$(dataModel);
}

void AquaComboBoxPopup$1::processMouseEvent($MouseEvent* e$renamed) {
	$useLocalObjectStack();
	$var($MouseEvent, e, e$renamed);
	if ($nc(e)->isMetaDown()) {
		$var($Component, var$0, $cast($Component, e->getSource()));
		int32_t var$1 = e->getID();
		int64_t var$2 = e->getWhen();
		int32_t var$3 = e->getModifiers() ^ $InputEvent::META_MASK;
		int32_t var$4 = e->getX();
		int32_t var$5 = e->getY();
		int32_t var$6 = e->getXOnScreen();
		int32_t var$7 = e->getYOnScreen();
		int32_t var$8 = e->getClickCount();
		$assign(e, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
	}
	$JList::processMouseEvent(e);
}

AquaComboBoxPopup$1::AquaComboBoxPopup$1() {
}

$Class* AquaComboBoxPopup$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxPopup;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxPopup$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxPopup;Ljavax/swing/ListModel;)V", nullptr, 0, $method(AquaComboBoxPopup$1, init$, void, $AquaComboBoxPopup*, $ListModel*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxPopup$1, processMouseEvent, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxPopup",
		"createList",
		"()Ljavax/swing/JList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxPopup$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxPopup$1",
		"javax.swing.JList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/JList<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaComboBoxPopup"
	};
	$loadClass(AquaComboBoxPopup$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxPopup$1));
	});
	return class$;
}

$Class* AquaComboBoxPopup$1::class$ = nullptr;

		} // laf
	} // apple
} // com