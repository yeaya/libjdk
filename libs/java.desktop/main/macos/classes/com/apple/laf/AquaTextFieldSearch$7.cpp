#include <com/apple/laf/AquaTextFieldSearch$7.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$7::init$($JLabel* val$label, $JTextComponent* val$c) {
	$set(this, val$label, val$label);
	$set(this, val$c, val$c);
}

void AquaTextFieldSearch$7::changedUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

void AquaTextFieldSearch$7::insertUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

void AquaTextFieldSearch$7::removeUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

AquaTextFieldSearch$7::AquaTextFieldSearch$7() {
}

$Class* AquaTextFieldSearch$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$7, val$c)},
		{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$7, val$label)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(AquaTextFieldSearch$7, init$, void, $JLabel*, $JTextComponent*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$7, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$7, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$7, removeUpdate, void, $DocumentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"getPromptLabel",
		"(Ljavax/swing/text/JTextComponent;)Ljava/awt/Component;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$7",
		"java.lang.Object",
		"javax.swing.event.DocumentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextFieldSearch"
	};
	$loadClass(AquaTextFieldSearch$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$7);
	});
	return class$;
}

$Class* AquaTextFieldSearch$7::class$ = nullptr;

		} // laf
	} // apple
} // com