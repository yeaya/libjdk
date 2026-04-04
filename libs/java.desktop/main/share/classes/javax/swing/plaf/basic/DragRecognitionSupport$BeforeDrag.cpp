#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$Class* DragRecognitionSupport$BeforeDrag::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dragStarting", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DragRecognitionSupport$BeforeDrag, dragStarting, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.DragRecognitionSupport"
	};
	$loadClass(DragRecognitionSupport$BeforeDrag, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DragRecognitionSupport$BeforeDrag);
	});
	return class$;
}

$Class* DragRecognitionSupport$BeforeDrag::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax