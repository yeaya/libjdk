#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$MouseHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneCopyFromBasicUI$MouseHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void AquaTabbedPaneCopyFromBasicUI$MouseHandler::mousePressed($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mousePressed(e);
}

AquaTabbedPaneCopyFromBasicUI$MouseHandler::AquaTabbedPaneCopyFromBasicUI$MouseHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$MouseHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$MouseHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(AquaTabbedPaneCopyFromBasicUI$MouseHandler, init$, void, $AquaTabbedPaneCopyFromBasicUI*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$MouseHandler, mousePressed, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$MouseHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "MouseHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$MouseHandler",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
	};
	$loadClass(AquaTabbedPaneCopyFromBasicUI$MouseHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTabbedPaneCopyFromBasicUI$MouseHandler));
	});
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$MouseHandler::class$ = nullptr;

		} // laf
	} // apple
} // com