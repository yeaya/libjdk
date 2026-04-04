#include <javax/swing/JComponent.h>
#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeSupport.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/AncestorNotifier.h>
#include <javax/swing/ArrayTable.h>
#include <javax/swing/Autoscroller.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ClientPropertyKey.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/DebugGraphics.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/InputVerifier.h>
#include <javax/swing/JComponent$1.h>
#include <javax/swing/JComponent$2.h>
#include <javax/swing/JComponent$ActionStandin.h>
#include <javax/swing/JComponent$KeyboardState.h>
#include <javax/swing/JComponent$ReadObjectCallback.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/KeyboardManager.h>
#include <javax/swing/LegacyGlueFocusTraversalPolicy.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/Popup$HeavyWeightWindow.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIClientPropertyKey.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/RequestFocusController.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACTIONMAP_CREATED
#undef ANCESTOR_INPUTMAP_CREATED
#undef ANCESTOR_USING_BUFFER
#undef AUTOSCROLLS_SET
#undef BACKWARD_TRAVERSAL_KEYS
#undef COMPLETELY_OBSCURED
#undef CREATED_DOUBLE_BUFFER
#undef CTRL_MASK
#undef DEBUG_GRAPHICS_LOADED
#undef ENABLED
#undef FOCUS_INPUTMAP_CREATED
#undef FOCUS_TRAVERSAL_KEYS_BACKWARD_SET
#undef FOCUS_TRAVERSAL_KEYS_FORWARD_SET
#undef FORWARD_TRAVERSAL_KEYS
#undef INHERITS_POPUP_MENU
#undef INPUT_VERIFIER_SOURCE_KEY
#undef IS_DOUBLE_BUFFERED
#undef IS_OPAQUE
#undef IS_PAINTING_TILE
#undef IS_PRINTING
#undef IS_PRINTING_ALL
#undef IS_REPAINTING
#undef KEYBOARD_BINDINGS_KEY
#undef KEY_EVENTS_ENABLED
#undef KEY_EVENT_MASK
#undef KEY_PRESSED
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef KEY_TYPED
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_RELEASED
#undef NEXT_FOCUS
#undef NOT_OBSCURED
#undef OPAQUE_SET
#undef OTHER
#undef PARTIALLY_OBSCURED
#undef REQUEST_FOCUS_DISABLED
#undef RESERVED_1
#undef RESERVED_2
#undef RESERVED_3
#undef RESERVED_4
#undef RESERVED_5
#undef RESERVED_6
#undef SHIFT_MASK
#undef TOOL_TIP_TEXT_KEY
#undef UNDEFINED_CONDITION
#undef VK_TAB
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW
#undef WHEN_IN_FOCUSED_WINDOW_BINDINGS
#undef WIF_INPUTMAP_CREATED
#undef WRITE_OBJ_COUNTER_FIRST
#undef WRITE_OBJ_COUNTER_LAST

using $ComponentArray = $Array<::java::awt::Component>;
using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $AncestorListenerArray = $Array<::javax::swing::event::AncestorListener>;
using $KeyStrokeArray2 = $Array<::javax::swing::KeyStroke, 2>;
using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeSupport = ::java::beans::VetoableChangeSupport;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $AncestorNotifier = ::javax::swing::AncestorNotifier;
using $ArrayTable = ::javax::swing::ArrayTable;
using $Autoscroller = ::javax::swing::Autoscroller;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $DebugGraphics = ::javax::swing::DebugGraphics;
using $InputMap = ::javax::swing::InputMap;
using $InputVerifier = ::javax::swing::InputVerifier;
using $JComponent$1 = ::javax::swing::JComponent$1;
using $JComponent$2 = ::javax::swing::JComponent$2;
using $JComponent$ActionStandin = ::javax::swing::JComponent$ActionStandin;
using $JComponent$KeyboardState = ::javax::swing::JComponent$KeyboardState;
using $JComponent$ReadObjectCallback = ::javax::swing::JComponent$ReadObjectCallback;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $JToolTip = ::javax::swing::JToolTip;
using $KeyStroke = ::javax::swing::KeyStroke;
using $KeyboardManager = ::javax::swing::KeyboardManager;
using $LegacyGlueFocusTraversalPolicy = ::javax::swing::LegacyGlueFocusTraversalPolicy;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Popup$HeavyWeightWindow = ::javax::swing::Popup$HeavyWeightWindow;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $UIClientPropertyKey = ::javax::swing::UIClientPropertyKey;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $RequestFocusController = ::sun::awt::RequestFocusController;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

class JComponent$$Lambda$lambda$revalidate$0 : public $Runnable {
	$class(JComponent$$Lambda$lambda$revalidate$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$revalidate$0();
	}
	JComponent* inst$ = nullptr;
};
$Class* JComponent$$Lambda$lambda$revalidate$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JComponent$$Lambda$lambda$revalidate$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(JComponent$$Lambda$lambda$revalidate$0, init$, void, JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent$$Lambda$lambda$revalidate$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.JComponent$$Lambda$lambda$revalidate$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JComponent$$Lambda$lambda$revalidate$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$$Lambda$lambda$revalidate$0);
	});
	return class$;
}
$Class* JComponent$$Lambda$lambda$revalidate$0::class$ = nullptr;

$String* JComponent::toString() {
	 return this->$Container::toString();
}

int32_t JComponent::hashCode() {
	 return this->$Container::hashCode();
}

bool JComponent::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* JComponent::clone() {
	 return this->$Container::clone();
}

void JComponent::finalize() {
	this->$Container::finalize();
}

$String* JComponent::uiClassID = nullptr;
$Hashtable* JComponent::readObjectCallbacks = nullptr;
$Set* JComponent::managingFocusForwardTraversalKeys = nullptr;
$Set* JComponent::managingFocusBackwardTraversalKeys = nullptr;
bool JComponent::DEBUG_GRAPHICS_LOADED = false;
$Object* JComponent::INPUT_VERIFIER_SOURCE_KEY = nullptr;
$String* JComponent::KEYBOARD_BINDINGS_KEY = nullptr;
$String* JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS = nullptr;
$String* JComponent::TOOL_TIP_TEXT_KEY = nullptr;
$String* JComponent::NEXT_FOCUS = nullptr;
$List* JComponent::tempRectangles = nullptr;
$String* JComponent::defaultLocale = nullptr;
$Component* JComponent::componentObtainingGraphicsFrom = nullptr;
$Object* JComponent::componentObtainingGraphicsFromLock = nullptr;
$RequestFocusController* JComponent::focusController = nullptr;

$AccessibleContext* JComponent::access$300(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JComponent::access$200(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JComponent::access$100(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JComponent::access$000(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$Graphics* JComponent::safelyGetGraphics($Component* c) {
	$init(JComponent);
	return safelyGetGraphics(c, $($SwingUtilities::getRoot(c)));
}

$Graphics* JComponent::safelyGetGraphics($Component* c, $Component* root) {
	$init(JComponent);
	$synchronized(JComponent::componentObtainingGraphicsFromLock) {
		$assignStatic(JComponent::componentObtainingGraphicsFrom, root);
		$var($Graphics, g, $nc(c)->getGraphics());
		$assignStatic(JComponent::componentObtainingGraphicsFrom, nullptr);
		return g;
	}
}

void JComponent::getGraphicsInvoked($Component* root) {
	$init(JComponent);
	if (!JComponent::isComponentObtainingGraphicsFrom(root)) {
		$var($JRootPane, rootPane, $nc($cast($RootPaneContainer, root))->getRootPane());
		if (rootPane != nullptr) {
			rootPane->disableTrueDoubleBuffering();
		}
	}
}

bool JComponent::isComponentObtainingGraphicsFrom($Component* c) {
	$init(JComponent);
	$synchronized(JComponent::componentObtainingGraphicsFromLock) {
		return (JComponent::componentObtainingGraphicsFrom == c);
	}
}

$Set* JComponent::getManagingFocusForwardTraversalKeys() {
	$init(JComponent);
	$synchronized(JComponent::class$) {
		if (JComponent::managingFocusForwardTraversalKeys == nullptr) {
			$assignStatic(JComponent::managingFocusForwardTraversalKeys, $new($HashSet, 1));
			JComponent::managingFocusForwardTraversalKeys->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::CTRL_MASK)));
		}
	}
	return JComponent::managingFocusForwardTraversalKeys;
}

$Set* JComponent::getManagingFocusBackwardTraversalKeys() {
	$init(JComponent);
	$synchronized(JComponent::class$) {
		if (JComponent::managingFocusBackwardTraversalKeys == nullptr) {
			$assignStatic(JComponent::managingFocusBackwardTraversalKeys, $new($HashSet, 1));
			JComponent::managingFocusBackwardTraversalKeys->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK | $InputEvent::CTRL_MASK)));
		}
	}
	return JComponent::managingFocusBackwardTraversalKeys;
}

$Rectangle* JComponent::fetchRectangle() {
	$init(JComponent);
	$synchronized(JComponent::tempRectangles) {
		$var($Rectangle, rect, nullptr);
		int32_t size = JComponent::tempRectangles->size();
		if (size > 0) {
			$assign(rect, $cast($Rectangle, JComponent::tempRectangles->remove(size - 1)));
		} else {
			$assign(rect, $new($Rectangle, 0, 0, 0, 0));
		}
		return rect;
	}
}

void JComponent::recycleRectangle($Rectangle* rect) {
	$init(JComponent);
	$synchronized(JComponent::tempRectangles) {
		JComponent::tempRectangles->add(rect);
	}
}

void JComponent::setInheritsPopupMenu(bool value) {
	bool oldValue = getFlag(JComponent::INHERITS_POPUP_MENU);
	setFlag(JComponent::INHERITS_POPUP_MENU, value);
	firePropertyChange("inheritsPopupMenu"_s, oldValue, value);
}

bool JComponent::getInheritsPopupMenu() {
	return getFlag(JComponent::INHERITS_POPUP_MENU);
}

void JComponent::setComponentPopupMenu($JPopupMenu* popup) {
	if (popup != nullptr) {
		enableEvents($AWTEvent::MOUSE_EVENT_MASK);
	}
	$var($JPopupMenu, oldPopup, this->popupMenu);
	$set(this, popupMenu, popup);
	firePropertyChange("componentPopupMenu"_s, oldPopup, popup);
}

$JPopupMenu* JComponent::getComponentPopupMenu() {
	if (!getInheritsPopupMenu()) {
		return this->popupMenu;
	}
	if (this->popupMenu == nullptr) {
		$var($Container, parent, getParent());
		while (parent != nullptr) {
			if ($instanceOf(JComponent, parent)) {
				return $cast(JComponent, parent)->getComponentPopupMenu();
			}
			if ($instanceOf($Window, parent) || $instanceOf($Applet, parent)) {
				break;
			}
			$assign(parent, parent->getParent());
		}
		return nullptr;
	}
	return this->popupMenu;
}

void JComponent::init$() {
	$useLocalObjectStack();
	$Container::init$();
	$set(this, listenerList, $new($EventListenerList));
	$set(this, inputVerifier, nullptr);
	this->verifyInputWhenFocusTarget = true;
	$set(this, revalidateRunnableScheduled, $new($AtomicBoolean, false));
	enableEvents($AWTEvent::KEY_EVENT_MASK);
	if (isManagingFocus()) {
		$LookAndFeel::installProperty(this, "focusTraversalKeysForward"_s, $(getManagingFocusForwardTraversalKeys()));
		$LookAndFeel::installProperty(this, "focusTraversalKeysBackward"_s, $(getManagingFocusBackwardTraversalKeys()));
	}
	$Container::setLocale($(JComponent::getDefaultLocale()));
}

void JComponent::updateUI() {
}

$ComponentUI* JComponent::getUI() {
	return this->ui;
}

void JComponent::setUI($ComponentUI* newUI) {
	$useLocalObjectStack();
	uninstallUIAndProperties();
	$init($RenderingHints);
	$set(this, aaHint, $$nc($UIManager::getDefaults())->get($RenderingHints::KEY_TEXT_ANTIALIASING));
	$set(this, lcdRenderingHint, $$nc($UIManager::getDefaults())->get($RenderingHints::KEY_TEXT_LCD_CONTRAST));
	$var($ComponentUI, oldUI, this->ui);
	$set(this, ui, newUI);
	if (this->ui != nullptr) {
		this->ui->installUI(this);
	}
	firePropertyChange("UI"_s, oldUI, newUI);
	revalidate();
	repaint();
}

void JComponent::uninstallUIAndProperties() {
	$useLocalObjectStack();
	if (this->ui != nullptr) {
		this->ui->uninstallUI(this);
		if (this->clientProperties != nullptr) {
			$synchronized(this->clientProperties) {
				$var($ObjectArray, clientPropertyKeys, this->clientProperties->getKeys(nullptr));
				if (clientPropertyKeys != nullptr) {
					$var($ObjectArray, arr$, clientPropertyKeys);
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$var($Object0, key, arr$->get(i$));
						if ($instanceOf($UIClientPropertyKey, key)) {
							putClientProperty(key, nullptr);
						}
					}
				}
			}
		}
	}
}

$String* JComponent::getUIClassID() {
	return JComponent::uiClassID;
}

$Graphics* JComponent::getComponentGraphics($Graphics* g) {
	$useLocalObjectStack();
	$var($Graphics, componentGraphics, g);
	if (this->ui != nullptr && JComponent::DEBUG_GRAPHICS_LOADED) {
		bool var$0 = $DebugGraphics::debugComponentCount() != 0;
		if (var$0 && (shouldDebugGraphics() != 0) && !($instanceOf($DebugGraphics, g))) {
			$assign(componentGraphics, $new($DebugGraphics, g, this));
		}
	}
	$nc(componentGraphics)->setColor($(getForeground()));
	componentGraphics->setFont($(getFont()));
	return componentGraphics;
}

void JComponent::paintComponent($Graphics* g) {
	$useLocalObjectStack();
	if (this->ui != nullptr) {
		$var($Graphics, scratchGraphics, (g == nullptr) ? ($Graphics*)nullptr : g->create());
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->ui)->update(scratchGraphics, this);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(scratchGraphics)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JComponent::paintChildren($Graphics* g) {
	$useLocalObjectStack();
	$var($Graphics, sg, g);
	$synchronized(getTreeLock()) {
		int32_t i = getComponentCount() - 1;
		if (i < 0) {
			return;
		}
		if (this->paintingChild != nullptr && ($instanceOf(JComponent, this->paintingChild)) && this->paintingChild->isOpaque()) {
			for (; i >= 0; --i) {
				if (getComponent(i) == this->paintingChild) {
					break;
				}
			}
		}
		$var($Rectangle, tmpRect, fetchRectangle());
		bool var$0 = !isOptimizedDrawingEnabled();
		bool checkSiblings = (var$0 && checkIfChildObscuredBySibling());
		$var($Rectangle, clipBounds, nullptr);
		if (checkSiblings) {
			$assign(clipBounds, $nc(sg)->getClipBounds());
			if (clipBounds == nullptr) {
				int32_t var$1 = getWidth();
				$assign(clipBounds, $new($Rectangle, 0, 0, var$1, getHeight()));
			}
		}
		bool printing = getFlag(JComponent::IS_PRINTING);
		$var($Window, window, $SwingUtilities::getWindowAncestor(this));
		bool isWindowOpaque = window == nullptr || window->isOpaque();
		for (; i >= 0; --i) {
			$var($Component, comp, getComponent(i));
			if (comp == nullptr) {
				continue;
			}
			bool isJComponent = $instanceOf(JComponent, comp);
			bool var$2 = !isWindowOpaque || isJComponent || isLightweightComponent(comp);
			if (var$2 && $nc(comp)->isVisible()) {
				$var($Rectangle, cr, nullptr);
				$assign(cr, comp->getBounds(tmpRect));
				$var($Shape, clip, $nc(g)->getClip());
				bool hitClip = (clip != nullptr) ? clip->intersects((double)$nc(cr)->x, (double)$nc(cr)->y, (double)$nc(cr)->width, (double)$nc(cr)->height) : true;
				if (hitClip) {
					if (checkSiblings && i > 0) {
						int32_t x = $nc(cr)->x;
						int32_t y = cr->y;
						int32_t width = cr->width;
						int32_t height = cr->height;
						$SwingUtilities::computeIntersection($nc(clipBounds)->x, $nc(clipBounds)->y, $nc(clipBounds)->width, $nc(clipBounds)->height, cr);
						if (getObscuredState(i, cr->x, cr->y, cr->width, cr->height) == JComponent::COMPLETELY_OBSCURED) {
							continue;
						}
						cr->x = x;
						cr->y = y;
						cr->width = width;
						cr->height = height;
					}
					$var($Graphics, cg, $nc(sg)->create($nc(cr)->x, $nc(cr)->y, $nc(cr)->width, $nc(cr)->height));
					$nc(cg)->setColor($(comp->getForeground()));
					cg->setFont($(comp->getFont()));
					bool shouldSetFlagBack = false;
					$var($Throwable, var$3, nullptr);
					try {
						if (isJComponent) {
							if (getFlag(JComponent::ANCESTOR_USING_BUFFER)) {
								$cast(JComponent, comp)->setFlag(JComponent::ANCESTOR_USING_BUFFER, true);
								shouldSetFlagBack = true;
							}
							if (getFlag(JComponent::IS_PAINTING_TILE)) {
								$cast(JComponent, comp)->setFlag(JComponent::IS_PAINTING_TILE, true);
								shouldSetFlagBack = true;
							}
							if (!printing) {
								comp->paint(cg);
							} else if (!getFlag(JComponent::IS_PRINTING_ALL)) {
								comp->print(cg);
							} else {
								comp->printAll(cg);
							}
						} else if (!printing) {
							comp->paint(cg);
						} else if (!getFlag(JComponent::IS_PRINTING_ALL)) {
							comp->print(cg);
						} else {
							comp->printAll(cg);
						}
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						cg->dispose();
						if (shouldSetFlagBack) {
							$cast(JComponent, comp)->setFlag(JComponent::ANCESTOR_USING_BUFFER, false);
							$cast(JComponent, comp)->setFlag(JComponent::IS_PAINTING_TILE, false);
						}
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
			}
		}
		recycleRectangle(tmpRect);
	}
}

void JComponent::paintBorder($Graphics* g) {
	$var($Border, border, getBorder());
	if (border != nullptr) {
		int32_t var$0 = getWidth();
		border->paintBorder(this, g, 0, 0, var$0, getHeight());
	}
}

void JComponent::update($Graphics* g) {
	paint(g);
}

void JComponent::paint($Graphics* g) {
	$useLocalObjectStack();
	bool shouldClearPaintFlags = false;
	bool var$0 = getWidth() <= 0;
	if (var$0 || (getHeight() <= 0)) {
		return;
	}
	$var($Graphics, componentGraphics, getComponentGraphics(g));
	$var($Graphics, co, $nc(componentGraphics)->create());
	$var($Throwable, var$1, nullptr);
	try {
		$var($RepaintManager, repaintManager, $RepaintManager::currentManager(this));
		$var($Rectangle, clipRect, $nc(co)->getClipBounds());
		int32_t clipX = 0;
		int32_t clipY = 0;
		int32_t clipW = 0;
		int32_t clipH = 0;
		if (clipRect == nullptr) {
			clipX = (clipY = 0);
			clipW = getWidth();
			clipH = getHeight();
		} else {
			clipX = clipRect->x;
			clipY = clipRect->y;
			clipW = clipRect->width;
			clipH = clipRect->height;
		}
		if (clipW > getWidth()) {
			clipW = getWidth();
		}
		if (clipH > getHeight()) {
			clipH = getHeight();
		}
		bool var$2 = getParent() != nullptr;
		if (var$2 && !($instanceOf(JComponent, $(getParent())))) {
			adjustPaintFlags();
			shouldClearPaintFlags = true;
		}
		int32_t bw = 0;
		int32_t bh = 0;
		bool printing = getFlag(JComponent::IS_PRINTING);
		bool var$5 = !printing && $nc(repaintManager)->isDoubleBufferingEnabled();
		bool var$4 = var$5 && !getFlag(JComponent::ANCESTOR_USING_BUFFER);
		bool var$3 = var$4 && isDoubleBuffered();
		if (var$3) {
			bool var$6 = getFlag(JComponent::IS_REPAINTING);
			var$3 = var$6 || repaintManager->isPainting();
		}
		if (var$3) {
			$nc(repaintManager)->beginPaint();
			$var($Throwable, var$7, nullptr);
			try {
				repaintManager->paint(this, this, co, clipX, clipY, clipW, clipH);
			} catch ($Throwable& var$8) {
				$assign(var$7, var$8);
			} /*finally*/ {
				repaintManager->endPaint();
			}
			if (var$7 != nullptr) {
				$throw(var$7);
			}
		} else {
			if (clipRect == nullptr) {
				co->setClip(clipX, clipY, clipW, clipH);
			}
			if (!rectangleIsObscured(clipX, clipY, clipW, clipH)) {
				if (!printing) {
					paintComponent(co);
					paintBorder(co);
				} else {
					printComponent(co);
					printBorder(co);
				}
			}
			if (!printing) {
				paintChildren(co);
			} else {
				printChildren(co);
			}
		}
	} catch ($Throwable& var$9) {
		$assign(var$1, var$9);
	} /*finally*/ {
		$nc(co)->dispose();
		if (shouldClearPaintFlags) {
			setFlag(JComponent::ANCESTOR_USING_BUFFER, false);
			setFlag(JComponent::IS_PAINTING_TILE, false);
			setFlag(JComponent::IS_PRINTING, false);
			setFlag(JComponent::IS_PRINTING_ALL, false);
		}
	}
	if (var$1 != nullptr) {
		$throw(var$1);
	}
}

void JComponent::paintForceDoubleBuffered($Graphics* g) {
	$useLocalObjectStack();
	$var($RepaintManager, rm, $RepaintManager::currentManager(this));
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$nc(rm)->beginPaint();
	setFlag(JComponent::IS_REPAINTING, true);
	$var($Throwable, var$0, nullptr);
	try {
		rm->paint(this, this, g, $nc(clip)->x, $nc(clip)->y, $nc(clip)->width, $nc(clip)->height);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		rm->endPaint();
		setFlag(JComponent::IS_REPAINTING, false);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool JComponent::isPainting() {
	$var($Container, component, this);
	while (component != nullptr) {
		if ($instanceOf(JComponent, component) && $cast(JComponent, component)->getFlag(JComponent::ANCESTOR_USING_BUFFER)) {
			return true;
		}
		$assign(component, component->getParent());
	}
	return false;
}

void JComponent::adjustPaintFlags() {
	$useLocalObjectStack();
	$var(JComponent, jparent, nullptr);
	$var($Container, parent, nullptr);
	for ($assign(parent, getParent()); parent != nullptr; $assign(parent, parent->getParent())) {
		if ($instanceOf(JComponent, parent)) {
			$assign(jparent, $cast(JComponent, parent));
			if (jparent->getFlag(JComponent::ANCESTOR_USING_BUFFER)) {
				setFlag(JComponent::ANCESTOR_USING_BUFFER, true);
			}
			if (jparent->getFlag(JComponent::IS_PAINTING_TILE)) {
				setFlag(JComponent::IS_PAINTING_TILE, true);
			}
			if (jparent->getFlag(JComponent::IS_PRINTING)) {
				setFlag(JComponent::IS_PRINTING, true);
			}
			if (jparent->getFlag(JComponent::IS_PRINTING_ALL)) {
				setFlag(JComponent::IS_PRINTING_ALL, true);
			}
			break;
		}
	}
}

void JComponent::printAll($Graphics* g) {
	setFlag(JComponent::IS_PRINTING_ALL, true);
	$var($Throwable, var$0, nullptr);
	try {
		print(g);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		setFlag(JComponent::IS_PRINTING_ALL, false);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JComponent::print($Graphics* g) {
	setFlag(JComponent::IS_PRINTING, true);
	firePropertyChange("paintingForPrint"_s, false, true);
	$var($Throwable, var$0, nullptr);
	try {
		paint(g);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		setFlag(JComponent::IS_PRINTING, false);
		firePropertyChange("paintingForPrint"_s, true, false);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JComponent::printComponent($Graphics* g) {
	paintComponent(g);
}

void JComponent::printChildren($Graphics* g) {
	paintChildren(g);
}

void JComponent::printBorder($Graphics* g) {
	paintBorder(g);
}

bool JComponent::isPaintingTile() {
	return getFlag(JComponent::IS_PAINTING_TILE);
}

bool JComponent::isPaintingForPrint() {
	return getFlag(JComponent::IS_PRINTING);
}

bool JComponent::isManagingFocus() {
	return false;
}

void JComponent::registerNextFocusableComponent() {
	registerNextFocusableComponent($(getNextFocusableComponent()));
}

void JComponent::registerNextFocusableComponent($Component* nextFocusableComponent) {
	$useLocalObjectStack();
	if (nextFocusableComponent == nullptr) {
		return;
	}
	$var($Container, nearestRoot, (isFocusCycleRoot()) ? $cast($Container, this) : getFocusCycleRootAncestor());
	$var($FocusTraversalPolicy, policy, $nc(nearestRoot)->getFocusTraversalPolicy());
	if (!($instanceOf($LegacyGlueFocusTraversalPolicy, policy))) {
		$assign(policy, $new($LegacyGlueFocusTraversalPolicy, policy));
		nearestRoot->setFocusTraversalPolicy(policy);
	}
	$nc($cast($LegacyGlueFocusTraversalPolicy, policy))->setNextFocusableComponent(this, nextFocusableComponent);
}

void JComponent::deregisterNextFocusableComponent() {
	$useLocalObjectStack();
	$var($Component, nextFocusableComponent, getNextFocusableComponent());
	if (nextFocusableComponent == nullptr) {
		return;
	}
	$var($Container, nearestRoot, (isFocusCycleRoot()) ? $cast($Container, this) : getFocusCycleRootAncestor());
	if (nearestRoot == nullptr) {
		return;
	}
	$var($FocusTraversalPolicy, policy, $nc(nearestRoot)->getFocusTraversalPolicy());
	if ($instanceOf($LegacyGlueFocusTraversalPolicy, policy)) {
		$cast($LegacyGlueFocusTraversalPolicy, policy)->unsetNextFocusableComponent(this, nextFocusableComponent);
	}
}

void JComponent::setNextFocusableComponent($Component* aComponent) {
	bool displayable = isDisplayable();
	if (displayable) {
		deregisterNextFocusableComponent();
	}
	putClientProperty(JComponent::NEXT_FOCUS, aComponent);
	if (displayable) {
		registerNextFocusableComponent(aComponent);
	}
}

$Component* JComponent::getNextFocusableComponent() {
	return $cast($Component, getClientProperty(JComponent::NEXT_FOCUS));
}

void JComponent::setRequestFocusEnabled(bool requestFocusEnabled) {
	setFlag(JComponent::REQUEST_FOCUS_DISABLED, !requestFocusEnabled);
}

bool JComponent::isRequestFocusEnabled() {
	return !getFlag(JComponent::REQUEST_FOCUS_DISABLED);
}

void JComponent::requestFocus() {
	$Container::requestFocus();
}

bool JComponent::requestFocus(bool temporary) {
	return $Container::requestFocus(temporary);
}

bool JComponent::requestFocusInWindow() {
	return $Container::requestFocusInWindow();
}

bool JComponent::requestFocusInWindow(bool temporary) {
	return $Container::requestFocusInWindow(temporary);
}

void JComponent::grabFocus() {
	requestFocus();
}

void JComponent::setVerifyInputWhenFocusTarget(bool verifyInputWhenFocusTarget) {
	bool oldVerifyInputWhenFocusTarget = this->verifyInputWhenFocusTarget;
	this->verifyInputWhenFocusTarget = verifyInputWhenFocusTarget;
	firePropertyChange("verifyInputWhenFocusTarget"_s, oldVerifyInputWhenFocusTarget, verifyInputWhenFocusTarget);
}

bool JComponent::getVerifyInputWhenFocusTarget() {
	return this->verifyInputWhenFocusTarget;
}

$FontMetrics* JComponent::getFontMetrics($Font* font) {
	return $SwingUtilities2::getFontMetrics(this, font);
}

void JComponent::setPreferredSize($Dimension* preferredSize) {
	$Container::setPreferredSize(preferredSize);
}

$Dimension* JComponent::getPreferredSize() {
	if (isPreferredSizeSet()) {
		return $Container::getPreferredSize();
	}
	$var($Dimension, size, nullptr);
	if (this->ui != nullptr) {
		$assign(size, this->ui->getPreferredSize(this));
	}
	return (size != nullptr) ? size : $Container::getPreferredSize();
}

void JComponent::setMaximumSize($Dimension* maximumSize) {
	$Container::setMaximumSize(maximumSize);
}

$Dimension* JComponent::getMaximumSize() {
	if (isMaximumSizeSet()) {
		return $Container::getMaximumSize();
	}
	$var($Dimension, size, nullptr);
	if (this->ui != nullptr) {
		$assign(size, this->ui->getMaximumSize(this));
	}
	return (size != nullptr) ? size : $Container::getMaximumSize();
}

void JComponent::setMinimumSize($Dimension* minimumSize) {
	$Container::setMinimumSize(minimumSize);
}

$Dimension* JComponent::getMinimumSize() {
	if (isMinimumSizeSet()) {
		return $Container::getMinimumSize();
	}
	$var($Dimension, size, nullptr);
	if (this->ui != nullptr) {
		$assign(size, this->ui->getMinimumSize(this));
	}
	return (size != nullptr) ? size : $Container::getMinimumSize();
}

bool JComponent::contains(int32_t x, int32_t y) {
	return (this->ui != nullptr) ? this->ui->contains(this, x, y) : $Container::contains(x, y);
}

void JComponent::setBorder($Border* border) {
	$useLocalObjectStack();
	$var($Border, oldBorder, this->border);
	$set(this, border, border);
	firePropertyChange("border"_s, oldBorder, border);
	if (border != oldBorder) {
		if (border == nullptr || oldBorder == nullptr || !($$nc(border->getBorderInsets(this))->equals($(oldBorder->getBorderInsets(this))))) {
			revalidate();
		}
		repaint();
	}
}

$Border* JComponent::getBorder() {
	return this->border;
}

$Insets* JComponent::getInsets() {
	if (this->border != nullptr) {
		return this->border->getBorderInsets(this);
	}
	return $Container::getInsets();
}

$Insets* JComponent::getInsets($Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	if (this->border != nullptr) {
		if ($instanceOf($AbstractBorder, this->border)) {
			return $cast($AbstractBorder, this->border)->getBorderInsets(this, insets);
		} else {
			return this->border->getBorderInsets(this);
		}
	} else {
		$nc(insets)->left = ($nc(insets)->top = ($nc(insets)->right = ($nc(insets)->bottom = 0)));
		return insets;
	}
}

float JComponent::getAlignmentY() {
	if (this->isAlignmentYSet) {
		return this->alignmentY;
	}
	return $Container::getAlignmentY();
}

void JComponent::setAlignmentY(float alignmentY) {
	this->alignmentY = validateAlignment(alignmentY);
	this->isAlignmentYSet = true;
}

float JComponent::getAlignmentX() {
	if (this->isAlignmentXSet) {
		return this->alignmentX;
	}
	return $Container::getAlignmentX();
}

void JComponent::setAlignmentX(float alignmentX) {
	this->alignmentX = validateAlignment(alignmentX);
	this->isAlignmentXSet = true;
}

float JComponent::validateAlignment(float alignment) {
	return alignment > 1.0f ? 1.0f : alignment < 0.0f ? 0.0f : alignment;
}

void JComponent::setInputVerifier($InputVerifier* inputVerifier) {
	$init($ClientPropertyKey);
	$var($InputVerifier, oldInputVerifier, $cast($InputVerifier, getClientProperty($ClientPropertyKey::JComponent_INPUT_VERIFIER)));
	putClientProperty($ClientPropertyKey::JComponent_INPUT_VERIFIER, inputVerifier);
	firePropertyChange("inputVerifier"_s, oldInputVerifier, inputVerifier);
}

$InputVerifier* JComponent::getInputVerifier() {
	$init($ClientPropertyKey);
	return $cast($InputVerifier, getClientProperty($ClientPropertyKey::JComponent_INPUT_VERIFIER));
}

$Graphics* JComponent::getGraphics() {
	$useLocalObjectStack();
	if (JComponent::DEBUG_GRAPHICS_LOADED && shouldDebugGraphics() != 0) {
		$var($DebugGraphics, graphics, $new($DebugGraphics, $($Container::getGraphics()), this));
		return graphics;
	}
	return $Container::getGraphics();
}

void JComponent::setDebugGraphicsOptions(int32_t debugOptions) {
	$DebugGraphics::setDebugOptions(this, debugOptions);
}

int32_t JComponent::getDebugGraphicsOptions() {
	return $DebugGraphics::getDebugOptions(this);
}

int32_t JComponent::shouldDebugGraphics() {
	return $DebugGraphics::shouldComponentDebug(this);
}

void JComponent::registerKeyboardAction($ActionListener* anAction, $String* aCommand, $KeyStroke* aKeyStroke, int32_t aCondition) {
	$useLocalObjectStack();
	$var($InputMap, inputMap, getInputMap(aCondition, true));
	if (inputMap != nullptr) {
		$var($ActionMap, actionMap, getActionMap(true));
		$var($JComponent$ActionStandin, action, $new($JComponent$ActionStandin, this, anAction, aCommand));
		inputMap->put(aKeyStroke, action);
		if (actionMap != nullptr) {
			actionMap->put(action, action);
		}
	}
}

void JComponent::registerWithKeyboardManager(bool onlyIfNew) {
	$useLocalObjectStack();
	$var($InputMap, inputMap, getInputMap(JComponent::WHEN_IN_FOCUSED_WINDOW, false));
	$var($KeyStrokeArray, strokes, nullptr);
	$var($Hashtable, registered, $cast($Hashtable, getClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS)));
	if (inputMap != nullptr) {
		$assign(strokes, inputMap->allKeys());
		if (strokes != nullptr) {
			for (int32_t counter = strokes->length - 1; counter >= 0; --counter) {
				if (!onlyIfNew || registered == nullptr || registered->get(strokes->get(counter)) == nullptr) {
					registerWithKeyboardManager(strokes->get(counter));
				}
				if (registered != nullptr) {
					registered->remove(strokes->get(counter));
				}
			}
		}
	} else {
		$assign(strokes, nullptr);
	}
	if (registered != nullptr && registered->size() > 0) {
		$var($Enumeration, keys, registered->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($KeyStroke, ks, $cast($KeyStroke, keys->nextElement()));
			unregisterWithKeyboardManager(ks);
		}
		registered->clear();
	}
	if (strokes != nullptr && strokes->length > 0) {
		if (registered == nullptr) {
			$assign(registered, $new($Hashtable, strokes->length));
			putClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, registered);
		}
		for (int32_t counter = strokes->length - 1; counter >= 0; --counter) {
			$nc(registered)->put(strokes->get(counter), strokes->get(counter));
		}
	} else {
		putClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, nullptr);
	}
}

void JComponent::unregisterWithKeyboardManager() {
	$useLocalObjectStack();
	$var($Hashtable, registered, $cast($Hashtable, getClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS)));
	if (registered != nullptr && registered->size() > 0) {
		$var($Enumeration, keys, registered->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($KeyStroke, ks, $cast($KeyStroke, keys->nextElement()));
			unregisterWithKeyboardManager(ks);
		}
	}
	putClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, nullptr);
}

void JComponent::componentInputMapChanged($ComponentInputMap* inputMap) {
	$var($InputMap, km, getInputMap(JComponent::WHEN_IN_FOCUSED_WINDOW, false));
	while (!$equals(km, inputMap) && km != nullptr) {
		$assign(km, km->getParent());
	}
	if (km != nullptr) {
		registerWithKeyboardManager(false);
	}
}

void JComponent::registerWithKeyboardManager($KeyStroke* aKeyStroke) {
	$$nc($KeyboardManager::getCurrentManager())->registerKeyStroke(aKeyStroke, this);
}

void JComponent::unregisterWithKeyboardManager($KeyStroke* aKeyStroke) {
	$$nc($KeyboardManager::getCurrentManager())->unregisterKeyStroke(aKeyStroke, this);
}

void JComponent::registerKeyboardAction($ActionListener* anAction, $KeyStroke* aKeyStroke, int32_t aCondition) {
	registerKeyboardAction(anAction, nullptr, aKeyStroke, aCondition);
}

void JComponent::unregisterKeyboardAction($KeyStroke* aKeyStroke) {
	$useLocalObjectStack();
	$var($ActionMap, am, getActionMap(false));
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, km, getInputMap(counter, false));
		if (km != nullptr) {
			$var($Object, actionID, km->get(aKeyStroke));
			if (am != nullptr && actionID != nullptr) {
				am->remove(actionID);
			}
			km->remove(aKeyStroke);
		}
	}
}

$KeyStrokeArray* JComponent::getRegisteredKeyStrokes() {
	$useLocalObjectStack();
	$var($ints, counts, $new($ints, 3));
	$var($KeyStrokeArray2, strokes, $new($KeyStrokeArray2, 3));
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, km, getInputMap(counter, false));
		strokes->set(counter, (km != nullptr) ? $(km->allKeys()) : ($KeyStrokeArray*)nullptr);
		counts->set(counter, (strokes->get(counter) != nullptr) ? $nc(strokes->get(counter))->length : 0);
	}
	$var($KeyStrokeArray, retValue, $new($KeyStrokeArray, counts->get(0) + counts->get(1) + counts->get(2)));
	for (int32_t counter = 0, last = 0; counter < 3; ++counter) {
		if (counts->get(counter) > 0) {
			$System::arraycopy(strokes->get(counter), 0, retValue, last, counts->get(counter));
			last += counts->get(counter);
		}
	}
	return retValue;
}

