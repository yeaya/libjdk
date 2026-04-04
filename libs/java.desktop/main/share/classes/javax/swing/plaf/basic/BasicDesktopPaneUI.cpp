#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$BasicDesktopManager.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef CLOSE
#undef DOWN
#undef ESCAPE
#undef LEFT
#undef MAXIMIZE
#undef MAX_VALUE
#undef MINIMIZE
#undef MOVE
#undef NAVIGATE_NEXT
#undef NAVIGATE_PREVIOUS
#undef NEXT_FRAME
#undef PREVIOUS_FRAME
#undef RESIZE
#undef RESTORE
#undef RIGHT
#undef SHARED_ACTION
#undef SHRINK_DOWN
#undef SHRINK_LEFT
#undef SHRINK_RIGHT
#undef SHRINK_UP
#undef TRUE
#undef UP
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_IN_FOCUSED_WINDOW

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ActionMap = ::javax::swing::ActionMap;
using $DesktopManager = ::javax::swing::DesktopManager;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicDesktopPaneUI$Actions = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions;
using $BasicDesktopPaneUI$BasicDesktopManager = ::javax::swing::plaf::basic::BasicDesktopPaneUI$BasicDesktopManager;
using $BasicDesktopPaneUI$Handler = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$BasicDesktopPaneUI$Actions* BasicDesktopPaneUI::SHARED_ACTION = nullptr;

$ComponentUI* BasicDesktopPaneUI::createUI($JComponent* c) {
	$init(BasicDesktopPaneUI);
	return $new(BasicDesktopPaneUI);
}

void BasicDesktopPaneUI::init$() {
	$DesktopPaneUI::init$();
}

void BasicDesktopPaneUI::installUI($JComponent* c) {
	$set(this, desktop, $cast($JDesktopPane, c));
	installDefaults();
	installDesktopManager();
	installListeners();
	installKeyboardActions();
}

void BasicDesktopPaneUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions();
	uninstallListeners();
	uninstallDesktopManager();
	uninstallDefaults();
	$set(this, desktop, nullptr);
	$set(this, handler, nullptr);
}

void BasicDesktopPaneUI::installDefaults() {
	$useLocalObjectStack();
	bool var$0 = $nc(this->desktop)->getBackground() == nullptr;
	if (var$0 || $instanceOf($UIResource, $(this->desktop->getBackground()))) {
		$nc(this->desktop)->setBackground($($UIManager::getColor("Desktop.background"_s)));
	}
	$LookAndFeel::installProperty(this->desktop, "opaque"_s, $Boolean::TRUE);
}

void BasicDesktopPaneUI::uninstallDefaults() {
}

void BasicDesktopPaneUI::installListeners() {
	$set(this, pcl, createPropertyChangeListener());
	$nc(this->desktop)->addPropertyChangeListener(this->pcl);
}

void BasicDesktopPaneUI::uninstallListeners() {
	$nc(this->desktop)->removePropertyChangeListener(this->pcl);
	$set(this, pcl, nullptr);
}

void BasicDesktopPaneUI::installDesktopManager() {
	$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
	if (this->desktopManager == nullptr) {
		$set(this, desktopManager, $new($BasicDesktopPaneUI$BasicDesktopManager, this));
		$nc(this->desktop)->setDesktopManager(this->desktopManager);
	}
}

void BasicDesktopPaneUI::uninstallDesktopManager() {
	if ($instanceOf($UIResource, $($nc(this->desktop)->getDesktopManager()))) {
		$nc(this->desktop)->setDesktopManager(nullptr);
	}
	$set(this, desktopManager, nullptr);
}

void BasicDesktopPaneUI::installKeyboardActions() {
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	if (inputMap != nullptr) {
		$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
	}
	$assign(inputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	if (inputMap != nullptr) {
		$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
	}
	$LazyActionMap::installLazyActionMap(this->desktop, BasicDesktopPaneUI::class$, "DesktopPane.actionMap"_s);
	registerKeyboardActions();
}

void BasicDesktopPaneUI::registerKeyboardActions() {
}

void BasicDesktopPaneUI::unregisterKeyboardActions() {
}

$InputMap* BasicDesktopPaneUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		return createInputMap(condition);
	} else if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->desktop, this, "Desktop.ancestorInputMap"_s));
	}
	return nullptr;
}

$InputMap* BasicDesktopPaneUI::createInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		$var($ObjectArray, bindings, $cast($ObjectArray, $DefaultLookup::get(this->desktop, this, "Desktop.windowBindings"_s)));
		if (bindings != nullptr) {
			return $LookAndFeel::makeComponentInputMap(this->desktop, bindings);
		}
	}
	return nullptr;
}

void BasicDesktopPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicDesktopPaneUI);
	$useLocalObjectStack();
	$init($BasicDesktopPaneUI$Actions);
	$nc(map)->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::RESTORE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::CLOSE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::MOVE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::RESIZE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::LEFT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_LEFT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::RIGHT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_RIGHT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::UP));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_UP));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::DOWN));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_DOWN));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::ESCAPE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::MINIMIZE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::MAXIMIZE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::NEXT_FRAME));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::PREVIOUS_FRAME));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::NAVIGATE_NEXT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::NAVIGATE_PREVIOUS));
}

