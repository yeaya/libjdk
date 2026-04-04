#include <com/apple/laf/AquaTextFieldSearch$12.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$12::init$($JButton* val$button, $JTextComponent* val$text) {
	$set(this, val$button, val$button);
	$set(this, val$text, val$text);
}

void AquaTextFieldSearch$12::run() {
	$AquaTextFieldSearch::updateCancelIconOnEDT(this->val$button, this->val$text);
}

AquaTextFieldSearch$12::AquaTextFieldSearch$12() {
}

$Class* AquaTextFieldSearch$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$text", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$12, val$text)},
		{"val$button", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$12, val$button)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(AquaTextFieldSearch$12, init$, void, $JButton*, $JTextComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$12, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"updateCancelIcon",
		"(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$12",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(AquaTextFieldSearch$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$12);
	});
	return class$;
}

$Class* AquaTextFieldSearch$12::class$ = nullptr;

		} // laf
	} // apple
} // com