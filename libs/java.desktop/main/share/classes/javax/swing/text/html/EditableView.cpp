#include <javax/swing/text/html/EditableView.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void EditableView::init$($Element* e) {
	$ComponentView::init$(e);
}

float EditableView::getMinimumSpan(int32_t axis) {
	if (this->isVisible$) {
		return $ComponentView::getMinimumSpan(axis);
	}
	return 0;
}

float EditableView::getPreferredSpan(int32_t axis) {
	if (this->isVisible$) {
		return $ComponentView::getPreferredSpan(axis);
	}
	return 0;
}

float EditableView::getMaximumSpan(int32_t axis) {
	if (this->isVisible$) {
		return $ComponentView::getMaximumSpan(axis);
	}
	return 0;
}

void EditableView::paint($Graphics* g, $Shape* allocation) {
	$useLocalObjectStack();
	$var($Component, c, getComponent());
	$var($Container, host, getContainer());
	if ($instanceOf($JTextComponent, host) && this->isVisible$ != $cast($JTextComponent, host)->isEditable()) {
		this->isVisible$ = $cast($JTextComponent, host)->isEditable();
		preferenceChanged(nullptr, true, true);
		host->repaint();
	}
	if (this->isVisible$) {
		$ComponentView::paint(g, allocation);
	} else {
		setSize(0, 0);
	}
	if (c != nullptr) {
		c->setFocusable(this->isVisible$);
	}
}

void EditableView::setParent($View* parent) {
	if (parent != nullptr) {
		$var($Container, host, parent->getContainer());
		if (host != nullptr) {
			if ($instanceOf($JTextComponent, host)) {
				this->isVisible$ = $cast($JTextComponent, host)->isEditable();
			} else {
				this->isVisible$ = false;
			}
		}
	}
	$ComponentView::setParent(parent);
}

bool EditableView::isVisible() {
	return this->isVisible$;
}

EditableView::EditableView() {
}

$Class* EditableView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isVisible", "Z", nullptr, $PRIVATE, $field(EditableView, isVisible$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(EditableView, init$, void, $Element*)},
		{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(EditableView, getMaximumSpan, float, int32_t)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(EditableView, getMinimumSpan, float, int32_t)},
		{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(EditableView, getPreferredSpan, float, int32_t)},
		{"isVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(EditableView, isVisible, bool)},
		{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(EditableView, paint, void, $Graphics*, $Shape*)},
		{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $virtualMethod(EditableView, setParent, void, $View*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.EditableView",
		"javax.swing.text.ComponentView",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EditableView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EditableView);
	});
	return class$;
}

$Class* EditableView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax