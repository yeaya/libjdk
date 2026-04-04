#include <javax/swing/plaf/basic/BasicToolBarSeparatorUI.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* BasicToolBarSeparatorUI::createUI($JComponent* c) {
	$init(BasicToolBarSeparatorUI);
	return $new(BasicToolBarSeparatorUI);
}

void BasicToolBarSeparatorUI::installDefaults($JSeparator* s) {
	$useLocalObjectStack();
	$var($Dimension, size, $nc($cast($JToolBar$Separator, s))->getSeparatorSize());
	if (size == nullptr || $instanceOf($UIResource, size)) {
		$var($JToolBar$Separator, sep, $cast($JToolBar$Separator, s));
		$assign(size, $cast($Dimension, $UIManager::get("ToolBar.separatorSize"_s)));
		if (size != nullptr) {
			if (sep->getOrientation() == $JSeparator::HORIZONTAL) {
				$assign(size, $new($Dimension, size->height, size->width));
			}
			sep->setSeparatorSize(size);
		}
	}
}

void BasicToolBarSeparatorUI::paint($Graphics* g, $JComponent* c) {
}

$Dimension* BasicToolBarSeparatorUI::getPreferredSize($JComponent* c) {
	$var($Dimension, size, $nc($cast($JToolBar$Separator, c))->getSeparatorSize());
	if (size != nullptr) {
		return size->getSize();
	} else {
		return nullptr;
	}
}

BasicToolBarSeparatorUI::BasicToolBarSeparatorUI() {
}

$Class* BasicToolBarSeparatorUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicToolBarSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicToolBarSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicToolBarSeparatorUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $virtualMethod(BasicToolBarSeparatorUI, installDefaults, void, $JSeparator*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarSeparatorUI, paint, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarSeparatorUI",
		"javax.swing.plaf.basic.BasicSeparatorUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicToolBarSeparatorUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToolBarSeparatorUI);
	});
	return class$;
}

$Class* BasicToolBarSeparatorUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax