#include <javax/swing/JTextField.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField$AccessibleJTextField.h>
#include <javax/swing/JTextField$NotifyAction.h>
#include <javax/swing/JTextField$ScrollRepainter.h>
#include <javax/swing/JTextField$TextFieldActionPropertyChangeListener.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_PERFORMED
#undef CENTER
#undef LEADING
#undef LEFT
#undef RIGHT
#undef SHORT_DESCRIPTION
#undef TRAILING
#undef TRUE

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ActionArray = $Array<::javax::swing::Action>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JTextField$AccessibleJTextField = ::javax::swing::JTextField$AccessibleJTextField;
using $JTextField$NotifyAction = ::javax::swing::JTextField$NotifyAction;
using $JTextField$ScrollRepainter = ::javax::swing::JTextField$ScrollRepainter;
using $JTextField$TextFieldActionPropertyChangeListener = ::javax::swing::JTextField$TextFieldActionPropertyChangeListener;
using $JViewport = ::javax::swing::JViewport;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

$String* JTextField::toString() {
	return this->$JTextComponent::toString();
}

int32_t JTextField::hashCode() {
	return this->$JTextComponent::hashCode();
}

bool JTextField::equals(Object$* arg0) {
	return this->$JTextComponent::equals(arg0);
}

$Object* JTextField::clone() {
	return this->$JTextComponent::clone();
}

void JTextField::finalize() {
	this->$JTextComponent::finalize();
}

$String* JTextField::notifyAction = nullptr;
$ActionArray* JTextField::defaultActions = nullptr;
$String* JTextField::uiClassID = nullptr;

void JTextField::init$() {
	JTextField::init$(nullptr, nullptr, 0);
}

void JTextField::init$($String* text) {
	JTextField::init$(nullptr, text, 0);
}

void JTextField::init$(int32_t columns) {
	JTextField::init$(nullptr, nullptr, columns);
}

void JTextField::init$($String* text, int32_t columns) {
	JTextField::init$(nullptr, text, columns);
}

void JTextField::init$($Document* doc$renamed, $String* text, int32_t columns) {
	$useLocalObjectStack();
	$var($Document, doc, doc$renamed);
	$JTextComponent::init$();
	this->horizontalAlignment = $SwingConstants::LEADING;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	$set(this, visibility, $new($DefaultBoundedRangeModel));
	this->visibility->addChangeListener($$new($JTextField$ScrollRepainter, this));
	this->columns = columns;
	if (doc == nullptr) {
		$assign(doc, createDefaultModel());
	}
	setDocument(doc);
	if (text != nullptr) {
		setText(text);
	}
}

$String* JTextField::getUIClassID() {
	return JTextField::uiClassID;
}

void JTextField::setDocument($Document* doc) {
	if (doc != nullptr) {
		doc->putProperty("filterNewlines"_s, $Boolean::TRUE);
	}
	$JTextComponent::setDocument(doc);
}

bool JTextField::isValidateRoot() {
	return !($instanceOf($JViewport, $($SwingUtilities::getUnwrappedParent(this))));
}

int32_t JTextField::getHorizontalAlignment() {
	return this->horizontalAlignment;
}

void JTextField::setHorizontalAlignment(int32_t alignment) {
	if (alignment == this->horizontalAlignment) {
		return;
	}
	int32_t oldValue = this->horizontalAlignment;
	if ((alignment == $SwingConstants::LEFT) || (alignment == $SwingConstants::CENTER) || (alignment == $SwingConstants::RIGHT) || (alignment == $SwingConstants::LEADING) || (alignment == $SwingConstants::TRAILING)) {
		this->horizontalAlignment = alignment;
	} else {
		$throwNew($IllegalArgumentException, "horizontalAlignment"_s);
	}
	firePropertyChange("horizontalAlignment"_s, oldValue, this->horizontalAlignment);
	invalidate();
	repaint();
}

$Document* JTextField::createDefaultModel() {
	return $new($PlainDocument);
}

int32_t JTextField::getColumns() {
	return this->columns;
}

void JTextField::setColumns(int32_t columns) {
	int32_t oldVal = this->columns;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	if (columns != oldVal) {
		this->columns = columns;
		invalidate();
	}
}

