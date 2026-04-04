#include <javax/swing/text/FlowView$LogicalView.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/LabelView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef INSERT
#undef MAX_VALUE
#undef REMOVE

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $LabelView = ::javax::swing::text::LabelView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

void FlowView$LogicalView::init$($Element* elem) {
	$CompositeView::init$(elem);
}

int32_t FlowView$LogicalView::getViewIndexAtPosition(int32_t pos) {
	$var($Element, elem, getElement());
	if ($nc(elem)->isLeaf()) {
		return 0;
	}
	return $CompositeView::getViewIndexAtPosition(pos);
}

void FlowView$LogicalView::loadChildren($ViewFactory* f) {
	$useLocalObjectStack();
	$var($Element, elem, getElement());
	if ($nc(elem)->isLeaf()) {
		$var($View, v, $new($LabelView, elem));
		append(v);
	} else {
		$CompositeView::loadChildren(f);
	}
}

$AttributeSet* FlowView$LogicalView::getAttributes() {
	$var($View, p, getParent());
	return (p != nullptr) ? p->getAttributes() : ($AttributeSet*)nullptr;
}

float FlowView$LogicalView::getPreferredSpan(int32_t axis) {
	$useLocalObjectStack();
	float maxpref = 0;
	float pref = 0;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		pref += $nc(v)->getPreferredSpan(axis);
		if (v->getBreakWeight(axis, 0, (float)$Integer::MAX_VALUE) >= $View::ForcedBreakWeight) {
			maxpref = $Math::max(maxpref, pref);
			pref = 0;
		}
	}
	maxpref = $Math::max(maxpref, pref);
	return maxpref;
}

float FlowView$LogicalView::getMinimumSpan(int32_t axis) {
	$useLocalObjectStack();
	float maxmin = 0;
	float min = 0;
	bool nowrap = false;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		if ($nc(v)->getBreakWeight(axis, 0, (float)$Integer::MAX_VALUE) == $View::BadBreakWeight) {
			min += v->getPreferredSpan(axis);
			nowrap = true;
		} else if (nowrap) {
			maxmin = $Math::max(min, maxmin);
			nowrap = false;
			min = 0;
		}
		if ($instanceOf($ComponentView, v)) {
			maxmin = $Math::max(maxmin, v->getMinimumSpan(axis));
		}
	}
	maxmin = $Math::max(maxmin, min);
	return maxmin;
}

void FlowView$LogicalView::forwardUpdateToView($View* v, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$var($View, parent, $nc(v)->getParent());
	v->setParent(this);
	$CompositeView::forwardUpdateToView(v, e, a, f);
	v->setParent(parent);
}

void FlowView$LogicalView::forwardUpdate($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalObjectStack();
	$CompositeView::forwardUpdate(ec, e, a, f);
	$var($DocumentEvent$EventType, type, $nc(e)->getType());
	$init($DocumentEvent$EventType);
	if (type == $DocumentEvent$EventType::INSERT || type == $DocumentEvent$EventType::REMOVE) {
		this->firstUpdateIndex = $Math::min((this->lastUpdateIndex + 1), (getViewCount() - 1));
		this->lastUpdateIndex = $Math::max((getViewCount() - 1), 0);
		for (int32_t i = this->firstUpdateIndex; i <= this->lastUpdateIndex; ++i) {
			$var($View, v, getView(i));
			if (v != nullptr) {
				v->updateAfterChange();
			}
		}
	}
}

void FlowView$LogicalView::paint($Graphics* g, $Shape* allocation) {
}

bool FlowView$LogicalView::isBefore(int32_t x, int32_t y, $Rectangle* alloc) {
	return false;
}

bool FlowView$LogicalView::isAfter(int32_t x, int32_t y, $Rectangle* alloc) {
	return false;
}

$View* FlowView$LogicalView::getViewAtPoint(int32_t x, int32_t y, $Rectangle* alloc) {
	return nullptr;
}

void FlowView$LogicalView::childAllocation(int32_t index, $Rectangle* a) {
}

FlowView$LogicalView::FlowView$LogicalView() {
}

$Class* FlowView$LogicalView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(FlowView$LogicalView, init$, void, $Element*)},
		{"childAllocation", "(ILjava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, childAllocation, void, int32_t, $Rectangle*)},
		{"forwardUpdate", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, forwardUpdate, void, $DocumentEvent$ElementChange*, $DocumentEvent*, $Shape*, $ViewFactory*)},
		{"forwardUpdateToView", "(Ljavax/swing/text/View;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, forwardUpdateToView, void, $View*, $DocumentEvent*, $Shape*, $ViewFactory*)},
		{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(FlowView$LogicalView, getAttributes, $AttributeSet*)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(FlowView$LogicalView, getMinimumSpan, float, int32_t)},
		{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(FlowView$LogicalView, getPreferredSpan, float, int32_t)},
		{"getViewAtPoint", "(IILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, getViewAtPoint, $View*, int32_t, int32_t, $Rectangle*)},
		{"getViewIndexAtPosition", "(I)I", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, getViewIndexAtPosition, int32_t, int32_t)},
		{"isAfter", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, isAfter, bool, int32_t, int32_t, $Rectangle*)},
		{"isBefore", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, isBefore, bool, int32_t, int32_t, $Rectangle*)},
		{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED, $virtualMethod(FlowView$LogicalView, loadChildren, void, $ViewFactory*)},
		{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(FlowView$LogicalView, paint, void, $Graphics*, $Shape*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.FlowView$LogicalView", "javax.swing.text.FlowView", "LogicalView", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.FlowView$LogicalView",
		"javax.swing.text.CompositeView",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.FlowView"
	};
	$loadClass(FlowView$LogicalView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowView$LogicalView);
	});
	return class$;
}

$Class* FlowView$LogicalView::class$ = nullptr;

		} // text
	} // swing
} // javax