#include <javax/swing/text/AsyncBoxView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AsyncBoxView$ChildLocator.h>
#include <javax/swing/text/AsyncBoxView$ChildState.h>
#include <javax/swing/text/AsyncBoxView$FlushTask.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/LayoutQueue.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Short = ::java::lang::Short;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AsyncBoxView$ChildLocator = ::javax::swing::text::AsyncBoxView$ChildLocator;
using $AsyncBoxView$ChildState = ::javax::swing::text::AsyncBoxView$ChildState;
using $AsyncBoxView$FlushTask = ::javax::swing::text::AsyncBoxView$FlushTask;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $LayoutQueue = ::javax::swing::text::LayoutQueue;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AsyncBoxView_FieldInfo_[] = {
	{"axis", "I", nullptr, 0, $field(AsyncBoxView, axis)},
	{"stats", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/text/AsyncBoxView$ChildState;>;", 0, $field(AsyncBoxView, stats)},
	{"majorSpan", "F", nullptr, 0, $field(AsyncBoxView, majorSpan)},
	{"estimatedMajorSpan", "Z", nullptr, 0, $field(AsyncBoxView, estimatedMajorSpan)},
	{"minorSpan", "F", nullptr, 0, $field(AsyncBoxView, minorSpan)},
	{"locator", "Ljavax/swing/text/AsyncBoxView$ChildLocator;", nullptr, $PROTECTED, $field(AsyncBoxView, locator)},
	{"topInset", "F", nullptr, 0, $field(AsyncBoxView, topInset)},
	{"bottomInset", "F", nullptr, 0, $field(AsyncBoxView, bottomInset)},
	{"leftInset", "F", nullptr, 0, $field(AsyncBoxView, leftInset)},
	{"rightInset", "F", nullptr, 0, $field(AsyncBoxView, rightInset)},
	{"minRequest", "Ljavax/swing/text/AsyncBoxView$ChildState;", nullptr, 0, $field(AsyncBoxView, minRequest)},
	{"prefRequest", "Ljavax/swing/text/AsyncBoxView$ChildState;", nullptr, 0, $field(AsyncBoxView, prefRequest)},
	{"majorChanged", "Z", nullptr, 0, $field(AsyncBoxView, majorChanged)},
	{"minorChanged", "Z", nullptr, 0, $field(AsyncBoxView, minorChanged)},
	{"flushTask", "Ljava/lang/Runnable;", nullptr, 0, $field(AsyncBoxView, flushTask)},
	{"changing", "Ljavax/swing/text/AsyncBoxView$ChildState;", nullptr, 0, $field(AsyncBoxView, changing)},
	{}
};

$MethodInfo _AsyncBoxView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(AsyncBoxView, init$, void, $Element*, int32_t)},
	{"createChildState", "(Ljavax/swing/text/View;)Ljavax/swing/text/AsyncBoxView$ChildState;", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, createChildState, $AsyncBoxView$ChildState*, $View*)},
	{"flushRequirementChanges", "()V", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, flushRequirementChanges, void)},
	{"getBottomInset", "()F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getBottomInset, float)},
	{"getChildAllocation", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getChildAllocation, $Shape*, int32_t, $Shape*)},
	{"getChildState", "(I)Ljavax/swing/text/AsyncBoxView$ChildState;", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, getChildState, $AsyncBoxView$ChildState*, int32_t)},
	{"getEstimatedMajorSpan", "()Z", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, getEstimatedMajorSpan, bool)},
	{"getInsetSpan", "(I)F", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, getInsetSpan, float, int32_t)},
	{"getLayoutQueue", "()Ljavax/swing/text/LayoutQueue;", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, getLayoutQueue, $LayoutQueue*)},
	{"getLeftInset", "()F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getLeftInset, float)},
	{"getMajorAxis", "()I", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getMajorAxis, int32_t)},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getMaximumSpan, float, int32_t)},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getMinimumSpan, float, int32_t)},
	{"getMinorAxis", "()I", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getMinorAxis, int32_t)},
	{"getNextVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getNextVisualPositionFrom, int32_t, int32_t, $Position$Bias*, $Shape*, int32_t, $Position$BiasArray*), "javax.swing.text.BadLocationException"},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getPreferredSpan, float, int32_t)},
	{"getRightInset", "()F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getRightInset, float)},
	{"getSpanOnAxis", "(I)F", nullptr, 0, $virtualMethod(AsyncBoxView, getSpanOnAxis, float, int32_t)},
	{"getTopInset", "()F", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getTopInset, float)},
	{"getView", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getView, $View*, int32_t)},
	{"getViewCount", "()I", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getViewCount, int32_t)},
	{"getViewIndex", "(ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, getViewIndex, int32_t, int32_t, $Position$Bias*)},
	{"getViewIndexAtPosition", "(ILjavax/swing/text/Position$Bias;)I", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncBoxView, getViewIndexAtPosition, int32_t, int32_t, $Position$Bias*)},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, loadChildren, void, $ViewFactory*)},
	{"majorRequirementChange", "(Ljavax/swing/text/AsyncBoxView$ChildState;F)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncBoxView, majorRequirementChange, void, $AsyncBoxView$ChildState*, float)},
	{"minorRequirementChange", "(Ljavax/swing/text/AsyncBoxView$ChildState;)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncBoxView, minorRequirementChange, void, $AsyncBoxView$ChildState*)},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, modelToView, $Shape*, int32_t, $Shape*, $Position$Bias*), "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, paint, void, $Graphics*, $Shape*)},
	{"preferenceChanged", "(Ljavax/swing/text/View;ZZ)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AsyncBoxView, preferenceChanged, void, $View*, bool, bool)},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, replace, void, int32_t, int32_t, $ViewArray*)},
	{"setBottomInset", "(F)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, setBottomInset, void, float)},
	{"setEstimatedMajorSpan", "(Z)V", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, setEstimatedMajorSpan, void, bool)},
	{"setLeftInset", "(F)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, setLeftInset, void, float)},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, setParent, void, $View*)},
	{"setRightInset", "(F)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, setRightInset, void, float)},
	{"setSize", "(FF)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, setSize, void, float, float)},
	{"setSpanOnAxis", "(IF)V", nullptr, 0, $virtualMethod(AsyncBoxView, setSpanOnAxis, void, int32_t, float)},
	{"setTopInset", "(F)V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, setTopInset, void, float)},
	{"updateLayout", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;)V", nullptr, $PROTECTED, $virtualMethod(AsyncBoxView, updateLayout, void, $DocumentEvent$ElementChange*, $DocumentEvent*, $Shape*)},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView, viewToModel, int32_t, float, float, $Shape*, $Position$BiasArray*)},
	{}
};

$InnerClassInfo _AsyncBoxView_InnerClassesInfo_[] = {
	{"javax.swing.text.AsyncBoxView$FlushTask", "javax.swing.text.AsyncBoxView", "FlushTask", 0},
	{"javax.swing.text.AsyncBoxView$ChildState", "javax.swing.text.AsyncBoxView", "ChildState", $PUBLIC},
	{"javax.swing.text.AsyncBoxView$ChildLocator", "javax.swing.text.AsyncBoxView", "ChildLocator", $PUBLIC},
	{}
};

$ClassInfo _AsyncBoxView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AsyncBoxView",
	"javax.swing.text.View",
	nullptr,
	_AsyncBoxView_FieldInfo_,
	_AsyncBoxView_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncBoxView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.AsyncBoxView$FlushTask,javax.swing.text.AsyncBoxView$ChildState,javax.swing.text.AsyncBoxView$ChildLocator"
};

$Object* allocate$AsyncBoxView($Class* clazz) {
	return $of($alloc(AsyncBoxView));
}

void AsyncBoxView::init$($Element* elem, int32_t axis) {
	$View::init$(elem);
	$set(this, stats, $new($ArrayList));
	this->axis = axis;
	$set(this, locator, $new($AsyncBoxView$ChildLocator, this));
	$set(this, flushTask, $new($AsyncBoxView$FlushTask, this));
	this->minorSpan = (float)$Short::MAX_VALUE;
	this->estimatedMajorSpan = false;
}

int32_t AsyncBoxView::getMajorAxis() {
	return this->axis;
}

int32_t AsyncBoxView::getMinorAxis() {
	return (this->axis == $View::X_AXIS) ? $View::Y_AXIS : $View::X_AXIS;
}

float AsyncBoxView::getTopInset() {
	return this->topInset;
}

void AsyncBoxView::setTopInset(float i) {
	this->topInset = i;
}

float AsyncBoxView::getBottomInset() {
	return this->bottomInset;
}

void AsyncBoxView::setBottomInset(float i) {
	this->bottomInset = i;
}

float AsyncBoxView::getLeftInset() {
	return this->leftInset;
}

void AsyncBoxView::setLeftInset(float i) {
	this->leftInset = i;
}

float AsyncBoxView::getRightInset() {
	return this->rightInset;
}

void AsyncBoxView::setRightInset(float i) {
	this->rightInset = i;
}

float AsyncBoxView::getInsetSpan(int32_t axis) {
	float var$0 = 0.0;
	if (axis == $View::X_AXIS) {
		float var$1 = getLeftInset();
		var$0 = var$1 + getRightInset();
	} else {
		float var$2 = getTopInset();
		var$0 = var$2 + getBottomInset();
	}
	float margin = var$0;
	return margin;
}

void AsyncBoxView::setEstimatedMajorSpan(bool isEstimated) {
	this->estimatedMajorSpan = isEstimated;
}

bool AsyncBoxView::getEstimatedMajorSpan() {
	return this->estimatedMajorSpan;
}

$AsyncBoxView$ChildState* AsyncBoxView::getChildState(int32_t index) {
	$synchronized(this->stats) {
		if ((index >= 0) && (index < $nc(this->stats)->size())) {
			return $cast($AsyncBoxView$ChildState, $nc(this->stats)->get(index));
		}
		return nullptr;
	}
}

$LayoutQueue* AsyncBoxView::getLayoutQueue() {
	return $LayoutQueue::getDefaultQueue();
}

$AsyncBoxView$ChildState* AsyncBoxView::createChildState($View* v) {
	return $new($AsyncBoxView$ChildState, this, v);
}

void AsyncBoxView::majorRequirementChange($AsyncBoxView$ChildState* cs, float delta) {
	$synchronized(this) {
		if (this->estimatedMajorSpan == false) {
			this->majorSpan += delta;
		}
		this->majorChanged = true;
	}
}

void AsyncBoxView::minorRequirementChange($AsyncBoxView$ChildState* cs) {
	$synchronized(this) {
		this->minorChanged = true;
	}
}

void AsyncBoxView::flushRequirementChanges() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDocument, doc, $cast($AbstractDocument, getDocument()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(doc)->readLock();
			$var($View, parent, nullptr);
			bool horizontal = false;
			bool vertical = false;
			$synchronized(this) {
				$synchronized(this->stats) {
					int32_t n = getViewCount();
					if ((n > 0) && (this->minorChanged || this->estimatedMajorSpan)) {
						$var($LayoutQueue, q, getLayoutQueue());
						$var($AsyncBoxView$ChildState, min, getChildState(0));
						$var($AsyncBoxView$ChildState, pref, getChildState(0));
						float span = 0.0f;
						for (int32_t i = 1; i < n; ++i) {
							$var($AsyncBoxView$ChildState, cs, getChildState(i));
							if (this->minorChanged) {
								if ($nc(cs)->min > $nc(min)->min) {
									$assign(min, cs);
								}
								if ($nc(cs)->pref > $nc(pref)->pref) {
									$assign(pref, cs);
								}
							}
							if (this->estimatedMajorSpan) {
								span += $nc(cs)->getMajorSpan();
							}
						}
						if (this->minorChanged) {
							$set(this, minRequest, min);
							$set(this, prefRequest, pref);
						}
						if (this->estimatedMajorSpan) {
							this->majorSpan = span;
							this->estimatedMajorSpan = false;
							this->majorChanged = true;
						}
					}
				}
				if (this->majorChanged || this->minorChanged) {
					$assign(parent, getParent());
					if (parent != nullptr) {
						if (this->axis == $View::X_AXIS) {
							horizontal = this->majorChanged;
							vertical = this->minorChanged;
						} else {
							vertical = this->majorChanged;
							horizontal = this->minorChanged;
						}
					}
					this->majorChanged = false;
					this->minorChanged = false;
				}
			}
			if (parent != nullptr) {
				parent->preferenceChanged(this, horizontal, vertical);
				$var($Component, c, getContainer());
				if (c != nullptr) {
					c->repaint();
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(doc)->readUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AsyncBoxView::replace(int32_t offset, int32_t length, $ViewArray* views) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->stats) {
		for (int32_t i = 0; i < length; ++i) {
			$var($AsyncBoxView$ChildState, cs, $cast($AsyncBoxView$ChildState, $nc(this->stats)->remove(offset)));
			float csSpan = $nc(cs)->getMajorSpan();
			$nc($(cs->getChildView()))->setParent(nullptr);
			if (csSpan != 0) {
				majorRequirementChange(cs, -csSpan);
			}
		}
		$var($LayoutQueue, q, getLayoutQueue());
		if (views != nullptr) {
			for (int32_t i = 0; i < views->length; ++i) {
				$var($AsyncBoxView$ChildState, s, createChildState(views->get(i)));
				$nc(this->stats)->add(offset + i, s);
				$nc(q)->addTask(s);
			}
		}
		$nc(q)->addTask(this->flushTask);
	}
}

void AsyncBoxView::loadChildren($ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($Element, e, getElement());
	int32_t n = $nc(e)->getElementCount();
	if (n > 0) {
		$var($ViewArray, added, $new($ViewArray, n));
		for (int32_t i = 0; i < n; ++i) {
			added->set(i, $($nc(f)->create($(e->getElement(i)))));
		}
		replace(0, 0, added);
	}
}

int32_t AsyncBoxView::getViewIndexAtPosition(int32_t pos, $Position$Bias* b) {
	$synchronized(this) {
		$init($Position$Bias);
		bool isBackward = (b == $Position$Bias::Backward);
		pos = (isBackward) ? $Math::max(0, pos - 1) : pos;
		$var($Element, elem, getElement());
		return $nc(elem)->getElementIndex(pos);
	}
}

void AsyncBoxView::updateLayout($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a) {
	if (ec != nullptr) {
		int32_t index = $Math::max(ec->getIndex() - 1, 0);
		$var($AsyncBoxView$ChildState, cs, getChildState(index));
		$nc(this->locator)->childChanged(cs);
	}
}

void AsyncBoxView::setParent($View* parent) {
	$View::setParent(parent);
	if ((parent != nullptr) && (getViewCount() == 0)) {
		$var($ViewFactory, f, getViewFactory());
		loadChildren(f);
	}
}

void AsyncBoxView::preferenceChanged($View* child, bool width, bool height) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (child == nullptr) {
			$nc($(getParent()))->preferenceChanged(this, width, height);
		} else {
			if (this->changing != nullptr) {
				$var($View, cv, $nc(this->changing)->getChildView());
				if (cv == child) {
					$nc(this->changing)->preferenceChanged(width, height);
					return;
				}
			}
			$init($Position$Bias);
			int32_t index = getViewIndex($nc(child)->getStartOffset(), $Position$Bias::Forward);
			$var($AsyncBoxView$ChildState, cs, getChildState(index));
			$nc(cs)->preferenceChanged(width, height);
			$var($LayoutQueue, q, getLayoutQueue());
			$nc(q)->addTask(cs);
			q->addTask(this->flushTask);
		}
	}
}

void AsyncBoxView::setSize(float width, float height) {
	setSpanOnAxis($View::X_AXIS, width);
	setSpanOnAxis($View::Y_AXIS, height);
}

float AsyncBoxView::getSpanOnAxis(int32_t axis) {
	if (axis == getMajorAxis()) {
		return this->majorSpan;
	}
	return this->minorSpan;
}

void AsyncBoxView::setSpanOnAxis(int32_t axis, float span) {
	$useLocalCurrentObjectStackCache();
	float margin = getInsetSpan(axis);
	if (axis == getMinorAxis()) {
		float targetSpan = span - margin;
		if (targetSpan != this->minorSpan) {
			this->minorSpan = targetSpan;
			int32_t n = getViewCount();
			if (n != 0) {
				$var($LayoutQueue, q, getLayoutQueue());
				for (int32_t i = 0; i < n; ++i) {
					$var($AsyncBoxView$ChildState, cs, getChildState(i));
					$nc(cs)->childSizeValid = false;
					$nc(q)->addTask(cs);
				}
				$nc(q)->addTask(this->flushTask);
			}
		}
	} else if (this->estimatedMajorSpan) {
		this->majorSpan = span - margin;
	}
}

void AsyncBoxView::paint($Graphics* g, $Shape* alloc) {
	$synchronized(this->locator) {
		$nc(this->locator)->setAllocation(alloc);
		$nc(this->locator)->paintChildren(g);
	}
}

float AsyncBoxView::getPreferredSpan(int32_t axis) {
	float margin = getInsetSpan(axis);
	if (axis == this->axis) {
		return this->majorSpan + margin;
	}
	if (this->prefRequest != nullptr) {
		$var($View, child, $nc(this->prefRequest)->getChildView());
		return $nc(child)->getPreferredSpan(axis) + margin;
	}
	return margin + 30;
}

float AsyncBoxView::getMinimumSpan(int32_t axis) {
	if (axis == this->axis) {
		return getPreferredSpan(axis);
	}
	if (this->minRequest != nullptr) {
		$var($View, child, $nc(this->minRequest)->getChildView());
		return $nc(child)->getMinimumSpan(axis);
	}
	if (axis == $View::X_AXIS) {
		float var$0 = getLeftInset();
		return var$0 + getRightInset() + 5;
	} else {
		float var$1 = getTopInset();
		return var$1 + getBottomInset() + 5;
	}
}

float AsyncBoxView::getMaximumSpan(int32_t axis) {
	if (axis == this->axis) {
		return getPreferredSpan(axis);
	}
	return (float)$Integer::MAX_VALUE;
}

int32_t AsyncBoxView::getViewCount() {
	$synchronized(this->stats) {
		return $nc(this->stats)->size();
	}
}

$View* AsyncBoxView::getView(int32_t n) {
	$var($AsyncBoxView$ChildState, cs, getChildState(n));
	if (cs != nullptr) {
		return cs->getChildView();
	}
	return nullptr;
}

$Shape* AsyncBoxView::getChildAllocation(int32_t index, $Shape* a) {
	$var($Shape, ca, $nc(this->locator)->getChildAllocation(index, a));
	return ca;
}

int32_t AsyncBoxView::getViewIndex(int32_t pos, $Position$Bias* b) {
	return getViewIndexAtPosition(pos, b);
}

$Shape* AsyncBoxView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getViewIndex(pos, b);
	$var($Shape, ca, $nc(this->locator)->getChildAllocation(index, a));
	$var($AsyncBoxView$ChildState, cs, getChildState(index));
	$synchronized(cs) {
		$var($View, cv, $nc(cs)->getChildView());
		$var($Shape, v, $nc(cv)->modelToView(pos, ca, b));
		return v;
	}
}

int32_t AsyncBoxView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* biasReturn) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	int32_t index = 0;
	$var($Shape, ca, nullptr);
	$synchronized(this->locator) {
		index = $nc(this->locator)->getViewIndexAtPoint(x, y, a);
		$assign(ca, $nc(this->locator)->getChildAllocation(index, a));
	}
	$var($AsyncBoxView$ChildState, cs, getChildState(index));
	$synchronized(cs) {
		$var($View, v, $nc(cs)->getChildView());
		pos = $nc(v)->viewToModel(x, y, ca, biasReturn);
	}
	return pos;
}

int32_t AsyncBoxView::getNextVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "invalid position"_s, pos);
	}
	return $Utilities::getNextVisualPositionFrom(this, pos, b, a, direction, biasRet);
}

AsyncBoxView::AsyncBoxView() {
}

$Class* AsyncBoxView::load$($String* name, bool initialize) {
	$loadClass(AsyncBoxView, name, initialize, &_AsyncBoxView_ClassInfo_, allocate$AsyncBoxView);
	return class$;
}

$Class* AsyncBoxView::class$ = nullptr;

		} // text
	} // swing
} // javax