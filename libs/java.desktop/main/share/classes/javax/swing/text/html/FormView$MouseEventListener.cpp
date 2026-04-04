#include <javax/swing/text/html/FormView$MouseEventListener.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/text/html/FormView.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FormView = ::javax::swing::text::html::FormView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void FormView$MouseEventListener::init$($FormView* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void FormView$MouseEventListener::mouseReleased($MouseEvent* evt) {
	$useLocalObjectStack();
	$var($String, imageData, this->this$0->getImageData($($nc(evt)->getPoint())));
	this->this$0->imageSubmit(imageData);
}

FormView$MouseEventListener::FormView$MouseEventListener() {
}

$Class* FormView$MouseEventListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/FormView;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$MouseEventListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/FormView;)V", nullptr, $PROTECTED, $method(FormView$MouseEventListener, init$, void, $FormView*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(FormView$MouseEventListener, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.FormView$MouseEventListener", "javax.swing.text.html.FormView", "MouseEventListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.FormView$MouseEventListener",
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
		"javax.swing.text.html.FormView"
	};
	$loadClass(FormView$MouseEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FormView$MouseEventListener));
	});
	return class$;
}

$Class* FormView$MouseEventListener::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax