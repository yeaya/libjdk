#include <javax/swing/JFormattedTextField.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/im/InputContext.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Number.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/DateFormat.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/Date.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>
#include <javax/swing/JFormattedTextField$CancelAction.h>
#include <javax/swing/JFormattedTextField$CommitAction.h>
#include <javax/swing/JFormattedTextField$DocumentHandler.h>
#include <javax/swing/JFormattedTextField$FocusLostHandler.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DateFormatter.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NumberFormatter.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef COMMIT
#undef COMMIT_OR_REVERT
#undef FOCUS_EVENT_MASK
#undef FOCUS_LOST
#undef NAME
#undef PERSIST
#undef REVERT

using $ActionArray = $Array<::javax::swing::Action>;
using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputContext = ::java::awt::im::InputContext;
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
using $Number = ::java::lang::Number;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $DateFormat = ::java::text::DateFormat;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $Date = ::java::util::Date;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JFormattedTextField$AbstractFormatterFactory = ::javax::swing::JFormattedTextField$AbstractFormatterFactory;
using $JFormattedTextField$CancelAction = ::javax::swing::JFormattedTextField$CancelAction;
using $JFormattedTextField$CommitAction = ::javax::swing::JFormattedTextField$CommitAction;
using $JFormattedTextField$DocumentHandler = ::javax::swing::JFormattedTextField$DocumentHandler;
using $JFormattedTextField$FocusLostHandler = ::javax::swing::JFormattedTextField$FocusLostHandler;
using $JTextField = ::javax::swing::JTextField;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $DateFormatter = ::javax::swing::text::DateFormatter;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;
using $Document = ::javax::swing::text::Document;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

$String* JFormattedTextField::uiClassID = nullptr;
$ActionArray* JFormattedTextField::defaultActions = nullptr;

void JFormattedTextField::init$() {
	$JTextField::init$();
	this->composedTextExists$ = false;
	enableEvents($AWTEvent::FOCUS_EVENT_MASK);
	setFocusLostBehavior(JFormattedTextField::COMMIT_OR_REVERT);
}

void JFormattedTextField::init$(Object$* value) {
	JFormattedTextField::init$();
	setValue(value);
}

void JFormattedTextField::init$($Format* format) {
	JFormattedTextField::init$();
	setFormatterFactory($(getDefaultFormatterFactory(format)));
}

void JFormattedTextField::init$($JFormattedTextField$AbstractFormatter* formatter) {
	JFormattedTextField::init$($$new($DefaultFormatterFactory, formatter));
}

void JFormattedTextField::init$($JFormattedTextField$AbstractFormatterFactory* factory) {
	JFormattedTextField::init$();
	setFormatterFactory(factory);
}

void JFormattedTextField::init$($JFormattedTextField$AbstractFormatterFactory* factory, Object$* currentValue) {
	JFormattedTextField::init$(currentValue);
	setFormatterFactory(factory);
}

void JFormattedTextField::setFocusLostBehavior(int32_t behavior) {
	if (behavior != JFormattedTextField::COMMIT && behavior != JFormattedTextField::COMMIT_OR_REVERT && behavior != JFormattedTextField::PERSIST && behavior != JFormattedTextField::REVERT) {
		$throwNew($IllegalArgumentException, "setFocusLostBehavior must be one of: JFormattedTextField.COMMIT, JFormattedTextField.COMMIT_OR_REVERT, JFormattedTextField.PERSIST or JFormattedTextField.REVERT"_s);
	}
	this->focusLostBehavior = behavior;
}

int32_t JFormattedTextField::getFocusLostBehavior() {
	return this->focusLostBehavior;
}

void JFormattedTextField::setFormatterFactory($JFormattedTextField$AbstractFormatterFactory* tf) {
	$useLocalObjectStack();
	$var($JFormattedTextField$AbstractFormatterFactory, oldFactory, this->factory);
	$set(this, factory, tf);
	firePropertyChange("formatterFactory"_s, oldFactory, tf);
	setValue($(getValue()), true, false);
}

$JFormattedTextField$AbstractFormatterFactory* JFormattedTextField::getFormatterFactory() {
	return this->factory;
}

void JFormattedTextField::setFormatter($JFormattedTextField$AbstractFormatter* format) {
	$var($JFormattedTextField$AbstractFormatter, oldFormat, this->format);
	if (oldFormat != nullptr) {
		oldFormat->uninstall();
	}
	setEditValid(true);
	$set(this, format, format);
	if (format != nullptr) {
		format->install(this);
	}
	setEdited(false);
	firePropertyChange("textFormatter"_s, oldFormat, format);
}

$JFormattedTextField$AbstractFormatter* JFormattedTextField::getFormatter() {
	return this->format;
}

