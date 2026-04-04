#include <javax/swing/plaf/metal/MetalProgressBarUI.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL

using $BasicStroke = ::java::awt::BasicStroke;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalProgressBarUI::init$() {
	$BasicProgressBarUI::init$();
}

$ComponentUI* MetalProgressBarUI::createUI($JComponent* c) {
	$init(MetalProgressBarUI);
	return $new(MetalProgressBarUI);
}

void MetalProgressBarUI::paintDeterminate($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$BasicProgressBarUI::paintDeterminate(g, c);
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	if ($nc(this->progressBar)->isBorderPainted()) {
		$var($Insets, b, $nc(this->progressBar)->getInsets());
		int32_t barRectWidth = $nc(this->progressBar)->getWidth() - ($nc(b)->left + $nc(b)->right);
		int32_t barRectHeight = $nc(this->progressBar)->getHeight() - (b->top + b->bottom);
		int32_t amountFull = getAmountFull(b, barRectWidth, barRectHeight);
		bool isLeftToRight = $MetalUtils::isLeftToRight(c);
		int32_t startX = 0;
		int32_t startY = 0;
		int32_t endX = 0;
		int32_t endY = 0;
		startX = b->left;
		startY = b->top;
		endX = b->left + barRectWidth - 1;
		endY = b->top + barRectHeight - 1;
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$nc(g2)->setStroke($$new($BasicStroke, 1.0f));
		if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
			g2->setColor($($MetalLookAndFeel::getControlShadow()));
			g2->drawLine(startX, startY, endX, startY);
			if (amountFull > 0) {
				g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
				if (isLeftToRight) {
					g2->drawLine(startX, startY, startX + amountFull - 1, startY);
				} else {
					g2->drawLine(endX, startY, endX - amountFull + 1, startY);
					if ($nc(this->progressBar)->getPercentComplete() != 1.0f) {
						g2->setColor($($MetalLookAndFeel::getControlShadow()));
					}
				}
			}
			g2->drawLine(startX, startY, startX, endY);
		} else {
			g2->setColor($($MetalLookAndFeel::getControlShadow()));
			g2->drawLine(startX, startY, startX, endY);
			if (amountFull > 0) {
				g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
				g2->drawLine(startX, endY, startX, endY - amountFull + 1);
			}
			g2->setColor($($MetalLookAndFeel::getControlShadow()));
			if ($nc(this->progressBar)->getPercentComplete() == 1.0f) {
				g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
			}
			g2->drawLine(startX, startY, endX, startY);
		}
	}
}

void MetalProgressBarUI::paintIndeterminate($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$BasicProgressBarUI::paintIndeterminate(g, c);
	if (!$nc(this->progressBar)->isBorderPainted() || (!($instanceOf($Graphics2D, g)))) {
		return;
	}
	$var($Insets, b, $nc(this->progressBar)->getInsets());
	int32_t barRectWidth = $nc(this->progressBar)->getWidth() - ($nc(b)->left + $nc(b)->right);
	int32_t barRectHeight = $nc(this->progressBar)->getHeight() - (b->top + b->bottom);
	int32_t amountFull = getAmountFull(b, barRectWidth, barRectHeight);
	bool isLeftToRight = $MetalUtils::isLeftToRight(c);
	int32_t startX = 0;
	int32_t startY = 0;
	int32_t endX = 0;
	int32_t endY = 0;
	$var($Rectangle, box, nullptr);
	$assign(box, getBox(box));
	startX = b->left;
	startY = b->top;
	endX = b->left + barRectWidth - 1;
	endY = b->top + barRectHeight - 1;
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$nc(g2)->setStroke($$new($BasicStroke, 1.0f));
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		g2->setColor($($MetalLookAndFeel::getControlShadow()));
		g2->drawLine(startX, startY, endX, startY);
		g2->drawLine(startX, startY, startX, endY);
		g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
		g2->drawLine($nc(box)->x, startY, $nc(box)->x + $nc(box)->width - 1, startY);
	} else {
		g2->setColor($($MetalLookAndFeel::getControlShadow()));
		g2->drawLine(startX, startY, startX, endY);
		g2->drawLine(startX, startY, endX, startY);
		g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
		g2->drawLine(startX, $nc(box)->y, startX, $nc(box)->y + $nc(box)->height - 1);
	}
}

MetalProgressBarUI::MetalProgressBarUI() {
}

$Class* MetalProgressBarUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"innards", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MetalProgressBarUI, innards)},
		{"box", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MetalProgressBarUI, box)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalProgressBarUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalProgressBarUI, createUI, $ComponentUI*, $JComponent*)},
		{"paintDeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalProgressBarUI, paintDeterminate, void, $Graphics*, $JComponent*)},
		{"paintIndeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalProgressBarUI, paintIndeterminate, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalProgressBarUI",
		"javax.swing.plaf.basic.BasicProgressBarUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalProgressBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalProgressBarUI);
	});
	return class$;
}

$Class* MetalProgressBarUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax