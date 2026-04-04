#include <javax/swing/JComboBox.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <javax/swing/JComboBox$1.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JComboBox$ComboBoxActionPropertyChangeListener.h>
#include <javax/swing/JComboBox$DefaultKeySelectionManager.h>
#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/MutableComboBoxModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_PERFORMED
#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED
#undef SHORT_DESCRIPTION
#undef TRUE
#undef VK_TAB
#undef WHEN_FOCUSED

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $PopupMenuListenerArray = $Array<::javax::swing::event::PopupMenuListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $JComboBox$1 = ::javax::swing::JComboBox$1;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;
using $JComboBox$ComboBoxActionPropertyChangeListener = ::javax::swing::JComboBox$ComboBoxActionPropertyChangeListener;
using $JComboBox$DefaultKeySelectionManager = ::javax::swing::JComboBox$DefaultKeySelectionManager;
using $JComboBox$KeySelectionManager = ::javax::swing::JComboBox$KeySelectionManager;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $MutableComboBoxModel = ::javax::swing::MutableComboBoxModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$String* JComboBox::toString() {
	 return this->$JComponent::toString();
}

int32_t JComboBox::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JComboBox::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JComboBox::clone() {
	 return this->$JComponent::clone();
}

void JComboBox::finalize() {
	this->$JComponent::finalize();
}

$String* JComboBox::uiClassID = nullptr;

void JComboBox::init$($ComboBoxModel* aModel) {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel(aModel);
	init();
}

void JComboBox::init$($ObjectArray* items) {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel($$new($DefaultComboBoxModel, items));
	init();
}

void JComboBox::init$($Vector* items) {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel($$new($DefaultComboBoxModel, items));
	init();
}

void JComboBox::init$() {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel($$new($DefaultComboBoxModel));
	init();
}

void JComboBox::init() {
	installAncestorListener();
	setUIProperty("opaque"_s, $($Boolean::valueOf(true)));
	updateUI();
}

void JComboBox::installAncestorListener() {
	addAncestorListener($$new($JComboBox$1, this));
}

void JComboBox::setUI($ComboBoxUI* ui) {
	$JComponent::setUI(ui);
}

void JComboBox::updateUI() {
	$useLocalObjectStack();
	if (!this->updateInProgress) {
		this->updateInProgress = true;
		$var($Throwable, var$0, nullptr);
		try {
			setUI($$cast($ComboBoxUI, $UIManager::getUI(this)));
			$var($ListCellRenderer, renderer, getRenderer());
			if ($instanceOf($Component, renderer)) {
				$SwingUtilities::updateComponentTreeUI($cast($Component, renderer));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->updateInProgress = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* JComboBox::getUIClassID() {
	return JComboBox::uiClassID;
}

$ComponentUI* JComboBox::getUI() {
	return $cast($ComboBoxUI, this->ui);
}

void JComboBox::setModel($ComboBoxModel* aModel) {
	$var($ComboBoxModel, oldModel, this->dataModel);
	if (oldModel != nullptr) {
		oldModel->removeListDataListener(this);
	}
	$set(this, dataModel, aModel);
	$nc(this->dataModel)->addListDataListener(this);
	$set(this, selectedItemReminder, $nc(this->dataModel)->getSelectedItem());
	firePropertyChange("model"_s, oldModel, this->dataModel);
}

$ComboBoxModel* JComboBox::getModel() {
	return this->dataModel;
}

void JComboBox::setLightWeightPopupEnabled(bool aFlag) {
	bool oldFlag = this->lightWeightPopupEnabled;
	this->lightWeightPopupEnabled = aFlag;
	firePropertyChange("lightWeightPopupEnabled"_s, oldFlag, this->lightWeightPopupEnabled);
}

bool JComboBox::isLightWeightPopupEnabled() {
	return this->lightWeightPopupEnabled;
}

void JComboBox::setEditable(bool aFlag) {
	bool oldFlag = this->isEditable$;
	this->isEditable$ = aFlag;
	firePropertyChange("editable"_s, oldFlag, this->isEditable$);
}

bool JComboBox::isEditable() {
	return this->isEditable$;
}

void JComboBox::setMaximumRowCount(int32_t count) {
	int32_t oldCount = this->maximumRowCount;
	this->maximumRowCount = count;
	firePropertyChange("maximumRowCount"_s, oldCount, this->maximumRowCount);
}

int32_t JComboBox::getMaximumRowCount() {
	return this->maximumRowCount;
}

void JComboBox::setRenderer($ListCellRenderer* aRenderer) {
	$var($ListCellRenderer, oldRenderer, this->renderer);
	$set(this, renderer, aRenderer);
	firePropertyChange("renderer"_s, oldRenderer, this->renderer);
	invalidate();
}

$ListCellRenderer* JComboBox::getRenderer() {
	return this->renderer;
}

void JComboBox::setEditor($ComboBoxEditor* anEditor) {
	$var($ComboBoxEditor, oldEditor, this->editor);
	if (this->editor != nullptr) {
		this->editor->removeActionListener(this);
	}
	$set(this, editor, anEditor);
	if (this->editor != nullptr) {
		this->editor->addActionListener(this);
	}
	firePropertyChange("editor"_s, oldEditor, this->editor);
}

$ComboBoxEditor* JComboBox::getEditor() {
	return this->editor;
}

void JComboBox::setSelectedItem(Object$* anObject) {
	$useLocalObjectStack();
	$var($Object, oldSelection, this->selectedItemReminder);
	$var($Object, objectToSelect, anObject);
	if (oldSelection == nullptr || !oldSelection->equals(anObject)) {
		if (anObject != nullptr && !isEditable()) {
			bool found = false;
			for (int32_t i = 0; i < $nc(this->dataModel)->getSize(); ++i) {
				$var($Object, element, this->dataModel->getElementAt(i));
				if ($of(anObject)->equals(element)) {
					found = true;
					$assign(objectToSelect, element);
					break;
				}
			}
			if (!found) {
				return;
			}
			$$nc(getEditor())->setItem(anObject);
		}
		this->selectingItem = true;
		$nc(this->dataModel)->setSelectedItem(objectToSelect);
		this->selectingItem = false;
		if (!$equals(this->selectedItemReminder, $nc(this->dataModel)->getSelectedItem())) {
			selectedItemChanged();
		}
	}
	fireActionEvent();
}

$Object* JComboBox::getSelectedItem() {
	return $nc(this->dataModel)->getSelectedItem();
}

void JComboBox::setSelectedIndex(int32_t anIndex) {
	$useLocalObjectStack();
	int32_t size = $nc(this->dataModel)->getSize();
	if (anIndex == -1) {
		setSelectedItem(nullptr);
	} else if (anIndex < -1 || anIndex >= size) {
		$throwNew($IllegalArgumentException, $$str({"setSelectedIndex: "_s, $$str(anIndex), " out of bounds"_s}));
	} else {
		setSelectedItem($($nc(this->dataModel)->getElementAt(anIndex)));
	}
}

int32_t JComboBox::getSelectedIndex() {
	$useLocalObjectStack();
	$var($Object, sObject, $nc(this->dataModel)->getSelectedItem());
	int32_t i = 0;
	int32_t c = 0;
	$var($Object, obj, nullptr);
	for (i = 0, c = $nc(this->dataModel)->getSize(); i < c; ++i) {
		$assign(obj, $nc(this->dataModel)->getElementAt(i));
		if (obj != nullptr && obj->equals(sObject)) {
			return i;
		}
	}
	return -1;
}

$Object* JComboBox::getPrototypeDisplayValue() {
	return this->prototypeDisplayValue;
}

void JComboBox::setPrototypeDisplayValue(Object$* prototypeDisplayValue) {
	$var($Object, oldValue, this->prototypeDisplayValue);
	$set(this, prototypeDisplayValue, prototypeDisplayValue);
	firePropertyChange("prototypeDisplayValue"_s, oldValue, prototypeDisplayValue);
}

void JComboBox::addItem(Object$* item) {
	checkMutableComboBoxModel();
	$nc($cast($MutableComboBoxModel, this->dataModel))->addElement(item);
}

void JComboBox::insertItemAt(Object$* item, int32_t index) {
	checkMutableComboBoxModel();
	$nc($cast($MutableComboBoxModel, this->dataModel))->insertElementAt(item, index);
}

void JComboBox::removeItem(Object$* anObject) {
	checkMutableComboBoxModel();
	$nc($cast($MutableComboBoxModel, this->dataModel))->removeElement(anObject);
}

void JComboBox::removeItemAt(int32_t anIndex) {
	checkMutableComboBoxModel();
	$nc($cast($MutableComboBoxModel, this->dataModel))->removeElementAt(anIndex);
}

void JComboBox::removeAllItems() {
	$useLocalObjectStack();
	checkMutableComboBoxModel();
	$var($MutableComboBoxModel, model, $cast($MutableComboBoxModel, this->dataModel));
	int32_t size = $nc(model)->getSize();
	if ($instanceOf($DefaultComboBoxModel, model)) {
		$cast($DefaultComboBoxModel, model)->removeAllElements();
	} else {
		for (int32_t i = 0; i < size; ++i) {
			$var($Object, element, model->getElementAt(0));
			model->removeElement(element);
		}
	}
	$set(this, selectedItemReminder, nullptr);
	if (isEditable()) {
		$nc(this->editor)->setItem(nullptr);
	}
}

void JComboBox::checkMutableComboBoxModel() {
	if (!($instanceOf($MutableComboBoxModel, this->dataModel))) {
		$throwNew($RuntimeException, "Cannot use this method with a non-Mutable data model."_s);
	}
}

void JComboBox::showPopup() {
	setPopupVisible(true);
}

void JComboBox::hidePopup() {
	setPopupVisible(false);
}

void JComboBox::setPopupVisible(bool v) {
	$$sure($ComboBoxUI, getUI())->setPopupVisible(this, v);
}

bool JComboBox::isPopupVisible() {
	return $$sure($ComboBoxUI, getUI())->isPopupVisible(this);
}

void JComboBox::addItemListener($ItemListener* aListener) {
	$load($ItemListener);
	$nc(this->listenerList)->add($ItemListener::class$, aListener);
}

void JComboBox::removeItemListener($ItemListener* aListener) {
	$load($ItemListener);
	$nc(this->listenerList)->remove($ItemListener::class$, aListener);
}

$ItemListenerArray* JComboBox::getItemListeners() {
	$load($ItemListener);
	return $cast($ItemListenerArray, $nc(this->listenerList)->getListeners($ItemListener::class$));
}

void JComboBox::addActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, l);
}

void JComboBox::removeActionListener($ActionListener* l) {
	if ((l != nullptr) && ($equals(getAction(), l))) {
		setAction(nullptr);
	} else {
		$load($ActionListener);
		$nc(this->listenerList)->remove($ActionListener::class$, l);
	}
}

$ActionListenerArray* JComboBox::getActionListeners() {
	$load($ActionListener);
	return $cast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

void JComboBox::addPopupMenuListener($PopupMenuListener* l) {
	$load($PopupMenuListener);
	$nc(this->listenerList)->add($PopupMenuListener::class$, l);
}

void JComboBox::removePopupMenuListener($PopupMenuListener* l) {
	$load($PopupMenuListener);
	$nc(this->listenerList)->remove($PopupMenuListener::class$, l);
}

$PopupMenuListenerArray* JComboBox::getPopupMenuListeners() {
	$load($PopupMenuListener);
	return $cast($PopupMenuListenerArray, $nc(this->listenerList)->getListeners($PopupMenuListener::class$));
}

void JComboBox::firePopupMenuWillBecomeVisible() {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($PopupMenuEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($PopupMenuListener);
		if ($equals(listeners->get(i), $PopupMenuListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($PopupMenuEvent, this));
			}
			$nc($cast($PopupMenuListener, listeners->get(i + 1)))->popupMenuWillBecomeVisible(e);
		}
	}
}

void JComboBox::firePopupMenuWillBecomeInvisible() {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($PopupMenuEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($PopupMenuListener);
		if ($equals(listeners->get(i), $PopupMenuListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($PopupMenuEvent, this));
			}
			$nc($cast($PopupMenuListener, listeners->get(i + 1)))->popupMenuWillBecomeInvisible(e);
		}
	}
}

void JComboBox::firePopupMenuCanceled() {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($PopupMenuEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($PopupMenuListener);
		if ($equals(listeners->get(i), $PopupMenuListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($PopupMenuEvent, this));
			}
			$nc($cast($PopupMenuListener, listeners->get(i + 1)))->popupMenuCanceled(e);
		}
	}
}

void JComboBox::setActionCommand($String* aCommand) {
	$set(this, actionCommand, aCommand);
}

$String* JComboBox::getActionCommand() {
	return this->actionCommand;
}

void JComboBox::setAction($Action* a) {
	$var($Action, oldValue, getAction());
	if (this->action$ == nullptr || !this->action$->equals(a)) {
		$set(this, action$, a);
		if (oldValue != nullptr) {
			removeActionListener(oldValue);
			oldValue->removePropertyChangeListener(this->actionPropertyChangeListener);
			$set(this, actionPropertyChangeListener, nullptr);
		}
		configurePropertiesFromAction(this->action$);
		if (this->action$ != nullptr) {
			$load($ActionListener);
			if (!isListener($ActionListener::class$, this->action$)) {
				addActionListener(this->action$);
			}
			$set(this, actionPropertyChangeListener, createActionPropertyChangeListener(this->action$));
			$nc(this->action$)->addPropertyChangeListener(this->actionPropertyChangeListener);
		}
		firePropertyChange("action"_s, oldValue, this->action$);
	}
}

bool JComboBox::isListener($Class* c, $ActionListener* a) {
	bool isListener = false;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		if ($equals(listeners->get(i), c) && $equals(listeners->get(i + 1), a)) {
			isListener = true;
		}
	}
	return isListener;
}

