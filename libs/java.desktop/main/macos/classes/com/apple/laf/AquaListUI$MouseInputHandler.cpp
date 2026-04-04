#include <com/apple/laf/AquaListUI$MouseInputHandler.h>
#include <com/apple/laf/AquaListUI.h>
#include <javax/swing/plaf/basic/BasicListUI$MouseInputHandler.h>
#include <jcpp.h>

using $AquaListUI = ::com::apple::laf::AquaListUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicListUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaListUI$MouseInputHandler::init$($AquaListUI* this$0) {
	$set(this, this$0, this$0);
	$BasicListUI$MouseInputHandler::init$(this$0);
}

AquaListUI$MouseInputHandler::AquaListUI$MouseInputHandler() {
}

$Class* AquaListUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaListUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaListUI$MouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaListUI;)V", nullptr, 0, $method(AquaListUI$MouseInputHandler, init$, void, $AquaListUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaListUI$MouseInputHandler", "com.apple.laf.AquaListUI", "MouseInputHandler", 0},
		{"javax.swing.plaf.basic.BasicListUI$MouseInputHandler", "javax.swing.plaf.basic.BasicListUI", "MouseInputHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaListUI$MouseInputHandler",
		"javax.swing.plaf.basic.BasicListUI$MouseInputHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaListUI"
	};
	$loadClass(AquaListUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaListUI$MouseInputHandler));
	});
	return class$;
}

$Class* AquaListUI$MouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com