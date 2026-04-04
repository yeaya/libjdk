#include <com/apple/laf/AquaTextFieldSearch$9.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
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

void AquaTextFieldSearch$9::init$($JLabel* val$label, $JTextComponent* val$text) {
	$set(this, val$label, val$label);
	$set(this, val$text, val$text);
}

void AquaTextFieldSearch$9::run() {
	$AquaTextFieldSearch::updatePromptLabelOnEDT(this->val$label, this->val$text);
}

AquaTextFieldSearch$9::AquaTextFieldSearch$9() {
}

$Class* AquaTextFieldSearch$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$text", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$9, val$text)},
		{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$9, val$label)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(AquaTextFieldSearch$9, init$, void, $JLabel*, $JTextComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$9, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"updatePromptLabel",
		"(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$9",
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
	$loadClass(AquaTextFieldSearch$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$9);
	});
	return class$;
}

$Class* AquaTextFieldSearch$9::class$ = nullptr;

		} // laf
	} // apple
} // com