$Action* JComboBox::getAction() {
	return this->action$;
}

void JComboBox::configurePropertiesFromAction($Action* a) {
	$AbstractAction::setEnabledFromAction(this, a);
	$AbstractAction::setToolTipTextFromAction(this, a);
	setActionCommandFromAction(a);
}

$PropertyChangeListener* JComboBox::createActionPropertyChangeListener($Action* a) {
	return $new($JComboBox$ComboBoxActionPropertyChangeListener, this, a);
}

void JComboBox::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::ACTION_COMMAND_KEY) {
		setActionCommandFromAction(action);
	} else if (propertyName == "enabled"_s) {
		$AbstractAction::setEnabledFromAction(this, action);
	} else if ($Action::SHORT_DESCRIPTION == propertyName) {
		$AbstractAction::setToolTipTextFromAction(this, action);
	}
}

void JComboBox::setActionCommandFromAction($Action* a) {
	$init($Action);
	setActionCommand((a != nullptr) ? $$cast($String, a->getValue($Action::ACTION_COMMAND_KEY)) : ($String*)nullptr);
}

void JComboBox::fireItemStateChanged($ItemEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ItemListener);
		if ($equals(listeners->get(i), $ItemListener::class$)) {
			$nc($cast($ItemListener, listeners->get(i + 1)))->itemStateChanged(e);
		}
	}
}

void JComboBox::fireActionEvent() {
	$useLocalObjectStack();
	if (!this->firingActionEvent) {
		this->firingActionEvent = true;
		$var($ActionEvent, e, nullptr);
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		int64_t mostRecentEventTime = $EventQueue::getMostRecentEventTime();
		int32_t modifiers = 0;
		$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
		if ($instanceOf($InputEvent, currentEvent)) {
			modifiers = $cast($InputEvent, currentEvent)->getModifiers();
		} else if ($instanceOf($ActionEvent, currentEvent)) {
			modifiers = $cast($ActionEvent, currentEvent)->getModifiers();
		}
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
				$load($ActionListener);
				if ($equals(listeners->get(i), $ActionListener::class$)) {
					if (e == nullptr) {
						$assign(e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, $(getActionCommand()), mostRecentEventTime, modifiers));
					}
					$nc($cast($ActionListener, listeners->get(i + 1)))->actionPerformed(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->firingActionEvent = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JComboBox::selectedItemChanged() {
	$useLocalObjectStack();
	if (this->selectedItemReminder != nullptr) {
		fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this->selectedItemReminder, $ItemEvent::DESELECTED));
	}
	$set(this, selectedItemReminder, $nc(this->dataModel)->getSelectedItem());
	if (this->selectedItemReminder != nullptr) {
		fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this->selectedItemReminder, $ItemEvent::SELECTED));
	}
}

$ObjectArray* JComboBox::getSelectedObjects() {
	$useLocalObjectStack();
	$var($Object, selectedObject, getSelectedItem());
	if (selectedObject == nullptr) {
		return $new($ObjectArray, 0);
	} else {
		$var($ObjectArray, result, $new($ObjectArray, 1));
		result->set(0, selectedObject);
		return result;
	}
}

void JComboBox::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	setPopupVisible(false);
	$$nc(getModel())->setSelectedItem($($$nc(getEditor())->getItem()));
	$var($String, oldCommand, getActionCommand());
	setActionCommand("comboBoxEdited"_s);
	fireActionEvent();
	setActionCommand(oldCommand);
}

void JComboBox::contentsChanged($ListDataEvent* e) {
	$useLocalObjectStack();
	$var($Object, oldSelection, this->selectedItemReminder);
	$var($Object, newSelection, $nc(this->dataModel)->getSelectedItem());
	if (oldSelection == nullptr || !oldSelection->equals(newSelection)) {
		selectedItemChanged();
		if (!this->selectingItem) {
			fireActionEvent();
		}
	}
}

void JComboBox::intervalAdded($ListDataEvent* e) {
	if (!$equals(this->selectedItemReminder, $nc(this->dataModel)->getSelectedItem())) {
		selectedItemChanged();
	}
}

void JComboBox::intervalRemoved($ListDataEvent* e) {
	contentsChanged(e);
}

bool JComboBox::selectWithKeyChar(char16_t keyChar) {
	int32_t index = 0;
	if (this->keySelectionManager == nullptr) {
		$set(this, keySelectionManager, createDefaultKeySelectionManager());
	}
	index = $nc(this->keySelectionManager)->selectionForKey(keyChar, $(getModel()));
	if (index != -1) {
		setSelectedIndex(index);
		return true;
	} else {
		return false;
	}
}

void JComboBox::setEnabled(bool b) {
	$JComponent::setEnabled(b);
	$var($String, var$0, "enabled"_s);
	bool var$1 = !isEnabled();
	firePropertyChange(var$0, var$1, isEnabled());
}

void JComboBox::configureEditor($ComboBoxEditor* anEditor, Object$* anItem) {
	$nc(anEditor)->setItem(anItem);
}

void JComboBox::processKeyEvent($KeyEvent* e) {
	if ($nc(e)->getKeyCode() == $KeyEvent::VK_TAB) {
		hidePopup();
	}
	$JComponent::processKeyEvent(e);
}

bool JComboBox::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$useLocalObjectStack();
	if ($JComponent::processKeyBinding(ks, e, condition, pressed)) {
		return true;
	}
	bool var$1 = !isEditable() || condition != $JComponent::WHEN_FOCUSED;
	bool var$0 = var$1 || getEditor() == nullptr;
	if (var$0 || !$nc($Boolean::TRUE)->equals($(getClientProperty("JComboBox.isTableCellEditor"_s)))) {
		return false;
	}
	$var($Component, editorComponent, $$nc(getEditor())->getEditorComponent());
	if ($instanceOf($JComponent, editorComponent)) {
		$var($JComponent, component, $cast($JComponent, editorComponent));
		return component->processKeyBinding(ks, e, $JComponent::WHEN_FOCUSED, pressed);
	}
	return false;
}

void JComboBox::setKeySelectionManager($JComboBox$KeySelectionManager* aManager) {
	$set(this, keySelectionManager, aManager);
}

$JComboBox$KeySelectionManager* JComboBox::getKeySelectionManager() {
	return this->keySelectionManager;
}

int32_t JComboBox::getItemCount() {
	return $nc(this->dataModel)->getSize();
}

$Object* JComboBox::getItemAt(int32_t index) {
	return $nc(this->dataModel)->getElementAt(index);
}

$JComboBox$KeySelectionManager* JComboBox::createDefaultKeySelectionManager() {
	return $new($JComboBox$DefaultKeySelectionManager, this);
}

void JComboBox::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JComboBox::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JComboBox::paramString() {
	$useLocalObjectStack();
	$var($String, selectedItemReminderString, this->selectedItemReminder != nullptr ? this->selectedItemReminder->toString() : ""_s);
	$var($String, isEditableString, this->isEditable$ ? "true"_s : "false"_s);
	$var($String, lightWeightPopupEnabledString, this->lightWeightPopupEnabled ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",isEditable="_s, isEditableString, ",lightWeightPopupEnabled="_s, lightWeightPopupEnabledString, ",maximumRowCount="_s, $$str(this->maximumRowCount), ",selectedItemReminder="_s, selectedItemReminderString});
}

$AccessibleContext* JComboBox::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JComboBox$AccessibleJComboBox, this));
	}
	return this->accessibleContext;
}

JComboBox::JComboBox() {
}

void JComboBox::clinit$($Class* clazz) {
	$assignStatic(JComboBox::uiClassID, "ComboBoxUI"_s);
}

$Class* JComboBox::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComboBox, uiClassID)},
		{"dataModel", "Ljavax/swing/ComboBoxModel;", "Ljavax/swing/ComboBoxModel<TE;>;", $PROTECTED, $field(JComboBox, dataModel)},
		{"renderer", "Ljavax/swing/ListCellRenderer;", "Ljavax/swing/ListCellRenderer<-TE;>;", $PROTECTED, $field(JComboBox, renderer)},
		{"editor", "Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED, $field(JComboBox, editor)},
		{"maximumRowCount", "I", nullptr, $PROTECTED, $field(JComboBox, maximumRowCount)},
		{"isEditable", "Z", nullptr, $PROTECTED, $field(JComboBox, isEditable$)},
		{"keySelectionManager", "Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, $PROTECTED, $field(JComboBox, keySelectionManager)},
		{"actionCommand", "Ljava/lang/String;", nullptr, $PROTECTED, $field(JComboBox, actionCommand)},
		{"lightWeightPopupEnabled", "Z", nullptr, $PROTECTED, $field(JComboBox, lightWeightPopupEnabled)},
		{"selectedItemReminder", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(JComboBox, selectedItemReminder)},
		{"prototypeDisplayValue", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(JComboBox, prototypeDisplayValue)},
		{"firingActionEvent", "Z", nullptr, $PRIVATE, $field(JComboBox, firingActionEvent)},
		{"selectingItem", "Z", nullptr, $PRIVATE, $field(JComboBox, selectingItem)},
		{"updateInProgress", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JComboBox, updateInProgress)},
		{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(JComboBox, action$)},
		{"actionPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JComboBox, actionPropertyChangeListener)},
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
	$NamedAttribute getActionListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getActionListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getActionListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getItemCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getItemCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getItemCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getItemListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getItemListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getItemListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getPopupMenuListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getPopupMenuListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getPopupMenuListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getSelectedIndexmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getSelectedObjectsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedObjectsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedObjectsmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute setActionmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "the Action instance connected with this ActionEvent source"},
		{}
	};
	$CompoundAttribute setActionmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setActionmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setEditablemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "If true, the user can type a new value in the combo box."},
		{}
	};
	$CompoundAttribute setEditablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEditablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setEditormethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The editor that combo box uses to edit the current value"},
		{}
	};
	$CompoundAttribute setEditormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEditormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setEnabledmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The enabled state of the component."},
		{}
	};
	$CompoundAttribute setEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setKeySelectionManagermethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The objects that changes the selection when a key is pressed."},
		{}
	};
	$CompoundAttribute setKeySelectionManagermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setKeySelectionManagermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLightWeightPopupEnabledmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "Set to <code>false</code> to require heavyweight popups."},
		{}
	};
	$CompoundAttribute setLightWeightPopupEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLightWeightPopupEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximumRowCountmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The maximum number of rows the popup should have"},
		{}
	};
	$CompoundAttribute setMaximumRowCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximumRowCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Model that the combo box uses to get data to display."},
		{}
	};
	$CompoundAttribute setModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPrototypeDisplayValuemethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The display prototype value, used to compute display width and height."},
		{}
	};
	$CompoundAttribute setPrototypeDisplayValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPrototypeDisplayValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRenderermethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The renderer that paints the item selected in the list."},
		{}
	};
	$CompoundAttribute setRenderermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRenderermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectedIndexmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The item at index is selected."},
		{}
	};
	$CompoundAttribute setSelectedIndexmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectedIndexmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectedItemmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets the selected item in the JComboBox."},
		{}
	};
	$CompoundAttribute setSelectedItemmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectedItemmethodAnnotations$$$namedAttribute},
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
		{"<init>", "(Ljavax/swing/ComboBoxModel;)V", "(Ljavax/swing/ComboBoxModel<TE;>;)V", $PUBLIC, $method(JComboBox, init$, void, $ComboBoxModel*)},
		{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(JComboBox, init$, void, $ObjectArray*)},
		{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<TE;>;)V", $PUBLIC, $method(JComboBox, init$, void, $Vector*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JComboBox, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, actionPerformed, void, $ActionEvent*)},
		{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(JComboBox, actionPropertyChanged, void, $Action*, $String*)},
		{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, addActionListener, void, $ActionListener*)},
		{"addItem", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(JComboBox, addItem, void, Object$*)},
		{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, addItemListener, void, $ItemListener*)},
		{"addPopupMenuListener", "(Ljavax/swing/event/PopupMenuListener;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, addPopupMenuListener, void, $PopupMenuListener*)},
		{"checkMutableComboBoxModel", "()V", nullptr, 0, $virtualMethod(JComboBox, checkMutableComboBoxModel, void)},
		{"configureEditor", "(Ljavax/swing/ComboBoxEditor;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, configureEditor, void, $ComboBoxEditor*, Object$*)},
		{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED, $virtualMethod(JComboBox, configurePropertiesFromAction, void, $Action*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, contentsChanged, void, $ListDataEvent*)},
		{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(JComboBox, createActionPropertyChangeListener, $PropertyChangeListener*, $Action*)},
		{"createDefaultKeySelectionManager", "()Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, $PROTECTED, $virtualMethod(JComboBox, createDefaultKeySelectionManager, $JComboBox$KeySelectionManager*)},
		{"fireActionEvent", "()V", nullptr, $PROTECTED, $virtualMethod(JComboBox, fireActionEvent, void)},
		{"fireItemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED, $virtualMethod(JComboBox, fireItemStateChanged, void, $ItemEvent*)},
		{"firePopupMenuCanceled", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, firePopupMenuCanceled, void)},
		{"firePopupMenuWillBecomeInvisible", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, firePopupMenuWillBecomeInvisible, void)},
		{"firePopupMenuWillBecomeVisible", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, firePopupMenuWillBecomeVisible, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getAction, $Action*)},
		{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getActionCommand, $String*)},
		{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getActionListeners, $ActionListenerArray*), nullptr, nullptr, getActionListenersmethodAnnotations$$},
		{"getEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getEditor, $ComboBoxEditor*)},
		{"getItemAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(JComboBox, getItemAt, $Object*, int32_t)},
		{"getItemCount", "()I", nullptr, $PUBLIC, $virtualMethod(JComboBox, getItemCount, int32_t), nullptr, nullptr, getItemCountmethodAnnotations$$},
		{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getItemListeners, $ItemListenerArray*), nullptr, nullptr, getItemListenersmethodAnnotations$$},
		{"getKeySelectionManager", "()Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getKeySelectionManager, $JComboBox$KeySelectionManager*)},
		{"getMaximumRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(JComboBox, getMaximumRowCount, int32_t)},
		{"getModel", "()Ljavax/swing/ComboBoxModel;", "()Ljavax/swing/ComboBoxModel<TE;>;", $PUBLIC, $virtualMethod(JComboBox, getModel, $ComboBoxModel*)},
		{"getPopupMenuListeners", "()[Ljavax/swing/event/PopupMenuListener;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getPopupMenuListeners, $PopupMenuListenerArray*), nullptr, nullptr, getPopupMenuListenersmethodAnnotations$$},
		{"getPrototypeDisplayValue", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(JComboBox, getPrototypeDisplayValue, $Object*)},
		{"getRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<-TE;>;", $PUBLIC, $virtualMethod(JComboBox, getRenderer, $ListCellRenderer*)},
		{"getSelectedIndex", "()I", nullptr, $PUBLIC, $virtualMethod(JComboBox, getSelectedIndex, int32_t), nullptr, nullptr, getSelectedIndexmethodAnnotations$$},
		{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getSelectedItem, $Object*)},
		{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getSelectedObjects, $ObjectArray*), nullptr, nullptr, getSelectedObjectsmethodAnnotations$$},
		{"getUI", "()Ljavax/swing/plaf/ComboBoxUI;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComboBox, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"hidePopup", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, hidePopup, void)},
		{"init", "()V", nullptr, $PRIVATE, $method(JComboBox, init, void)},
		{"insertItemAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC, $virtualMethod(JComboBox, insertItemAt, void, Object$*, int32_t)},
		{"installAncestorListener", "()V", nullptr, $PROTECTED, $virtualMethod(JComboBox, installAncestorListener, void)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, intervalRemoved, void, $ListDataEvent*)},
		{"isEditable", "()Z", nullptr, $PUBLIC, $virtualMethod(JComboBox, isEditable, bool)},
		{"isLightWeightPopupEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JComboBox, isLightWeightPopupEnabled, bool)},
		{"isListener", "(Ljava/lang/Class;Ljava/awt/event/ActionListener;)Z", "(Ljava/lang/Class<*>;Ljava/awt/event/ActionListener;)Z", $PRIVATE, $method(JComboBox, isListener, bool, $Class*, $ActionListener*)},
		{"isPopupVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(JComboBox, isPopupVisible, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JComboBox, paramString, $String*)},
		{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED, $virtualMethod(JComboBox, processKeyBinding, bool, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, processKeyEvent, void, $KeyEvent*)},
		{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, removeActionListener, void, $ActionListener*)},
		{"removeAllItems", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, removeAllItems, void)},
		{"removeItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, removeItem, void, Object$*)},
		{"removeItemAt", "(I)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, removeItemAt, void, int32_t)},
		{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, removeItemListener, void, $ItemListener*)},
		{"removePopupMenuListener", "(Ljavax/swing/event/PopupMenuListener;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, removePopupMenuListener, void, $PopupMenuListener*)},
		{"selectWithKeyChar", "(C)Z", nullptr, $PUBLIC, $virtualMethod(JComboBox, selectWithKeyChar, bool, char16_t)},
		{"selectedItemChanged", "()V", nullptr, $PROTECTED, $virtualMethod(JComboBox, selectedItemChanged, void)},
		{"setAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setAction, void, $Action*), nullptr, nullptr, setActionmethodAnnotations$$},
		{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setActionCommand, void, $String*)},
		{"setActionCommandFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(JComboBox, setActionCommandFromAction, void, $Action*)},
		{"setEditable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setEditable, void, bool), nullptr, nullptr, setEditablemethodAnnotations$$},
		{"setEditor", "(Ljavax/swing/ComboBoxEditor;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setEditor, void, $ComboBoxEditor*), nullptr, nullptr, setEditormethodAnnotations$$},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setEnabled, void, bool), nullptr, nullptr, setEnabledmethodAnnotations$$},
		{"setKeySelectionManager", "(Ljavax/swing/JComboBox$KeySelectionManager;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setKeySelectionManager, void, $JComboBox$KeySelectionManager*), nullptr, nullptr, setKeySelectionManagermethodAnnotations$$},
		{"setLightWeightPopupEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setLightWeightPopupEnabled, void, bool), nullptr, nullptr, setLightWeightPopupEnabledmethodAnnotations$$},
		{"setMaximumRowCount", "(I)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setMaximumRowCount, void, int32_t), nullptr, nullptr, setMaximumRowCountmethodAnnotations$$},
		{"setModel", "(Ljavax/swing/ComboBoxModel;)V", "(Ljavax/swing/ComboBoxModel<TE;>;)V", $PUBLIC, $virtualMethod(JComboBox, setModel, void, $ComboBoxModel*), nullptr, nullptr, setModelmethodAnnotations$$},
		{"setPopupVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setPopupVisible, void, bool)},
		{"setPrototypeDisplayValue", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(JComboBox, setPrototypeDisplayValue, void, Object$*), nullptr, nullptr, setPrototypeDisplayValuemethodAnnotations$$},
		{"setRenderer", "(Ljavax/swing/ListCellRenderer;)V", "(Ljavax/swing/ListCellRenderer<-TE;>;)V", $PUBLIC, $virtualMethod(JComboBox, setRenderer, void, $ListCellRenderer*), nullptr, nullptr, setRenderermethodAnnotations$$},
		{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setSelectedIndex, void, int32_t), nullptr, nullptr, setSelectedIndexmethodAnnotations$$},
		{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setSelectedItem, void, Object$*), nullptr, nullptr, setSelectedItemmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/ComboBoxUI;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox, setUI, void, $ComboBoxUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"showPopup", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, showPopup, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JComboBox, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
		{"javax.swing.JComboBox$DefaultKeySelectionManager", "javax.swing.JComboBox", "DefaultKeySelectionManager", 0},
		{"javax.swing.JComboBox$KeySelectionManager", "javax.swing.JComboBox", "KeySelectionManager", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JComboBox$ComboBoxActionPropertyChangeListener", "javax.swing.JComboBox", "ComboBoxActionPropertyChangeListener", $PRIVATE | $STATIC},
		{"javax.swing.JComboBox$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A combination of a text field and a drop-down list."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JComboBox",
		"javax.swing.JComponent",
		"java.awt.ItemSelectable,javax.swing.event.ListDataListener,java.awt.event.ActionListener,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljavax/swing/JComponent;Ljava/awt/ItemSelectable;Ljavax/swing/event/ListDataListener;Ljava/awt/event/ActionListener;Ljavax/accessibility/Accessible;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JComboBox$AccessibleJComboBox,javax.swing.JComboBox$AccessibleJComboBox$EditorAccessibleContext,javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor,javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener,javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener,javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener,javax.swing.JComboBox$DefaultKeySelectionManager,javax.swing.JComboBox$KeySelectionManager,javax.swing.JComboBox$ComboBoxActionPropertyChangeListener,javax.swing.JComboBox$1"
	};
	$loadClass(JComboBox, name, initialize, &classInfo$$, JComboBox::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JComboBox));
	});
	return class$;
}

$Class* JComboBox::class$ = nullptr;

	} // swing
} // javax