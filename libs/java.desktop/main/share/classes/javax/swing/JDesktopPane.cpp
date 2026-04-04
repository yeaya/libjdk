#include <javax/swing/JDesktopPane.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane$1.h>
#include <javax/swing/JDesktopPane$AccessibleJDesktopPane.h>
#include <javax/swing/JDesktopPane$ComponentPosition.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <jcpp.h>

#undef FALSE
#undef LIVE_DRAG_MODE
#undef OUTLINE_DRAG_MODE
#undef TRUE

using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane$1 = ::javax::swing::JDesktopPane$1;
using $JDesktopPane$AccessibleJDesktopPane = ::javax::swing::JDesktopPane$AccessibleJDesktopPane;
using $JDesktopPane$ComponentPosition = ::javax::swing::JDesktopPane$ComponentPosition;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;

namespace javax {
	namespace swing {

$String* JDesktopPane::uiClassID = nullptr;

void JDesktopPane::init$() {
	$JLayeredPane::init$();
	$set(this, selectedFrame, nullptr);
	this->dragMode = JDesktopPane::LIVE_DRAG_MODE;
	this->dragModeSet = false;
	this->componentOrderCheckingEnabled = true;
	this->componentOrderChanged = false;
	setUIProperty("opaque"_s, $Boolean::TRUE);
	setFocusCycleRoot(true);
	setFocusTraversalPolicy($$new($JDesktopPane$1, this));
	updateUI();
}

$ComponentUI* JDesktopPane::getUI() {
	return $cast($DesktopPaneUI, this->ui);
}

void JDesktopPane::setUI($DesktopPaneUI* ui) {
	$JLayeredPane::setUI(ui);
}

void JDesktopPane::setDragMode(int32_t dragMode) {
	int32_t oldDragMode = this->dragMode;
	this->dragMode = dragMode;
	firePropertyChange("dragMode"_s, oldDragMode, this->dragMode);
	this->dragModeSet = true;
}

int32_t JDesktopPane::getDragMode() {
	return this->dragMode;
}

$DesktopManager* JDesktopPane::getDesktopManager() {
	return this->desktopManager;
}

void JDesktopPane::setDesktopManager($DesktopManager* d) {
	$var($DesktopManager, oldValue, this->desktopManager);
	$set(this, desktopManager, d);
	firePropertyChange("desktopManager"_s, oldValue, this->desktopManager);
}

void JDesktopPane::updateUI() {
	setUI($$cast($DesktopPaneUI, $UIManager::getUI(this)));
}

$String* JDesktopPane::getUIClassID() {
	return JDesktopPane::uiClassID;
}

$JInternalFrameArray* JDesktopPane::getAllFrames() {
	$useLocalObjectStack();
	return $cast($JInternalFrameArray, $$nc(getAllFrames(this))->toArray($$new($JInternalFrameArray, 0)));
}

$Collection* JDesktopPane::getAllFrames($Container* parent) {
	$init(JDesktopPane);
	$useLocalObjectStack();
	int32_t i = 0;
	int32_t count = 0;
	$var($Collection, results, $cast($AbstractCollection, $new($LinkedHashSet)));
	count = $nc(parent)->getComponentCount();
	for (i = 0; i < count; ++i) {
		$var($Component, next, parent->getComponent(i));
		if ($instanceOf($JInternalFrame, next)) {
			results->add($cast($JInternalFrame, next));
		} else if ($instanceOf($JInternalFrame$JDesktopIcon, next)) {
			$var($JInternalFrame, tmp, $cast($JInternalFrame$JDesktopIcon, next)->getInternalFrame());
			if (tmp != nullptr) {
				results->add(tmp);
			}
		} else if ($instanceOf($Container, next)) {
			results->addAll($(getAllFrames($cast($Container, next))));
		}
	}
	return results;
}

$JInternalFrame* JDesktopPane::getSelectedFrame() {
	return this->selectedFrame;
}

void JDesktopPane::setSelectedFrame($JInternalFrame* f) {
	$set(this, selectedFrame, f);
}

$JInternalFrameArray* JDesktopPane::getAllFramesInLayer(int32_t layer) {
	$useLocalObjectStack();
	$var($Collection, allFrames, getAllFrames(this));
	$var($Iterator, iterator, $nc(allFrames)->iterator());
	while ($nc(iterator)->hasNext()) {
		if ($$sure($JInternalFrame, iterator->next())->getLayer() != layer) {
			iterator->remove();
		}
	}
	return $cast($JInternalFrameArray, allFrames->toArray($$new($JInternalFrameArray, 0)));
}

$List* JDesktopPane::getFrames() {
	$useLocalObjectStack();
	$var($Component, c, nullptr);
	$var($Set, set, $cast($AbstractSet, $new($TreeSet)));
	for (int32_t i = 0; i < getComponentCount(); ++i) {
		$assign(c, getComponent(i));
		if ($instanceOf($JInternalFrame, c)) {
			set->add($$new($JDesktopPane$ComponentPosition, $cast($JInternalFrame, c), getLayer(c), i));
		} else if ($instanceOf($JInternalFrame$JDesktopIcon, c)) {
			$assign(c, $cast($JInternalFrame$JDesktopIcon, c)->getInternalFrame());
			set->add($$new($JDesktopPane$ComponentPosition, $cast($JInternalFrame, c), getLayer(c), i));
		}
	}
	$var($List, frames, $new($ArrayList, set->size()));
	{
		$var($Iterator, i$, set->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JDesktopPane$ComponentPosition, position, $cast($JDesktopPane$ComponentPosition, i$->next()));
			{
				frames->add($nc(position)->component);
			}
		}
	}
	return frames;
}

$JInternalFrame* JDesktopPane::getNextFrame($JInternalFrame* f, bool forward) {
	verifyFramesCache();
	if (f == nullptr) {
		return getTopInternalFrame();
	}
	int32_t i = $nc(this->framesCache)->indexOf(f);
	if (i == -1 || this->framesCache->size() == 1) {
		return nullptr;
	}
	if (forward) {
		if (++i == this->framesCache->size()) {
			i = 0;
		}
	} else if (--i == -1) {
		i = this->framesCache->size() - 1;
	}
	return $cast($JInternalFrame, this->framesCache->get(i));
}

$JInternalFrame* JDesktopPane::getNextFrame($JInternalFrame* f) {
	return getNextFrame(f, true);
}

$JInternalFrame* JDesktopPane::getTopInternalFrame() {
	if ($nc(this->framesCache)->size() == 0) {
		return nullptr;
	}
	return $cast($JInternalFrame, this->framesCache->get(0));
}

void JDesktopPane::updateFramesCache() {
	$set(this, framesCache, getFrames());
}

void JDesktopPane::verifyFramesCache() {
	if (this->componentOrderChanged) {
		this->componentOrderChanged = false;
		updateFramesCache();
	}
}

void JDesktopPane::remove($Component* comp) {
	$JLayeredPane::remove(comp);
	updateFramesCache();
}

$JInternalFrame* JDesktopPane::selectFrame(bool forward) {
	$useLocalObjectStack();
	$var($JInternalFrame, selectedFrame, getSelectedFrame());
	$var($JInternalFrame, frameToSelect, getNextFrame(selectedFrame, forward));
	if (frameToSelect == nullptr) {
		return nullptr;
	}
	setComponentOrderCheckingEnabled(false);
	if (forward && selectedFrame != nullptr) {
		selectedFrame->moveToBack();
	}
	try {
		$nc(frameToSelect)->setSelected(true);
	} catch ($PropertyVetoException& pve) {
	}
	setComponentOrderCheckingEnabled(true);
	return frameToSelect;
}

void JDesktopPane::setComponentOrderCheckingEnabled(bool enable) {
	this->componentOrderCheckingEnabled = enable;
}

void JDesktopPane::addImpl($Component* comp, Object$* constraints, int32_t index) {
	checkComponentAttributes(comp);
	$JLayeredPane::addImpl(comp, constraints, index);
	if (this->componentOrderCheckingEnabled) {
		if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
			this->componentOrderChanged = true;
		}
	}
}

void JDesktopPane::checkComponentAttributes($Component* comp) {
	if ($instanceOf($JInternalFrame, comp) && $cast($JInternalFrame, comp)->isIcon()) {
		$cast($JInternalFrame, comp)->putClientProperty("wasIconOnce"_s, $Boolean::FALSE);
	}
}

void JDesktopPane::remove(int32_t index) {
	if (this->componentOrderCheckingEnabled) {
		$var($Component, comp, getComponent(index));
		if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
			this->componentOrderChanged = true;
		}
	}
	$JLayeredPane::remove(index);
}

void JDesktopPane::removeAll() {
	$useLocalObjectStack();
	if (this->componentOrderCheckingEnabled) {
		int32_t count = getComponentCount();
		for (int32_t i = 0; i < count; ++i) {
			$var($Component, comp, getComponent(i));
			if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
				this->componentOrderChanged = true;
				break;
			}
		}
	}
	$JLayeredPane::removeAll();
}

void JDesktopPane::setComponentZOrder($Component* comp, int32_t index) {
	$JLayeredPane::setComponentZOrder(comp, index);
	if (this->componentOrderCheckingEnabled) {
		if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
			this->componentOrderChanged = true;
		}
	}
}

void JDesktopPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JDesktopPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

void JDesktopPane::setUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "dragMode"_s) {
		if (!this->dragModeSet) {
			setDragMode($nc($cast($Integer, value))->intValue());
			this->dragModeSet = false;
		}
	} else {
		$JLayeredPane::setUIProperty(propertyName, value);
	}
}

