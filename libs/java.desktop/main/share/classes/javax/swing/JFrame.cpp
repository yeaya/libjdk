#include <javax/swing/JFrame.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame$AccessibleJFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef DO_NOTHING_ON_CLOSE
#undef EXIT_ON_CLOSE
#undef FALSE
#undef FRAME
#undef HANDLE_TOP_LEVEL_PAINT
#undef HIDE_ON_CLOSE
#undef KEY_EVENT_MASK
#undef TRUE
#undef WINDOW_CLOSING
#undef WINDOW_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $StringBuffer = ::java::lang::StringBuffer;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JFrame$AccessibleJFrame = ::javax::swing::JFrame$AccessibleJFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$String* JFrame::toString() {
	 return this->$Frame::toString();
}

int32_t JFrame::hashCode() {
	 return this->$Frame::hashCode();
}

bool JFrame::equals(Object$* arg0) {
	 return this->$Frame::equals(arg0);
}

$Object* JFrame::clone() {
	 return this->$Frame::clone();
}

void JFrame::finalize() {
	this->$Frame::finalize();
}

$Object* JFrame::defaultLookAndFeelDecoratedKey = nullptr;

void JFrame::init$() {
	$Frame::init$();
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::init$($GraphicsConfiguration* gc) {
	$Frame::init$(gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::init$($String* title) {
	$Frame::init$(title);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::init$($String* title, $GraphicsConfiguration* gc) {
	$Frame::init$(title, gc);
	this->defaultCloseOperation = $WindowConstants::HIDE_ON_CLOSE;
	this->rootPaneCheckingEnabled = false;
	$set(this, accessibleContext, nullptr);
	frameInit();
}

void JFrame::frameInit() {
	$useLocalObjectStack();
	enableEvents($AWTEvent::KEY_EVENT_MASK | $AWTEvent::WINDOW_EVENT_MASK);
	setLocale($($JComponent::getDefaultLocale()));
	setRootPane($(createRootPane()));
	setBackground($($UIManager::getColor("control"_s)));
	setRootPaneCheckingEnabled(true);
	if (JFrame::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $$nc($UIManager::getLookAndFeel())->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			setUndecorated(true);
			$$nc(getRootPane())->setWindowDecorationStyle($JRootPane::FRAME);
		}
	}
	$SunToolkit::checkAndSetPolicy(this);
}

$JRootPane* JFrame::createRootPane() {
	$var($JRootPane, rp, $new($JRootPane));
	rp->setOpaque(true);
	return rp;
}

void JFrame::processWindowEvent($WindowEvent* e) {
	$Frame::processWindowEvent(e);
	if ($nc(e)->getID() == $WindowEvent::WINDOW_CLOSING) {
		switch (this->defaultCloseOperation) {
		case $WindowConstants::HIDE_ON_CLOSE:
			setVisible(false);
			break;
		case $WindowConstants::DISPOSE_ON_CLOSE:
			dispose();
			break;
		case $WindowConstants::EXIT_ON_CLOSE:
			$System::exit(0);
			break;
		case $WindowConstants::DO_NOTHING_ON_CLOSE:
		default:
			break;
		}
	}
}

void JFrame::setDefaultCloseOperation(int32_t operation) {
	if (operation != $WindowConstants::DO_NOTHING_ON_CLOSE && operation != $WindowConstants::HIDE_ON_CLOSE && operation != $WindowConstants::DISPOSE_ON_CLOSE && operation != $WindowConstants::EXIT_ON_CLOSE) {
		$throwNew($IllegalArgumentException, "defaultCloseOperation must be one of: DO_NOTHING_ON_CLOSE, HIDE_ON_CLOSE, DISPOSE_ON_CLOSE, or EXIT_ON_CLOSE"_s);
	}
	if (operation == $WindowConstants::EXIT_ON_CLOSE) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkExit(0);
		}
	}
	if (this->defaultCloseOperation != operation) {
		int32_t oldValue = this->defaultCloseOperation;
		this->defaultCloseOperation = operation;
		firePropertyChange("defaultCloseOperation"_s, oldValue, operation);
	}
}

int32_t JFrame::getDefaultCloseOperation() {
	return this->defaultCloseOperation;
}

void JFrame::setTransferHandler($TransferHandler* newHandler) {
	$var($TransferHandler, oldHandler, this->transferHandler);
	$set(this, transferHandler, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, this->transferHandler);
	firePropertyChange("transferHandler"_s, oldHandler, newHandler);
}

$TransferHandler* JFrame::getTransferHandler() {
	return this->transferHandler;
}

void JFrame::update($Graphics* g) {
	paint(g);
}

void JFrame::setJMenuBar($JMenuBar* menubar) {
	$$nc(getRootPane())->setJMenuBar(menubar);
}

$JMenuBar* JFrame::getJMenuBar() {
	return $$nc(getRootPane())->getJMenuBar();
}

bool JFrame::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JFrame::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JFrame::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->add(comp, constraints, index);
	} else {
		$Frame::addImpl(comp, constraints, index);
	}
}

