#include <com/sun/java/swing/plaf/motif/MotifPopupMenuUI.h>
#include <com/sun/java/swing/plaf/motif/MotifPopupMenuUI$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BUTTON3_MASK
#undef MOUSE_PRESSED

using $MotifPopupMenuUI$1 = ::com::sun::java::swing::plaf::motif::MotifPopupMenuUI$1;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$Border* MotifPopupMenuUI::border = nullptr;

void MotifPopupMenuUI::init$() {
	$BasicPopupMenuUI::init$();
	$set(this, titleFont, nullptr);
}

$ComponentUI* MotifPopupMenuUI::createUI($JComponent* x) {
	$init(MotifPopupMenuUI);
	return $new(MotifPopupMenuUI);
}

$Dimension* MotifPopupMenuUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($LayoutManager, layout, $nc(c)->getLayout());
	$var($Dimension, d, $nc(layout)->preferredLayoutSize(c));
	$var($String, title, $cast($JPopupMenu, c)->getLabel());
	if (this->titleFont == nullptr) {
		$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
		$set(this, titleFont, $nc(table)->getFont("PopupMenu.font"_s));
	}
	$var($FontMetrics, fm, c->getFontMetrics(this->titleFont));
	int32_t stringWidth = 0;
	if (title != nullptr) {
		stringWidth += $SwingUtilities2::stringWidth(c, fm, title);
	}
	if ($nc(d)->width < stringWidth) {
		d->width = stringWidth + 8;
		$var($Insets, i, c->getInsets());
		if (i != nullptr) {
			d->width += i->left + i->right;
		}
		if (MotifPopupMenuUI::border != nullptr) {
			$assign(i, MotifPopupMenuUI::border->getBorderInsets(c));
			d->width += $nc(i)->left + $nc(i)->right;
		}
		return d;
	}
	return nullptr;
}

$ChangeListener* MotifPopupMenuUI::createChangeListener($JPopupMenu* m) {
	return $new($MotifPopupMenuUI$1, this);
}

bool MotifPopupMenuUI::isPopupTrigger($MouseEvent* e) {
	bool var$0 = $nc(e)->getID() == $MouseEvent::MOUSE_PRESSED;
	return (var$0 && ((e->getModifiers() & $MouseEvent::BUTTON3_MASK) != 0));
}

void MotifPopupMenuUI::clinit$($Class* clazz) {
	$assignStatic(MotifPopupMenuUI::border, nullptr);
}

MotifPopupMenuUI::MotifPopupMenuUI() {
}

$Class* MotifPopupMenuUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"border", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MotifPopupMenuUI, border)},
		{"titleFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(MotifPopupMenuUI, titleFont)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifPopupMenuUI, init$, void)},
		{"createChangeListener", "(Ljavax/swing/JPopupMenu;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $virtualMethod(MotifPopupMenuUI, createChangeListener, $ChangeListener*, $JPopupMenu*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifPopupMenuUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MotifPopupMenuUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC, $virtualMethod(MotifPopupMenuUI, isPopupTrigger, bool, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifPopupMenuUI",
		"javax.swing.plaf.basic.BasicPopupMenuUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1"
	};
	$loadClass(MotifPopupMenuUI, name, initialize, &classInfo$$, MotifPopupMenuUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MotifPopupMenuUI);
	});
	return class$;
}

$Class* MotifPopupMenuUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com