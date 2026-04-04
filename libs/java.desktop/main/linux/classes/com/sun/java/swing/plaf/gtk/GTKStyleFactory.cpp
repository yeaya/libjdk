#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory$ComplexKey.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

#undef BUTTON
#undef CHECK_BOX
#undef HORIZONTAL
#undef MENU
#undef MENU_BAR
#undef RADIO_BUTTON
#undef SCROLL_BAR

using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $GTKStyleFactory$ComplexKey = ::com::sun::java::swing::plaf::gtk::GTKStyleFactory$ComplexKey;
using $Font = ::java::awt::Font;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKStyleFactory::init$() {
	$SynthStyleFactory::init$();
	$set(this, stylesCache, $new($HashMap));
}

$SynthStyle* GTKStyleFactory::getStyle($JComponent* c, $Region* id) {
	$synchronized(this) {
		$useLocalObjectStack();
		$GTKEngine$WidgetType* wt = $GTKEngine::getWidgetType(c, id);
		$var($Object, key, nullptr);
		$init($Region);
		if (id == $Region::SCROLL_BAR) {
			if (c != nullptr) {
				$var($JScrollBar, sb, $cast($JScrollBar, c));
				bool sp = ($instanceOf($JScrollPane, $(sb->getParent())));
				bool horiz = (sb->getOrientation() == $JScrollBar::HORIZONTAL);
				bool ltr = $$nc(sb->getComponentOrientation())->isLeftToRight();
				bool focusable = sb->isFocusable();
				$assign(key, $new($GTKStyleFactory$ComplexKey, wt, $$new($ObjectArray, {
					$($Boolean::valueOf(sp)),
					$($Boolean::valueOf(horiz)),
					$($Boolean::valueOf(ltr)),
					$($Boolean::valueOf(focusable))
				})));
			}
		} else if (id == $Region::CHECK_BOX || id == $Region::RADIO_BUTTON) {
			if (c != nullptr) {
				bool ltr = $$nc(c->getComponentOrientation())->isLeftToRight();
				$assign(key, $new($GTKStyleFactory$ComplexKey, wt, $$new($ObjectArray, {$($Boolean::valueOf(ltr))})));
			}
		} else if (id == $Region::BUTTON) {
			if (c != nullptr) {
				$var($JButton, btn, $cast($JButton, c));
				bool toolButton = ($instanceOf($JToolBar, $(btn->getParent())));
				bool defaultCapable = btn->isDefaultCapable();
				$assign(key, $new($GTKStyleFactory$ComplexKey, wt, $$new($ObjectArray, {
					$($Boolean::valueOf(toolButton)),
					$($Boolean::valueOf(defaultCapable))
				})));
			}
		} else if (id == $Region::MENU) {
			bool var$0 = $instanceOf($JMenu, c) && $cast($JMenu, c)->isTopLevelMenu();
			if (var$0 && $UIManager::getBoolean("Menu.useMenuBarForTopLevelMenus"_s)) {
				$init($GTKEngine$WidgetType);
				wt = $GTKEngine$WidgetType::MENU_BAR;
			}
		}
		if (key == nullptr) {
			$assign(key, wt);
		}
		$var($GTKStyle, result, $cast($GTKStyle, this->stylesCache->get(key)));
		if (result == nullptr) {
			$assign(result, $new($GTKStyle, this->defaultFont, wt));
			this->stylesCache->put(key, result);
		}
		return result;
	}
}

void GTKStyleFactory::initStyles($Font* defaultFont) {
	$set(this, defaultFont, defaultFont);
	this->stylesCache->clear();
}

GTKStyleFactory::GTKStyleFactory() {
}

$Class* GTKStyleFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stylesCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lcom/sun/java/swing/plaf/gtk/GTKStyle;>;", $PRIVATE | $FINAL, $field(GTKStyleFactory, stylesCache)},
		{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(GTKStyleFactory, defaultFont)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GTKStyleFactory, init$, void)},
		{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(GTKStyleFactory, getStyle, $SynthStyle*, $JComponent*, $Region*)},
		{"initStyles", "(Ljava/awt/Font;)V", nullptr, 0, $virtualMethod(GTKStyleFactory, initStyles, void, $Font*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey", "com.sun.java.swing.plaf.gtk.GTKStyleFactory", "ComplexKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKStyleFactory",
		"javax.swing.plaf.synth.SynthStyleFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey"
	};
	$loadClass(GTKStyleFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKStyleFactory);
	});
	return class$;
}

$Class* GTKStyleFactory::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com