#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaSplitPaneDividerUI$1.h>
#include <com/apple/laf/AquaSplitPaneDividerUI$DividerLayout.h>
#include <com/apple/laf/AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter.h>
#include <com/apple/laf/AquaSplitPaneUI.h>
#include <com/apple/laf/AquaUtils$LazyKeyedSingleton.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <jcpp.h>

#undef ACTIVE
#undef DEFAULT_CURSOR
#undef DISABLED
#undef EAST
#undef HORIZONTAL
#undef HORIZONTAL_SPLIT
#undef NORTH
#undef ORIENTATION_PROPERTY
#undef SOUTH
#undef WEST

using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaSplitPaneDividerUI$1 = ::com::apple::laf::AquaSplitPaneDividerUI$1;
using $AquaSplitPaneDividerUI$DividerLayout = ::com::apple::laf::AquaSplitPaneDividerUI$DividerLayout;
using $AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter = ::com::apple::laf::AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter;
using $AquaSplitPaneUI = ::com::apple::laf::AquaSplitPaneUI;
using $AquaUtils$LazyKeyedSingleton = ::com::apple::laf::AquaUtils$LazyKeyedSingleton;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Border = ::javax::swing::border::Border;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$LazyKeyedSingleton* AquaSplitPaneDividerUI::directionArrows = nullptr;

$JButton* AquaSplitPaneDividerUI::access$900(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->leftButton;
}

$JButton* AquaSplitPaneDividerUI::access$800(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->rightButton;
}

$JButton* AquaSplitPaneDividerUI::access$700(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->leftButton;
}

$JButton* AquaSplitPaneDividerUI::access$600(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->rightButton;
}

int32_t AquaSplitPaneDividerUI::access$500(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->orientation;
}

$JButton* AquaSplitPaneDividerUI::access$400(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->rightButton;
}

$JButton* AquaSplitPaneDividerUI::access$300(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->leftButton;
}

$JSplitPane* AquaSplitPaneDividerUI::access$200(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->splitPane;
}

$JButton* AquaSplitPaneDividerUI::access$100(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->rightButton;
}

$JButton* AquaSplitPaneDividerUI::access$000(AquaSplitPaneDividerUI* x0) {
	$init(AquaSplitPaneDividerUI);
	return $nc(x0)->leftButton;
}

void AquaSplitPaneDividerUI::init$($AquaSplitPaneUI* ui) {
	$useLocalObjectStack();
	$BasicSplitPaneDivider::init$(ui);
	$set(this, painter, $AquaPainter::create($($JRSUIStateFactory::getSplitPaneDivider())));
	setLayout($$new($AquaSplitPaneDividerUI$DividerLayout, this));
}

void AquaSplitPaneDividerUI::propertyChange($PropertyChangeEvent* e) {
	if ($equals($nc(e)->getSource(), this->splitPane)) {
		$var($String, propName, e->getPropertyName());
		if ("enabled"_s->equals(propName)) {
			bool enabled = $nc(this->splitPane)->isEnabled();
			if (this->leftButton != nullptr) {
				this->leftButton->setEnabled(enabled);
			}
			if (this->rightButton != nullptr) {
				this->rightButton->setEnabled(enabled);
			}
		} else {
			$init($JSplitPane);
			if ($nc($JSplitPane::ORIENTATION_PROPERTY)->equals(propName)) {
				if (this->rightButton != nullptr) {
					remove(this->rightButton);
					$set(this, rightButton, nullptr);
				}
				if (this->leftButton != nullptr) {
					remove(this->leftButton);
					$set(this, leftButton, nullptr);
				}
				oneTouchExpandableChanged();
			}
		}
	}
	$BasicSplitPaneDivider::propertyChange(e);
}

int32_t AquaSplitPaneDividerUI::getMaxDividerSize() {
	return 10;
}

void AquaSplitPaneDividerUI::paint($Graphics* g) {
	$useLocalObjectStack();
	$var($Dimension, size, getSize());
	int32_t x = 0;
	int32_t y = 0;
	bool horizontal = $nc(this->splitPane)->getOrientation() == $SwingConstants::HORIZONTAL;
	int32_t maxSize = getMaxDividerSize();
	bool doPaint = true;
	if (horizontal) {
		if ($nc(size)->height > maxSize) {
			int32_t diff = size->height - maxSize;
			y = diff / 2;
			size->height = maxSize;
		}
		if (size->height < 4) {
			doPaint = false;
		}
	} else {
		if ($nc(size)->width > maxSize) {
			int32_t diff = size->width - maxSize;
			x = diff / 2;
			size->width = maxSize;
		}
		if (size->width < 4) {
			doPaint = false;
		}
	}
	if (doPaint) {
		$nc($nc(this->painter)->state)->set($(getState()));
		this->painter->paint(g, this->splitPane, x, y, $nc(size)->width, $nc(size)->height);
	}
	$BasicSplitPaneDivider::paint(g);
}

$JRSUIConstants$State* AquaSplitPaneDividerUI::getState() {
	$init($JRSUIConstants$State);
	return $nc(this->splitPane)->isEnabled() ? $JRSUIConstants$State::ACTIVE : $JRSUIConstants$State::DISABLED;
}

