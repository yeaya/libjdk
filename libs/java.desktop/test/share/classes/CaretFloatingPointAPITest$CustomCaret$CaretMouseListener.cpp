#include <CaretFloatingPointAPITest$CustomCaret$CaretMouseListener.h>
#include <CaretFloatingPointAPITest$CustomCaret.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest$CustomCaret = ::CaretFloatingPointAPITest$CustomCaret;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextUI = ::javax::swing::plaf::TextUI;
using $Position$Bias = ::javax::swing::text::Position$Bias;

void CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::init$($CaretFloatingPointAPITest$CustomCaret* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	int32_t var$0 = $nc(e)->getX();
	$var($Point, pt, $new($Point, var$0, e->getY()));
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, 1));
	int32_t pos = $$sure($TextUI, $nc(this->this$0->component)->getUI())->viewToModel(this->this$0->component, pt, biasRet);
	if (biasRet->get(0) == nullptr) {
		biasRet->set(0, $Position$Bias::Forward);
	}
	if (pos >= 0) {
		this->this$0->setDot(pos);
	}
}

CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::CaretFloatingPointAPITest$CustomCaret$CaretMouseListener() {
}

$Class* CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LCaretFloatingPointAPITest$CustomCaret;", nullptr, $FINAL | $SYNTHETIC, $field(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LCaretFloatingPointAPITest$CustomCaret;)V", nullptr, $PRIVATE, $method(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, init$, void, $CaretFloatingPointAPITest$CustomCaret*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, mousePressed, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CaretFloatingPointAPITest$CustomCaret", "CaretFloatingPointAPITest", "CustomCaret", $STATIC},
		{"CaretFloatingPointAPITest$CustomCaret$CaretMouseListener", "CaretFloatingPointAPITest$CustomCaret", "CaretMouseListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CaretFloatingPointAPITest$CustomCaret$CaretMouseListener",
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
		"CaretFloatingPointAPITest"
	};
	$loadClass(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener));
	});
	return class$;
}

$Class* CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::class$ = nullptr;