void JFrame::remove($Component* comp) {
	if ($equals(comp, this->rootPane)) {
		$Frame::remove(comp);
	} else {
		$$nc(getContentPane())->remove(comp);
	}
}

void JFrame::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->setLayout(manager);
	} else {
		$Frame::setLayout(manager);
	}
}

$JRootPane* JFrame::getRootPane() {
	return this->rootPane;
}

void JFrame::setRootPane($JRootPane* root) {
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

void JFrame::setIconImage($Image* image) {
	$Frame::setIconImage(image);
}

$Container* JFrame::getContentPane() {
	return $$nc(getRootPane())->getContentPane();
}

void JFrame::setContentPane($Container* contentPane) {
	$$nc(getRootPane())->setContentPane(contentPane);
}

$JLayeredPane* JFrame::getLayeredPane() {
	return $$nc(getRootPane())->getLayeredPane();
}

void JFrame::setLayeredPane($JLayeredPane* layeredPane) {
	$$nc(getRootPane())->setLayeredPane(layeredPane);
}

$Component* JFrame::getGlassPane() {
	return $$nc(getRootPane())->getGlassPane();
}

void JFrame::setGlassPane($Component* glassPane) {
	$$nc(getRootPane())->setGlassPane(glassPane);
}

$Graphics* JFrame::getGraphics() {
	$JComponent::getGraphicsInvoked(this);
	return $Frame::getGraphics();
}

void JFrame::repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$$nc($RepaintManager::currentManager(this))->addDirtyRegion(this, x, y, width, height);
	} else {
		$Frame::repaint(time, x, y, width, height);
	}
}

void JFrame::setDefaultLookAndFeelDecorated(bool defaultLookAndFeelDecorated) {
	$init(JFrame);
	if (defaultLookAndFeelDecorated) {
		$SwingUtilities::appContextPut(JFrame::defaultLookAndFeelDecoratedKey, $Boolean::TRUE);
	} else {
		$SwingUtilities::appContextPut(JFrame::defaultLookAndFeelDecoratedKey, $Boolean::FALSE);
	}
}

bool JFrame::isDefaultLookAndFeelDecorated() {
	$init(JFrame);
	$var($Boolean, defaultLookAndFeelDecorated, $cast($Boolean, $SwingUtilities::appContextGet(JFrame::defaultLookAndFeelDecoratedKey)));
	if (defaultLookAndFeelDecorated == nullptr) {
		$assign(defaultLookAndFeelDecorated, $Boolean::FALSE);
	}
	return $nc(defaultLookAndFeelDecorated)->booleanValue();
}

$String* JFrame::paramString() {
	$useLocalObjectStack();
	$var($String, defaultCloseOperationString, nullptr);
	if (this->defaultCloseOperation == $WindowConstants::HIDE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "HIDE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DISPOSE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DISPOSE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DO_NOTHING_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DO_NOTHING_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::EXIT_ON_CLOSE) {
		$assign(defaultCloseOperationString, "EXIT_ON_CLOSE"_s);
	} else {
		$assign(defaultCloseOperationString, ""_s);
	}
	$var($String, rootPaneString, this->rootPane != nullptr ? this->rootPane->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	return $str({$($Frame::paramString()), ",defaultCloseOperation="_s, defaultCloseOperationString, ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString});
}

$AccessibleContext* JFrame::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JFrame$AccessibleJFrame, this));
	}
	return this->accessibleContext;
}

void JFrame::clinit$($Class* clazz) {
	$assignStatic(JFrame::defaultLookAndFeelDecoratedKey, $new($StringBuffer, "JFrame.defaultLookAndFeelDecorated"_s));
}

JFrame::JFrame() {
}

