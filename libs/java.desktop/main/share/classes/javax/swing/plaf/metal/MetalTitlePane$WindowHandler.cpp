#include <javax/swing/plaf/metal/MetalTitlePane$WindowHandler.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTitlePane$WindowHandler::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void MetalTitlePane$WindowHandler::windowActivated($WindowEvent* ev) {
	this->this$0->setActive(true);
}

void MetalTitlePane$WindowHandler::windowDeactivated($WindowEvent* ev) {
	this->this$0->setActive(false);
}

MetalTitlePane$WindowHandler::MetalTitlePane$WindowHandler() {
}

$Class* MetalTitlePane$WindowHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$WindowHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PRIVATE, $method(MetalTitlePane$WindowHandler, init$, void, $MetalTitlePane*)},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$WindowHandler, windowActivated, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$WindowHandler, windowDeactivated, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTitlePane$WindowHandler", "javax.swing.plaf.metal.MetalTitlePane", "WindowHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalTitlePane$WindowHandler",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalTitlePane"
	};
	$loadClass(MetalTitlePane$WindowHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalTitlePane$WindowHandler));
	});
	return class$;
}

$Class* MetalTitlePane$WindowHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax