#include <com/apple/laf/AquaTextFieldSearch$8.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$8::init$($JLabel* val$label, $JTextComponent* val$c) {
	$set(this, val$label, val$label);
	$set(this, val$c, val$c);
	$FocusAdapter::init$();
}

void AquaTextFieldSearch$8::focusGained($FocusEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

void AquaTextFieldSearch$8::focusLost($FocusEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

AquaTextFieldSearch$8::AquaTextFieldSearch$8() {
}

$Class* AquaTextFieldSearch$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$8, val$c)},
		{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$8, val$label)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(AquaTextFieldSearch$8, init$, void, $JLabel*, $JTextComponent*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$8, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$8, focusLost, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"getPromptLabel",
		"(Ljavax/swing/text/JTextComponent;)Ljava/awt/Component;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$8",
		"java.awt.event.FocusAdapter",
		nullptr,
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
	$loadClass(AquaTextFieldSearch$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$8);
	});
	return class$;
}

$Class* AquaTextFieldSearch$8::class$ = nullptr;

		} // laf
	} // apple
} // com