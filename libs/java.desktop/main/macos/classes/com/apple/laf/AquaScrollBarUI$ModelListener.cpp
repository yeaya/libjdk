#include <com/apple/laf/AquaScrollBarUI$ModelListener.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <java/awt/Container.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaScrollBarUI = ::com::apple::laf::AquaScrollBarUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaScrollBarUI$ModelListener::init$($AquaScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaScrollBarUI$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->layoutContainer(this->this$0->fScrollBar);
}

AquaScrollBarUI$ModelListener::AquaScrollBarUI$ModelListener() {
}

$Class* AquaScrollBarUI$ModelListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollBarUI$ModelListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaScrollBarUI;)V", nullptr, $PROTECTED, $method(AquaScrollBarUI$ModelListener, init$, void, $AquaScrollBarUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaScrollBarUI$ModelListener, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaScrollBarUI$ModelListener", "com.apple.laf.AquaScrollBarUI", "ModelListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaScrollBarUI$ModelListener",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaScrollBarUI"
	};
	$loadClass(AquaScrollBarUI$ModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaScrollBarUI$ModelListener);
	});
	return class$;
}

$Class* AquaScrollBarUI$ModelListener::class$ = nullptr;

		} // laf
	} // apple
} // com