void JFormattedTextField::setValue(Object$* value) {
	if (value != nullptr && getFormatterFactory() == nullptr) {
		setFormatterFactory($(getDefaultFormatterFactory(value)));
	}
	setValue(value, true, true);
}

$Object* JFormattedTextField::getValue() {
	return this->value;
}

void JFormattedTextField::commitEdit() {
	$useLocalObjectStack();
	$var($JFormattedTextField$AbstractFormatter, format, getFormatter());
	if (format != nullptr) {
		setValue($(format->stringToValue($(getText()))), false, true);
	}
}

void JFormattedTextField::setEditValid(bool isValid) {
	$useLocalObjectStack();
	if (isValid != this->editValid) {
		this->editValid = isValid;
		$var($String, var$0, "editValid"_s);
		$var($Object, var$1, $Boolean::valueOf(!isValid));
		firePropertyChange(var$0, var$1, $($Boolean::valueOf(isValid)));
	}
}

bool JFormattedTextField::isEditValid() {
	return this->editValid;
}

void JFormattedTextField::invalidEdit() {
	$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
}

void JFormattedTextField::processInputMethodEvent($InputMethodEvent* e) {
	$var($AttributedCharacterIterator, text, $nc(e)->getText());
	int32_t commitCount = e->getCommittedCharacterCount();
	if (text != nullptr) {
		int32_t begin = text->getBeginIndex();
		int32_t end = text->getEndIndex();
		this->composedTextExists$ = ((end - begin) > commitCount);
	} else {
		this->composedTextExists$ = false;
	}
	$JTextField::processInputMethodEvent(e);
}

void JFormattedTextField::processFocusEvent($FocusEvent* e) {
	$useLocalObjectStack();
	$JTextField::processFocusEvent(e);
	if ($nc(e)->isTemporary()) {
		return;
	}
	bool var$0 = isEdited();
	if (var$0 && e->getID() == $FocusEvent::FOCUS_LOST) {
		$var($InputContext, ic, getInputContext());
		if (this->focusLostHandler == nullptr) {
			$set(this, focusLostHandler, $new($JFormattedTextField$FocusLostHandler, this));
		}
		if ((ic != nullptr) && this->composedTextExists$) {
			ic->endComposition();
			$EventQueue::invokeLater(this->focusLostHandler);
		} else {
			$nc(this->focusLostHandler)->run();
		}
	} else if (!isEdited()) {
		setValue($(getValue()), true, true);
	}
}

$ActionArray* JFormattedTextField::getActions() {
	return $TextAction::augmentList($($JTextField::getActions()), JFormattedTextField::defaultActions);
}

$String* JFormattedTextField::getUIClassID() {
	return JFormattedTextField::uiClassID;
}

void JFormattedTextField::setDocument($Document* doc) {
	if (this->documentListener != nullptr && getDocument() != nullptr) {
		$$nc(getDocument())->removeDocumentListener(this->documentListener);
	}
	$JTextField::setDocument(doc);
	if (this->documentListener == nullptr) {
		$set(this, documentListener, $new($JFormattedTextField$DocumentHandler, this));
	}
	$nc(doc)->addDocumentListener(this->documentListener);
}

void JFormattedTextField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JFormattedTextField::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

void JFormattedTextField::setFormatterActions($ActionArray* actions) {
	$useLocalObjectStack();
	if (actions == nullptr) {
		if (this->textFormatterActionMap != nullptr) {
			this->textFormatterActionMap->clear();
		}
	} else {
		if (this->textFormatterActionMap == nullptr) {
			$var($ActionMap, map, getActionMap());
			$set(this, textFormatterActionMap, $new($ActionMap));
			while (map != nullptr) {
				$var($ActionMap, parent, map->getParent());
				if ($instanceOf($UIResource, parent) || parent == nullptr) {
					map->setParent(this->textFormatterActionMap);
					$nc(this->textFormatterActionMap)->setParent(parent);
					break;
				}
				$assign(map, parent);
			}
		}
		for (int32_t counter = actions->length - 1; counter >= 0; --counter) {
			$var($Object, key, $nc(actions->get(counter))->getValue($Action::NAME));
			if (key != nullptr) {
				$nc(this->textFormatterActionMap)->put(key, actions->get(counter));
			}
		}
	}
}

void JFormattedTextField::setValue(Object$* value, bool createFormat, bool firePC) {
	$useLocalObjectStack();
	$var($Object, oldValue, this->value);
	$set(this, value, value);
	if (createFormat) {
		$var($JFormattedTextField$AbstractFormatterFactory, factory, getFormatterFactory());
		$var($JFormattedTextField$AbstractFormatter, atf, nullptr);
		if (factory != nullptr) {
			$assign(atf, factory->getFormatter(this));
		} else {
			$assign(atf, nullptr);
		}
		setFormatter(atf);
	} else {
		setEditValid(true);
	}
	setEdited(false);
	if (firePC) {
		firePropertyChange("value"_s, oldValue, value);
	}
}

void JFormattedTextField::setEdited(bool edited) {
	this->edited = edited;
}

bool JFormattedTextField::isEdited() {
	return this->edited;
}

$JFormattedTextField$AbstractFormatterFactory* JFormattedTextField::getDefaultFormatterFactory(Object$* type) {
	$useLocalObjectStack();
	if ($instanceOf($DateFormat, type)) {
		return $new($DefaultFormatterFactory, $$new($DateFormatter, $cast($DateFormat, type)));
	}
	if ($instanceOf($NumberFormat, type)) {
		return $new($DefaultFormatterFactory, $$new($NumberFormatter, $cast($NumberFormat, type)));
	}
	if ($instanceOf($Format, type)) {
		return $new($DefaultFormatterFactory, $$new($InternationalFormatter, $cast($Format, type)));
	}
	if ($instanceOf($Date, type)) {
		return $new($DefaultFormatterFactory, $$new($DateFormatter));
	}
	if ($instanceOf($Number, type)) {
		$var($JFormattedTextField$AbstractFormatter, displayFormatter, $new($NumberFormatter));
		$cast($NumberFormatter, displayFormatter)->setValueClass($of(type)->getClass());
		$var($JFormattedTextField$AbstractFormatter, editFormatter, $new($NumberFormatter, $$new($DecimalFormat, "#.#"_s)));
		$cast($NumberFormatter, editFormatter)->setValueClass($of(type)->getClass());
		return $new($DefaultFormatterFactory, displayFormatter, displayFormatter, editFormatter);
	}
	return $new($DefaultFormatterFactory, $$new($DefaultFormatter));
}

void JFormattedTextField::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JFormattedTextField::uiClassID, "FormattedTextFieldUI"_s);
	$assignStatic(JFormattedTextField::defaultActions, $new($ActionArray, {
		$$new($JFormattedTextField$CommitAction),
		$$new($JFormattedTextField$CancelAction)
	}));
}

JFormattedTextField::JFormattedTextField() {
}

$Class* JFormattedTextField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFormattedTextField, uiClassID)},
		{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFormattedTextField, defaultActions)},
		{"COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, COMMIT)},
		{"COMMIT_OR_REVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, COMMIT_OR_REVERT)},
		{"REVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, REVERT)},
		{"PERSIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, PERSIST)},
		{"factory", "Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;", nullptr, $PRIVATE, $field(JFormattedTextField, factory)},
		{"format", "Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PRIVATE, $field(JFormattedTextField, format)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JFormattedTextField, value)},
		{"editValid", "Z", nullptr, $PRIVATE, $field(JFormattedTextField, editValid)},
		{"focusLostBehavior", "I", nullptr, $PRIVATE, $field(JFormattedTextField, focusLostBehavior)},
		{"edited", "Z", nullptr, $PRIVATE, $field(JFormattedTextField, edited)},
		{"documentListener", "Ljavax/swing/event/DocumentListener;", nullptr, $PRIVATE, $field(JFormattedTextField, documentListener)},
		{"mask", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JFormattedTextField, mask)},
		{"textFormatterActionMap", "Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $field(JFormattedTextField, textFormatterActionMap)},
		{"composedTextExists", "Z", nullptr, $PRIVATE, $field(JFormattedTextField, composedTextExists$)},
		{"focusLostHandler", "Ljavax/swing/JFormattedTextField$FocusLostHandler;", nullptr, $PRIVATE, $field(JFormattedTextField, focusLostHandler)},
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
	$NamedAttribute getFormattermethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "TextFormatter, responsible for formatting the current value"},
		{}
	};
	$CompoundAttribute getFormattermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getFormattermethodAnnotations$$$namedAttribute},
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
	$NamedAttribute isEditValidmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isEditValidmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isEditValidmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute setEditValidmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "True indicates the edited value is valid"},
		{}
	};
	$CompoundAttribute setEditValidmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEditValidmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JFormattedTextField.COMMIT"},
		{'s', "JFormattedTextField.COMMIT_OR_REVERT"},
		{'s', "JFormattedTextField.REVERT"},
		{'s', "JFormattedTextField.PERSIST"},
		{'-'}
	};
	$NamedAttribute setFocusLostBehaviormethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "Behavior when component loses focus"},
		{}
	};
	$CompoundAttribute setFocusLostBehaviormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFocusLostBehaviormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFormatterFactorymethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "AbstractFormatterFactory, responsible for returning an AbstractFormatter that can format the current value."},
		{}
	};
	$CompoundAttribute setFormatterFactorymethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFormatterFactorymethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValuemethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The value to be formatted."},
		{}
	};
	$CompoundAttribute setValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFormattedTextField, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JFormattedTextField, init$, void, Object$*)},
		{"<init>", "(Ljava/text/Format;)V", nullptr, $PUBLIC, $method(JFormattedTextField, init$, void, $Format*)},
		{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC, $method(JFormattedTextField, init$, void, $JFormattedTextField$AbstractFormatter*)},
		{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;)V", nullptr, $PUBLIC, $method(JFormattedTextField, init$, void, $JFormattedTextField$AbstractFormatterFactory*)},
		{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JFormattedTextField, init$, void, $JFormattedTextField$AbstractFormatterFactory*, Object$*)},
		{"commitEdit", "()V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, commitEdit, void), "java.text.ParseException"},
		{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, getActions, $ActionArray*), nullptr, nullptr, getActionsmethodAnnotations$$},
		{"getDefaultFormatterFactory", "(Ljava/lang/Object;)Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;", nullptr, $PRIVATE, $method(JFormattedTextField, getDefaultFormatterFactory, $JFormattedTextField$AbstractFormatterFactory*, Object$*)},
		{"getFocusLostBehavior", "()I", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, getFocusLostBehavior, int32_t)},
		{"getFormatter", "()Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, getFormatter, $JFormattedTextField$AbstractFormatter*), nullptr, nullptr, getFormattermethodAnnotations$$},
		{"getFormatterFactory", "()Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, getFormatterFactory, $JFormattedTextField$AbstractFormatterFactory*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, getValue, $Object*)},
		{"invalidEdit", "()V", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField, invalidEdit, void)},
		{"isEditValid", "()Z", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, isEditValid, bool), nullptr, nullptr, isEditValidmethodAnnotations$$},
		{"isEdited", "()Z", nullptr, $PRIVATE, $method(JFormattedTextField, isEdited, bool)},
		{"processFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField, processFocusEvent, void, $FocusEvent*)},
		{"processInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField, processInputMethodEvent, void, $InputMethodEvent*)},
		{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, setDocument, void, $Document*), nullptr, nullptr, setDocumentmethodAnnotations$$},
		{"setEditValid", "(Z)V", nullptr, $PRIVATE, $method(JFormattedTextField, setEditValid, void, bool), nullptr, nullptr, setEditValidmethodAnnotations$$},
		{"setEdited", "(Z)V", nullptr, $PRIVATE, $method(JFormattedTextField, setEdited, void, bool)},
		{"setFocusLostBehavior", "(I)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, setFocusLostBehavior, void, int32_t), nullptr, nullptr, setFocusLostBehaviormethodAnnotations$$},
		{"setFormatter", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PROTECTED, $virtualMethod(JFormattedTextField, setFormatter, void, $JFormattedTextField$AbstractFormatter*)},
		{"setFormatterActions", "([Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(JFormattedTextField, setFormatterActions, void, $ActionArray*)},
		{"setFormatterFactory", "(Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, setFormatterFactory, void, $JFormattedTextField$AbstractFormatterFactory*), nullptr, nullptr, setFormatterFactorymethodAnnotations$$},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField, setValue, void, Object$*), nullptr, nullptr, setValuemethodAnnotations$$},
		{"setValue", "(Ljava/lang/Object;ZZ)V", nullptr, $PRIVATE, $method(JFormattedTextField, setValue, void, Object$*, bool, bool)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JFormattedTextField, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFormattedTextField$DocumentHandler", "javax.swing.JFormattedTextField", "DocumentHandler", $PRIVATE},
		{"javax.swing.JFormattedTextField$CancelAction", "javax.swing.JFormattedTextField", "CancelAction", $PRIVATE | $STATIC},
		{"javax.swing.JFormattedTextField$CommitAction", "javax.swing.JFormattedTextField", "CommitAction", $STATIC},
		{"javax.swing.JFormattedTextField$AbstractFormatter", "javax.swing.JFormattedTextField", "AbstractFormatter", $PUBLIC | $STATIC | $ABSTRACT},
		{"javax.swing.JFormattedTextField$AbstractFormatterFactory", "javax.swing.JFormattedTextField", "AbstractFormatterFactory", $PUBLIC | $STATIC | $ABSTRACT},
		{"javax.swing.JFormattedTextField$FocusLostHandler", "javax.swing.JFormattedTextField", "FocusLostHandler", $PRIVATE},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JFormattedTextField",
		"javax.swing.JTextField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JFormattedTextField$DocumentHandler,javax.swing.JFormattedTextField$CancelAction,javax.swing.JFormattedTextField$CommitAction,javax.swing.JFormattedTextField$AbstractFormatter,javax.swing.JFormattedTextField$AbstractFormatterFactory,javax.swing.JFormattedTextField$FocusLostHandler"
	};
	$loadClass(JFormattedTextField, name, initialize, &classInfo$$, JFormattedTextField::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFormattedTextField));
	});
	return class$;
}

$Class* JFormattedTextField::class$ = nullptr;

	} // swing
} // javax