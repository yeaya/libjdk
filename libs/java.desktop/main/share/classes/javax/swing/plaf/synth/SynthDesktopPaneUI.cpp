#include <javax/swing/plaf/synth/SynthDesktopPaneUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$SynthDesktopManager.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef ENABLED
#undef PALETTE_LAYER

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthDesktopPaneUI$SynthDesktopManager = ::javax::swing::plaf::synth::SynthDesktopPaneUI$SynthDesktopManager;
using $SynthDesktopPaneUI$TaskBar = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthDesktopPaneUI::hashCode() {
	 return this->$BasicDesktopPaneUI::hashCode();
}

bool SynthDesktopPaneUI::equals(Object$* arg0) {
	 return this->$BasicDesktopPaneUI::equals(arg0);
}

$Object* SynthDesktopPaneUI::clone() {
	 return this->$BasicDesktopPaneUI::clone();
}

$String* SynthDesktopPaneUI::toString() {
	 return this->$BasicDesktopPaneUI::toString();
}

void SynthDesktopPaneUI::finalize() {
	this->$BasicDesktopPaneUI::finalize();
}

void SynthDesktopPaneUI::init$() {
	$BasicDesktopPaneUI::init$();
}

$ComponentUI* SynthDesktopPaneUI::createUI($JComponent* c) {
	$init(SynthDesktopPaneUI);
	return $new(SynthDesktopPaneUI);
}

void SynthDesktopPaneUI::installListeners() {
	$BasicDesktopPaneUI::installListeners();
	$nc(this->desktop)->addPropertyChangeListener(this);
	if (this->taskBar != nullptr) {
		$nc(this->desktop)->addComponentListener(this->taskBar);
		$nc(this->desktop)->addContainerListener(this->taskBar);
	}
}

void SynthDesktopPaneUI::installDefaults() {
	$useLocalObjectStack();
	updateStyle(this->desktop);
	if ($UIManager::getBoolean("InternalFrame.useTaskBar"_s)) {
		$set(this, taskBar, $new($SynthDesktopPaneUI$TaskBar));
		{
			$var($ComponentArray, arr$, $nc(this->desktop)->getComponents());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					$var($JInternalFrame$JDesktopIcon, desktopIcon, nullptr);
					if ($instanceOf($JInternalFrame$JDesktopIcon, comp)) {
						$assign(desktopIcon, $cast($JInternalFrame$JDesktopIcon, comp));
					} else if ($instanceOf($JInternalFrame, comp)) {
						$assign(desktopIcon, $cast($JInternalFrame, comp)->getDesktopIcon());
					} else {
						continue;
					}
					if ($equals($nc(desktopIcon)->getParent(), this->desktop)) {
						$nc(this->desktop)->remove(desktopIcon);
					}
					if (!$equals(desktopIcon->getParent(), this->taskBar)) {
						$nc(this->taskBar)->add(desktopIcon);
						$$nc(desktopIcon->getInternalFrame())->addComponentListener(this->taskBar);
					}
				}
			}
		}
		$nc(this->taskBar)->setBackground($($nc(this->desktop)->getBackground()));
		$init($JLayeredPane);
		$nc(this->desktop)->add(this->taskBar, $($Integer::valueOf($nc($JLayeredPane::PALETTE_LAYER)->intValue() + 1)));
		if ($nc(this->desktop)->isShowing()) {
			$nc(this->taskBar)->adjustSize();
		}
	}
}

void SynthDesktopPaneUI::updateStyle($JDesktopPane* c) {
	$useLocalObjectStack();
	$var($SynthStyle, oldStyle, this->style);
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (oldStyle != nullptr) {
		uninstallKeyboardActions();
		installKeyboardActions();
	}
}

void SynthDesktopPaneUI::uninstallListeners() {
	if (this->taskBar != nullptr) {
		$nc(this->desktop)->removeComponentListener(this->taskBar);
		$nc(this->desktop)->removeContainerListener(this->taskBar);
	}
	$nc(this->desktop)->removePropertyChangeListener(this);
	$BasicDesktopPaneUI::uninstallListeners();
}

void SynthDesktopPaneUI::uninstallDefaults() {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(this->desktop, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	if (this->taskBar != nullptr) {
		{
			$var($ComponentArray, arr$, this->taskBar->getComponents());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					$var($JInternalFrame$JDesktopIcon, desktopIcon, $cast($JInternalFrame$JDesktopIcon, comp));
					$nc(this->taskBar)->remove(desktopIcon);
					$nc(desktopIcon)->setPreferredSize(nullptr);
					$var($JInternalFrame, f, desktopIcon->getInternalFrame());
					if ($nc(f)->isIcon()) {
						$nc(this->desktop)->add(desktopIcon);
					}
					f->removeComponentListener(this->taskBar);
				}
			}
		}
		$nc(this->desktop)->remove(this->taskBar);
		$set(this, taskBar, nullptr);
	}
}

void SynthDesktopPaneUI::installDesktopManager() {
	if ($UIManager::getBoolean("InternalFrame.useTaskBar"_s)) {
		$set(this, desktopManager, $set(this, oldDesktopManager, $nc(this->desktop)->getDesktopManager()));
		if (!($instanceOf($SynthDesktopPaneUI$SynthDesktopManager, this->desktopManager))) {
			$set(this, desktopManager, $new($SynthDesktopPaneUI$SynthDesktopManager, this));
			$nc(this->desktop)->setDesktopManager(this->desktopManager);
		}
	} else {
		$BasicDesktopPaneUI::installDesktopManager();
	}
}

void SynthDesktopPaneUI::uninstallDesktopManager() {
	if (this->oldDesktopManager != nullptr && !($instanceOf($UIResource, this->oldDesktopManager))) {
		$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
		if (this->desktopManager == nullptr || $instanceOf($UIResource, this->desktopManager)) {
			$nc(this->desktop)->setDesktopManager(this->oldDesktopManager);
		}
	}
	$set(this, oldDesktopManager, nullptr);
	$BasicDesktopPaneUI::uninstallDesktopManager();
}

$SynthContext* SynthDesktopPaneUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthDesktopPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthDesktopPaneUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthDesktopPaneUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintDesktopPaneBackground(context, g, 0, 0, var$0, c->getHeight());
	paint(context, g);
}

void SynthDesktopPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthDesktopPaneUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthDesktopPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintDesktopPaneBorder(context, g, x, y, w, h);
}

void SynthDesktopPaneUI::propertyChange($PropertyChangeEvent* evt) {
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($$cast($JDesktopPane, $nc(evt)->getSource()));
	}
	if ($nc(evt)->getPropertyName() == "ancestor"_s && this->taskBar != nullptr) {
		this->taskBar->adjustSize();
	}
}

SynthDesktopPaneUI::SynthDesktopPaneUI() {
}

$Class* SynthDesktopPaneUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthDesktopPaneUI, style)},
		{"taskBar", "Ljavax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar;", nullptr, $PRIVATE, $field(SynthDesktopPaneUI, taskBar)},
		{"oldDesktopManager", "Ljavax/swing/DesktopManager;", nullptr, $PRIVATE, $field(SynthDesktopPaneUI, oldDesktopManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthDesktopPaneUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthDesktopPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(SynthDesktopPaneUI, getComponentState, int32_t, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthDesktopPaneUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthDesktopPaneUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, installDefaults, void)},
		{"installDesktopManager", "()V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, installDesktopManager, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, installListeners, void)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthDesktopPaneUI, paint, void, $Graphics*, $JComponent*)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthDesktopPaneUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthDesktopPaneUI, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, uninstallDefaults, void)},
		{"uninstallDesktopManager", "()V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, uninstallDesktopManager, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthDesktopPaneUI, uninstallListeners, void)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthDesktopPaneUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/JDesktopPane;)V", nullptr, $PRIVATE, $method(SynthDesktopPaneUI, updateStyle, void, $JDesktopPane*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager", "javax.swing.plaf.synth.SynthDesktopPaneUI", "SynthDesktopManager", 0},
		{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar", "javax.swing.plaf.synth.SynthDesktopPaneUI", "TaskBar", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthDesktopPaneUI",
		"javax.swing.plaf.basic.BasicDesktopPaneUI",
		"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager,javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar,javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$2,javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$1"
	};
	$loadClass(SynthDesktopPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthDesktopPaneUI));
	});
	return class$;
}

$Class* SynthDesktopPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax