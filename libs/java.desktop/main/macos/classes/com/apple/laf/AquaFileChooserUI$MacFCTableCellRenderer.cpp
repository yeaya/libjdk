#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$MacFCTableCellRenderer::init$($AquaFileChooserUI* this$0, $Font* f) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
	this->fIsSelected = false;
	setFont(f);
	setIconTextGap(10);
}

$Component* AquaFileChooserUI$MacFCTableCellRenderer::getTableCellRendererComponent($JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) {
	$DefaultTableCellRenderer::getTableCellRendererComponent(list, value, isSelected, false, index, col);
	this->fIsSelected = isSelected;
	return this;
}

bool AquaFileChooserUI$MacFCTableCellRenderer::isSelected() {
	return this->fIsSelected && isEnabled();
}

$String* AquaFileChooserUI$MacFCTableCellRenderer::layoutCL($JLabel* label, $FontMetrics* fontMetrics, $String* text, $Icon* icon, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR) {
	int32_t var$0 = $nc(label)->getVerticalAlignment();
	int32_t var$1 = label->getHorizontalAlignment();
	int32_t var$2 = label->getVerticalTextPosition();
	int32_t var$3 = label->getHorizontalTextPosition();
	return $SwingUtilities::layoutCompoundLabel(label, fontMetrics, text, icon, var$0, var$1, var$2, var$3, viewR, iconR, textR, label->getIconTextGap());
}

void AquaFileChooserUI$MacFCTableCellRenderer::paintComponent($Graphics* g) {
	$useLocalObjectStack();
	$var($String, text, getText());
	$var($Icon, icon, getIcon());
	if (icon != nullptr && !isEnabled()) {
		$var($Icon, disabledIcon, getDisabledIcon());
		if (disabledIcon != nullptr) {
			$assign(icon, disabledIcon);
		}
	}
	if ((icon == nullptr) && (text == nullptr)) {
		return;
	}
	$nc(g)->setColor($(getBackground()));
	int32_t var$0 = getWidth();
	g->fillRect(0, 0, var$0, getHeight());
	$var($FontMetrics, fm, g->getFontMetrics());
	$var($Insets, paintViewInsets, getInsets(nullptr));
	$nc(paintViewInsets)->left += 10;
	int32_t var$1 = paintViewInsets->left;
	int32_t var$2 = paintViewInsets->top;
	int32_t var$3 = getWidth() - (paintViewInsets->left + paintViewInsets->right);
	$var($Rectangle, paintViewR, $new($Rectangle, var$1, var$2, var$3, getHeight() - (paintViewInsets->top + paintViewInsets->bottom)));
	$var($Rectangle, paintIconR, $new($Rectangle));
	$var($Rectangle, paintTextR, $new($Rectangle));
	$var($String, clippedText, layoutCL(this, fm, text, icon, paintViewR, paintIconR, paintTextR));
	if (icon != nullptr) {
		icon->paintIcon(this, g, paintIconR->x + 5, paintIconR->y);
	}
	if (text != nullptr) {
		int32_t textX = paintTextR->x;
		int32_t textY = paintTextR->y + $nc(fm)->getAscent() + 1;
		if (isEnabled()) {
			$var($Color, background, getBackground());
			g->setColor(background);
			g->fillRect(textX - 1, paintTextR->y, paintTextR->width + 2, fm->getAscent() + 2);
			g->setColor($(getForeground()));
			$SwingUtilities2::drawString(this->this$0->filechooser, g, clippedText, textX, textY);
		} else {
			$var($Color, background, getBackground());
			g->setColor(background);
			g->fillRect(textX - 1, paintTextR->y, paintTextR->width + 2, fm->getAscent() + 2);
			g->setColor($($nc(background)->brighter()));
			$SwingUtilities2::drawString(this->this$0->filechooser, g, clippedText, textX, textY);
			g->setColor($(background->darker()));
			$SwingUtilities2::drawString(this->this$0->filechooser, g, clippedText, textX + 1, textY + 1);
		}
	}
}

AquaFileChooserUI$MacFCTableCellRenderer::AquaFileChooserUI$MacFCTableCellRenderer() {
}

$Class* AquaFileChooserUI$MacFCTableCellRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$MacFCTableCellRenderer, this$0)},
		{"fIsSelected", "Z", nullptr, 0, $field(AquaFileChooserUI$MacFCTableCellRenderer, fIsSelected)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(AquaFileChooserUI$MacFCTableCellRenderer, init$, void, $AquaFileChooserUI*, $Font*)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$MacFCTableCellRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{"isSelected", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$MacFCTableCellRenderer, isSelected, bool)},
		{"layoutCL", "(Ljavax/swing/JLabel;Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$MacFCTableCellRenderer, layoutCL, $String*, $JLabel*, $FontMetrics*, $String*, $Icon*, $Rectangle*, $Rectangle*, $Rectangle*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$MacFCTableCellRenderer, paintComponent, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer", "com.apple.laf.AquaFileChooserUI", "MacFCTableCellRenderer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer",
		"javax.swing.table.DefaultTableCellRenderer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$MacFCTableCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$MacFCTableCellRenderer));
	});
	return class$;
}

$Class* AquaFileChooserUI$MacFCTableCellRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com