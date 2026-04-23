#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/basic/BasicSliderUI$ScrollListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$TrackListener::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
	$MouseInputAdapter::init$();
}

void BasicSliderUI$TrackListener::mouseReleased($MouseEvent* e) {
	if (!$nc(this->this$0->slider)->isEnabled()) {
		return;
	}
	this->offset = 0;
	$nc(this->this$0->scrollTimer)->stop();
	this->this$0->isDragging$ = false;
	$nc(this->this$0->slider)->setValueIsAdjusting(false);
	$nc(this->this$0->slider)->repaint();
}

void BasicSliderUI$TrackListener::mousePressed($MouseEvent* e) {
	if (!$nc(this->this$0->slider)->isEnabled()) {
		return;
	}
	this->this$0->calculateGeometry();
	this->currentMouseX = $nc(e)->getX();
	this->currentMouseY = e->getY();
	if ($nc(this->this$0->slider)->isRequestFocusEnabled()) {
		$nc(this->this$0->slider)->requestFocus();
	}
	if ($nc(this->this$0->thumbRect)->contains(this->currentMouseX, this->currentMouseY)) {
		bool var$0 = $UIManager::getBoolean("Slider.onlyLeftMouseButtonDrag"_s);
		if (var$0 && !$SwingUtilities::isLeftMouseButton(e)) {
			return;
		}
		switch ($nc(this->this$0->slider)->getOrientation()) {
		case $JSlider::VERTICAL:
			this->offset = this->currentMouseY - $nc(this->this$0->thumbRect)->y;
			break;
		case $JSlider::HORIZONTAL:
			this->offset = this->currentMouseX - $nc(this->this$0->thumbRect)->x;
			break;
		}
		this->this$0->isDragging$ = true;
		return;
	}
	if (!$SwingUtilities::isLeftMouseButton(e)) {
		return;
	}
	this->this$0->isDragging$ = false;
	$nc(this->this$0->slider)->setValueIsAdjusting(true);
	$var($Dimension, sbSize, $nc(this->this$0->slider)->getSize());
	int32_t direction = 1;
	switch ($nc(this->this$0->slider)->getOrientation()) {
	case $JSlider::VERTICAL:
		if ($nc(this->this$0->thumbRect)->isEmpty()) {
			int32_t scrollbarCenter = $nc(sbSize)->height / 2;
			if (!this->this$0->drawInverted()) {
				direction = (this->currentMouseY < scrollbarCenter) ? 1 : -1;
			} else {
				direction = (this->currentMouseY < scrollbarCenter) ? -1 : 1;
			}
		} else {
			int32_t thumbY = $nc(this->this$0->thumbRect)->y;
			if (!this->this$0->drawInverted()) {
				direction = (this->currentMouseY < thumbY) ? 1 : -1;
			} else {
				direction = (this->currentMouseY < thumbY) ? -1 : 1;
			}
		}
		break;
	case $JSlider::HORIZONTAL:
		if ($nc(this->this$0->thumbRect)->isEmpty()) {
			int32_t scrollbarCenter = $nc(sbSize)->width / 2;
			if (!this->this$0->drawInverted()) {
				direction = (this->currentMouseX < scrollbarCenter) ? -1 : 1;
			} else {
				direction = (this->currentMouseX < scrollbarCenter) ? 1 : -1;
			}
		} else {
			int32_t thumbX = $nc(this->this$0->thumbRect)->x;
			if (!this->this$0->drawInverted()) {
				direction = (this->currentMouseX < thumbX) ? -1 : 1;
			} else {
				direction = (this->currentMouseX < thumbX) ? 1 : -1;
			}
		}
		break;
	}
	if (shouldScroll(direction)) {
		this->this$0->scrollDueToClickInTrack(direction);
	}
	if (shouldScroll(direction)) {
		$nc(this->this$0->scrollTimer)->stop();
		$nc(this->this$0->scrollListener)->setDirection(direction);
		$nc(this->this$0->scrollTimer)->start();
	}
}

bool BasicSliderUI$TrackListener::shouldScroll(int32_t direction) {
	$var($Rectangle, r, this->this$0->thumbRect);
	if ($nc(this->this$0->slider)->getOrientation() == $JSlider::VERTICAL) {
		if (this->this$0->drawInverted() ? direction < 0 : direction > 0) {
			if ($nc(r)->y <= this->currentMouseY) {
				return false;
			}
		} else if ($nc(r)->y + $nc(r)->height >= this->currentMouseY) {
			return false;
		}
	} else if (this->this$0->drawInverted() ? direction < 0 : direction > 0) {
		if ($nc(r)->x + $nc(r)->width >= this->currentMouseX) {
			return false;
		}
	} else if ($nc(r)->x <= this->currentMouseX) {
		return false;
	}
	bool var$0 = direction > 0;
	if (var$0) {
		int32_t var$2 = $nc(this->this$0->slider)->getValue();
		int32_t var$1 = var$2 + this->this$0->slider->getExtent();
		var$0 = var$1 >= this->this$0->slider->getMaximum();
	}
	if (var$0) {
		return false;
	} else {
		bool var$3 = direction < 0;
		if (var$3) {
			int32_t var$4 = $nc(this->this$0->slider)->getValue();
			var$3 = var$4 <= this->this$0->slider->getMinimum();
		}
		if (var$3) {
			return false;
		}
	}
	return true;
}

