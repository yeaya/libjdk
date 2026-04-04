#include <com/apple/laf/AquaTableUI$MouseInputHandler.h>
#include <com/apple/laf/AquaTableUI.h>
#include <javax/swing/plaf/basic/BasicTableUI$MouseInputHandler.h>
#include <jcpp.h>

using $AquaTableUI = ::com::apple::laf::AquaTableUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicTableUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaTableUI$MouseInputHandler::init$($AquaTableUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTableUI$MouseInputHandler::init$(this$0);
}

AquaTableUI$MouseInputHandler::AquaTableUI$MouseInputHandler() {
}

$Class* AquaTableUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableUI$MouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTableUI;)V", nullptr, $PUBLIC, $method(AquaTableUI$MouseInputHandler, init$, void, $AquaTableUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTableUI$MouseInputHandler", "com.apple.laf.AquaTableUI", "MouseInputHandler", $PUBLIC},
		{"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTableUI", "MouseInputHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTableUI$MouseInputHandler",
		"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTableUI"
	};
	$loadClass(AquaTableUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTableUI$MouseInputHandler));
	});
	return class$;
}

$Class* AquaTableUI$MouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com