int32_t JComponent::getConditionForKeyStroke($KeyStroke* aKeyStroke) {
	$useLocalObjectStack();
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, inputMap, getInputMap(counter, false));
		if (inputMap != nullptr && inputMap->get(aKeyStroke) != nullptr) {
			return counter;
		}
	}
	return JComponent::UNDEFINED_CONDITION;
}

$ActionListener* JComponent::getActionForKeyStroke($KeyStroke* aKeyStroke) {
	$useLocalObjectStack();
	$var($ActionMap, am, getActionMap(false));
	if (am == nullptr) {
		return nullptr;
	}
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, inputMap, getInputMap(counter, false));
		if (inputMap != nullptr) {
			$var($Object, actionBinding, inputMap->get(aKeyStroke));
			if (actionBinding != nullptr) {
				$var($Action, action, $nc(am)->get(actionBinding));
				if ($instanceOf($JComponent$ActionStandin, action)) {
					return $cast($JComponent$ActionStandin, action)->actionListener;
				}
				return action;
			}
		}
	}
	return nullptr;
}

void JComponent::resetKeyboardActions() {
	$useLocalObjectStack();
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, inputMap, getInputMap(counter, false));
		if (inputMap != nullptr) {
			inputMap->clear();
		}
	}
	$var($ActionMap, am, getActionMap(false));
	if (am != nullptr) {
		am->clear();
	}
}

void JComponent::setInputMap(int32_t condition, $InputMap* map) {
	switch (condition) {
	case JComponent::WHEN_IN_FOCUSED_WINDOW:
		if (map != nullptr && !($instanceOf($ComponentInputMap, map))) {
			$throwNew($IllegalArgumentException, "WHEN_IN_FOCUSED_WINDOW InputMaps must be of type ComponentInputMap"_s);
		}
		$set(this, windowInputMap, $cast($ComponentInputMap, map));
		setFlag(JComponent::WIF_INPUTMAP_CREATED, true);
		registerWithKeyboardManager(false);
		break;
	case JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT:
		$set(this, ancestorInputMap, map);
		setFlag(JComponent::ANCESTOR_INPUTMAP_CREATED, true);
		break;
	case JComponent::WHEN_FOCUSED:
		$set(this, focusInputMap, map);
		setFlag(JComponent::FOCUS_INPUTMAP_CREATED, true);
		break;
	default:
		$throwNew($IllegalArgumentException, "condition must be one of JComponent.WHEN_IN_FOCUSED_WINDOW, JComponent.WHEN_FOCUSED or JComponent.WHEN_ANCESTOR_OF_FOCUSED_COMPONENT"_s);
	}
}

$InputMap* JComponent::getInputMap(int32_t condition) {
	return getInputMap(condition, true);
}

$InputMap* JComponent::getInputMap() {
	return getInputMap(JComponent::WHEN_FOCUSED, true);
}

void JComponent::setActionMap($ActionMap* am) {
	$set(this, actionMap, am);
	setFlag(JComponent::ACTIONMAP_CREATED, true);
}

$ActionMap* JComponent::getActionMap() {
	return getActionMap(true);
}

$InputMap* JComponent::getInputMap(int32_t condition, bool create) {
	$useLocalObjectStack();
	switch (condition) {
	case JComponent::WHEN_FOCUSED:
		if (getFlag(JComponent::FOCUS_INPUTMAP_CREATED)) {
			return this->focusInputMap;
		}
		if (create) {
			$var($InputMap, km, $new($InputMap));
			setInputMap(condition, km);
			return km;
		}
		break;
	case JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT:
		if (getFlag(JComponent::ANCESTOR_INPUTMAP_CREATED)) {
			return this->ancestorInputMap;
		}
		if (create) {
			$var($InputMap, km, $new($InputMap));
			setInputMap(condition, km);
			return km;
		}
		break;
	case JComponent::WHEN_IN_FOCUSED_WINDOW:
		if (getFlag(JComponent::WIF_INPUTMAP_CREATED)) {
			return this->windowInputMap;
		}
		if (create) {
			$var($ComponentInputMap, km, $new($ComponentInputMap, this));
			setInputMap(condition, km);
			return km;
		}
		break;
	default:
		$throwNew($IllegalArgumentException, "condition must be one of JComponent.WHEN_IN_FOCUSED_WINDOW, JComponent.WHEN_FOCUSED or JComponent.WHEN_ANCESTOR_OF_FOCUSED_COMPONENT"_s);
	}
	return nullptr;
}

$ActionMap* JComponent::getActionMap(bool create) {
	if (getFlag(JComponent::ACTIONMAP_CREATED)) {
		return this->actionMap;
	}
	if (create) {
		$var($ActionMap, am, $new($ActionMap));
		setActionMap(am);
		return am;
	}
	return nullptr;
}

int32_t JComponent::getBaseline(int32_t width, int32_t height) {
	$Container::getBaseline(width, height);
	if (this->ui != nullptr) {
		return this->ui->getBaseline(this, width, height);
	}
	return -1;
}

$Component$BaselineResizeBehavior* JComponent::getBaselineResizeBehavior() {
	if (this->ui != nullptr) {
		return this->ui->getBaselineResizeBehavior(this);
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

bool JComponent::requestDefaultFocus() {
	$useLocalObjectStack();
	$var($Container, nearestRoot, (isFocusCycleRoot()) ? $cast($Container, this) : getFocusCycleRootAncestor());
	if (nearestRoot == nullptr) {
		return false;
	}
	$var($Component, comp, $$nc($nc(nearestRoot)->getFocusTraversalPolicy())->getDefaultComponent(nearestRoot));
	if (comp != nullptr) {
		comp->requestFocus();
		return true;
	} else {
		return false;
	}
}

void JComponent::setVisible(bool aFlag) {
	$useLocalObjectStack();
	if (aFlag != isVisible()) {
		$Container::setVisible(aFlag);
		if (aFlag) {
			$var($Container, parent, getParent());
			if (parent != nullptr) {
				$var($Rectangle, r, getBounds());
				parent->repaint($nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height);
			}
			revalidate();
		}
	}
}

void JComponent::setEnabled(bool enabled) {
	bool oldEnabled = isEnabled();
	$Container::setEnabled(enabled);
	firePropertyChange("enabled"_s, oldEnabled, enabled);
	if (enabled != oldEnabled) {
		repaint();
	}
}

void JComponent::setForeground($Color* fg) {
	$var($Color, oldFg, getForeground());
	$Container::setForeground(fg);
	if ((oldFg != nullptr) ? !oldFg->equals(fg) : ((fg != nullptr) && !fg->equals(oldFg))) {
		repaint();
	}
}

void JComponent::setBackground($Color* bg) {
	$var($Color, oldBg, getBackground());
	$Container::setBackground(bg);
	if ((oldBg != nullptr) ? !oldBg->equals(bg) : ((bg != nullptr) && !bg->equals(oldBg))) {
		repaint();
	}
}

void JComponent::setFont($Font* font) {
	$var($Font, oldFont, getFont());
	$Container::setFont(font);
	if (font != oldFont) {
		revalidate();
		repaint();
	}
}

$Locale* JComponent::getDefaultLocale() {
	$init(JComponent);
	$var($Locale, l, $cast($Locale, $SwingUtilities::appContextGet(JComponent::defaultLocale)));
	if (l == nullptr) {
		$assign(l, $Locale::getDefault());
		JComponent::setDefaultLocale(l);
	}
	return l;
}

void JComponent::setDefaultLocale($Locale* l) {
	$init(JComponent);
	$SwingUtilities::appContextPut(JComponent::defaultLocale, l);
}

void JComponent::processComponentKeyEvent($KeyEvent* e) {
}

void JComponent::processKeyEvent($KeyEvent* e) {
	bool result = false;
	bool shouldProcessKey = false;
	$Container::processKeyEvent(e);
	if (!$nc(e)->isConsumed()) {
		processComponentKeyEvent(e);
	}
	shouldProcessKey = $JComponent$KeyboardState::shouldProcess(e);
	if (e->isConsumed()) {
		return;
	}
	if (shouldProcessKey && processKeyBindings(e, e->getID() == $KeyEvent::KEY_PRESSED)) {
		e->consume();
	}
}

bool JComponent::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$useLocalObjectStack();
	$var($InputMap, map, getInputMap(condition, false));
	$var($ActionMap, am, getActionMap(false));
	if (map != nullptr && am != nullptr && isEnabled()) {
		$var($Object, binding, map->get(ks));
		$var($Action, action, (binding == nullptr) ? ($Action*)nullptr : am->get(binding));
		if (action != nullptr) {
			return $SwingUtilities::notifyAction(action, ks, e, this, $nc(e)->getModifiers());
		}
	}
	return false;
}

bool JComponent::processKeyBindings($KeyEvent* e, bool pressed) {
	$useLocalObjectStack();
	if (!$SwingUtilities::isValidKeyEventForKeyBindings(e)) {
		return false;
	}
	$var($KeyStroke, ks, nullptr);
	$var($KeyStroke, ksE, nullptr);
	if ($nc(e)->getID() == $KeyEvent::KEY_TYPED) {
		$assign(ks, $KeyStroke::getKeyStroke(e->getKeyChar()));
	} else {
		int32_t var$0 = e->getKeyCode();
		$assign(ks, $KeyStroke::getKeyStroke(var$0, e->getModifiers(), (pressed ? false : true)));
		int32_t var$1 = e->getKeyCode();
		if (var$1 != e->getExtendedKeyCode()) {
			int32_t var$2 = e->getExtendedKeyCode();
			$assign(ksE, $KeyStroke::getKeyStroke(var$2, e->getModifiers(), (pressed ? false : true)));
		}
	}
	if (ksE != nullptr && processKeyBinding(ksE, e, JComponent::WHEN_FOCUSED, pressed)) {
		return true;
	}
	if (processKeyBinding(ks, e, JComponent::WHEN_FOCUSED, pressed)) {
		return true;
	}
	$var($Container, parent, this);
	while (parent != nullptr && !($instanceOf($Window, parent)) && !($instanceOf($Applet, parent))) {
		if ($instanceOf(JComponent, parent)) {
			if (ksE != nullptr && $cast(JComponent, parent)->processKeyBinding(ksE, e, JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, pressed)) {
				return true;
			}
			if ($cast(JComponent, parent)->processKeyBinding(ks, e, JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, pressed)) {
				return true;
			}
		}
		if (($instanceOf($JInternalFrame, parent)) && JComponent::processKeyBindingsForAllComponents(e, parent, pressed)) {
			return true;
		}
		$assign(parent, parent->getParent());
	}
	if (parent != nullptr) {
		return JComponent::processKeyBindingsForAllComponents(e, parent, pressed);
	}
	return false;
}

bool JComponent::processKeyBindingsForAllComponents($KeyEvent* e, $Container* container$renamed, bool pressed) {
	$init(JComponent);
	$useLocalObjectStack();
	$var($Container, container, container$renamed);
	while (true) {
		if ($$nc($KeyboardManager::getCurrentManager())->fireKeyboardAction(e, pressed, container)) {
			return true;
		}
		if ($instanceOf($Popup$HeavyWeightWindow, container)) {
			$assign(container, $cast($Window, container)->getOwner());
		} else {
			return false;
		}
	}
}

void JComponent::setToolTipText($String* text) {
	$useLocalObjectStack();
	$var($String, oldText, getToolTipText());
	putClientProperty(JComponent::TOOL_TIP_TEXT_KEY, text);
	$var($ToolTipManager, toolTipManager, $ToolTipManager::sharedInstance());
	if (text != nullptr) {
		if (oldText == nullptr) {
			$nc(toolTipManager)->registerComponent(this);
		}
	} else {
		$nc(toolTipManager)->unregisterComponent(this);
	}
}

$String* JComponent::getToolTipText() {
	return $cast($String, getClientProperty(JComponent::TOOL_TIP_TEXT_KEY));
}

$String* JComponent::getToolTipText($MouseEvent* event) {
	return getToolTipText();
}

$Point* JComponent::getToolTipLocation($MouseEvent* event) {
	return nullptr;
}

$Point* JComponent::getPopupLocation($MouseEvent* event) {
	return nullptr;
}

$JToolTip* JComponent::createToolTip() {
	$var($JToolTip, tip, $new($JToolTip));
	tip->setComponent(this);
	return tip;
}

void JComponent::scrollRectToVisible($Rectangle* aRect) {
	$useLocalObjectStack();
	$var($Container, parent, nullptr);
	int32_t dx = getX();
	int32_t dy = getY();
	for ($assign(parent, getParent()); !(parent == nullptr) && !($instanceOf(JComponent, parent)) && !($instanceOf($CellRendererPane, parent)); $assign(parent, parent->getParent())) {
		$var($Rectangle, bounds, parent->getBounds());
		dx += $nc(bounds)->x;
		dy += bounds->y;
	}
	if (!(parent == nullptr) && !($instanceOf($CellRendererPane, parent))) {
		$nc(aRect)->x += dx;
		aRect->y += dy;
		$cast(JComponent, parent)->scrollRectToVisible(aRect);
		aRect->x -= dx;
		aRect->y -= dy;
	}
}

void JComponent::setAutoscrolls(bool autoscrolls) {
	setFlag(JComponent::AUTOSCROLLS_SET, true);
	if (this->autoscrolls != autoscrolls) {
		this->autoscrolls = autoscrolls;
		if (autoscrolls) {
			enableEvents($AWTEvent::MOUSE_EVENT_MASK);
			enableEvents($AWTEvent::MOUSE_MOTION_EVENT_MASK);
		} else {
			$Autoscroller::stop(this);
		}
	}
}

bool JComponent::getAutoscrolls() {
	return this->autoscrolls;
}

void JComponent::setTransferHandler($TransferHandler* newHandler) {
	$init($ClientPropertyKey);
	$var($TransferHandler, oldHandler, $cast($TransferHandler, getClientProperty($ClientPropertyKey::JComponent_TRANSFER_HANDLER)));
	putClientProperty($ClientPropertyKey::JComponent_TRANSFER_HANDLER, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, newHandler);
}

$TransferHandler* JComponent::getTransferHandler() {
	$init($ClientPropertyKey);
	return $cast($TransferHandler, getClientProperty($ClientPropertyKey::JComponent_TRANSFER_HANDLER));
}

$TransferHandler$DropLocation* JComponent::dropLocationForPoint($Point* p) {
	return nullptr;
}

$Object* JComponent::setDropLocation($TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	return nullptr;
}

void JComponent::dndDone() {
}

void JComponent::processMouseEvent($MouseEvent* e) {
	if (this->autoscrolls && $nc(e)->getID() == $MouseEvent::MOUSE_RELEASED) {
		$Autoscroller::stop(this);
	}
	$Container::processMouseEvent(e);
}

void JComponent::processMouseMotionEvent($MouseEvent* e) {
	bool dispatch = true;
	if (this->autoscrolls && $nc(e)->getID() == $MouseEvent::MOUSE_DRAGGED) {
		dispatch = !$Autoscroller::isRunning(this);
		$Autoscroller::processMouseDragged(e);
	}
	if (dispatch) {
		$Container::processMouseMotionEvent(e);
	}
}

void JComponent::superProcessMouseMotionEvent($MouseEvent* e) {
	$Container::processMouseMotionEvent(e);
}

void JComponent::setCreatedDoubleBuffer(bool newValue) {
	setFlag(JComponent::CREATED_DOUBLE_BUFFER, newValue);
}

bool JComponent::getCreatedDoubleBuffer() {
	return getFlag(JComponent::CREATED_DOUBLE_BUFFER);
}

void JComponent::enable() {
	if (isEnabled() != true) {
		$Container::enable();
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$init($AccessibleState);
			this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::ENABLED);
		}
	}
}

void JComponent::disable() {
	if (isEnabled() != false) {
		$Container::disable();
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$init($AccessibleState);
			this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::ENABLED, nullptr);
		}
	}
}

$ArrayTable* JComponent::getClientProperties() {
	if (this->clientProperties == nullptr) {
		$set(this, clientProperties, $new($ArrayTable));
	}
	return this->clientProperties;
}

$Object* JComponent::getClientProperty(Object$* key) {
	$init($RenderingHints);
	if ($equals(key, $RenderingHints::KEY_TEXT_ANTIALIASING)) {
		return this->aaHint;
	} else if ($equals(key, $RenderingHints::KEY_TEXT_LCD_CONTRAST)) {
		return this->lcdRenderingHint;
	}
	if (this->clientProperties == nullptr) {
		return nullptr;
	} else {
		$synchronized(this->clientProperties) {
			return this->clientProperties->get(key);
		}
	}
}

void JComponent::putClientProperty(Object$* key, Object$* value) {
	$useLocalObjectStack();
	$init($RenderingHints);
	if ($equals(key, $RenderingHints::KEY_TEXT_ANTIALIASING)) {
		$set(this, aaHint, value);
		return;
	} else if ($equals(key, $RenderingHints::KEY_TEXT_LCD_CONTRAST)) {
		$set(this, lcdRenderingHint, value);
		return;
	}
	if (value == nullptr && this->clientProperties == nullptr) {
		return;
	}
	$var($ArrayTable, clientProperties, getClientProperties());
	$var($Object, oldValue, nullptr);
	$synchronized(clientProperties) {
		$assign(oldValue, clientProperties->get(key));
		if (value != nullptr) {
			clientProperties->put(key, value);
		} else if (oldValue != nullptr) {
			clientProperties->remove(key);
		} else {
			return;
		}
	}
	clientPropertyChanged(key, oldValue, value);
	firePropertyChange($($nc($of(key))->toString()), oldValue, value);
}

void JComponent::clientPropertyChanged(Object$* key, Object$* oldValue, Object$* newValue) {
}

void JComponent::setUIProperty($String* propertyName, Object$* value) {
	$useLocalObjectStack();
	if (propertyName == "opaque"_s) {
		if (!getFlag(JComponent::OPAQUE_SET)) {
			setOpaque($nc($cast($Boolean, value))->booleanValue());
			setFlag(JComponent::OPAQUE_SET, false);
		}
	} else if (propertyName == "autoscrolls"_s) {
		if (!getFlag(JComponent::AUTOSCROLLS_SET)) {
			setAutoscrolls($nc($cast($Boolean, value))->booleanValue());
			setFlag(JComponent::AUTOSCROLLS_SET, false);
		}
	} else if (propertyName == "focusTraversalKeysForward"_s) {
		$var($Set, strokeSet, $cast($Set, value));
		if (!getFlag(JComponent::FOCUS_TRAVERSAL_KEYS_FORWARD_SET)) {
			$Container::setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, strokeSet);
		}
	} else if (propertyName == "focusTraversalKeysBackward"_s) {
		$var($Set, strokeSet, $cast($Set, value));
		if (!getFlag(JComponent::FOCUS_TRAVERSAL_KEYS_BACKWARD_SET)) {
			$Container::setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, strokeSet);
		}
	} else {
		$throwNew($IllegalArgumentException, $$str({"property \""_s, propertyName, "\" cannot be set using this method"_s}));
	}
}

void JComponent::setFocusTraversalKeys(int32_t id, $Set* keystrokes) {
	if (id == $KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS) {
		setFlag(JComponent::FOCUS_TRAVERSAL_KEYS_FORWARD_SET, true);
	} else if (id == $KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS) {
		setFlag(JComponent::FOCUS_TRAVERSAL_KEYS_BACKWARD_SET, true);
	}
	$Container::setFocusTraversalKeys(id, keystrokes);
}

bool JComponent::isLightweightComponent($Component* c) {
	$init(JComponent);
	return $$nc($AWTAccessor::getComponentAccessor())->isLightweight(c);
}

void JComponent::reshape(int32_t x, int32_t y, int32_t w, int32_t h) {
	$Container::reshape(x, y, w, h);
}

$Rectangle* JComponent::getBounds($Rectangle* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getX();
		int32_t var$1 = getY();
		int32_t var$2 = getWidth();
		return $new($Rectangle, var$0, var$1, var$2, getHeight());
	} else {
		int32_t var$3 = getX();
		int32_t var$4 = getY();
		int32_t var$5 = getWidth();
		rv->setBounds(var$3, var$4, var$5, getHeight());
		return rv;
	}
}

$Dimension* JComponent::getSize($Dimension* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getWidth();
		return $new($Dimension, var$0, getHeight());
	} else {
		int32_t var$1 = getWidth();
		rv->setSize(var$1, getHeight());
		return rv;
	}
}

$Point* JComponent::getLocation($Point* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getX();
		return $new($Point, var$0, getY());
	} else {
		int32_t var$1 = getX();
		rv->setLocation(var$1, getY());
		return rv;
	}
}

int32_t JComponent::getX() {
	return $Container::getX();
}

int32_t JComponent::getY() {
	return $Container::getY();
}

int32_t JComponent::getWidth() {
	return $Container::getWidth();
}

int32_t JComponent::getHeight() {
	return $Container::getHeight();
}

bool JComponent::isOpaque() {
	return getFlag(JComponent::IS_OPAQUE);
}

void JComponent::setOpaque(bool isOpaque) {
	bool oldValue = getFlag(JComponent::IS_OPAQUE);
	setFlag(JComponent::IS_OPAQUE, isOpaque);
	setFlag(JComponent::OPAQUE_SET, true);
	firePropertyChange("opaque"_s, oldValue, isOpaque);
}

bool JComponent::rectangleIsObscured(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	int32_t numChildren = getComponentCount();
	for (int32_t i = 0; i < numChildren; ++i) {
		$var($Component, child, getComponent(i));
		int32_t cx = 0;
		int32_t cy = 0;
		int32_t cw = 0;
		int32_t ch = 0;
		cx = $nc(child)->getX();
		cy = child->getY();
		cw = child->getWidth();
		ch = child->getHeight();
		if (x >= cx && (x + width) <= (cx + cw) && y >= cy && (y + height) <= (cy + ch) && child->isVisible()) {
			if ($instanceOf(JComponent, child)) {
				return child->isOpaque();
			} else {
				return false;
			}
		}
	}
	return false;
}

void JComponent::computeVisibleRect($Component* c, $Rectangle* visibleRect) {
	$init(JComponent);
	$useLocalObjectStack();
	$var($Container, p, $nc(c)->getParent());
	$var($Rectangle, bounds, c->getBounds());
	if (p == nullptr || $instanceOf($Window, p) || $instanceOf($Applet, p)) {
		$nc(visibleRect)->setBounds(0, 0, $nc(bounds)->width, $nc(bounds)->height);
	} else {
		computeVisibleRect(p, visibleRect);
		$nc(visibleRect)->x -= $nc(bounds)->x;
		visibleRect->y -= bounds->y;
		$SwingUtilities::computeIntersection(0, 0, bounds->width, bounds->height, visibleRect);
	}
}

void JComponent::computeVisibleRect($Rectangle* visibleRect) {
	computeVisibleRect(this, visibleRect);
}

$Rectangle* JComponent::getVisibleRect() {
	$var($Rectangle, visibleRect, $new($Rectangle));
	computeVisibleRect(visibleRect);
	return visibleRect;
}

void JComponent::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	$Container::firePropertyChange(propertyName, oldValue, newValue);
}

void JComponent::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$Container::firePropertyChange(propertyName, oldValue, newValue);
}

void JComponent::firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) {
	$Container::firePropertyChange(propertyName, oldValue, newValue);
}

void JComponent::fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->vetoableChangeSupport == nullptr) {
		return;
	}
	$nc(this->vetoableChangeSupport)->fireVetoableChange(propertyName, oldValue, newValue);
}

void JComponent::addVetoableChangeListener($VetoableChangeListener* listener) {
	$synchronized(this) {
		if (this->vetoableChangeSupport == nullptr) {
			$set(this, vetoableChangeSupport, $new($VetoableChangeSupport, this));
		}
		$nc(this->vetoableChangeSupport)->addVetoableChangeListener(listener);
	}
}

void JComponent::removeVetoableChangeListener($VetoableChangeListener* listener) {
	$synchronized(this) {
		if (this->vetoableChangeSupport == nullptr) {
			return;
		}
		$nc(this->vetoableChangeSupport)->removeVetoableChangeListener(listener);
	}
}

$VetoableChangeListenerArray* JComponent::getVetoableChangeListeners() {
	$synchronized(this) {
		if (this->vetoableChangeSupport == nullptr) {
			return $new($VetoableChangeListenerArray, 0);
		}
		return $nc(this->vetoableChangeSupport)->getVetoableChangeListeners();
	}
}

$Container* JComponent::getTopLevelAncestor() {
	$var($Container, p, this);
	for (; p != nullptr; $assign(p, p->getParent())) {
		if ($instanceOf($Window, p) || $instanceOf($Applet, p)) {
			return p;
		}
	}
	return nullptr;
}

$AncestorNotifier* JComponent::getAncestorNotifier() {
	$init($ClientPropertyKey);
	return $cast($AncestorNotifier, getClientProperty($ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER));
}

void JComponent::addAncestorListener($AncestorListener* listener) {
	$var($AncestorNotifier, ancestorNotifier, getAncestorNotifier());
	if (ancestorNotifier == nullptr) {
		$assign(ancestorNotifier, $new($AncestorNotifier, this));
		$init($ClientPropertyKey);
		putClientProperty($ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER, ancestorNotifier);
	}
	$nc(ancestorNotifier)->addAncestorListener(listener);
}

void JComponent::removeAncestorListener($AncestorListener* listener) {
	$useLocalObjectStack();
	$var($AncestorNotifier, ancestorNotifier, getAncestorNotifier());
	if (ancestorNotifier == nullptr) {
		return;
	}
	$nc(ancestorNotifier)->removeAncestorListener(listener);
	if ($nc($($nc(ancestorNotifier->listenerList)->getListenerList()))->length == 0) {
		ancestorNotifier->removeAllListeners();
		$init($ClientPropertyKey);
		putClientProperty($ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER, nullptr);
	}
}

$AncestorListenerArray* JComponent::getAncestorListeners() {
	$var($AncestorNotifier, ancestorNotifier, getAncestorNotifier());
	if (ancestorNotifier == nullptr) {
		return $new($AncestorListenerArray, 0);
	}
	return $nc(ancestorNotifier)->getAncestorListeners();
}

$EventListenerArray* JComponent::getListeners($Class* listenerType) {
	$var($EventListenerArray, result, nullptr);
	$load($AncestorListener);
	if (listenerType == $AncestorListener::class$) {
		$assign(result, $cast($EventListenerArray, getAncestorListeners()));
	} else {
		$load($VetoableChangeListener);
		if (listenerType == $VetoableChangeListener::class$) {
			$assign(result, $cast($EventListenerArray, getVetoableChangeListeners()));
		} else {
			$load($PropertyChangeListener);
			if (listenerType == $PropertyChangeListener::class$) {
				$assign(result, $cast($EventListenerArray, getPropertyChangeListeners()));
			} else {
				$assign(result, $nc(this->listenerList)->getListeners(listenerType));
			}
		}
	}
	if ($nc(result)->length == 0) {
		return $Container::getListeners(listenerType);
	}
	return result;
}

void JComponent::addNotify() {
	$Container::addNotify();
	firePropertyChange("ancestor"_s, nullptr, $(getParent()));
	registerWithKeyboardManager(false);
	registerNextFocusableComponent();
}

void JComponent::removeNotify() {
	$useLocalObjectStack();
	$Container::removeNotify();
	firePropertyChange("ancestor"_s, $(getParent()), nullptr);
	unregisterWithKeyboardManager();
	deregisterNextFocusableComponent();
	if (getCreatedDoubleBuffer()) {
		$$nc($RepaintManager::currentManager(this))->resetDoubleBuffer();
		setCreatedDoubleBuffer(false);
	}
	if (this->autoscrolls) {
		$Autoscroller::stop(this);
	}
}

void JComponent::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$$nc($RepaintManager::currentManager($($SunToolkit::targetToAppContext(this))))->addDirtyRegion(this, x, y, width, height);
}

void JComponent::repaint($Rectangle* r) {
	repaint(0, $nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height);
}

void JComponent::revalidate() {
	$useLocalObjectStack();
	if (getParent() == nullptr) {
		return;
	}
	if ($SunToolkit::isDispatchThreadForAppContext(this)) {
		invalidate();
		$$nc($RepaintManager::currentManager(this))->addInvalidComponent(this);
	} else {
		if ($nc(this->revalidateRunnableScheduled)->getAndSet(true)) {
			return;
		}
		$SunToolkit::executeOnEventHandlerThread(this, $$new(JComponent$$Lambda$lambda$revalidate$0, this));
	}
}

bool JComponent::isValidateRoot() {
	return false;
}

bool JComponent::isOptimizedDrawingEnabled() {
	return true;
}

bool JComponent::isPaintingOrigin() {
	return false;
}

void JComponent::paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Component, c, this);
	$var($Component, parent, nullptr);
	if (!isShowing()) {
		return;
	}
	$var(JComponent, paintingOigin, $SwingUtilities::getPaintingOrigin(this));
	if (paintingOigin != nullptr) {
		$var($Rectangle, rectangle, $SwingUtilities::convertRectangle(c, $$new($Rectangle, x, y, w, h), paintingOigin));
		paintingOigin->paintImmediately($nc(rectangle)->x, $nc(rectangle)->y, $nc(rectangle)->width, $nc(rectangle)->height);
		return;
	}
	while (!$nc(c)->isOpaque()) {
		$assign(parent, c->getParent());
		if (parent != nullptr) {
			x += c->getX();
			y += c->getY();
			$assign(c, parent);
		} else {
			break;
		}
		if (!($instanceOf(JComponent, c))) {
			break;
		}
	}
	if ($instanceOf(JComponent, c)) {
		$cast(JComponent, c)->_paintImmediately(x, y, w, h);
	} else {
		c->repaint(x, y, w, h);
	}
}

void JComponent::paintImmediately($Rectangle* r) {
	paintImmediately($nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height);
}

bool JComponent::alwaysOnTop() {
	return false;
}

void JComponent::setPaintingChild($Component* paintingChild) {
	$set(this, paintingChild, paintingChild);
}

