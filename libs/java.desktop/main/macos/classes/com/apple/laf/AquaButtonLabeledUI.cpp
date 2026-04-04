#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI$RecyclableSizingIcon.h>
#include <com/apple/laf/AquaButtonToggleUI.h>
#include <com/apple/laf/AquaButtonUI.h>
#include <com/apple/laf/AquaFocus.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MINI
#undef REGULAR
#undef SMALL

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonLabeledUI$RecyclableSizingIcon = ::com::apple::laf::AquaButtonLabeledUI$RecyclableSizingIcon;
using $AquaButtonToggleUI = ::com::apple::laf::AquaButtonToggleUI;
using $AquaFocus = ::com::apple::laf::AquaFocus;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;

namespace com {
	namespace apple {
		namespace laf {

$AquaButtonLabeledUI$RecyclableSizingIcon* AquaButtonLabeledUI::regularIcon = nullptr;
$AquaButtonLabeledUI$RecyclableSizingIcon* AquaButtonLabeledUI::smallIcon = nullptr;
$AquaButtonLabeledUI$RecyclableSizingIcon* AquaButtonLabeledUI::miniIcon = nullptr;

void AquaButtonLabeledUI::init$() {
	$AquaButtonToggleUI::init$();
	$set(this, widgetBorder, getPainter());
}

void AquaButtonLabeledUI::applySizeFor($JComponent* c, $JRSUIConstants$Size* newSize) {
	$AquaButtonToggleUI::applySizeFor(c, newSize);
	$set(this, widgetBorder, $cast($AquaButtonBorder, $nc(this->widgetBorder)->deriveBorderForSize(newSize)));
}

$Icon* AquaButtonLabeledUI::getDefaultIcon($JComponent* c) {
	$var($JRSUIConstants$Size, componentSize, $AquaUtilControlSize::getUserSizeFrom(c));
	$init($JRSUIConstants$Size);
	if (componentSize == $JRSUIConstants$Size::REGULAR) {
		return $cast($Icon, AquaButtonLabeledUI::regularIcon->get());
	}
	if (componentSize == $JRSUIConstants$Size::SMALL) {
		return $cast($Icon, AquaButtonLabeledUI::smallIcon->get());
	}
	if (componentSize == $JRSUIConstants$Size::MINI) {
		return $cast($Icon, AquaButtonLabeledUI::miniIcon->get());
	}
	return $cast($Icon, AquaButtonLabeledUI::regularIcon->get());
}

void AquaButtonLabeledUI::setThemeBorder($AbstractButton* b) {
	$useLocalObjectStack();
	$AquaButtonToggleUI::setThemeBorder(b);
	$var($Border, border, $nc(b)->getBorder());
	if (border == nullptr || $instanceOf($UIResource, border)) {
		b->setBorder($($AquaButtonBorder::getBevelButtonBorder()));
	}
}

void AquaButtonLabeledUI::paint($Graphics* g, $JComponent* c) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		$var($Font, f, $nc(c)->getFont());
		$nc(g)->setFont(f);
		$var($FontMetrics, fm, g->getFontMetrics());
		$var($Dimension, size, b->getSize());
		$var($Insets, i, c->getInsets());
		int32_t var$0 = b->getWidth();
		$var($Rectangle, viewRect, $new($Rectangle, var$0, b->getHeight()));
		$var($Rectangle, iconRect, $new($Rectangle));
		$var($Rectangle, textRect, $new($Rectangle));
		$var($Icon, altIcon, b->getIcon());
		bool isCellEditor = $instanceOf($CellRendererPane, $(c->getParent()));
		if (b->isOpaque() || isCellEditor) {
			g->setColor($(b->getBackground()));
			g->fillRect(0, 0, $nc(size)->width, $nc(size)->height);
		}
		if ($cast($AbstractButton, c)->isBorderPainted() && !isCellEditor) {
			$var($Border, border, c->getBorder());
			if ($instanceOf($AquaButtonBorder, border)) {
				$cast($AquaButtonBorder, border)->paintButton(c, g, viewRect->x, viewRect->y, viewRect->width, viewRect->height);
			}
		}
		viewRect->x = $nc(i)->left;
		viewRect->y = i->top;
		viewRect->width = b->getWidth() - (i->right + viewRect->x);
		viewRect->height = b->getHeight() - (i->bottom + viewRect->y);
		$var($String, var$1, b->getText());
		$var($Icon, var$2, altIcon != nullptr ? altIcon : getDefaultIcon(b));
		int32_t var$3 = b->getVerticalAlignment();
		int32_t var$4 = b->getHorizontalAlignment();
		int32_t var$5 = b->getVerticalTextPosition();
		int32_t var$6 = b->getHorizontalTextPosition();
		$var($String, text, $SwingUtilities::layoutCompoundLabel(c, fm, var$1, var$2, var$3, var$4, var$5, var$6, viewRect, iconRect, textRect, b->getText() == nullptr ? 0 : b->getIconTextGap()));
		if (altIcon == nullptr) {
			$nc(this->widgetBorder)->paintButton(c, g, iconRect->x, iconRect->y, iconRect->width, iconRect->height);
		} else {
			if (!$nc(model)->isEnabled()) {
				if (model->isSelected()) {
					$assign(altIcon, b->getDisabledSelectedIcon());
				} else {
					$assign(altIcon, b->getDisabledIcon());
				}
			} else {
				bool var$7 = model->isPressed();
				if (var$7 && model->isArmed()) {
					$assign(altIcon, b->getPressedIcon());
					if (altIcon == nullptr) {
						$assign(altIcon, b->getSelectedIcon());
					}
				} else if (model->isSelected()) {
					bool var$8 = b->isRolloverEnabled();
					if (var$8 && model->isRollover()) {
						$assign(altIcon, b->getRolloverSelectedIcon());
						if (altIcon == nullptr) {
							$assign(altIcon, b->getSelectedIcon());
						}
					} else {
						$assign(altIcon, b->getSelectedIcon());
					}
				} else {
					bool var$9 = b->isRolloverEnabled();
					if (var$9 && model->isRollover()) {
						$assign(altIcon, b->getRolloverIcon());
					}
				}
			}
			if (altIcon == nullptr) {
				$assign(altIcon, b->getIcon());
			}
			int32_t offset = 0;
			if (b->isFocusOwner()) {
				offset = 2;
				$assign(altIcon, $AquaFocus::createFocusedIcon(altIcon, c, 2));
			}
			$nc(altIcon)->paintIcon(c, g, iconRect->x - offset, iconRect->y - offset);
		}
		if (text != nullptr) {
			$init($BasicHTML);
			$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
			if (v != nullptr) {
				v->paint(g, textRect);
			} else {
				paintText(g, b, textRect, text);
			}
		}
	}
}

$Dimension* AquaButtonLabeledUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	if ($nc(c)->getComponentCount() > 0) {
		return nullptr;
	}
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($String, text, b->getText());
	$var($Icon, buttonIcon, b->getIcon());
	if (buttonIcon == nullptr) {
		$assign(buttonIcon, getDefaultIcon(b));
	}
	$var($Font, font, b->getFont());
	$var($FontMetrics, fm, b->getFontMetrics(font));
	$var($Rectangle, prefViewRect, $new($Rectangle, $Short::MAX_VALUE, $Short::MAX_VALUE));
	$var($Rectangle, prefIconRect, $new($Rectangle));
	$var($Rectangle, prefTextRect, $new($Rectangle));
	int32_t var$0 = b->getVerticalAlignment();
	int32_t var$1 = b->getHorizontalAlignment();
	int32_t var$2 = b->getVerticalTextPosition();
	int32_t var$3 = b->getHorizontalTextPosition();
	$SwingUtilities::layoutCompoundLabel(c, fm, text, buttonIcon, var$0, var$1, var$2, var$3, prefViewRect, prefIconRect, prefTextRect, text == nullptr ? 0 : b->getIconTextGap());
	int32_t x1 = $Math::min(prefIconRect->x, prefTextRect->x);
	int32_t x2 = $Math::max(prefIconRect->x + prefIconRect->width, prefTextRect->x + prefTextRect->width);
	int32_t y1 = $Math::min(prefIconRect->y, prefTextRect->y);
	int32_t y2 = $Math::max(prefIconRect->y + prefIconRect->height, prefTextRect->y + prefTextRect->height);
	int32_t width = x2 - x1;
	int32_t height = y2 - y1;
	$var($Insets, prefInsets, b->getInsets());
	width += $nc(prefInsets)->left + $nc(prefInsets)->right;
	height += prefInsets->top + prefInsets->bottom;
	return $new($Dimension, width, height);
}