$Class* JFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultLookAndFeelDecoratedKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFrame, defaultLookAndFeelDecoratedKey)},
		{"defaultCloseOperation", "I", nullptr, $PRIVATE, $field(JFrame, defaultCloseOperation)},
		{"transferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE, $field(JFrame, transferHandler)},
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JFrame, rootPane)},
		{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JFrame, rootPaneCheckingEnabled)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JFrame, accessibleContext)},
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
		{"description", 's', "the RootPane object for this frame."},
		{}
	};
	$CompoundAttribute getRootPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRootPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setContentPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The client area of the frame where child components are normally inserted."},
		{}
	};
	$CompoundAttribute setContentPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setContentPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "WindowConstants.DO_NOTHING_ON_CLOSE"},
		{'s', "WindowConstants.HIDE_ON_CLOSE"},
		{'s', "WindowConstants.DISPOSE_ON_CLOSE"},
		{'s', "WindowConstants.EXIT_ON_CLOSE"},
		{'-'}
	};
	$NamedAttribute setDefaultCloseOperationmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "The frame\'s default close operation."},
		{}
	};
	$CompoundAttribute setDefaultCloseOperationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDefaultCloseOperationmethodAnnotations$$$namedAttribute},
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
		{"description", 's', "The menubar for accessing pulldown menus from this frame."},
		{}
	};
	$CompoundAttribute setJMenuBarmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setJMenuBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLayeredPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The pane that holds the various frame layers."},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFrame, init$, void), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(JFrame, init$, void, $GraphicsConfiguration*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JFrame, init$, void, $String*), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/lang/String;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(JFrame, init$, void, $String*, $GraphicsConfiguration*)},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(JFrame, addImpl, void, $Component*, Object$*, int32_t)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(JFrame, createRootPane, $JRootPane*)},
		{"frameInit", "()V", nullptr, $PROTECTED, $virtualMethod(JFrame, frameInit, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JFrame, getAccessibleContext, $AccessibleContext*)},
		{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(JFrame, getContentPane, $Container*)},
		{"getDefaultCloseOperation", "()I", nullptr, $PUBLIC, $virtualMethod(JFrame, getDefaultCloseOperation, int32_t)},
		{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JFrame, getGlassPane, $Component*)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(JFrame, getGraphics, $Graphics*), nullptr, nullptr, getGraphicsmethodAnnotations$$},
		{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC, $virtualMethod(JFrame, getJMenuBar, $JMenuBar*)},
		{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC, $virtualMethod(JFrame, getLayeredPane, $JLayeredPane*)},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(JFrame, getRootPane, $JRootPane*), nullptr, nullptr, getRootPanemethodAnnotations$$},
		{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC, $virtualMethod(JFrame, getTransferHandler, $TransferHandler*)},
		{"isDefaultLookAndFeelDecorated", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JFrame, isDefaultLookAndFeelDecorated, bool)},
		{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(JFrame, isRootPaneCheckingEnabled, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JFrame, paramString, $String*)},
		{"processWindowEvent", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PROTECTED, $virtualMethod(JFrame, processWindowEvent, void, $WindowEvent*)},
		{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, remove, void, $Component*)},
		{"repaint", "(JIIII)V", nullptr, $PUBLIC, $virtualMethod(JFrame, repaint, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setContentPane, void, $Container*), nullptr, nullptr, setContentPanemethodAnnotations$$},
		{"setDefaultCloseOperation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setDefaultCloseOperation, void, int32_t), nullptr, nullptr, setDefaultCloseOperationmethodAnnotations$$},
		{"setDefaultLookAndFeelDecorated", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JFrame, setDefaultLookAndFeelDecorated, void, bool)},
		{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setGlassPane, void, $Component*), nullptr, nullptr, setGlassPanemethodAnnotations$$},
		{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setIconImage, void, $Image*)},
		{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setJMenuBar, void, $JMenuBar*), nullptr, nullptr, setJMenuBarmethodAnnotations$$},
		{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setLayeredPane, void, $JLayeredPane*), nullptr, nullptr, setLayeredPanemethodAnnotations$$},
		{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setLayout, void, $LayoutManager*)},
		{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $virtualMethod(JFrame, setRootPane, void, $JRootPane*)},
		{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, $virtualMethod(JFrame, setRootPaneCheckingEnabled, void, bool), nullptr, nullptr, setRootPaneCheckingEnabledmethodAnnotations$$},
		{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, setTransferHandler, void, $TransferHandler*), nullptr, nullptr, setTransferHandlermethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JFrame, update, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JFrame$AccessibleJFrame", "javax.swing.JFrame", "AccessibleJFrame", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "JMenuBar"},
		{"description", 's', "A toplevel window which can be minimized to an icon."},
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
		"javax.swing.JFrame",
		"java.awt.Frame",
		"javax.swing.WindowConstants,javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JFrame$AccessibleJFrame"
	};
	$loadClass(JFrame, name, initialize, &classInfo$$, JFrame::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFrame));
	});
	return class$;
}

$Class* JFrame::class$ = nullptr;

	} // swing
} // javax