$JButton* AquaSplitPaneDividerUI::createLeftOneTouchButton() {
	return createButtonForDirection(getDirection(true));
}

$JButton* AquaSplitPaneDividerUI::createRightOneTouchButton() {
	return createButtonForDirection(getDirection(false));
}

$JButton* AquaSplitPaneDividerUI::createButtonForDirection(int32_t direction) {
	$init(AquaSplitPaneDividerUI);
	$useLocalObjectStack();
	$var($JButton, button, $new($JButton, $$new($ImageIcon, $$cast($Image, AquaSplitPaneDividerUI::directionArrows->get($($Integer::valueOf(direction)))))));
	button->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	button->setFocusPainted(false);
	button->setRequestFocusEnabled(false);
	button->setFocusable(false);
	button->setBorder($($BorderFactory::createEmptyBorder(1, 1, 1, 1)));
	return button;
}

int32_t AquaSplitPaneDividerUI::getDirection(bool isLeft) {
	if ($nc(this->splitPane)->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		return isLeft ? $SwingConstants::WEST : $SwingConstants::EAST;
	}
	return isLeft ? $SwingConstants::NORTH : $SwingConstants::SOUTH;
}

$Border* AquaSplitPaneDividerUI::getHorizontalSplitDividerGradientVariant() {
	$init(AquaSplitPaneDividerUI);
	return $AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::instance();
}

void AquaSplitPaneDividerUI::clinit$($Class* clazz) {
	$assignStatic(AquaSplitPaneDividerUI::directionArrows, $new($AquaSplitPaneDividerUI$1));
}

AquaSplitPaneDividerUI::AquaSplitPaneDividerUI() {
}

$Class* AquaSplitPaneDividerUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $FINAL, $field(AquaSplitPaneDividerUI, painter)},
		{"directionArrows", "Lcom/apple/laf/AquaUtils$LazyKeyedSingleton;", "Lcom/apple/laf/AquaUtils$LazyKeyedSingleton<Ljava/lang/Integer;Ljava/awt/Image;>;", $STATIC | $FINAL, $staticField(AquaSplitPaneDividerUI, directionArrows)},
		{"kMaxPopupArrowSize", "I", nullptr, $STATIC | $FINAL, $constField(AquaSplitPaneDividerUI, kMaxPopupArrowSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaSplitPaneUI;)V", nullptr, $PUBLIC, $method(AquaSplitPaneDividerUI, init$, void, $AquaSplitPaneUI*)},
		{"access$000", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$000, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$100", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$100, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$200", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JSplitPane;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$200, $JSplitPane*, AquaSplitPaneDividerUI*)},
		{"access$300", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$300, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$400", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$400, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$500", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)I", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$500, int32_t, AquaSplitPaneDividerUI*)},
		{"access$600", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$600, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$700", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$700, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$800", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$800, $JButton*, AquaSplitPaneDividerUI*)},
		{"access$900", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaSplitPaneDividerUI, access$900, $JButton*, AquaSplitPaneDividerUI*)},
		{"createButtonForDirection", "(I)Ljavax/swing/JButton;", nullptr, $STATIC, $staticMethod(AquaSplitPaneDividerUI, createButtonForDirection, $JButton*, int32_t)},
		{"createLeftOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED, $virtualMethod(AquaSplitPaneDividerUI, createLeftOneTouchButton, $JButton*)},
		{"createRightOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED, $virtualMethod(AquaSplitPaneDividerUI, createRightOneTouchButton, $JButton*)},
		{"getDirection", "(Z)I", nullptr, 0, $virtualMethod(AquaSplitPaneDividerUI, getDirection, int32_t, bool)},
		{"getHorizontalSplitDividerGradientVariant", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaSplitPaneDividerUI, getHorizontalSplitDividerGradientVariant, $Border*)},
		{"getMaxDividerSize", "()I", nullptr, $PUBLIC, $virtualMethod(AquaSplitPaneDividerUI, getMaxDividerSize, int32_t)},
		{"getState", "()Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED, $virtualMethod(AquaSplitPaneDividerUI, getState, $JRSUIConstants$State*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(AquaSplitPaneDividerUI, paint, void, $Graphics*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSplitPaneDividerUI, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter", "com.apple.laf.AquaSplitPaneDividerUI", "HorizontalSplitDividerGradientPainter", $STATIC},
		{"com.apple.laf.AquaSplitPaneDividerUI$DividerLayout", "com.apple.laf.AquaSplitPaneDividerUI", "DividerLayout", $PROTECTED},
		{"com.apple.laf.AquaSplitPaneDividerUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaSplitPaneDividerUI",
		"javax.swing.plaf.basic.BasicSplitPaneDivider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter,com.apple.laf.AquaSplitPaneDividerUI$DividerLayout,com.apple.laf.AquaSplitPaneDividerUI$1"
	};
	$loadClass(AquaSplitPaneDividerUI, name, initialize, &classInfo$$, AquaSplitPaneDividerUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaSplitPaneDividerUI));
	});
	return class$;
}

$Class* AquaSplitPaneDividerUI::class$ = nullptr;

		} // laf
	} // apple
} // com