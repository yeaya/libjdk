#include <com/sun/java/swing/plaf/motif/MotifTreeUI.h>
#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <jcpp.h>

#undef HALF_SIZE
#undef SIZE

using $MotifTreeCellRenderer = ::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifTreeUI::init$() {
	$BasicTreeUI::init$();
}

void MotifTreeUI::installUI($JComponent* c) {
	$BasicTreeUI::installUI(c);
}

void MotifTreeUI::paintVerticalLine($Graphics* g, $JComponent* c, int32_t x, int32_t top, int32_t bottom) {
	if ($$nc($nc(this->tree)->getComponentOrientation())->isLeftToRight()) {
		$nc(g)->fillRect(x, top, 2, bottom - top + 2);
	} else {
		$nc(g)->fillRect(x - 1, top, 2, bottom - top + 2);
	}
}

void MotifTreeUI::paintHorizontalLine($Graphics* g, $JComponent* c, int32_t y, int32_t left, int32_t right) {
	$nc(g)->fillRect(left, y, right - left + 1, 2);
}

$ComponentUI* MotifTreeUI::createUI($JComponent* x) {
	$init(MotifTreeUI);
	return $new(MotifTreeUI);
}

$TreeCellRenderer* MotifTreeUI::createDefaultCellRenderer() {
	return $new($MotifTreeCellRenderer);
}

MotifTreeUI::MotifTreeUI() {
}

$Class* MotifTreeUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HALF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(MotifTreeUI, HALF_SIZE)},
		{"SIZE", "I", nullptr, $STATIC | $FINAL, $constField(MotifTreeUI, SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifTreeUI, init$, void)},
		{"createDefaultCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PUBLIC, $virtualMethod(MotifTreeUI, createDefaultCellRenderer, $TreeCellRenderer*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifTreeUI, createUI, $ComponentUI*, $JComponent*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MotifTreeUI, installUI, void, $JComponent*)},
		{"paintHorizontalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED, $virtualMethod(MotifTreeUI, paintHorizontalLine, void, $Graphics*, $JComponent*, int32_t, int32_t, int32_t)},
		{"paintVerticalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED, $virtualMethod(MotifTreeUI, paintVerticalLine, void, $Graphics*, $JComponent*, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifCollapsedIcon", $PUBLIC | $STATIC},
		{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifExpandedIcon", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifTreeUI",
		"javax.swing.plaf.basic.BasicTreeUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon,com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon"
	};
	$loadClass(MotifTreeUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifTreeUI);
	});
	return class$;
}

$Class* MotifTreeUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com