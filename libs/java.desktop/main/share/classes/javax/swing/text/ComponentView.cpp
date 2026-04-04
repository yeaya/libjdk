#include <javax/swing/text/ComponentView.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/ComponentView$1.h>
#include <javax/swing/text/ComponentView$Invalidator.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $ComponentView$1 = ::javax::swing::text::ComponentView$1;
using $ComponentView$Invalidator = ::javax::swing::text::ComponentView$Invalidator;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

void ComponentView::init$($Element* elem) {
	$View::init$(elem);
}

$Component* ComponentView::createComponent() {
	$useLocalObjectStack();
	$var($AttributeSet, attr, $$nc(getElement())->getAttributes());
	$var($Component, comp, $StyleConstants::getComponent(attr));
	return comp;
}

$Component* ComponentView::getComponent() {
	return this->createdC;
}

void ComponentView::paint($Graphics* g, $Shape* a) {
	if (this->c != nullptr) {
		$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
		$nc(this->c)->setBounds($nc(alloc)->x, $nc(alloc)->y, $nc(alloc)->width, $nc(alloc)->height);
	}
}

float ComponentView::getPreferredSpan(int32_t axis) {
	$useLocalObjectStack();
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (this->c != nullptr) {
		$var($Dimension, size, this->c->getPreferredSize());
		if (axis == $View::X_AXIS) {
			return (float)$nc(size)->width;
		} else {
			return (float)$nc(size)->height;
		}
	}
	return 0;
}

float ComponentView::getMinimumSpan(int32_t axis) {
	$useLocalObjectStack();
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (this->c != nullptr) {
		$var($Dimension, size, this->c->getMinimumSize());
		if (axis == $View::X_AXIS) {
			return (float)$nc(size)->width;
		} else {
			return (float)$nc(size)->height;
		}
	}
	return 0;
}

float ComponentView::getMaximumSpan(int32_t axis) {
	$useLocalObjectStack();
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (this->c != nullptr) {
		$var($Dimension, size, this->c->getMaximumSize());
		if (axis == $View::X_AXIS) {
			return (float)$nc(size)->width;
		} else {
			return (float)$nc(size)->height;
		}
	}
	return 0;
}

float ComponentView::getAlignment(int32_t axis) {
	if (this->c != nullptr) {
		switch (axis) {
		case $View::X_AXIS:
			return this->c->getAlignmentX();
		case $View::Y_AXIS:
			return this->c->getAlignmentY();
		}
	}
	return $View::getAlignment(axis);
}

void ComponentView::setParent($View* p) {
	$View::setParent(p);
	if ($SwingUtilities::isEventDispatchThread()) {
		setComponentParent();
	} else {
		$var($Runnable, callSetComponentParent, $new($ComponentView$1, this));
		$SwingUtilities::invokeLater(callSetComponentParent);
	}
}

void ComponentView::setComponentParent() {
	$useLocalObjectStack();
	$var($View, p, getParent());
	if (p != nullptr) {
		$var($Container, parent, getContainer());
		if (parent != nullptr) {
			if (this->c == nullptr) {
				$var($Component, comp, createComponent());
				if (comp != nullptr) {
					$set(this, createdC, comp);
					$set(this, c, $new($ComponentView$Invalidator, this, comp));
				}
			}
			if (this->c != nullptr) {
				if (this->c->getParent() == nullptr) {
					parent->add(this->c, this);
					parent->addPropertyChangeListener("enabled"_s, this->c);
				}
			}
		}
	} else if (this->c != nullptr) {
		$var($Container, parent, this->c->getParent());
		if (parent != nullptr) {
			parent->remove(this->c);
			parent->removePropertyChangeListener("enabled"_s, this->c);
		}
	}
}

$Shape* ComponentView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalObjectStack();
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	if ((pos >= p0) && (pos <= p1)) {
		$var($Rectangle, r, $nc(a)->getBounds());
		if (pos == p1) {
			$nc(r)->x += $nc(r)->width;
		}
		$nc(r)->width = 0;
		return r;
	}
	$throwNew($BadLocationException, $$str({$$str(pos), " not in range "_s, $$str(p0), ","_s, $$str(p1)}), pos);
}

int32_t ComponentView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$var($Rectangle, alloc, $cast($Rectangle, a));
	if (x < $nc(alloc)->x + ($nc(alloc)->width / 2)) {
		$init($Position$Bias);
		$nc(bias)->set(0, $Position$Bias::Forward);
		return getStartOffset();
	}
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Backward);
	return getEndOffset();
}

ComponentView::ComponentView() {
}

$Class* ComponentView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"createdC", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(ComponentView, createdC)},
		{"c", "Ljavax/swing/text/ComponentView$Invalidator;", nullptr, $PRIVATE, $field(ComponentView, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(ComponentView, init$, void, $Element*)},
		{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED, $virtualMethod(ComponentView, createComponent, $Component*)},
		{"getAlignment", "(I)F", nullptr, $PUBLIC, $virtualMethod(ComponentView, getAlignment, float, int32_t)},
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $FINAL, $method(ComponentView, getComponent, $Component*)},
		{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(ComponentView, getMaximumSpan, float, int32_t)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(ComponentView, getMinimumSpan, float, int32_t)},
		{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(ComponentView, getPreferredSpan, float, int32_t)},
		{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(ComponentView, modelToView, $Shape*, int32_t, $Shape*, $Position$Bias*), "javax.swing.text.BadLocationException"},
		{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(ComponentView, paint, void, $Graphics*, $Shape*)},
		{"setComponentParent", "()V", nullptr, 0, $virtualMethod(ComponentView, setComponentParent, void)},
		{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $virtualMethod(ComponentView, setParent, void, $View*)},
		{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(ComponentView, viewToModel, int32_t, float, float, $Shape*, $Position$BiasArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.ComponentView$Invalidator", "javax.swing.text.ComponentView", "Invalidator", 0},
		{"javax.swing.text.ComponentView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.ComponentView",
		"javax.swing.text.View",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.ComponentView$Invalidator,javax.swing.text.ComponentView$1"
	};
	$loadClass(ComponentView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentView);
	});
	return class$;
}

$Class* ComponentView::class$ = nullptr;

		} // text
	} // swing
} // javax