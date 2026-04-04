#include <javax/swing/JWindow.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JWindow$AccessibleJWindow.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CENTER
#undef HANDLE_TOP_LEVEL_PAINT

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $JWindow$AccessibleJWindow = ::javax::swing::JWindow$AccessibleJWindow;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$String* JWindow::toString() {
	 return this->$Window::toString();
}

int32_t JWindow::hashCode() {
	 return this->$Window::hashCode();
}

bool JWindow::equals(Object$* arg0) {
	 return this->$Window::equals(arg0);
}

$Object* JWindow::clone() {
	 return this->$Window::clone();
}

void JWindow::finalize() {
	this->$Window::finalize();
}

void JWindow::init$() {
	JWindow::init$(($Frame*)nullptr);
}

void JWindow::init$($GraphicsConfiguration* gc) {
	JWindow::init$(nullptr, gc);
	$Window::setFocusableWindowState(false);
}

void JWindow::init$($Frame* owner) {
	$useLocalObjectStack();
	$Window::init$(owner == nullptr ? $($SwingUtilities::getSharedOwnerFrame()) : owner);
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	windowInit();
}

void JWindow::init$($Window* owner) {
	$useLocalObjectStack();
	$Window::init$(owner == nullptr ? $$cast($Window, $SwingUtilities::getSharedOwnerFrame()) : owner);
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	windowInit();
}

void JWindow::init$($Window* owner, $GraphicsConfiguration* gc) {
	$useLocalObjectStack();
	$Window::init$(owner == nullptr ? $$cast($Window, $SwingUtilities::getSharedOwnerFrame()) : owner, gc);
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	if (owner == nullptr) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		addWindowListener(ownerShutdownListener);
	}
	windowInit();
}

void JWindow::windowInit() {
	$useLocalObjectStack();
	setLocale($($JComponent::getDefaultLocale()));
	setRootPane($(createRootPane()));
	setRootPaneCheckingEnabled(true);
	$SunToolkit::checkAndSetPolicy(this);
}

$JRootPane* JWindow::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

bool JWindow::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JWindow::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, oldHandler, newHandler);
}

$TransferHandler* JWindow::getTransferHandler() {
	return this->transferHandler;
}

void JWindow::update($Graphics* g) {
	paint(g);
}

void JWindow::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JWindow::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->add(comp, constraints, index);
	} else {
		$Window::addImpl(comp, constraints, index);
	}
}

void JWindow::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Window::remove(comp);
	} else {
		$$nc(getContentPane())->remove(comp);
	}
}

void JWindow::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->setLayout(manager);
	} else {
		$Window::setLayout(manager);
	}
}

$JRootPane* JWindow::getRootPane() {
	return this->rootPane;
}

void JWindow::setRootPane($JRootPane* root) {
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

$Container* JWindow::getContentPane() {
	return $$nc(getRootPane())->getContentPane();
}

void JWindow::setContentPane($Container* contentPane) {
	$$nc(getRootPane())->setContentPane(contentPane);
}

$JLayeredPane* JWindow::getLayeredPane() {
	return $$nc(getRootPane())->getLayeredPane();
}

void JWindow::setLayeredPane($JLayeredPane* layeredPane) {
	$$nc(getRootPane())->setLayeredPane(layeredPane);
}

$Component* JWindow::getGlassPane() {
	return $$nc(getRootPane())->getGlassPane();
}

void JWindow::setGlassPane($Component* glassPane) {
	$$nc(getRootPane())->setGlassPane(glassPane);
}

$Graphics* JWindow::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Window::getGraphics();
}

void JWindow::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$$nc($RepaintManager::currentManager(this))->addDirtyRegion(this, x, y, width, height);
	} else {
		$Window::repaint(time, x, y, width, height);
	}
}

$String* JWindow::paramString() {
	$useLocalObjectStack();
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Window::paramString()), ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JWindow::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JWindow$AccessibleJWindow, this));
	}
	return this->accessibleContext;
}

JWindow::JWindow() {
}

$Class* JWindow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JWindow, rootPane)},
		{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JWindow, rootPaneCheckingEnabled)},
		{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JWindow, transferHandler)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JWindow, accessibleContext)},
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
		{"description", 's', "the RootPane object for this window."},
		{}
	};
	$CompoundAttribute getRootPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRootPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setContentPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The client area of the window where child components are normally inserted."},
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
	$NamedAttribute setLayeredPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The pane which holds the various window layers."},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(JWindow, init$, void)},
		{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(JWindow, init$, void, $GraphicsConfiguration*)},
		{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(JWindow, init$, void, $Frame*)},
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(JWindow, init$, void, $Window*)},
		{"<init>", "(Ljava/awt/Window;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(JWindow, init$, void, $Window*, $GraphicsConfiguration*)},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(JWindow, addImpl, void, $Component*, Object$*, int32_t)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(JWindow, createRootPane, $JRootPane*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JWindow, getAccessibleContext, $AccessibleContext*)},
		{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(JWindow, getContentPane, $Container*)},
		{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JWindow, getGlassPane, $Component*)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(JWindow, getGraphics, $Graphics*), nullptr, nullptr, getGraphicsmethodAnnotations$$},
		{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC, $virtualMethod(JWindow, getLayeredPane, $JLayeredPane*)},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(JWindow, getRootPane, $JRootPane*), nullptr, nullptr, getRootPanemethodAnnotations$$},
		{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC, $virtualMethod(JWindow, getTransferHandler, $TransferHandler*)},
		{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(JWindow, isRootPaneCheckingEnabled, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JWindow, paramString, $String*)},
		{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, remove, void, $Component*)},
		{"repaint", "(JIIII)V", nullptr, $PUBLIC, $virtualMethod(JWindow, repaint, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, setContentPane, void, $Container*), nullptr, nullptr, setContentPanemethodAnnotations$$},
		{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, setGlassPane, void, $Component*), nullptr, nullptr, setGlassPanemethodAnnotations$$},
		{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, setLayeredPane, void, $JLayeredPane*), nullptr, nullptr, setLayeredPanemethodAnnotations$$},
		{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, setLayout, void, $LayoutManager*)},
		{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $virtualMethod(JWindow, setRootPane, void, $JRootPane*)},
		{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, $virtualMethod(JWindow, setRootPaneCheckingEnabled, void, bool), nullptr, nullptr, setRootPaneCheckingEnabledmethodAnnotations$$},
		{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, setTransferHandler, void, $TransferHandler*), nullptr, nullptr, setTransferHandlermethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JWindow, update, void, $Graphics*)},
		{"windowInit", "()V", nullptr, $PROTECTED, $virtualMethod(JWindow, windowInit, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JWindow$AccessibleJWindow", "javax.swing.JWindow", "AccessibleJWindow", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "accessibleContext"},
		{"description", 's', "A toplevel window which has no system border or controls."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"delegate", 's', "getContentPane"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JWindow",
		"java.awt.Window",
		"javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JWindow$AccessibleJWindow"
	};
	$loadClass(JWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JWindow));
	});
	return class$;
}

$Class* JWindow::class$ = nullptr;

	} // swing
} // javax