$String* JDesktopPane::paramString() {
	$useLocalObjectStack();
	$var($String, desktopManagerString, this->desktopManager != nullptr ? this->desktopManager->toString() : ""_s);
	return $str({$($JLayeredPane::paramString()), ",desktopManager="_s, desktopManagerString});
}

$AccessibleContext* JDesktopPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JDesktopPane$AccessibleJDesktopPane, this));
	}
	return this->accessibleContext;
}

JDesktopPane::JDesktopPane() {
}

void JDesktopPane::clinit$($Class* clazz) {
	$assignStatic(JDesktopPane::uiClassID, "DesktopPaneUI"_s);
}

$Class* JDesktopPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JDesktopPane, uiClassID)},
		{"desktopManager", "Ljavax/swing/DesktopManager;", nullptr, $TRANSIENT, $field(JDesktopPane, desktopManager)},
		{"selectedFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $TRANSIENT, $field(JDesktopPane, selectedFrame)},
		{"LIVE_DRAG_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JDesktopPane, LIVE_DRAG_MODE)},
		{"OUTLINE_DRAG_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JDesktopPane, OUTLINE_DRAG_MODE)},
		{"dragMode", "I", nullptr, $PRIVATE, $field(JDesktopPane, dragMode)},
		{"dragModeSet", "Z", nullptr, $PRIVATE, $field(JDesktopPane, dragModeSet)},
		{"framesCache", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/JInternalFrame;>;", $PRIVATE | $TRANSIENT, $field(JDesktopPane, framesCache)},
		{"componentOrderCheckingEnabled", "Z", nullptr, $PRIVATE, $field(JDesktopPane, componentOrderCheckingEnabled)},
		{"componentOrderChanged", "Z", nullptr, $PRIVATE, $field(JDesktopPane, componentOrderChanged)},
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
	$NamedAttribute getAllFramesmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAllFramesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAllFramesmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute setDesktopManagermethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Desktop manager to handle the internal frames in the desktop pane."},
		{}
	};
	$CompoundAttribute setDesktopManagermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDesktopManagermethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JDesktopPane.LIVE_DRAG_MODE"},
		{'s', "JDesktopPane.OUTLINE_DRAG_MODE"},
		{'-'}
	};
	$NamedAttribute setDragModemethodAnnotations$$$namedAttribute[] = {
		{"enumerationValues", '[', $attribute},
		{"description", 's', "Dragging style for internal frame children."},
		{}
	};
	$CompoundAttribute setDragModemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDragModemethodAnnotations$$$namedAttribute},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(JDesktopPane, init$, void)},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(JDesktopPane, addImpl, void, $Component*, Object$*, int32_t)},
		{"checkComponentAttributes", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(JDesktopPane, checkComponentAttributes, void, $Component*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getAllFrames", "()[Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getAllFrames, $JInternalFrameArray*), nullptr, nullptr, getAllFramesmethodAnnotations$$},
		{"getAllFrames", "(Ljava/awt/Container;)Ljava/util/Collection;", "(Ljava/awt/Container;)Ljava/util/Collection<Ljavax/swing/JInternalFrame;>;", $PRIVATE | $STATIC, $staticMethod(JDesktopPane, getAllFrames, $Collection*, $Container*)},
		{"getAllFramesInLayer", "(I)[Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getAllFramesInLayer, $JInternalFrameArray*, int32_t)},
		{"getDesktopManager", "()Ljavax/swing/DesktopManager;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getDesktopManager, $DesktopManager*)},
		{"getDragMode", "()I", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getDragMode, int32_t)},
		{"getFrames", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/swing/JInternalFrame;>;", $PRIVATE, $method(JDesktopPane, getFrames, $List*)},
		{"getNextFrame", "(Ljavax/swing/JInternalFrame;Z)Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $method(JDesktopPane, getNextFrame, $JInternalFrame*, $JInternalFrame*, bool)},
		{"getNextFrame", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JInternalFrame;", nullptr, 0, $virtualMethod(JDesktopPane, getNextFrame, $JInternalFrame*, $JInternalFrame*)},
		{"getSelectedFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getSelectedFrame, $JInternalFrame*)},
		{"getTopInternalFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $method(JDesktopPane, getTopInternalFrame, $JInternalFrame*)},
		{"getUI", "()Ljavax/swing/plaf/DesktopPaneUI;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JDesktopPane, paramString, $String*)},
		{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, remove, void, $Component*)},
		{"remove", "(I)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, remove, void, int32_t)},
		{"removeAll", "()V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, removeAll, void)},
		{"selectFrame", "(Z)Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, selectFrame, $JInternalFrame*, bool)},
		{"setComponentOrderCheckingEnabled", "(Z)V", nullptr, 0, $virtualMethod(JDesktopPane, setComponentOrderCheckingEnabled, void, bool)},
		{"setComponentZOrder", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, setComponentZOrder, void, $Component*, int32_t)},
		{"setDesktopManager", "(Ljavax/swing/DesktopManager;)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, setDesktopManager, void, $DesktopManager*), nullptr, nullptr, setDesktopManagermethodAnnotations$$},
		{"setDragMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, setDragMode, void, int32_t), nullptr, nullptr, setDragModemethodAnnotations$$},
		{"setSelectedFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, setSelectedFrame, void, $JInternalFrame*)},
		{"setUI", "(Ljavax/swing/plaf/DesktopPaneUI;)V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, setUI, void, $DesktopPaneUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(JDesktopPane, setUIProperty, void, $String*, Object$*)},
		{"updateFramesCache", "()V", nullptr, $PRIVATE, $method(JDesktopPane, updateFramesCache, void)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JDesktopPane, updateUI, void)},
		{"verifyFramesCache", "()V", nullptr, $PRIVATE, $method(JDesktopPane, verifyFramesCache, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JDesktopPane, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JDesktopPane$AccessibleJDesktopPane", "javax.swing.JDesktopPane", "AccessibleJDesktopPane", $PROTECTED},
		{"javax.swing.JDesktopPane$ComponentPosition", "javax.swing.JDesktopPane", "ComponentPosition", $PRIVATE | $STATIC},
		{"javax.swing.JDesktopPane$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JDesktopPane",
		"javax.swing.JLayeredPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JDesktopPane$AccessibleJDesktopPane,javax.swing.JDesktopPane$ComponentPosition,javax.swing.JDesktopPane$1"
	};
	$loadClass(JDesktopPane, name, initialize, &classInfo$$, JDesktopPane::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JDesktopPane));
	});
	return class$;
}

$Class* JDesktopPane::class$ = nullptr;

	} // swing
} // javax