int32_t JTextField::getColumnWidth() {
	$useLocalObjectStack();
	if (this->columnWidth == 0) {
		$var($FontMetrics, metrics, getFontMetrics($(getFont())));
		this->columnWidth = $nc(metrics)->charWidth(u'm');
	}
	return this->columnWidth;
}

$Dimension* JTextField::getPreferredSize() {
	$useLocalObjectStack();
	$var($Dimension, size, $JTextComponent::getPreferredSize());
	if (this->columns != 0) {
		$var($Insets, insets, getInsets());
		$nc(size)->width = this->columns * getColumnWidth() + $nc(insets)->left + $nc(insets)->right;
	}
	return size;
}

void JTextField::setFont($Font* f) {
	$JTextComponent::setFont(f);
	this->columnWidth = 0;
}

void JTextField::addActionListener($ActionListener* l) {
	$synchronized(this) {
		$load($ActionListener);
		$nc(this->listenerList)->add($ActionListener::class$, l);
	}
}

void JTextField::removeActionListener($ActionListener* l) {
	$synchronized(this) {
		if ((l != nullptr) && ($equals(getAction(), l))) {
			setAction(nullptr);
		} else {
			$load($ActionListener);
			$nc(this->listenerList)->remove($ActionListener::class$, l);
		}
	}
}

$ActionListenerArray* JTextField::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $cast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
	}
}

void JTextField::fireActionPerformed() {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	int32_t modifiers = 0;
	$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
	if ($instanceOf($InputEvent, currentEvent)) {
		modifiers = $cast($InputEvent, currentEvent)->getModifiers();
	} else if ($instanceOf($ActionEvent, currentEvent)) {
		modifiers = $cast($ActionEvent, currentEvent)->getModifiers();
	}
	$var($String, var$0, (this->command != nullptr) ? this->command : getText());
	$var($ActionEvent, e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$0, $EventQueue::getMostRecentEventTime(), modifiers));
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			$nc($cast($ActionListener, listeners->get(i + 1)))->actionPerformed(e);
		}
	}
}

void JTextField::setActionCommand($String* command) {
	$set(this, command, command);
}

void JTextField::setAction($Action* a) {
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

bool JTextField::isListener($Class* c, $ActionListener* a) {
	bool isListener = false;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		if ($equals(listeners->get(i), c) && $equals(listeners->get(i + 1), a)) {
			isListener = true;
		}
	}
	return isListener;
}

$Action* JTextField::getAction() {
	return this->action$;
}

void JTextField::configurePropertiesFromAction($Action* a) {
	$AbstractAction::setEnabledFromAction(this, a);
	$AbstractAction::setToolTipTextFromAction(this, a);
	setActionCommandFromAction(a);
}

void JTextField::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::ACTION_COMMAND_KEY) {
		setActionCommandFromAction(action);
	} else if (propertyName == "enabled"_s) {
		$AbstractAction::setEnabledFromAction(this, action);
	} else if (propertyName == $Action::SHORT_DESCRIPTION) {
		$AbstractAction::setToolTipTextFromAction(this, action);
	}
}

void JTextField::setActionCommandFromAction($Action* action) {
	$init($Action);
	setActionCommand((action == nullptr) ? ($String*)nullptr : $$cast($String, action->getValue($Action::ACTION_COMMAND_KEY)));
}

$PropertyChangeListener* JTextField::createActionPropertyChangeListener($Action* a) {
	return $new($JTextField$TextFieldActionPropertyChangeListener, this, a);
}

$ActionArray* JTextField::getActions() {
	return $TextAction::augmentList($($JTextComponent::getActions()), JTextField::defaultActions);
}

void JTextField::postActionEvent() {
	fireActionPerformed();
}

$BoundedRangeModel* JTextField::getHorizontalVisibility() {
	return this->visibility;
}

int32_t JTextField::getScrollOffset() {
	return $nc(this->visibility)->getValue();
}

void JTextField::setScrollOffset(int32_t scrollOffset) {
	$nc(this->visibility)->setValue(scrollOffset);
}

void JTextField::scrollRectToVisible($Rectangle* r) {
	$var($Insets, i, getInsets());
	int32_t x0 = $nc(r)->x + $nc(this->visibility)->getValue() - $nc(i)->left;
	int32_t x1 = x0 + r->width;
	if (x0 < $nc(this->visibility)->getValue()) {
		$nc(this->visibility)->setValue(x0);
	} else {
		int32_t var$0 = x1;
		int32_t var$2 = $nc(this->visibility)->getValue();
		int32_t var$1 = var$2 + this->visibility->getExtent();
		if (var$0 > var$1) {
			$nc(this->visibility)->setValue(x1 - $nc(this->visibility)->getExtent());
		}
	}
}

bool JTextField::hasActionListener() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			return true;
		}
	}
	return false;
}

void JTextField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JTextField::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JTextField::paramString() {
	$useLocalObjectStack();
	$var($String, horizontalAlignmentString, nullptr);
	if (this->horizontalAlignment == $SwingConstants::LEFT) {
		$assign(horizontalAlignmentString, "LEFT"_s);
	} else if (this->horizontalAlignment == $SwingConstants::CENTER) {
		$assign(horizontalAlignmentString, "CENTER"_s);
	} else if (this->horizontalAlignment == $SwingConstants::RIGHT) {
		$assign(horizontalAlignmentString, "RIGHT"_s);
	} else if (this->horizontalAlignment == $SwingConstants::LEADING) {
		$assign(horizontalAlignmentString, "LEADING"_s);
	} else if (this->horizontalAlignment == $SwingConstants::TRAILING) {
		$assign(horizontalAlignmentString, "TRAILING"_s);
	} else {
		$assign(horizontalAlignmentString, ""_s);
	}
	$var($String, commandString, this->command != nullptr ? this->command : ""_s);
	return $str({$($JTextComponent::paramString()), ",columns="_s, $$str(this->columns), ",columnWidth="_s, $$str(this->columnWidth), ",command="_s, commandString, ",horizontalAlignment="_s, horizontalAlignmentString});
}

$AccessibleContext* JTextField::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTextField$AccessibleJTextField, this));
	}
	return this->accessibleContext;
}

void JTextField::clinit$($Class* clazz) {
	$assignStatic(JTextField::notifyAction, "notify-field-accept"_s);
	$assignStatic(JTextField::uiClassID, "TextFieldUI"_s);
	$assignStatic(JTextField::defaultActions, $new($ActionArray, {$$new($JTextField$NotifyAction)}));
}

JTextField::JTextField() {
}

