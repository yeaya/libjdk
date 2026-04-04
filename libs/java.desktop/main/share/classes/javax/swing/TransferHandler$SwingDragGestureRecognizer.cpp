#include <javax/swing/TransferHandler$SwingDragGestureRecognizer.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void TransferHandler$SwingDragGestureRecognizer::init$($DragGestureListener* dgl) {
	$DragGestureRecognizer::init$($($DragSource::getDefaultDragSource()), nullptr, 0, dgl);
}

void TransferHandler$SwingDragGestureRecognizer::gestured($JComponent* c, $MouseEvent* e, int32_t srcActions, int32_t action) {
	setComponent(c);
	setSourceActions(srcActions);
	appendEvent(e);
	fireDragGestureRecognized(action, $($nc(e)->getPoint()));
}

void TransferHandler$SwingDragGestureRecognizer::registerListeners() {
}

void TransferHandler$SwingDragGestureRecognizer::unregisterListeners() {
}

TransferHandler$SwingDragGestureRecognizer::TransferHandler$SwingDragGestureRecognizer() {
}

$Class* TransferHandler$SwingDragGestureRecognizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/dnd/DragGestureListener;)V", nullptr, 0, $method(TransferHandler$SwingDragGestureRecognizer, init$, void, $DragGestureListener*)},
		{"gestured", "(Ljavax/swing/JComponent;Ljava/awt/event/MouseEvent;II)V", nullptr, 0, $virtualMethod(TransferHandler$SwingDragGestureRecognizer, gestured, void, $JComponent*, $MouseEvent*, int32_t, int32_t)},
		{"registerListeners", "()V", nullptr, $PROTECTED, $virtualMethod(TransferHandler$SwingDragGestureRecognizer, registerListeners, void)},
		{"unregisterListeners", "()V", nullptr, $PROTECTED, $virtualMethod(TransferHandler$SwingDragGestureRecognizer, unregisterListeners, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$SwingDragGestureRecognizer", "javax.swing.TransferHandler", "SwingDragGestureRecognizer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.TransferHandler$SwingDragGestureRecognizer",
		"java.awt.dnd.DragGestureRecognizer",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.TransferHandler"
	};
	$loadClass(TransferHandler$SwingDragGestureRecognizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferHandler$SwingDragGestureRecognizer);
	});
	return class$;
}

$Class* TransferHandler$SwingDragGestureRecognizer::class$ = nullptr;

	} // swing
} // javax