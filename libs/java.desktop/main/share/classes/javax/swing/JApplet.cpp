#include <javax/swing/JApplet.h>
#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JApplet$AccessibleJApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TimerQueue.h>
#include <javax/swing/TransferHandler.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CENTER
#undef HANDLE_TOP_LEVEL_PAINT
#undef KEY_EVENT_MASK

using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JApplet$AccessibleJApplet = ::javax::swing::JApplet$AccessibleJApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TimerQueue = ::javax::swing::TimerQueue;
using $TransferHandler = ::javax::swing::TransferHandler;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$String* JApplet::toString() {
	return this->$Applet::toString();
}

int32_t JApplet::hashCode() {
	return this->$Applet::hashCode();
}

bool JApplet::equals(Object$* arg0) {
	return this->$Applet::equals(arg0);
}

$Object* JApplet::clone() {
	return this->$Applet::clone();
}

void JApplet::finalize() {
	this->$Applet::finalize();
}

void JApplet::init$() {
	$useLocalObjectStack();
	$Applet::init$();
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	$var($TimerQueue, q, $TimerQueue::sharedInstance());
	if (q != nullptr) {
		q->startIfNeeded();
	}
	$init($Color);
	setForeground($Color::black);
	setBackground($Color::white);
	setLocale($($JComponent::getDefaultLocale()));
	setLayout($$new($BorderLayout));
	setRootPane($(createRootPane()));
	setRootPaneCheckingEnabled(true);
	setFocusTraversalPolicyProvider(true);
	$SunToolkit::checkAndSetPolicy(this);
	enableEvents($AWTEvent::KEY_EVENT_MASK);
}

$JRootPane* JApplet::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

void JApplet::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, oldHandler, newHandler);
}

$TransferHandler* JApplet::getTransferHandler() {
	return this->transferHandler;
}

void JApplet::update($Graphics* g) {
	paint(g);
}

void JApplet::setJMenuBar($JMenuBar* menuBar) {
	$$nc(getRootPane())->setJMenuBar(menuBar);
}

$JMenuBar* JApplet::getJMenuBar() {
	return $$nc(getRootPane())->getJMenuBar();
}

bool JApplet::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JApplet::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JApplet::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->add(comp, constraints, index);
	} else {
		$Applet::addImpl(comp, constraints, index);
	}
}

void JApplet::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Applet::remove(comp);
	} else {
		$$nc(getContentPane())->remove(comp);
	}
}

void JApplet::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->setLayout(manager);
	} else {
		$Applet::setLayout(manager);
	}
}

$JRootPane* JApplet::getRootPane() {
	return this->rootPane;
}

void JApplet::setRootPane($JRootPane* root) {
	if (this->rootPane != nullptr) {
		remove(this->rootPane);
	}
	$set(this, rootPane, root);
	if (this->rootPane != nullptr) {
		bool checkingEnabled = isRootPaneCheckingEnabled();
		$var($Throwable, var$0, nullptr);
		try {
			setRootPaneCheckingEnabled(false);
			$init($BorderLayout);
			add(this->rootPane, $BorderLayout::CENTER);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			setRootPaneCheckingEnabled(checkingEnabled);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Container* JApplet::getContentPane() {
	return $$nc(getRootPane())->getContentPane();
}

void JApplet::setContentPane($Container* contentPane) {
	$$nc(getRootPane())->setContentPane(contentPane);
}

$JLayeredPane* JApplet::getLayeredPane() {
	return $$nc(getRootPane())->getLayeredPane();
}

void JApplet::setLayeredPane($JLayeredPane* layeredPane) {
	$$nc(getRootPane())->setLayeredPane(layeredPane);
}

$Component* JApplet::getGlassPane() {
	return $$nc(getRootPane())->getGlassPane();
}

void JApplet::setGlassPane($Component* glassPane) {
	$$nc(getRootPane())->setGlassPane(glassPane);
}

$Graphics* JApplet::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Applet::getGraphics();
}

void JApplet::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$$nc($RepaintManager::currentManager(this))->addDirtyRegion(this, x, y, width, height);
	} else {
		$Applet::repaint(time, x, y, width, height);
	}
}

