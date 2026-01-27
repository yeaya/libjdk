#ifndef _sun_awt_X11_XMouseDragGestureRecognizer_h_
#define _sun_awt_X11_XMouseDragGestureRecognizer_h_
//$ class sun.awt.X11.XMouseDragGestureRecognizer
//$ extends java.awt.dnd.MouseDragGestureRecognizer

#include <java/awt/dnd/MouseDragGestureRecognizer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureListener;
			class DragSource;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMouseDragGestureRecognizer : public ::java::awt::dnd::MouseDragGestureRecognizer {
	$class(XMouseDragGestureRecognizer, $NO_CLASS_INIT, ::java::awt::dnd::MouseDragGestureRecognizer)
public:
	XMouseDragGestureRecognizer();
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t act, ::java::awt::dnd::DragGestureListener* dgl);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t act);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c);
	void init$(::java::awt::dnd::DragSource* ds);
	virtual int32_t mapDragOperationFromModifiers(::java::awt::event::MouseEvent* e);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	static const int64_t serialVersionUID = (int64_t)0xF451A39868D38F41;
	static int32_t motionThreshold;
	static const int32_t ButtonMask = 7168; // InputEvent.BUTTON1_DOWN_MASK | InputEvent.BUTTON2_DOWN_MASK | InputEvent.BUTTON3_DOWN_MASK
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMouseDragGestureRecognizer_h_