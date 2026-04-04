#include <com/apple/laf/AquaTextFieldSearch$10.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$10::init$($String* name, $JTextComponent* val$c) {
	$set(this, val$c, val$c);
	$AbstractAction::init$(name);
}

void AquaTextFieldSearch$10::actionPerformed($ActionEvent* e) {
	$nc(this->val$c)->setText(""_s);
}

AquaTextFieldSearch$10::AquaTextFieldSearch$10() {
}

$Class* AquaTextFieldSearch$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$10, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(AquaTextFieldSearch$10, init$, void, $String*, $JTextComponent*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$10, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"getCancelButton",
		"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$10",
		"javax.swing.AbstractAction",
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
	$loadClass(AquaTextFieldSearch$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextFieldSearch$10));
	});
	return class$;
}

$Class* AquaTextFieldSearch$10::class$ = nullptr;

		} // laf
	} // apple
} // com