$String* JApplet::paramString() {
	$useLocalObjectStack();
	$var($String, rootPaneString, this->rootPane != nullptr ? this->rootPane->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Applet::paramString()), ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JApplet::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JApplet$AccessibleJApplet, this));
	}
	return this->accessibleContext;
}

JApplet::JApplet() {
}

$Class* JApplet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JApplet, rootPane)},
		{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JApplet, rootPaneCheckingEnabled)},
		{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JApplet, transferHandler)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JApplet, accessibleContext)},
		{}
	};
	$NamedAttribute getGraphicsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getGraphicsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getGraphicsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getRootPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "the RootPane object for this applet."},
		{}
	};
	$CompoundAttribute getRootPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRootPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setContentPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The client area of the applet where child components are normally inserted."},
		{}
	};
	$CompoundAttribute setContentPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setContentPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setGlassPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "A transparent pane used for menu rendering."},
		{}
	};
	$CompoundAttribute setGlassPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setGlassPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setJMenuBarmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The menubar for accessing pulldown menus from this applet."},
		{}
	};
	$CompoundAttribute setJMenuBarmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setJMenuBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLayeredPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The pane which holds the various applet layers."},
		{}
	};
	$CompoundAttribute setLayeredPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLayeredPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRootPaneCheckingEnabledmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "Whether the add and setLayout methods are forwarded"},
		{}
	};
	$CompoundAttribute setRootPaneCheckingEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRootPaneCheckingEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTransferHandlermethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "Mechanism for transfer of data into the component"},
		{}
	};
	$CompoundAttribute setTransferHandlermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTransferHandlermethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JApplet, init$, void), "java.awt.HeadlessException"},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(JApplet, addImpl, void, $Component*, Object$*, int32_t)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(JApplet, createRootPane, $JRootPane*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JApplet, getAccessibleContext, $AccessibleContext*)},
		{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(JApplet, getContentPane, $Container*)},
		{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JApplet, getGlassPane, $Component*)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(JApplet, getGraphics, $Graphics*), nullptr, nullptr, getGraphicsmethodAnnotations$$},
		{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC, $virtualMethod(JApplet, getJMenuBar, $JMenuBar*)},
		{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC, $virtualMethod(JApplet, getLayeredPane, $JLayeredPane*)},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(JApplet, getRootPane, $JRootPane*), nullptr, nullptr, getRootPanemethodAnnotations$$},
		{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC, $virtualMethod(JApplet, getTransferHandler, $TransferHandler*)},
		{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(JApplet, isRootPaneCheckingEnabled, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JApplet, paramString, $String*)},
		{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, remove, void, $Component*)},
		{"repaint", "(JIIII)V", nullptr, $PUBLIC, $virtualMethod(JApplet, repaint, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, setContentPane, void, $Container*), nullptr, nullptr, setContentPanemethodAnnotations$$},
		{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, setGlassPane, void, $Component*), nullptr, nullptr, setGlassPanemethodAnnotations$$},
		{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, setJMenuBar, void, $JMenuBar*), nullptr, nullptr, setJMenuBarmethodAnnotations$$},
		{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, setLayeredPane, void, $JLayeredPane*), nullptr, nullptr, setLayeredPanemethodAnnotations$$},
		{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, setLayout, void, $LayoutManager*)},
		{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $virtualMethod(JApplet, setRootPane, void, $JRootPane*)},
		{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, $virtualMethod(JApplet, setRootPaneCheckingEnabled, void, bool), nullptr, nullptr, setRootPaneCheckingEnabledmethodAnnotations$$},
		{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, setTransferHandler, void, $TransferHandler*), nullptr, nullptr, setTransferHandlermethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JApplet, update, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JApplet$AccessibleJApplet", "javax.swing.JApplet", "AccessibleJApplet", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"defaultProperty", 's', "JMenuBar"},
		{"description", 's', "Swing\'s Applet subclass."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$2[] = {
		{"delegate", 's', "getContentPane"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute$1},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$2},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JApplet",
		"java.applet.Applet",
		"javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JApplet$AccessibleJApplet"
	};
	$loadClass(JApplet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JApplet));
	});
	return class$;
}

$Class* JApplet::class$ = nullptr;

	} // swing
} // javax