void BasicSliderUI$TrackListener::mouseDragged($MouseEvent* e) {
	int32_t thumbMiddle = 0;
	if (!$nc(this->this$0->slider)->isEnabled()) {
		return;
	}
	this->currentMouseX = $nc(e)->getX();
	this->currentMouseY = e->getY();
	if (!this->this$0->isDragging$) {
		return;
	}
	$nc(this->this$0->slider)->setValueIsAdjusting(true);
	{
		int32_t halfThumbHeight = 0;
		int32_t thumbTop = 0;
		int32_t trackTop = 0;
		int32_t trackBottom = 0;
		int32_t vMax = 0;
		int32_t halfThumbWidth = 0;
		int32_t thumbLeft = 0;
		int32_t trackLeft = 0;
		int32_t trackRight = 0;
		int32_t hMax = 0;
		switch ($nc(this->this$0->slider)->getOrientation()) {
		case $JSlider::VERTICAL:
			{
				halfThumbHeight = $nc(this->this$0->thumbRect)->height / 2;
				thumbTop = e->getY() - this->offset;
				trackTop = $nc(this->this$0->trackRect)->y;
				trackBottom = this->this$0->trackRect->y + (this->this$0->trackRect->height - 1);
				int32_t var$0 = this->this$0->slider->getMaximum();
				vMax = this->this$0->yPositionForValue(var$0 - this->this$0->slider->getExtent());
				if (this->this$0->drawInverted()) {
					trackBottom = vMax;
				} else {
					trackTop = vMax;
				}
				thumbTop = $Math::max(thumbTop, trackTop - halfThumbHeight);
				thumbTop = $Math::min(thumbTop, trackBottom - halfThumbHeight);
				this->this$0->setThumbLocation($nc(this->this$0->thumbRect)->x, thumbTop);
				thumbMiddle = thumbTop + halfThumbHeight;
				$nc(this->this$0->slider)->setValue(this->this$0->valueForYPosition(thumbMiddle));
				break;
			}
		case $JSlider::HORIZONTAL:
			{
				halfThumbWidth = $nc(this->this$0->thumbRect)->width / 2;
				thumbLeft = e->getX() - this->offset;
				trackLeft = $nc(this->this$0->trackRect)->x;
				trackRight = this->this$0->trackRect->x + (this->this$0->trackRect->width - 1);
				int32_t var$1 = $nc(this->this$0->slider)->getMaximum();
				hMax = this->this$0->xPositionForValue(var$1 - this->this$0->slider->getExtent());
				if (this->this$0->drawInverted()) {
					trackLeft = hMax;
				} else {
					trackRight = hMax;
				}
				thumbLeft = $Math::max(thumbLeft, trackLeft - halfThumbWidth);
				thumbLeft = $Math::min(thumbLeft, trackRight - halfThumbWidth);
				this->this$0->setThumbLocation(thumbLeft, $nc(this->this$0->thumbRect)->y);
				thumbMiddle = thumbLeft + halfThumbWidth;
				$nc(this->this$0->slider)->setValue(this->this$0->valueForXPosition(thumbMiddle));
				break;
			}
		}
	}
}

void BasicSliderUI$TrackListener::mouseMoved($MouseEvent* e) {
}

BasicSliderUI$TrackListener::BasicSliderUI$TrackListener() {
}

$Class* BasicSliderUI$TrackListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$TrackListener, this$0)},
		{"offset", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BasicSliderUI$TrackListener, offset)},
		{"currentMouseX", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BasicSliderUI$TrackListener, currentMouseX)},
		{"currentMouseY", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BasicSliderUI$TrackListener, currentMouseY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(BasicSliderUI$TrackListener, init$, void, $BasicSliderUI*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$TrackListener, mouseDragged, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$TrackListener, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$TrackListener, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$TrackListener, mouseReleased, void, $MouseEvent*)},
		{"shouldScroll", "(I)Z", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$TrackListener, shouldScroll, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$TrackListener", "javax.swing.plaf.basic.BasicSliderUI", "TrackListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$TrackListener",
		"javax.swing.event.MouseInputAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicSliderUI"
	};
	$loadClass(BasicSliderUI$TrackListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicSliderUI$TrackListener));
	});
	return class$;
}

$Class* BasicSliderUI$TrackListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax