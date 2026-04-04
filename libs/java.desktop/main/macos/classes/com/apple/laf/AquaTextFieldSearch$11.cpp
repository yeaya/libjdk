#include <com/apple/laf/AquaTextFieldSearch$11.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$11::init$($JButton* val$b, $JTextComponent* val$c) {
	$set(this, val$b, val$b);
	$set(this, val$c, val$c);
}

void AquaTextFieldSearch$11::changedUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updateCancelIcon(this->val$b, this->val$c);
}

void AquaTextFieldSearch$11::insertUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updateCancelIcon(this->val$b, this->val$c);
}

void AquaTextFieldSearch$11::removeUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updateCancelIcon(this->val$b, this->val$c);
}

AquaTextFieldSearch$11::AquaTextFieldSearch$11() {
}

$Class* AquaTextFieldSearch$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$11, val$c)},
		{"val$b", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$11, val$b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(AquaTextFieldSearch$11, init$, void, $JButton*, $JTextComponent*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$11, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$11, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$11, removeUpdate, void, $DocumentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"getCancelButton",
		"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$11",
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
	$loadClass(AquaTextFieldSearch$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$11);
	});
	return class$;
}

$Class* AquaTextFieldSearch$11::class$ = nullptr;

		} // laf
	} // apple
} // com