$Class* JTextField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(JTextField, action$)},
		{"actionPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JTextField, actionPropertyChangeListener)},
		{"notifyAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTextField, notifyAction)},
		{"visibility", "Ljavax/swing/BoundedRangeModel;", nullptr, $PRIVATE, $field(JTextField, visibility)},
		{"horizontalAlignment", "I", nullptr, $PRIVATE, $field(JTextField, horizontalAlignment)},
		{"columns", "I", nullptr, $PRIVATE, $field(JTextField, columns)},
		{"columnWidth", "I", nullptr, $PRIVATE, $field(JTextField, columnWidth)},
		{"command", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JTextField, command)},
		{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextField, defaultActions)},
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextField, uiClassID)},
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
	$NamedAttribute getActionsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getActionsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getActionsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getHorizontalVisibilitymethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getHorizontalVisibilitymethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getHorizontalVisibilitymethodAnnotations$$$namedAttribute},
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
	$NamedAttribute setColumnsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "the number of columns preferred for display"},
		{}
	};
	$CompoundAttribute setColumnsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColumnsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDocumentmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "the text document model"},
		{}
	};
	$CompoundAttribute setDocumentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDocumentmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JTextField.LEFT"},
		{'s', "JTextField.CENTER"},
		{'s', "JTextField.RIGHT"},
		{'s', "JTextField.LEADING"},
		{'s', "JTextField.TRAILING"},
		{'-'}
	};
	$NamedAttribute setHorizontalAlignmentmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "Set the field alignment to LEFT, CENTER, RIGHT, LEADING (the default) or TRAILING"},
		{}
	};
	$CompoundAttribute setHorizontalAlignmentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHorizontalAlignmentmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextField, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JTextField, init$, void, $String*)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JTextField, init$, void, int32_t)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JTextField, init$, void, $String*, int32_t)},
		{"<init>", "(Ljavax/swing/text/Document;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JTextField, init$, void, $Document*, $String*, int32_t)},
		{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(JTextField, actionPropertyChanged, void, $Action*, $String*)},
		{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JTextField, addActionListener, void, $ActionListener*)},
		{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED, $virtualMethod(JTextField, configurePropertiesFromAction, void, $Action*)},
		{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(JTextField, createActionPropertyChangeListener, $PropertyChangeListener*, $Action*)},
		{"createDefaultModel", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED, $virtualMethod(JTextField, createDefaultModel, $Document*)},
		{"fireActionPerformed", "()V", nullptr, $PROTECTED, $virtualMethod(JTextField, fireActionPerformed, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JTextField, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JTextField, getAction, $Action*)},
		{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JTextField, getActionListeners, $ActionListenerArray*), nullptr, nullptr, getActionListenersmethodAnnotations$$},
		{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JTextField, getActions, $ActionArray*), nullptr, nullptr, getActionsmethodAnnotations$$},
		{"getColumnWidth", "()I", nullptr, $PROTECTED, $virtualMethod(JTextField, getColumnWidth, int32_t)},
		{"getColumns", "()I", nullptr, $PUBLIC, $virtualMethod(JTextField, getColumns, int32_t)},
		{"getHorizontalAlignment", "()I", nullptr, $PUBLIC, $virtualMethod(JTextField, getHorizontalAlignment, int32_t)},
		{"getHorizontalVisibility", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC, $virtualMethod(JTextField, getHorizontalVisibility, $BoundedRangeModel*), nullptr, nullptr, getHorizontalVisibilitymethodAnnotations$$},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JTextField, getPreferredSize, $Dimension*)},
		{"getScrollOffset", "()I", nullptr, $PUBLIC, $virtualMethod(JTextField, getScrollOffset, int32_t)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextField, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"hasActionListener", "()Z", nullptr, 0, $virtualMethod(JTextField, hasActionListener, bool)},
		{"isListener", "(Ljava/lang/Class;Ljava/awt/event/ActionListener;)Z", "(Ljava/lang/Class<*>;Ljava/awt/event/ActionListener;)Z", $PRIVATE, $method(JTextField, isListener, bool, $Class*, $ActionListener*)},
		{"isValidateRoot", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextField, isValidateRoot, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JTextField, paramString, $String*)},
		{"postActionEvent", "()V", nullptr, $PUBLIC, $virtualMethod(JTextField, postActionEvent, void)},
		{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JTextField, removeActionListener, void, $ActionListener*)},
		{"scrollRectToVisible", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(JTextField, scrollRectToVisible, void, $Rectangle*)},
		{"setAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setAction, void, $Action*), nullptr, nullptr, setActionmethodAnnotations$$},
		{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setActionCommand, void, $String*)},
		{"setActionCommandFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(JTextField, setActionCommandFromAction, void, $Action*)},
		{"setColumns", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setColumns, void, int32_t), nullptr, nullptr, setColumnsmethodAnnotations$$},
		{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setDocument, void, $Document*), nullptr, nullptr, setDocumentmethodAnnotations$$},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setFont, void, $Font*)},
		{"setHorizontalAlignment", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setHorizontalAlignment, void, int32_t), nullptr, nullptr, setHorizontalAlignmentmethodAnnotations$$},
		{"setScrollOffset", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextField, setScrollOffset, void, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JTextField, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextField$AccessibleJTextField", "javax.swing.JTextField", "AccessibleJTextField", $PROTECTED},
		{"javax.swing.JTextField$ScrollRepainter", "javax.swing.JTextField", "ScrollRepainter", 0},
		{"javax.swing.JTextField$NotifyAction", "javax.swing.JTextField", "NotifyAction", $STATIC},
		{"javax.swing.JTextField$TextFieldActionPropertyChangeListener", "javax.swing.JTextField", "TextFieldActionPropertyChangeListener", $PRIVATE | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UIClassID"},
		{"description", 's', "A component which allows for the editing of a single line of text."},
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
		"javax.swing.JTextField",
		"javax.swing.text.JTextComponent",
		"javax.swing.SwingConstants",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JTextField$AccessibleJTextField,javax.swing.JTextField$ScrollRepainter,javax.swing.JTextField$NotifyAction,javax.swing.JTextField$TextFieldActionPropertyChangeListener"
	};
	$loadClass(JTextField, name, initialize, &classInfo$$, JTextField::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextField));
	});
	return class$;
}

$Class* JTextField::class$ = nullptr;

	} // swing
} // javax