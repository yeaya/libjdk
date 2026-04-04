#include <com/apple/laf/AquaFileChooserUI$SaveTextFocusListener.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$SaveTextFocusListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$SaveTextFocusListener::focusGained($FocusEvent* e) {
	this->this$0->updateButtonState($(this->this$0->getFileChooser()));
}

void AquaFileChooserUI$SaveTextFocusListener::focusLost($FocusEvent* e) {
}

AquaFileChooserUI$SaveTextFocusListener::AquaFileChooserUI$SaveTextFocusListener() {
}

$Class* AquaFileChooserUI$SaveTextFocusListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SaveTextFocusListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$SaveTextFocusListener, init$, void, $AquaFileChooserUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$SaveTextFocusListener, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$SaveTextFocusListener, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$SaveTextFocusListener", "com.apple.laf.AquaFileChooserUI", "SaveTextFocusListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$SaveTextFocusListener",
		"java.lang.Object",
		"java.awt.event.FocusListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$SaveTextFocusListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$SaveTextFocusListener);
	});
	return class$;
}

$Class* AquaFileChooserUI$SaveTextFocusListener::class$ = nullptr;

		} // laf
	} // apple
} // com