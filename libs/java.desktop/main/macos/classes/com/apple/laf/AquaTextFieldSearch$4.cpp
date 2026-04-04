#include <com/apple/laf/AquaTextFieldSearch$4.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaIcon$DynamicallySizingJRSUIIcon = ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon;
using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$4::init$($AquaIcon$DynamicallySizingJRSUIIcon* val$icon, $JButton* val$b) {
	$set(this, val$icon, val$icon);
	$set(this, val$b, val$b);
}

void AquaTextFieldSearch$4::stateChanged($ChangeEvent* e) {
	$nc($nc($nc(this->val$icon)->painter)->state)->set($($AquaTextFieldSearch::getState(this->val$b)));
}

AquaTextFieldSearch$4::AquaTextFieldSearch$4() {
}

$Class* AquaTextFieldSearch$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$b", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$4, val$b)},
		{"val$icon", "Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$4, val$icon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;Ljavax/swing/JButton;)V", "()V", 0, $method(AquaTextFieldSearch$4, init$, void, $AquaIcon$DynamicallySizingJRSUIIcon*, $JButton*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$4, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"createButton",
		"(Ljavax/swing/text/JTextComponent;Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$4",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
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
	$loadClass(AquaTextFieldSearch$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$4);
	});
	return class$;
}

$Class* AquaTextFieldSearch$4::class$ = nullptr;

		} // laf
	} // apple
} // com