void BasicDesktopPaneUI::uninstallKeyboardActions() {
	unregisterKeyboardActions();
	$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIActionMap(this->desktop, nullptr);
}

void BasicDesktopPaneUI::paint($Graphics* g, $JComponent* c) {
}

$Dimension* BasicDesktopPaneUI::getPreferredSize($JComponent* c) {
	return nullptr;
}

$Dimension* BasicDesktopPaneUI::getMinimumSize($JComponent* c) {
	return $new($Dimension, 0, 0);
}

$Dimension* BasicDesktopPaneUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$PropertyChangeListener* BasicDesktopPaneUI::createPropertyChangeListener() {
	return getHandler();
}

$BasicDesktopPaneUI$Handler* BasicDesktopPaneUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicDesktopPaneUI$Handler, this));
	}
	return this->handler;
}

void BasicDesktopPaneUI::clinit$($Class* clazz) {
	$assignStatic(BasicDesktopPaneUI::SHARED_ACTION, $new($BasicDesktopPaneUI$Actions));
}

BasicDesktopPaneUI::BasicDesktopPaneUI() {
}

$Class* BasicDesktopPaneUI::load$($String* name, bool initialize) {
	$CompoundAttribute minimizeKeyfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute maximizeKeyfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute closeKeyfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute navigateKeyfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute navigateKey2fieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"SHARED_ACTION", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI$Actions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicDesktopPaneUI, SHARED_ACTION)},
		{"handler", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI$Handler;", nullptr, $PRIVATE, $field(BasicDesktopPaneUI, handler)},
		{"pcl", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicDesktopPaneUI, pcl)},
		{"desktop", "Ljavax/swing/JDesktopPane;", nullptr, $PROTECTED, $field(BasicDesktopPaneUI, desktop)},
		{"desktopManager", "Ljavax/swing/DesktopManager;", nullptr, $PROTECTED, $field(BasicDesktopPaneUI, desktopManager)},
		{"minimizeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, minimizeKey), minimizeKeyfieldAnnotations$$},
		{"maximizeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, maximizeKey), maximizeKeyfieldAnnotations$$},
		{"closeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, closeKey), closeKeyfieldAnnotations$$},
		{"navigateKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, navigateKey), navigateKeyfieldAnnotations$$},
		{"navigateKey2", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, navigateKey2), navigateKey2fieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicDesktopPaneUI, init$, void)},
		{"createInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0, $virtualMethod(BasicDesktopPaneUI, createInputMap, $InputMap*, int32_t)},
		{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, createPropertyChangeListener, $PropertyChangeListener*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicDesktopPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"getHandler", "()Ljavax/swing/plaf/basic/BasicDesktopPaneUI$Handler;", nullptr, $PRIVATE, $method(BasicDesktopPaneUI, getHandler, $BasicDesktopPaneUI$Handler*)},
		{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0, $virtualMethod(BasicDesktopPaneUI, getInputMap, $InputMap*, int32_t)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, installDefaults, void)},
		{"installDesktopManager", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, installDesktopManager, void)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, installKeyboardActions, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, installListeners, void)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI, installUI, void, $JComponent*)},
		{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $staticMethod(BasicDesktopPaneUI, loadActionMap, void, $LazyActionMap*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI, paint, void, $Graphics*, $JComponent*)},
		{"registerKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, registerKeyboardActions, void)},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, uninstallDefaults, void)},
		{"uninstallDesktopManager", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, uninstallDesktopManager, void)},
		{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, uninstallKeyboardActions, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, uninstallListeners, void)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI, uninstallUI, void, $JComponent*)},
		{"unregisterKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(BasicDesktopPaneUI, unregisterKeyboardActions, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "NavigateAction", $PROTECTED},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MaximizeAction", $PROTECTED},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$MinimizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MinimizeAction", $PROTECTED},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "CloseAction", $PROTECTED},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "OpenAction", $PROTECTED},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$Actions", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Actions", $PRIVATE | $STATIC},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager", "javax.swing.plaf.basic.BasicDesktopPaneUI", "BasicDesktopManager", $PRIVATE},
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$Handler", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Handler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicDesktopPaneUI",
		"javax.swing.plaf.DesktopPaneUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction,javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction,javax.swing.plaf.basic.BasicDesktopPaneUI$MinimizeAction,javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction,javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction,javax.swing.plaf.basic.BasicDesktopPaneUI$Actions,javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager,javax.swing.plaf.basic.BasicDesktopPaneUI$Handler"
	};
	$loadClass(BasicDesktopPaneUI, name, initialize, &classInfo$$, BasicDesktopPaneUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDesktopPaneUI);
	});
	return class$;
}

$Class* BasicDesktopPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax