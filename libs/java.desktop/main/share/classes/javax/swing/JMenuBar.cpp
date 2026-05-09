#include <javax/swing/JMenuBar.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/DefaultSingleSelectionModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar$AccessibleJMenuBar.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/KeyboardManager.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef DEBUG
#undef TRACE
#undef VERBOSE

using $ComponentArray = $Array<::java::awt::Component>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $DefaultSingleSelectionModel = ::javax::swing::DefaultSingleSelectionModel;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar$AccessibleJMenuBar = ::javax::swing::JMenuBar$AccessibleJMenuBar;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $KeyStroke = ::javax::swing::KeyStroke;
using $KeyboardManager = ::javax::swing::KeyboardManager;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$String* JMenuBar::toString() {
	return this->$JComponent::toString();
}

int32_t JMenuBar::hashCode() {
	return this->$JComponent::hashCode();
}

bool JMenuBar::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* JMenuBar::clone() {
	return this->$JComponent::clone();
}

void JMenuBar::finalize() {
	this->$JComponent::finalize();
}

$String* JMenuBar::uiClassID = nullptr;

void JMenuBar::init$() {
	$JComponent::init$();
	this->paintBorder$ = true;
	$set(this, margin, nullptr);
	setFocusTraversalKeysEnabled(false);
	setSelectionModel($$new($DefaultSingleSelectionModel));
	updateUI();
}

$ComponentUI* JMenuBar::getUI() {
	return $cast($MenuBarUI, this->ui);
}

void JMenuBar::setUI($MenuBarUI* ui) {
	$JComponent::setUI(ui);
}

void JMenuBar::updateUI() {
	$useLocalObjectStack();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		$cast($SunToolkit, tk)->updateScreenMenuBarUI();
	}
	setUI($$cast($MenuBarUI, $UIManager::getUI(this)));
}

$String* JMenuBar::getUIClassID() {
	return JMenuBar::uiClassID;
}

$SingleSelectionModel* JMenuBar::getSelectionModel() {
	return this->selectionModel;
}

void JMenuBar::setSelectionModel($SingleSelectionModel* model) {
	$var($SingleSelectionModel, oldValue, this->selectionModel);
	$set(this, selectionModel, model);
	firePropertyChange("selectionModel"_s, oldValue, this->selectionModel);
}

$JMenu* JMenuBar::add($JMenu* c) {
	$JComponent::add(c);
	return c;
}

$JMenu* JMenuBar::getMenu(int32_t index) {
	$var($Component, c, getComponentAtIndex(index));
	if ($instanceOf($JMenu, c)) {
		return $cast($JMenu, c);
	}
	return nullptr;
}

int32_t JMenuBar::getMenuCount() {
	return getComponentCount();
}

void JMenuBar::setHelpMenu($JMenu* menu) {
	$throwNew($Error, "setHelpMenu() not yet implemented."_s);
}

$JMenu* JMenuBar::getHelpMenu() {
	$throwNew($Error, "getHelpMenu() not yet implemented."_s);
	$shouldNotReachHere();
}

$Component* JMenuBar::getComponentAtIndex(int32_t i) {
	if (i < 0 || i >= getComponentCount()) {
		return nullptr;
	}
	return getComponent(i);
}

int32_t JMenuBar::getComponentIndex($Component* c) {
	$useLocalObjectStack();
	int32_t ncomponents = this->getComponentCount();
	$var($ComponentArray, component, this->getComponents());
	for (int32_t i = 0; i < ncomponents; ++i) {
		$var($Component, comp, $nc(component)->get(i));
		if (comp == c) {
			return i;
		}
	}
	return -1;
}

void JMenuBar::setSelected($Component* sel) {
	$var($SingleSelectionModel, model, getSelectionModel());
	int32_t index = getComponentIndex(sel);
	$nc(model)->setSelectedIndex(index);
}

bool JMenuBar::isSelected() {
	return $nc(this->selectionModel)->isSelected();
}

bool JMenuBar::isBorderPainted() {
	return this->paintBorder$;
}

void JMenuBar::setBorderPainted(bool b) {
	bool oldValue = this->paintBorder$;
	this->paintBorder$ = b;
	firePropertyChange("borderPainted"_s, oldValue, this->paintBorder$);
	if (b != oldValue) {
		revalidate();
		repaint();
	}
}

void JMenuBar::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

void JMenuBar::setMargin($Insets* m) {
	$var($Insets, old, this->margin);
	$set(this, margin, m);
	firePropertyChange("margin"_s, old, m);
	if (old == nullptr || !old->equals(m)) {
		revalidate();
		repaint();
	}
}

$Insets* JMenuBar::getMargin() {
	if (this->margin == nullptr) {
		return $new($Insets, 0, 0, 0, 0);
	} else {
		return this->margin;
	}
}

void JMenuBar::processMouseEvent($MouseEvent* event, $MenuElementArray* path, $MenuSelectionManager* manager) {
}

void JMenuBar::processKeyEvent($KeyEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
}

void JMenuBar::menuSelectionChanged(bool isIncluded) {
}

$MenuElementArray* JMenuBar::getSubElements() {
	$useLocalObjectStack();
	$var($MenuElementArray, result, nullptr);
	$var($Vector, tmp, $new($Vector));
	int32_t c = getComponentCount();
	int32_t i = 0;
	$var($Component, m, nullptr);
	for (i = 0; i < c; ++i) {
		$assign(m, getComponent(i));
		if ($instanceOf($MenuElement, m)) {
			tmp->addElement($cast($MenuElement, m));
		}
	}
	$assign(result, $new($MenuElementArray, tmp->size()));
	for (i = 0, c = tmp->size(); i < c; ++i) {
		result->set(i, $$cast($MenuElement, tmp->elementAt(i)));
	}
	return result;
}

$Component* JMenuBar::getComponent() {
	return this;
}

$String* JMenuBar::paramString() {
	$useLocalObjectStack();
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, marginString, this->margin != nullptr ? this->margin->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",margin="_s, marginString, ",paintBorder="_s, paintBorderString});
}

$AccessibleContext* JMenuBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JMenuBar$AccessibleJMenuBar, this));
	}
	return this->accessibleContext;
}

bool JMenuBar::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$useLocalObjectStack();
	bool retValue = $JComponent::processKeyBinding(ks, e, condition, pressed);
	if (!retValue) {
		$var($MenuElementArray, subElements, getSubElements());
		{
			$var($MenuElementArray, arr$, subElements);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($MenuElement, subElement, arr$->get(i$));
				if (processBindingForKeyStrokeRecursive(subElement, ks, e, condition, pressed)) {
					return true;
				}
			}
		}
	}
	return retValue;
}

bool JMenuBar::processBindingForKeyStrokeRecursive($MenuElement* elem, $KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$init(JMenuBar);
	$useLocalObjectStack();
	if (elem == nullptr) {
		return false;
	}
	$var($Component, c, $nc(elem)->getComponent());
	bool var$0 = !($nc(c)->isVisible() || ($instanceOf($JPopupMenu, c)));
	if (var$0 || !c->isEnabled()) {
		return false;
	}
	if (c != nullptr && $instanceOf($JComponent, c) && $cast($JComponent, c)->processKeyBinding(ks, e, condition, pressed)) {
		return true;
	}
	$var($MenuElementArray, subElements, elem->getSubElements());
	{
		$var($MenuElementArray, arr$, subElements);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($MenuElement, subElement, arr$->get(i$));
			if (processBindingForKeyStrokeRecursive(subElement, ks, e, condition, pressed)) {
				return true;
			}
		}
	}
	return false;
}

void JMenuBar::addNotify() {
	$JComponent::addNotify();
	$$nc($KeyboardManager::getCurrentManager())->registerMenuBar(this);
}

void JMenuBar::removeNotify() {
	$JComponent::removeNotify();
	$$nc($KeyboardManager::getCurrentManager())->unregisterMenuBar(this);
}

void JMenuBar::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JMenuBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
	$var($ObjectArray, kvData, $new($ObjectArray, 4));
	int32_t n = 0;
	if ($instanceOf($Serializable, this->selectionModel)) {
		kvData->set(n++, "selectionModel"_s);
		kvData->set(n++, this->selectionModel);
	}
	s->writeObject(kvData);
}

void JMenuBar::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$var($ObjectArray, kvData, $cast($ObjectArray, s->readObject()));
	for (int32_t i = 0; i < $nc(kvData)->length; i += 2) {
		if (kvData->get(i) == nullptr) {
			break;
		} else if ($nc(kvData->get(i))->equals("selectionModel"_s)) {
			$set(this, selectionModel, $cast($SingleSelectionModel, kvData->get(i + 1)));
		}
	}
}

JMenuBar::JMenuBar() {
}

void JMenuBar::clinit$($Class* clazz) {
	$assignStatic(JMenuBar::uiClassID, "MenuBarUI"_s);
}

$Class* JMenuBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuBar, uiClassID)},
		{"selectionModel", "Ljavax/swing/SingleSelectionModel;", nullptr, $PRIVATE | $TRANSIENT, $field(JMenuBar, selectionModel)},
		{"paintBorder", "Z", nullptr, $PRIVATE, $field(JMenuBar, paintBorder$)},
		{"margin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JMenuBar, margin)},
		{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuBar, TRACE)},
		{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuBar, VERBOSE)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuBar, DEBUG)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getComponentAtIndexmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getHelpMenumethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getMenuCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getMenuCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMenuCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSubElementsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSubElementsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSubElementsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isSelectedmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isSelectedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isSelectedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBorderPaintedmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Whether the border should be painted."},
		{}
	};
	$CompoundAttribute setBorderPaintedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBorderPaintedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMarginmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The space between the menubar\'s border and its contents"},
		{}
	};
	$CompoundAttribute setMarginmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMarginmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The selection model, recording which child is selected."},
		{}
	};
	$CompoundAttribute setSelectionModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMenuBar, init$, void)},
		{"add", "(Ljavax/swing/JMenu;)Ljavax/swing/JMenu;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, add, $JMenu*, $JMenu*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, addNotify, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getComponent, $Component*)},
		{"getComponentAtIndex", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JMenuBar, getComponentAtIndex, $Component*, int32_t), nullptr, nullptr, getComponentAtIndexmethodAnnotations$$},
		{"getComponentIndex", "(Ljava/awt/Component;)I", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getComponentIndex, int32_t, $Component*)},
		{"getHelpMenu", "()Ljavax/swing/JMenu;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getHelpMenu, $JMenu*), nullptr, nullptr, getHelpMenumethodAnnotations$$},
		{"getMargin", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getMargin, $Insets*)},
		{"getMenu", "(I)Ljavax/swing/JMenu;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getMenu, $JMenu*, int32_t)},
		{"getMenuCount", "()I", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getMenuCount, int32_t), nullptr, nullptr, getMenuCountmethodAnnotations$$},
		{"getSelectionModel", "()Ljavax/swing/SingleSelectionModel;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getSelectionModel, $SingleSelectionModel*)},
		{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getSubElements, $MenuElementArray*), nullptr, nullptr, getSubElementsmethodAnnotations$$},
		{"getUI", "()Ljavax/swing/plaf/MenuBarUI;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JMenuBar, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"isBorderPainted", "()Z", nullptr, $PUBLIC, $virtualMethod(JMenuBar, isBorderPainted, bool)},
		{"isSelected", "()Z", nullptr, $PUBLIC, $virtualMethod(JMenuBar, isSelected, bool), nullptr, nullptr, isSelectedmethodAnnotations$$},
		{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, menuSelectionChanged, void, bool)},
		{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JMenuBar, paintBorder, void, $Graphics*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JMenuBar, paramString, $String*)},
		{"processBindingForKeyStrokeRecursive", "(Ljavax/swing/MenuElement;Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $STATIC, $staticMethod(JMenuBar, processBindingForKeyStrokeRecursive, bool, $MenuElement*, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED, $virtualMethod(JMenuBar, processKeyBinding, bool, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, processKeyEvent, void, $KeyEvent*, $MenuElementArray*, $MenuSelectionManager*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, processMouseEvent, void, $MouseEvent*, $MenuElementArray*, $MenuSelectionManager*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JMenuBar, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, removeNotify, void)},
		{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, setBorderPainted, void, bool), nullptr, nullptr, setBorderPaintedmethodAnnotations$$},
		{"setHelpMenu", "(Ljavax/swing/JMenu;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, setHelpMenu, void, $JMenu*)},
		{"setMargin", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, setMargin, void, $Insets*), nullptr, nullptr, setMarginmethodAnnotations$$},
		{"setSelected", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, setSelected, void, $Component*)},
		{"setSelectionModel", "(Ljavax/swing/SingleSelectionModel;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, setSelectionModel, void, $SingleSelectionModel*), nullptr, nullptr, setSelectionModelmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/MenuBarUI;)V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, setUI, void, $MenuBarUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JMenuBar, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JMenuBar, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JMenuBar$AccessibleJMenuBar", "javax.swing.JMenuBar", "AccessibleJMenuBar", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A container for holding and displaying menus."},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JMenuBar",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible,javax.swing.MenuElement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JMenuBar$AccessibleJMenuBar"
	};
	$loadClass(JMenuBar, name, initialize, &classInfo$$, JMenuBar::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JMenuBar));
	});
	return class$;
}

$Class* JMenuBar::class$ = nullptr;

	} // swing
} // javax