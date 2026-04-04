#include <com/apple/laf/AquaFileChooserUI$SaveTextDocumentListener.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$SaveTextDocumentListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$SaveTextDocumentListener::insertUpdate($DocumentEvent* e) {
	textChanged();
}

void AquaFileChooserUI$SaveTextDocumentListener::removeUpdate($DocumentEvent* e) {
	textChanged();
}

void AquaFileChooserUI$SaveTextDocumentListener::changedUpdate($DocumentEvent* e) {
}

void AquaFileChooserUI$SaveTextDocumentListener::textChanged() {
	this->this$0->updateButtonState($(this->this$0->getFileChooser()));
}

AquaFileChooserUI$SaveTextDocumentListener::AquaFileChooserUI$SaveTextDocumentListener() {
}

$Class* AquaFileChooserUI$SaveTextDocumentListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SaveTextDocumentListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$SaveTextDocumentListener, init$, void, $AquaFileChooserUI*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$SaveTextDocumentListener, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$SaveTextDocumentListener, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$SaveTextDocumentListener, removeUpdate, void, $DocumentEvent*)},
		{"textChanged", "()V", nullptr, 0, $virtualMethod(AquaFileChooserUI$SaveTextDocumentListener, textChanged, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener", "com.apple.laf.AquaFileChooserUI", "SaveTextDocumentListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener",
		"java.lang.Object",
		"javax.swing.event.DocumentListener",
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
	$loadClass(AquaFileChooserUI$SaveTextDocumentListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$SaveTextDocumentListener);
	});
	return class$;
}

$Class* AquaFileChooserUI$SaveTextDocumentListener::class$ = nullptr;

		} // laf
	} // apple
} // com