void JComponent::_paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Graphics, g, nullptr);
	$var($Container, c, nullptr);
	$var($Rectangle, b, nullptr);
	int32_t tmpX = 0;
	int32_t tmpY = 0;
	int32_t tmpWidth = 0;
	int32_t tmpHeight = 0;
	int32_t offsetX = 0;
	int32_t offsetY = 0;
	bool hasBuffer = false;
	$var(JComponent, bufferedComponent, nullptr);
	$var(JComponent, paintingComponent, this);
	$var($RepaintManager, repaintManager, $RepaintManager::currentManager(this));
	$var($List, path, $new($ArrayList, 7));
	int32_t pIndex = -1;
	int32_t pCount = 0;
	tmpX = (tmpY = (tmpWidth = (tmpHeight = 0)));
	$var($Rectangle, paintImmediatelyClip, fetchRectangle());
	$nc(paintImmediatelyClip)->x = x;
	paintImmediatelyClip->y = y;
	paintImmediatelyClip->width = w;
	paintImmediatelyClip->height = h;
	bool var$0 = alwaysOnTop();
	bool ontop = var$0 && isOpaque();
	if (ontop) {
		int32_t var$1 = getWidth();
		$SwingUtilities::computeIntersection(0, 0, var$1, getHeight(), paintImmediatelyClip);
		if (paintImmediatelyClip->width == 0) {
			recycleRectangle(paintImmediatelyClip);
			return;
		}
	}
	$var($Component, child, nullptr);
	for ($assign(c, this), $assign(child, nullptr); c != nullptr && !($instanceOf($Window, c)) && !($instanceOf($Applet, c)); $assign(child, c), $assign(c, c->getParent())) {
		$var(JComponent, jc, ($instanceOf(JComponent, c)) ? $cast(JComponent, c) : (JComponent*)nullptr);
		path->add(c);
		if (!ontop && jc != nullptr && !jc->isOptimizedDrawingEnabled()) {
			bool resetPC = false;
			if (!$equals(c, this)) {
				if (jc->isPaintingOrigin()) {
					resetPC = true;
				} else {
					$var($ComponentArray, children, c->getComponents());
					int32_t i = 0;
					for (; i < $nc(children)->length; ++i) {
						if (children->get(i) == child) {
							break;
						}
					}
					switch (jc->getObscuredState(i, paintImmediatelyClip->x, paintImmediatelyClip->y, paintImmediatelyClip->width, paintImmediatelyClip->height)) {
					case JComponent::NOT_OBSCURED:
						resetPC = false;
						break;
					case JComponent::COMPLETELY_OBSCURED:
						recycleRectangle(paintImmediatelyClip);
						return;
					default:
						resetPC = true;
						break;
					}
				}
			} else {
				resetPC = false;
			}
			if (resetPC) {
				$assign(paintingComponent, jc);
				pIndex = pCount;
				offsetX = (offsetY = 0);
				hasBuffer = false;
			}
		}
		++pCount;
		bool var$2 = $nc(repaintManager)->isDoubleBufferingEnabled() && jc != nullptr;
		if (var$2 && jc->isDoubleBuffered()) {
			hasBuffer = true;
			$assign(bufferedComponent, jc);
		}
		if (!ontop) {
			int32_t bx = c->getX();
			int32_t by = c->getY();
			tmpWidth = c->getWidth();
			tmpHeight = c->getHeight();
			$SwingUtilities::computeIntersection(tmpX, tmpY, tmpWidth, tmpHeight, paintImmediatelyClip);
			paintImmediatelyClip->x += bx;
			paintImmediatelyClip->y += by;
			offsetX += bx;
			offsetY += by;
		}
	}
	if (c == nullptr || !c->isDisplayable() || paintImmediatelyClip->width <= 0 || paintImmediatelyClip->height <= 0) {
		recycleRectangle(paintImmediatelyClip);
		return;
	}
	$nc(paintingComponent)->setFlag(JComponent::IS_REPAINTING, true);
	paintImmediatelyClip->x -= offsetX;
	paintImmediatelyClip->y -= offsetY;
	if (paintingComponent != this) {
		$var($Component, comp, nullptr);
		int32_t i = pIndex;
		for (; i > 0; --i) {
			$assign(comp, $cast($Component, path->get(i)));
			if ($instanceOf(JComponent, comp)) {
				$cast(JComponent, comp)->setPaintingChild($$cast($Component, path->get(i - 1)));
			}
		}
	}
	$var($Throwable, var$3, nullptr);
	try {
		if (($assign(g, safelyGetGraphics(paintingComponent, c))) != nullptr) {
			$var($Throwable, var$4, nullptr);
			try {
				if (hasBuffer) {
					$var($RepaintManager, rm, $RepaintManager::currentManager(bufferedComponent));
					$nc(rm)->beginPaint();
					$var($Throwable, var$5, nullptr);
					try {
						rm->paint(paintingComponent, bufferedComponent, g, paintImmediatelyClip->x, paintImmediatelyClip->y, paintImmediatelyClip->width, paintImmediatelyClip->height);
					} catch ($Throwable& var$6) {
						$assign(var$5, var$6);
					} /*finally*/ {
						rm->endPaint();
					}
					if (var$5 != nullptr) {
						$throw(var$5);
					}
				} else {
					$nc(g)->setClip(paintImmediatelyClip->x, paintImmediatelyClip->y, paintImmediatelyClip->width, paintImmediatelyClip->height);
					paintingComponent->paint(g);
				}
			} catch ($Throwable& var$7) {
				$assign(var$4, var$7);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	} catch ($Throwable& var$8) {
		$assign(var$3, var$8);
	} /*finally*/ {
		if (paintingComponent != this) {
			$var($Component, comp, nullptr);
			int32_t i = pIndex;
			for (; i > 0; --i) {
				$assign(comp, $cast($Component, path->get(i)));
				if ($instanceOf(JComponent, comp)) {
					$cast(JComponent, comp)->setPaintingChild(nullptr);
				}
			}
		}
		paintingComponent->setFlag(JComponent::IS_REPAINTING, false);
	}
	if (var$3 != nullptr) {
		$throw(var$3);
	}
	recycleRectangle(paintImmediatelyClip);
}

void JComponent::paintToOffscreen($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maxX, int32_t maxY) {
	$var($Throwable, var$0, nullptr);
	try {
		setFlag(JComponent::ANCESTOR_USING_BUFFER, true);
		if ((y + h) < maxY || (x + w) < maxX) {
			setFlag(JComponent::IS_PAINTING_TILE, true);
		}
		if (getFlag(JComponent::IS_REPAINTING)) {
			paint(g);
		} else {
			if (!rectangleIsObscured(x, y, w, h)) {
				paintComponent(g);
				paintBorder(g);
			}
			paintChildren(g);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		setFlag(JComponent::ANCESTOR_USING_BUFFER, false);
		setFlag(JComponent::IS_PAINTING_TILE, false);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t JComponent::getObscuredState(int32_t compIndex, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	int32_t retValue = JComponent::NOT_OBSCURED;
	$var($Rectangle, tmpRect, fetchRectangle());
	for (int32_t i = compIndex - 1; i >= 0; --i) {
		$var($Component, sibling, getComponent(i));
		if (!$nc(sibling)->isVisible()) {
			continue;
		}
		$var($Rectangle, siblingRect, nullptr);
		bool opaque = false;
		if ($instanceOf(JComponent, sibling)) {
			opaque = sibling->isOpaque();
			if (!opaque) {
				if (retValue == JComponent::PARTIALLY_OBSCURED) {
					continue;
				}
			}
		} else {
			opaque = true;
		}
		$assign(siblingRect, sibling->getBounds(tmpRect));
		if (opaque && x >= $nc(siblingRect)->x && (x + width) <= (siblingRect->x + siblingRect->width) && y >= siblingRect->y && (y + height) <= (siblingRect->y + siblingRect->height)) {
			recycleRectangle(tmpRect);
			return JComponent::COMPLETELY_OBSCURED;
		} else if (retValue == JComponent::NOT_OBSCURED && !((x + width <= $nc(siblingRect)->x) || (y + height <= siblingRect->y) || (x >= siblingRect->x + siblingRect->width) || (y >= siblingRect->y + siblingRect->height))) {
			retValue = JComponent::PARTIALLY_OBSCURED;
		}
	}
	recycleRectangle(tmpRect);
	return retValue;
}

bool JComponent::checkIfChildObscuredBySibling() {
	return true;
}

void JComponent::setFlag(int32_t aFlag, bool aValue) {
	if (aValue) {
		this->flags |= ($sl(1, aFlag));
	} else {
		this->flags &= (uint32_t)~($sl(1, aFlag));
	}
}

bool JComponent::getFlag(int32_t aFlag) {
	int32_t mask = ($sl(1, aFlag));
	return ((this->flags & mask) == mask);
}

void JComponent::setWriteObjCounter(JComponent* comp, int8_t count) {
	$init(JComponent);
	$nc(comp)->flags = ($nc(comp)->flags & ~($sl(255, JComponent::WRITE_OBJ_COUNTER_FIRST))) | ($sl(count, JComponent::WRITE_OBJ_COUNTER_FIRST));
}

int8_t JComponent::getWriteObjCounter(JComponent* comp) {
	$init(JComponent);
	return (int8_t)(($sr($nc(comp)->flags, JComponent::WRITE_OBJ_COUNTER_FIRST)) & 0xff);
}

void JComponent::setDoubleBuffered(bool aFlag) {
	setFlag(JComponent::IS_DOUBLE_BUFFERED, aFlag);
}

bool JComponent::isDoubleBuffered() {
	return getFlag(JComponent::IS_DOUBLE_BUFFERED);
}

$JRootPane* JComponent::getRootPane() {
	return $SwingUtilities::getRootPane(this);
}

void JComponent::compWriteObjectNotify() {
	int8_t count = JComponent::getWriteObjCounter(this);
	JComponent::setWriteObjCounter(this, (int8_t)(count + 1));
	if (count != 0) {
		return;
	}
	uninstallUIAndProperties();
	if (getToolTipText() != nullptr || $instanceOf($JTableHeader, this)) {
		$$nc($ToolTipManager::sharedInstance())->unregisterComponent(this);
	}
}

void JComponent::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	this->isAlignmentXSet = $nc(f)->get("isAlignmentXSet"_s, false);
	this->alignmentX = validateAlignment(f->get("alignmentX"_s, 0.0f));
	this->isAlignmentYSet = f->get("isAlignmentYSet"_s, false);
	this->alignmentY = validateAlignment(f->get("alignmentY"_s, 0.0f));
	$set(this, listenerList, $cast($EventListenerList, f->get("listenerList"_s, nullptr)));
	$set(this, vetoableChangeSupport, $cast($VetoableChangeSupport, f->get("vetoableChangeSupport"_s, nullptr)));
	this->autoscrolls = f->get("autoscrolls"_s, false);
	$set(this, border, $cast($Border, f->get("border"_s, nullptr)));
	this->flags = f->get("flags"_s, 0);
	$set(this, inputVerifier, $cast($InputVerifier, f->get("inputVerifier"_s, nullptr)));
	this->verifyInputWhenFocusTarget = f->get("verifyInputWhenFocusTarget"_s, false);
	$set(this, popupMenu, $cast($JPopupMenu, f->get("popupMenu"_s, nullptr)));
	$set(this, focusInputMap, $cast($InputMap, f->get("focusInputMap"_s, nullptr)));
	$set(this, ancestorInputMap, $cast($InputMap, f->get("ancestorInputMap"_s, nullptr)));
	$set(this, windowInputMap, $cast($ComponentInputMap, f->get("windowInputMap"_s, nullptr)));
	$set(this, actionMap, $cast($ActionMap, f->get("actionMap"_s, nullptr)));
	$var($JComponent$ReadObjectCallback, cb, $cast($JComponent$ReadObjectCallback, JComponent::readObjectCallbacks->get(s)));
	if (cb == nullptr) {
		try {
			JComponent::readObjectCallbacks->put(s, $assign(cb, $new($JComponent$ReadObjectCallback, this, s)));
		} catch ($Exception& e) {
			$throwNew($IOException, $(e->toString()));
		}
	}
	$nc(cb)->registerComponent(this);
	int32_t cpCount = s->readInt();
	if (cpCount > 0) {
		$set(this, clientProperties, $new($ArrayTable));
		for (int32_t counter = 0; counter < cpCount; ++counter) {
			$var($Object, var$0, s->readObject());
			$nc(this->clientProperties)->put(var$0, $(s->readObject()));
		}
	}
	if (getToolTipText() != nullptr) {
		$$nc($ToolTipManager::sharedInstance())->registerComponent(this);
	}
	setWriteObjCounter(this, (int8_t)0);
	$set(this, revalidateRunnableScheduled, $new($AtomicBoolean, false));
}

void JComponent::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JComponent::uiClassID)) {
		int8_t count = JComponent::getWriteObjCounter(this);
		JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
	$ArrayTable::writeArrayTable(s, this->clientProperties);
}

$String* JComponent::paramString() {
	$useLocalObjectStack();
	$var($String, preferredSizeString, isPreferredSizeSet() ? $$nc(getPreferredSize())->toString() : ""_s);
	$var($String, minimumSizeString, isMinimumSizeSet() ? $$nc(getMinimumSize())->toString() : ""_s);
	$var($String, maximumSizeString, isMaximumSizeSet() ? $$nc(getMaximumSize())->toString() : ""_s);
	$var($String, borderString, this->border == nullptr ? ""_s : ($equals(this->border, this) ? "this"_s : this->border->toString()));
	return $str({$($Container::paramString()), ",alignmentX="_s, $$str(this->alignmentX), ",alignmentY="_s, $$str(this->alignmentY), ",border="_s, borderString, ",flags="_s, $$str(this->flags), ",maximumSize="_s, maximumSizeString, ",minimumSize="_s, minimumSizeString, ",preferredSize="_s, preferredSizeString});
}

void JComponent::hide() {
	$useLocalObjectStack();
	bool showing = isShowing();
	$Container::hide();
	if (showing) {
		$var($Container, parent, getParent());
		if (parent != nullptr) {
			$var($Rectangle, r, getBounds());
			parent->repaint($nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height);
		}
		revalidate();
	}
}

void JComponent::lambda$revalidate$0() {
	$nc(this->revalidateRunnableScheduled)->set(false);
	revalidate();
}

void JComponent::clinit$($Class* clazz) {
	$assignStatic(JComponent::uiClassID, "ComponentUI"_s);
	$assignStatic(JComponent::KEYBOARD_BINDINGS_KEY, "_KeyboardBindings"_s);
	$assignStatic(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, "_WhenInFocusedWindow"_s);
	$assignStatic(JComponent::TOOL_TIP_TEXT_KEY, "ToolTipText"_s);
	$assignStatic(JComponent::NEXT_FOCUS, "nextFocus"_s);
	$assignStatic(JComponent::defaultLocale, "JComponent.defaultLocale"_s);
	$assignStatic(JComponent::readObjectCallbacks, $new($Hashtable, 1));
	$assignStatic(JComponent::INPUT_VERIFIER_SOURCE_KEY, $new($StringBuilder, "InputVerifierSourceKey"_s));
	$assignStatic(JComponent::tempRectangles, $new($ArrayList, 11));
	$assignStatic(JComponent::componentObtainingGraphicsFromLock, $new($StringBuilder, "componentObtainingGraphicsFrom"_s));
	{
		$SwingAccessor::setJComponentAccessor($$new($JComponent$1));
	}
	$assignStatic(JComponent::focusController, $new($JComponent$2));
}

JComponent::JComponent() {
}

$Class* JComponent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.JComponent$$Lambda$lambda$revalidate$0")) {
			return JComponent$$Lambda$lambda$revalidate$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, uiClassID)},
		{"readObjectCallbacks", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/io/ObjectInputStream;Ljavax/swing/JComponent$ReadObjectCallback;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, readObjectCallbacks)},
		{"managingFocusForwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE | $STATIC, $staticField(JComponent, managingFocusForwardTraversalKeys)},
		{"managingFocusBackwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE | $STATIC, $staticField(JComponent, managingFocusBackwardTraversalKeys)},
		{"NOT_OBSCURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, NOT_OBSCURED)},
		{"PARTIALLY_OBSCURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, PARTIALLY_OBSCURED)},
		{"COMPLETELY_OBSCURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, COMPLETELY_OBSCURED)},
		{"DEBUG_GRAPHICS_LOADED", "Z", nullptr, $STATIC, $staticField(JComponent, DEBUG_GRAPHICS_LOADED)},
		{"INPUT_VERIFIER_SOURCE_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, INPUT_VERIFIER_SOURCE_KEY)},
		{"isAlignmentXSet", "Z", nullptr, $PRIVATE, $field(JComponent, isAlignmentXSet)},
		{"alignmentX", "F", nullptr, $PRIVATE, $field(JComponent, alignmentX)},
		{"isAlignmentYSet", "Z", nullptr, $PRIVATE, $field(JComponent, isAlignmentYSet)},
		{"alignmentY", "F", nullptr, $PRIVATE, $field(JComponent, alignmentY)},
		{"ui", "Ljavax/swing/plaf/ComponentUI;", nullptr, $PROTECTED | $TRANSIENT, $field(JComponent, ui)},
		{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(JComponent, listenerList)},
		{"clientProperties", "Ljavax/swing/ArrayTable;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, clientProperties)},
		{"vetoableChangeSupport", "Ljava/beans/VetoableChangeSupport;", nullptr, $PRIVATE, $field(JComponent, vetoableChangeSupport)},
		{"autoscrolls", "Z", nullptr, $PRIVATE, $field(JComponent, autoscrolls)},
		{"border", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(JComponent, border)},
		{"flags", "I", nullptr, $PRIVATE, $field(JComponent, flags)},
		{"inputVerifier", "Ljavax/swing/InputVerifier;", nullptr, $PRIVATE, $field(JComponent, inputVerifier)},
		{"verifyInputWhenFocusTarget", "Z", nullptr, $PRIVATE, $field(JComponent, verifyInputWhenFocusTarget)},
		{"paintingChild", "Ljava/awt/Component;", nullptr, $TRANSIENT, $field(JComponent, paintingChild)},
		{"WHEN_FOCUSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, WHEN_FOCUSED)},
		{"WHEN_ANCESTOR_OF_FOCUSED_COMPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)},
		{"WHEN_IN_FOCUSED_WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, WHEN_IN_FOCUSED_WINDOW)},
		{"UNDEFINED_CONDITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, UNDEFINED_CONDITION)},
		{"KEYBOARD_BINDINGS_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, KEYBOARD_BINDINGS_KEY)},
		{"WHEN_IN_FOCUSED_WINDOW_BINDINGS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, WHEN_IN_FOCUSED_WINDOW_BINDINGS)},
		{"TOOL_TIP_TEXT_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JComponent, TOOL_TIP_TEXT_KEY)},
		{"NEXT_FOCUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, NEXT_FOCUS)},
		{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(JComponent, popupMenu)},
		{"IS_DOUBLE_BUFFERED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_DOUBLE_BUFFERED)},
		{"ANCESTOR_USING_BUFFER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, ANCESTOR_USING_BUFFER)},
		{"IS_PAINTING_TILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_PAINTING_TILE)},
		{"IS_OPAQUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_OPAQUE)},
		{"KEY_EVENTS_ENABLED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, KEY_EVENTS_ENABLED)},
		{"FOCUS_INPUTMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, FOCUS_INPUTMAP_CREATED)},
		{"ANCESTOR_INPUTMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, ANCESTOR_INPUTMAP_CREATED)},
		{"WIF_INPUTMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, WIF_INPUTMAP_CREATED)},
		{"ACTIONMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, ACTIONMAP_CREATED)},
		{"CREATED_DOUBLE_BUFFER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, CREATED_DOUBLE_BUFFER)},
		{"IS_PRINTING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_PRINTING)},
		{"IS_PRINTING_ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_PRINTING_ALL)},
		{"IS_REPAINTING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_REPAINTING)},
		{"WRITE_OBJ_COUNTER_FIRST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, WRITE_OBJ_COUNTER_FIRST)},
		{"RESERVED_1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_1)},
		{"RESERVED_2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_2)},
		{"RESERVED_3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_3)},
		{"RESERVED_4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_4)},
		{"RESERVED_5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_5)},
		{"RESERVED_6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_6)},
		{"WRITE_OBJ_COUNTER_LAST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, WRITE_OBJ_COUNTER_LAST)},
		{"REQUEST_FOCUS_DISABLED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, REQUEST_FOCUS_DISABLED)},
		{"INHERITS_POPUP_MENU", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, INHERITS_POPUP_MENU)},
		{"OPAQUE_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, OPAQUE_SET)},
		{"AUTOSCROLLS_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, AUTOSCROLLS_SET)},
		{"FOCUS_TRAVERSAL_KEYS_FORWARD_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, FOCUS_TRAVERSAL_KEYS_FORWARD_SET)},
		{"FOCUS_TRAVERSAL_KEYS_BACKWARD_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, FOCUS_TRAVERSAL_KEYS_BACKWARD_SET)},
		{"revalidateRunnableScheduled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, revalidateRunnableScheduled)},
		{"tempRectangles", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Rectangle;>;", $PRIVATE | $STATIC, $staticField(JComponent, tempRectangles)},
		{"focusInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(JComponent, focusInputMap)},
		{"ancestorInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(JComponent, ancestorInputMap)},
		{"windowInputMap", "Ljavax/swing/ComponentInputMap;", nullptr, $PRIVATE, $field(JComponent, windowInputMap)},
		{"actionMap", "Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $field(JComponent, actionMap)},
		{"defaultLocale", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, defaultLocale)},
		{"componentObtainingGraphicsFrom", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(JComponent, componentObtainingGraphicsFrom)},
		{"componentObtainingGraphicsFromLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(JComponent, componentObtainingGraphicsFromLock)},
		{"aaHint", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, aaHint)},
		{"lcdRenderingHint", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, lcdRenderingHint)},
		{"focusController", "Lsun/awt/RequestFocusController;", nullptr, $STATIC | $FINAL, $staticField(JComponent, focusController)},
		{}
	};
	$CompoundAttribute disablemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute enablemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute getAncestorListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAncestorListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAncestorListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getBaselineResizeBehaviormethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getBaselineResizeBehaviormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getBaselineResizeBehaviormethodAnnotations$$$namedAttribute},
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
	$NamedAttribute getHeightmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getHeightmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getHeightmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getInsetsmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{}
	};
	$CompoundAttribute getInsetsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getInsetsmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getMaximumSizemethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute getMinimumSizemethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute getNextFocusableComponentmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getPreferredSizemethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getRegisteredKeyStrokesmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getRegisteredKeyStrokesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRegisteredKeyStrokesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getRootPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getRootPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRootPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getTopLevelAncestormethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getTopLevelAncestormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getTopLevelAncestormethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getUImethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "UIClassID"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getVetoableChangeListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getVetoableChangeListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getVetoableChangeListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getVisibleRectmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getVisibleRectmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getVisibleRectmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getWidthmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getXmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getXmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getXmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getYmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getYmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getYmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute hidemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute isManagingFocusmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isManagingFocusmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{"Ljava/beans/BeanProperty;", isManagingFocusmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isOptimizedDrawingEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isOptimizedDrawingEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isOptimizedDrawingEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isPaintingForPrintmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isPaintingForPrintmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isPaintingForPrintmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isPaintingTilemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isPaintingTilemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isPaintingTilemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute requestDefaultFocusmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute reshapemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute setAlignmentXmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The preferred horizontal alignment of the component."},
		{}
	};
	$CompoundAttribute setAlignmentXmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAlignmentXmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAlignmentYmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The preferred vertical alignment of the component."},
		{}
	};
	$CompoundAttribute setAlignmentYmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAlignmentYmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAutoscrollsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "Determines if this component automatically scrolls its contents when dragged."},
		{}
	};
	$CompoundAttribute setAutoscrollsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAutoscrollsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBackgroundmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The background color of the component."},
		{}
	};
	$CompoundAttribute setBackgroundmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBackgroundmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBordermethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The component\'s border."},
		{}
	};
	$CompoundAttribute setBordermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBordermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setComponentPopupMenumethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Popup to show"},
		{}
	};
	$CompoundAttribute setComponentPopupMenumethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setComponentPopupMenumethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "DebugGraphics.NONE_OPTION"},
		{'s', "DebugGraphics.LOG_OPTION"},
		{'s', "DebugGraphics.FLASH_OPTION"},
		{'s', "DebugGraphics.BUFFERED_OPTION"},
		{'-'}
	};
	$NamedAttribute setDebugGraphicsOptionsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "Diagnostic options for graphics operations."},
		{}
	};
	$CompoundAttribute setDebugGraphicsOptionsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDebugGraphicsOptionsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setEnabledmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The enabled state of the component."},
		{}
	};
	$CompoundAttribute setEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFontmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The font for the component."},
		{}
	};
	$CompoundAttribute setFontmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFontmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setForegroundmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The foreground color of the component."},
		{}
	};
	$CompoundAttribute setForegroundmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setForegroundmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setInheritsPopupMenumethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether or not the JPopupMenu is inherited"},
		{}
	};
	$CompoundAttribute setInheritsPopupMenumethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setInheritsPopupMenumethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setInputVerifiermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The component\'s input verifier."},
		{}
	};
	$CompoundAttribute setInputVerifiermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setInputVerifiermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximumSizemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The maximum size of the component."},
		{}
	};
	$CompoundAttribute setMaximumSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximumSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinimumSizemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The minimum size of the component."},
		{}
	};
	$CompoundAttribute setMinimumSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMinimumSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute setNextFocusableComponentmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute setOpaquemethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The component\'s opacity"},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOpaquemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPreferredSizemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The preferred size of the component."},
		{}
	};
	$CompoundAttribute setPreferredSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPreferredSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setToolTipTextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The text to display in a tool tip."},
		{}
	};
	$CompoundAttribute setToolTipTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setToolTipTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTransferHandlermethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "Mechanism for transfer of data to and from the component"},
		{}
	};
	$CompoundAttribute setTransferHandlermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTransferHandlermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The component\'s look and feel delegate."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setVerifyInputWhenFocusTargetmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether the Component verifies input before accepting focus."},
		{}
	};
	$CompoundAttribute setVerifyInputWhenFocusTargetmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVerifyInputWhenFocusTargetmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setVisiblemethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{}
	};
	$CompoundAttribute setVisiblemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVisiblemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JComponent, init$, void)},
		{"_paintImmediately", "(IIII)V", nullptr, 0, $virtualMethod(JComponent, _paintImmediately, void, int32_t, int32_t, int32_t, int32_t)},
		{"access$000", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JComponent, access$000, $AccessibleContext*, JComponent*)},
		{"access$100", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JComponent, access$100, $AccessibleContext*, JComponent*)},
		{"access$200", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JComponent, access$200, $AccessibleContext*, JComponent*)},
		{"access$300", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JComponent, access$300, $AccessibleContext*, JComponent*)},
		{"addAncestorListener", "(Ljavax/swing/event/AncestorListener;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, addAncestorListener, void, $AncestorListener*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, addNotify, void)},
		{"addVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JComponent, addVetoableChangeListener, void, $VetoableChangeListener*)},
		{"adjustPaintFlags", "()V", nullptr, $PRIVATE, $method(JComponent, adjustPaintFlags, void)},
		{"alwaysOnTop", "()Z", nullptr, 0, $virtualMethod(JComponent, alwaysOnTop, bool)},
		{"checkIfChildObscuredBySibling", "()Z", nullptr, 0, $virtualMethod(JComponent, checkIfChildObscuredBySibling, bool)},
		{"clientPropertyChanged", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(JComponent, clientPropertyChanged, void, Object$*, Object$*, Object$*)},
		{"compWriteObjectNotify", "()V", nullptr, 0, $virtualMethod(JComponent, compWriteObjectNotify, void)},
		{"componentInputMapChanged", "(Ljavax/swing/ComponentInputMap;)V", nullptr, 0, $virtualMethod(JComponent, componentInputMapChanged, void, $ComponentInputMap*)},
		{"computeVisibleRect", "(Ljava/awt/Component;Ljava/awt/Rectangle;)V", nullptr, $STATIC | $FINAL, $staticMethod(JComponent, computeVisibleRect, void, $Component*, $Rectangle*)},
		{"computeVisibleRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, computeVisibleRect, void, $Rectangle*)},
		{"contains", "(II)Z", nullptr, $PUBLIC, $virtualMethod(JComponent, contains, bool, int32_t, int32_t)},
		{"createToolTip", "()Ljavax/swing/JToolTip;", nullptr, $PUBLIC, $virtualMethod(JComponent, createToolTip, $JToolTip*)},
		{"deregisterNextFocusableComponent", "()V", nullptr, $PRIVATE, $method(JComponent, deregisterNextFocusableComponent, void)},
		{"disable", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, disable, void), nullptr, nullptr, disablemethodAnnotations$$},
		{"dndDone", "()V", nullptr, 0, $virtualMethod(JComponent, dndDone, void)},
		{"dropLocationForPoint", "(Ljava/awt/Point;)Ljavax/swing/TransferHandler$DropLocation;", nullptr, 0, $virtualMethod(JComponent, dropLocationForPoint, $TransferHandler$DropLocation*, $Point*)},
		{"enable", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, enable, void), nullptr, nullptr, enablemethodAnnotations$$},
		{"fetchRectangle", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticMethod(JComponent, fetchRectangle, $Rectangle*)},
		{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(JComponent, firePropertyChange, void, $String*, bool, bool)},
		{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(JComponent, firePropertyChange, void, $String*, int32_t, int32_t)},
		{"firePropertyChange", "(Ljava/lang/String;CC)V", nullptr, $PUBLIC, $virtualMethod(JComponent, firePropertyChange, void, $String*, char16_t, char16_t)},
		{"fireVetoableChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, fireVetoableChange, void, $String*, Object$*, Object$*), "java.beans.PropertyVetoException"},
		{"getActionForKeyStroke", "(Ljavax/swing/KeyStroke;)Ljava/awt/event/ActionListener;", nullptr, $PUBLIC, $virtualMethod(JComponent, getActionForKeyStroke, $ActionListener*, $KeyStroke*)},
		{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PUBLIC | $FINAL, $method(JComponent, getActionMap, $ActionMap*)},
		{"getActionMap", "(Z)Ljavax/swing/ActionMap;", nullptr, $FINAL, $method(JComponent, getActionMap, $ActionMap*, bool)},
		{"getAlignmentX", "()F", nullptr, $PUBLIC, $virtualMethod(JComponent, getAlignmentX, float)},
		{"getAlignmentY", "()F", nullptr, $PUBLIC, $virtualMethod(JComponent, getAlignmentY, float)},
		{"getAncestorListeners", "()[Ljavax/swing/event/AncestorListener;", nullptr, $PUBLIC, $virtualMethod(JComponent, getAncestorListeners, $AncestorListenerArray*), nullptr, nullptr, getAncestorListenersmethodAnnotations$$},
		{"getAncestorNotifier", "()Ljavax/swing/AncestorNotifier;", nullptr, $PRIVATE, $method(JComponent, getAncestorNotifier, $AncestorNotifier*)},
		{"getAutoscrolls", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, getAutoscrolls, bool)},
		{"getBaseline", "(II)I", nullptr, $PUBLIC, $virtualMethod(JComponent, getBaseline, int32_t, int32_t, int32_t)},
		{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC, $virtualMethod(JComponent, getBaselineResizeBehavior, $Component$BaselineResizeBehavior*), nullptr, nullptr, getBaselineResizeBehaviormethodAnnotations$$},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC, $virtualMethod(JComponent, getBorder, $Border*)},
		{"getBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(JComponent, getBounds, $Rectangle*, $Rectangle*)},
		{"getClientProperties", "()Ljavax/swing/ArrayTable;", nullptr, $PRIVATE, $method(JComponent, getClientProperties, $ArrayTable*)},
		{"getClientProperty", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(JComponent, getClientProperty, $Object*, Object$*)},
		{"getComponentGraphics", "(Ljava/awt/Graphics;)Ljava/awt/Graphics;", nullptr, $PROTECTED, $virtualMethod(JComponent, getComponentGraphics, $Graphics*, $Graphics*)},
		{"getComponentPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PUBLIC, $virtualMethod(JComponent, getComponentPopupMenu, $JPopupMenu*)},
		{"getConditionForKeyStroke", "(Ljavax/swing/KeyStroke;)I", nullptr, $PUBLIC, $virtualMethod(JComponent, getConditionForKeyStroke, int32_t, $KeyStroke*)},
		{"getCreatedDoubleBuffer", "()Z", nullptr, 0, $virtualMethod(JComponent, getCreatedDoubleBuffer, bool)},
		{"getDebugGraphicsOptions", "()I", nullptr, $PUBLIC, $virtualMethod(JComponent, getDebugGraphicsOptions, int32_t)},
		{"getDefaultLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $staticMethod(JComponent, getDefaultLocale, $Locale*)},
		{"getFlag", "(I)Z", nullptr, $PRIVATE, $method(JComponent, getFlag, bool, int32_t)},
		{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(JComponent, getFontMetrics, $FontMetrics*, $Font*)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(JComponent, getGraphics, $Graphics*), nullptr, nullptr, getGraphicsmethodAnnotations$$},
		{"getGraphicsInvoked", "(Ljava/awt/Component;)V", nullptr, $STATIC, $staticMethod(JComponent, getGraphicsInvoked, void, $Component*)},
		{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(JComponent, getHeight, int32_t), nullptr, nullptr, getHeightmethodAnnotations$$},
		{"getInheritsPopupMenu", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, getInheritsPopupMenu, bool)},
		{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, $PUBLIC | $FINAL, $method(JComponent, getInputMap, $InputMap*, int32_t)},
		{"getInputMap", "()Ljavax/swing/InputMap;", nullptr, $PUBLIC | $FINAL, $method(JComponent, getInputMap, $InputMap*)},
		{"getInputMap", "(IZ)Ljavax/swing/InputMap;", nullptr, $FINAL, $method(JComponent, getInputMap, $InputMap*, int32_t, bool)},
		{"getInputVerifier", "()Ljavax/swing/InputVerifier;", nullptr, $PUBLIC, $virtualMethod(JComponent, getInputVerifier, $InputVerifier*)},
		{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(JComponent, getInsets, $Insets*), nullptr, nullptr, getInsetsmethodAnnotations$$},
		{"getInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(JComponent, getInsets, $Insets*, $Insets*)},
		{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC, $virtualMethod(JComponent, getListeners, $EventListenerArray*, $Class*)},
		{"getLocation", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(JComponent, getLocation, $Point*, $Point*)},
		{"getManagingFocusBackwardTraversalKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $STATIC, $staticMethod(JComponent, getManagingFocusBackwardTraversalKeys, $Set*)},
		{"getManagingFocusForwardTraversalKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $STATIC, $staticMethod(JComponent, getManagingFocusForwardTraversalKeys, $Set*)},
		{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JComponent, getMaximumSize, $Dimension*), nullptr, nullptr, getMaximumSizemethodAnnotations$$},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JComponent, getMinimumSize, $Dimension*), nullptr, nullptr, getMinimumSizemethodAnnotations$$},
		{"getNextFocusableComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, getNextFocusableComponent, $Component*), nullptr, nullptr, getNextFocusableComponentmethodAnnotations$$},
		{"getObscuredState", "(IIIII)I", nullptr, $PRIVATE, $method(JComponent, getObscuredState, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"getPopupLocation", "(Ljava/awt/event/MouseEvent;)Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(JComponent, getPopupLocation, $Point*, $MouseEvent*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JComponent, getPreferredSize, $Dimension*), nullptr, nullptr, getPreferredSizemethodAnnotations$$},
		{"getRegisteredKeyStrokes", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $virtualMethod(JComponent, getRegisteredKeyStrokes, $KeyStrokeArray*), nullptr, nullptr, getRegisteredKeyStrokesmethodAnnotations$$},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(JComponent, getRootPane, $JRootPane*), nullptr, nullptr, getRootPanemethodAnnotations$$},
		{"getSize", "(Ljava/awt/Dimension;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JComponent, getSize, $Dimension*, $Dimension*)},
		{"getToolTipLocation", "(Ljava/awt/event/MouseEvent;)Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(JComponent, getToolTipLocation, $Point*, $MouseEvent*)},
		{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent, getToolTipText, $String*)},
		{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent, getToolTipText, $String*, $MouseEvent*)},
		{"getTopLevelAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(JComponent, getTopLevelAncestor, $Container*), nullptr, nullptr, getTopLevelAncestormethodAnnotations$$},
		{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC, $virtualMethod(JComponent, getTransferHandler, $TransferHandler*)},
		{"getUI", "()Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, $virtualMethod(JComponent, getUI, $ComponentUI*), nullptr, nullptr, getUImethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getVerifyInputWhenFocusTarget", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, getVerifyInputWhenFocusTarget, bool)},
		{"getVetoableChangeListeners", "()[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JComponent, getVetoableChangeListeners, $VetoableChangeListenerArray*), nullptr, nullptr, getVetoableChangeListenersmethodAnnotations$$},
		{"getVisibleRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(JComponent, getVisibleRect, $Rectangle*), nullptr, nullptr, getVisibleRectmethodAnnotations$$},
		{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(JComponent, getWidth, int32_t), nullptr, nullptr, getWidthmethodAnnotations$$},
		{"getWriteObjCounter", "(Ljavax/swing/JComponent;)B", nullptr, $STATIC, $staticMethod(JComponent, getWriteObjCounter, int8_t, JComponent*)},
		{"getX", "()I", nullptr, $PUBLIC, $virtualMethod(JComponent, getX, int32_t), nullptr, nullptr, getXmethodAnnotations$$},
		{"getY", "()I", nullptr, $PUBLIC, $virtualMethod(JComponent, getY, int32_t), nullptr, nullptr, getYmethodAnnotations$$},
		{"grabFocus", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, grabFocus, void)},
		{"hide", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, hide, void), nullptr, nullptr, hidemethodAnnotations$$},
		{"isComponentObtainingGraphicsFrom", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(JComponent, isComponentObtainingGraphicsFrom, bool, $Component*)},
		{"isDoubleBuffered", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, isDoubleBuffered, bool)},
		{"isLightweightComponent", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JComponent, isLightweightComponent, bool, $Component*)},
		{"isManagingFocus", "()Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, isManagingFocus, bool), nullptr, nullptr, isManagingFocusmethodAnnotations$$},
		{"isOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, isOpaque, bool)},
		{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, isOptimizedDrawingEnabled, bool), nullptr, nullptr, isOptimizedDrawingEnabledmethodAnnotations$$},
		{"isPainting", "()Z", nullptr, 0, $virtualMethod(JComponent, isPainting, bool)},
		{"isPaintingForPrint", "()Z", nullptr, $PUBLIC | $FINAL, $method(JComponent, isPaintingForPrint, bool), nullptr, nullptr, isPaintingForPrintmethodAnnotations$$},
		{"isPaintingOrigin", "()Z", nullptr, $PROTECTED, $virtualMethod(JComponent, isPaintingOrigin, bool)},
		{"isPaintingTile", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, isPaintingTile, bool), nullptr, nullptr, isPaintingTilemethodAnnotations$$},
		{"isRequestFocusEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, isRequestFocusEnabled, bool)},
		{"isValidateRoot", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, isValidateRoot, bool)},
		{"lambda$revalidate$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(JComponent, lambda$revalidate$0, void)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, paint, void, $Graphics*)},
		{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, paintBorder, void, $Graphics*)},
		{"paintChildren", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, paintChildren, void, $Graphics*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, paintComponent, void, $Graphics*)},
		{"paintForceDoubleBuffered", "(Ljava/awt/Graphics;)V", nullptr, 0, $virtualMethod(JComponent, paintForceDoubleBuffered, void, $Graphics*)},
		{"paintImmediately", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(JComponent, paintImmediately, void, int32_t, int32_t, int32_t, int32_t)},
		{"paintImmediately", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, paintImmediately, void, $Rectangle*)},
		{"paintToOffscreen", "(Ljava/awt/Graphics;IIIIII)V", nullptr, 0, $virtualMethod(JComponent, paintToOffscreen, void, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JComponent, paramString, $String*)},
		{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, print, void, $Graphics*)},
		{"printAll", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, printAll, void, $Graphics*)},
		{"printBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, printBorder, void, $Graphics*)},
		{"printChildren", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, printChildren, void, $Graphics*)},
		{"printComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, printComponent, void, $Graphics*)},
		{"processComponentKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, processComponentKeyEvent, void, $KeyEvent*)},
		{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED, $virtualMethod(JComponent, processKeyBinding, bool, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{"processKeyBindings", "(Ljava/awt/event/KeyEvent;Z)Z", nullptr, 0, $virtualMethod(JComponent, processKeyBindings, bool, $KeyEvent*, bool)},
		{"processKeyBindingsForAllComponents", "(Ljava/awt/event/KeyEvent;Ljava/awt/Container;Z)Z", nullptr, $STATIC, $staticMethod(JComponent, processKeyBindingsForAllComponents, bool, $KeyEvent*, $Container*, bool)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, processKeyEvent, void, $KeyEvent*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, processMouseEvent, void, $MouseEvent*)},
		{"processMouseMotionEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, processMouseMotionEvent, void, $MouseEvent*)},
		{"putClientProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(JComponent, putClientProperty, void, Object$*, Object$*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JComponent, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"rectangleIsObscured", "(IIII)Z", nullptr, 0, $virtualMethod(JComponent, rectangleIsObscured, bool, int32_t, int32_t, int32_t, int32_t)},
		{"recycleRectangle", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JComponent, recycleRectangle, void, $Rectangle*)},
		{"registerKeyboardAction", "(Ljava/awt/event/ActionListener;Ljava/lang/String;Ljavax/swing/KeyStroke;I)V", nullptr, $PUBLIC, $virtualMethod(JComponent, registerKeyboardAction, void, $ActionListener*, $String*, $KeyStroke*, int32_t)},
		{"registerKeyboardAction", "(Ljava/awt/event/ActionListener;Ljavax/swing/KeyStroke;I)V", nullptr, $PUBLIC, $virtualMethod(JComponent, registerKeyboardAction, void, $ActionListener*, $KeyStroke*, int32_t)},
		{"registerNextFocusableComponent", "()V", nullptr, $PRIVATE, $method(JComponent, registerNextFocusableComponent, void)},
		{"registerNextFocusableComponent", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(JComponent, registerNextFocusableComponent, void, $Component*)},
		{"registerWithKeyboardManager", "(Z)V", nullptr, $PRIVATE, $method(JComponent, registerWithKeyboardManager, void, bool)},
		{"registerWithKeyboardManager", "(Ljavax/swing/KeyStroke;)V", nullptr, $PRIVATE, $method(JComponent, registerWithKeyboardManager, void, $KeyStroke*)},
		{"removeAncestorListener", "(Ljavax/swing/event/AncestorListener;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, removeAncestorListener, void, $AncestorListener*)},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, removeNotify, void)},
		{"removeVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JComponent, removeVetoableChangeListener, void, $VetoableChangeListener*)},
		{"repaint", "(JIIII)V", nullptr, $PUBLIC, $virtualMethod(JComponent, repaint, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"repaint", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, repaint, void, $Rectangle*)},
		{"requestDefaultFocus", "()Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, requestDefaultFocus, bool), nullptr, nullptr, requestDefaultFocusmethodAnnotations$$},
		{"requestFocus", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, requestFocus, void)},
		{"requestFocus", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(JComponent, requestFocus, bool, bool)},
		{"requestFocusInWindow", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent, requestFocusInWindow, bool)},
		{"requestFocusInWindow", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(JComponent, requestFocusInWindow, bool, bool)},
		{"resetKeyboardActions", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, resetKeyboardActions, void)},
		{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, reshape, void, int32_t, int32_t, int32_t, int32_t), nullptr, nullptr, reshapemethodAnnotations$$},
		{"revalidate", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, revalidate, void)},
		{"safelyGetGraphics", "(Ljava/awt/Component;)Ljava/awt/Graphics;", nullptr, $STATIC, $staticMethod(JComponent, safelyGetGraphics, $Graphics*, $Component*)},
		{"safelyGetGraphics", "(Ljava/awt/Component;Ljava/awt/Component;)Ljava/awt/Graphics;", nullptr, $STATIC, $staticMethod(JComponent, safelyGetGraphics, $Graphics*, $Component*, $Component*)},
		{"scrollRectToVisible", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, scrollRectToVisible, void, $Rectangle*)},
		{"setActionMap", "(Ljavax/swing/ActionMap;)V", nullptr, $PUBLIC | $FINAL, $method(JComponent, setActionMap, void, $ActionMap*)},
		{"setAlignmentX", "(F)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setAlignmentX, void, float), nullptr, nullptr, setAlignmentXmethodAnnotations$$},
		{"setAlignmentY", "(F)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setAlignmentY, void, float), nullptr, nullptr, setAlignmentYmethodAnnotations$$},
		{"setAutoscrolls", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setAutoscrolls, void, bool), nullptr, nullptr, setAutoscrollsmethodAnnotations$$},
		{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setBackground, void, $Color*), nullptr, nullptr, setBackgroundmethodAnnotations$$},
		{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setBorder, void, $Border*), nullptr, nullptr, setBordermethodAnnotations$$},
		{"setComponentPopupMenu", "(Ljavax/swing/JPopupMenu;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setComponentPopupMenu, void, $JPopupMenu*), nullptr, nullptr, setComponentPopupMenumethodAnnotations$$},
		{"setCreatedDoubleBuffer", "(Z)V", nullptr, 0, $virtualMethod(JComponent, setCreatedDoubleBuffer, void, bool)},
		{"setDebugGraphicsOptions", "(I)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setDebugGraphicsOptions, void, int32_t), nullptr, nullptr, setDebugGraphicsOptionsmethodAnnotations$$},
		{"setDefaultLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JComponent, setDefaultLocale, void, $Locale*)},
		{"setDoubleBuffered", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setDoubleBuffered, void, bool)},
		{"setDropLocation", "(Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, 0, $virtualMethod(JComponent, setDropLocation, $Object*, $TransferHandler$DropLocation*, Object$*, bool)},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setEnabled, void, bool), nullptr, nullptr, setEnabledmethodAnnotations$$},
		{"setFlag", "(IZ)V", nullptr, $PRIVATE, $method(JComponent, setFlag, void, int32_t, bool)},
		{"setFocusTraversalKeys", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $PUBLIC, $virtualMethod(JComponent, setFocusTraversalKeys, void, int32_t, $Set*)},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setFont, void, $Font*), nullptr, nullptr, setFontmethodAnnotations$$},
		{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setForeground, void, $Color*), nullptr, nullptr, setForegroundmethodAnnotations$$},
		{"setInheritsPopupMenu", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setInheritsPopupMenu, void, bool), nullptr, nullptr, setInheritsPopupMenumethodAnnotations$$},
		{"setInputMap", "(ILjavax/swing/InputMap;)V", nullptr, $PUBLIC | $FINAL, $method(JComponent, setInputMap, void, int32_t, $InputMap*)},
		{"setInputVerifier", "(Ljavax/swing/InputVerifier;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setInputVerifier, void, $InputVerifier*), nullptr, nullptr, setInputVerifiermethodAnnotations$$},
		{"setMaximumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setMaximumSize, void, $Dimension*), nullptr, nullptr, setMaximumSizemethodAnnotations$$},
		{"setMinimumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setMinimumSize, void, $Dimension*), nullptr, nullptr, setMinimumSizemethodAnnotations$$},
		{"setNextFocusableComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JComponent, setNextFocusableComponent, void, $Component*), nullptr, nullptr, setNextFocusableComponentmethodAnnotations$$},
		{"setOpaque", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setOpaque, void, bool), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setPaintingChild", "(Ljava/awt/Component;)V", nullptr, 0, $virtualMethod(JComponent, setPaintingChild, void, $Component*)},
		{"setPreferredSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setPreferredSize, void, $Dimension*), nullptr, nullptr, setPreferredSizemethodAnnotations$$},
		{"setRequestFocusEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setRequestFocusEnabled, void, bool)},
		{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setToolTipText, void, $String*), nullptr, nullptr, setToolTipTextmethodAnnotations$$},
		{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setTransferHandler, void, $TransferHandler*), nullptr, nullptr, setTransferHandlermethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/ComponentUI;)V", nullptr, $PROTECTED, $virtualMethod(JComponent, setUI, void, $ComponentUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(JComponent, setUIProperty, void, $String*, Object$*)},
		{"setVerifyInputWhenFocusTarget", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setVerifyInputWhenFocusTarget, void, bool), nullptr, nullptr, setVerifyInputWhenFocusTargetmethodAnnotations$$},
		{"setVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent, setVisible, void, bool), nullptr, nullptr, setVisiblemethodAnnotations$$},
		{"setWriteObjCounter", "(Ljavax/swing/JComponent;B)V", nullptr, $STATIC, $staticMethod(JComponent, setWriteObjCounter, void, JComponent*, int8_t)},
		{"shouldDebugGraphics", "()I", nullptr, 0, $virtualMethod(JComponent, shouldDebugGraphics, int32_t)},
		{"superProcessMouseMotionEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $virtualMethod(JComponent, superProcessMouseMotionEvent, void, $MouseEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallUIAndProperties", "()V", nullptr, $PRIVATE, $method(JComponent, uninstallUIAndProperties, void)},
		{"unregisterKeyboardAction", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, unregisterKeyboardAction, void, $KeyStroke*)},
		{"unregisterWithKeyboardManager", "()V", nullptr, $PRIVATE, $method(JComponent, unregisterWithKeyboardManager, void)},
		{"unregisterWithKeyboardManager", "(Ljavax/swing/KeyStroke;)V", nullptr, $PRIVATE, $method(JComponent, unregisterWithKeyboardManager, void, $KeyStroke*)},
		{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(JComponent, update, void, $Graphics*)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent, updateUI, void)},
		{"validateAlignment", "(F)F", nullptr, $PRIVATE, $method(JComponent, validateAlignment, float, float)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JComponent, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JComponent$ReadObjectCallback", "javax.swing.JComponent", "ReadObjectCallback", $PRIVATE},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{"javax.swing.JComponent$KeyboardState", "javax.swing.JComponent", "KeyboardState", $STATIC},
		{"javax.swing.JComponent$IntVector", "javax.swing.JComponent", "IntVector", $STATIC | $FINAL},
		{"javax.swing.JComponent$ActionStandin", "javax.swing.JComponent", "ActionStandin", $FINAL},
		{"javax.swing.JComponent$2", nullptr, nullptr, 0},
		{"javax.swing.JComponent$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UIClassID"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.JComponent",
		"java.awt.Container",
		"javax.swing.TransferHandler$HasGetTransferHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JComponent$ReadObjectCallback,javax.swing.JComponent$AccessibleJComponent,javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler,javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler,javax.swing.JComponent$KeyboardState,javax.swing.JComponent$IntVector,javax.swing.JComponent$ActionStandin,javax.swing.JComponent$2,javax.swing.JComponent$1"
	};
	$loadClass(JComponent, name, initialize, &classInfo$$, JComponent::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JComponent));
	});
	return class$;
}

$Class* JComponent::class$ = nullptr;

	} // swing
} // javax