void AquaButtonLabeledUI::clinit$($Class* clazz) {
	$assignStatic(AquaButtonLabeledUI::regularIcon, $new($AquaButtonLabeledUI$RecyclableSizingIcon, 18));
	$assignStatic(AquaButtonLabeledUI::smallIcon, $new($AquaButtonLabeledUI$RecyclableSizingIcon, 16));
	$assignStatic(AquaButtonLabeledUI::miniIcon, $new($AquaButtonLabeledUI$RecyclableSizingIcon, 14));
}

AquaButtonLabeledUI::AquaButtonLabeledUI() {
}

$Class* AquaButtonLabeledUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"regularIcon", "Lcom/apple/laf/AquaButtonLabeledUI$RecyclableSizingIcon;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonLabeledUI, regularIcon)},
		{"smallIcon", "Lcom/apple/laf/AquaButtonLabeledUI$RecyclableSizingIcon;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonLabeledUI, smallIcon)},
		{"miniIcon", "Lcom/apple/laf/AquaButtonLabeledUI$RecyclableSizingIcon;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonLabeledUI, miniIcon)},
		{"widgetBorder", "Lcom/apple/laf/AquaButtonBorder;", nullptr, $PROTECTED, $field(AquaButtonLabeledUI, widgetBorder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonLabeledUI, init$, void)},
		{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonLabeledUI, applySizeFor, void, $JComponent*, $JRSUIConstants$Size*)},
		{"getDefaultIcon", "(Ljavax/swing/JComponent;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(AquaButtonLabeledUI, getDefaultIcon, $Icon*, $JComponent*)},
		{"getPainter", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AquaButtonLabeledUI, getPainter, $AquaButtonBorder*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaButtonLabeledUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AquaButtonLabeledUI, paint, void, $Graphics*, $JComponent*)},
		{"setThemeBorder", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonLabeledUI, setThemeBorder, void, $AbstractButton*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder", "com.apple.laf.AquaButtonLabeledUI", "LabeledButtonBorder", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon", "com.apple.laf.AquaButtonLabeledUI", "RecyclableSizingIcon", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaButtonLabeledUI",
		"com.apple.laf.AquaButtonToggleUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder,com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon"
	};
	$loadClass(AquaButtonLabeledUI, name, initialize, &classInfo$$, AquaButtonLabeledUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonLabeledUI));
	});
	return class$;
}

$Class* AquaButtonLabeledUI::class$ = nullptr;

		} // laf
	} // apple
} // com