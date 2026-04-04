#include <javax/swing/JPasswordField.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField$AccessibleJPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

#undef TRUE

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Arrays = ::java::util::Arrays;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField$AccessibleJPasswordField = ::javax::swing::JPasswordField$AccessibleJPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {

$String* JPasswordField::uiClassID = nullptr;

void JPasswordField::init$() {
	JPasswordField::init$(nullptr, nullptr, 0);
}

void JPasswordField::init$($String* text) {
	JPasswordField::init$(nullptr, text, 0);
}

void JPasswordField::init$(int32_t columns) {
	JPasswordField::init$(nullptr, nullptr, columns);
}

void JPasswordField::init$($String* text, int32_t columns) {
	JPasswordField::init$(nullptr, text, columns);
}

void JPasswordField::init$($Document* doc, $String* txt, int32_t columns) {
	$JTextField::init$(doc, txt, columns);
	this->echoCharSet = false;
	enableInputMethods(false);
}

$String* JPasswordField::getUIClassID() {
	return JPasswordField::uiClassID;
}

void JPasswordField::updateUI() {
	if (!this->echoCharSet) {
		this->echoChar = u'*';
	}
	$JTextField::updateUI();
}

char16_t JPasswordField::getEchoChar() {
	return this->echoChar;
}

void JPasswordField::setEchoChar(char16_t c) {
	this->echoChar = c;
	this->echoCharSet = true;
	repaint();
	revalidate();
}

bool JPasswordField::echoCharIsSet() {
	return this->echoChar != 0;
}

void JPasswordField::cut() {
	if (!$equals(getClientProperty("JPasswordField.cutCopyAllowed"_s), $Boolean::TRUE)) {
		$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
	} else {
		$JTextField::cut();
	}
}

void JPasswordField::copy() {
	if (!$equals(getClientProperty("JPasswordField.cutCopyAllowed"_s), $Boolean::TRUE)) {
		$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
	} else {
		$JTextField::copy();
	}
}

$String* JPasswordField::getText() {
	return $JTextField::getText();
}

$String* JPasswordField::getText(int32_t offs, int32_t len) {
	return $JTextField::getText(offs, len);
}

void JPasswordField::setText($String* t) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	int32_t nleft = $nc(doc)->getLength();
	$var($Segment, text, $new($Segment));
	text->setPartialReturn(true);
	int32_t offs = 0;
	try {
		while (nleft > 0) {
			doc->getText(offs, nleft, text);
			$Arrays::fill(text->array, text->offset, text->count + text->offset, u'\0');
			nleft -= text->count;
			offs += text->count;
		}
	} catch ($BadLocationException& ignored) {
	}
	$JTextField::setText(t);
}

$chars* JPasswordField::getPassword() {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	$var($Segment, txt, $new($Segment));
	try {
		$nc(doc)->getText(0, $nc(doc)->getLength(), txt);
	} catch ($BadLocationException& e) {
		return nullptr;
	}
	$var($chars, retValue, $new($chars, txt->count));
	$System::arraycopy(txt->array, txt->offset, retValue, 0, txt->count);
	return retValue;
}

void JPasswordField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JPasswordField::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JPasswordField::paramString() {
	$useLocalObjectStack();
	return $str({$($JTextField::paramString()), ",echoChar="_s, $$str(this->echoChar)});
}

bool JPasswordField::customSetUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "echoChar"_s) {
		if (!this->echoCharSet) {
			setEchoChar($nc($cast($Character, value))->charValue());
			this->echoCharSet = false;
		}
		return true;
	}
	return false;
}

$AccessibleContext* JPasswordField::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JPasswordField$AccessibleJPasswordField, this));
	}
	return this->accessibleContext;
}

JPasswordField::JPasswordField() {
}

void JPasswordField::clinit$($Class* clazz) {
	$assignStatic(JPasswordField::uiClassID, "PasswordFieldUI"_s);
}

$Class* JPasswordField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPasswordField, uiClassID)},
		{"echoChar", "C", nullptr, $PRIVATE, $field(JPasswordField, echoChar)},
		{"echoCharSet", "Z", nullptr, $PRIVATE, $field(JPasswordField, echoCharSet)},
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
	$NamedAttribute getPasswordmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getPasswordmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getPasswordmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getTextmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getTextmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
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
	$NamedAttribute setEchoCharmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "character to display in place of the real characters"},
		{}
	};
	$CompoundAttribute setEchoCharmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEchoCharmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "the text of this component"},
		{}
	};
	$CompoundAttribute setTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPasswordField, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JPasswordField, init$, void, $String*)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JPasswordField, init$, void, int32_t)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JPasswordField, init$, void, $String*, int32_t)},
		{"<init>", "(Ljavax/swing/text/Document;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JPasswordField, init$, void, $Document*, $String*, int32_t)},
		{"copy", "()V", nullptr, $PUBLIC, $virtualMethod(JPasswordField, copy, void)},
		{"customSetUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, 0, $virtualMethod(JPasswordField, customSetUIProperty, bool, $String*, Object$*)},
		{"cut", "()V", nullptr, $PUBLIC, $virtualMethod(JPasswordField, cut, void)},
		{"echoCharIsSet", "()Z", nullptr, $PUBLIC, $virtualMethod(JPasswordField, echoCharIsSet, bool)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JPasswordField, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getEchoChar", "()C", nullptr, $PUBLIC, $virtualMethod(JPasswordField, getEchoChar, char16_t)},
		{"getPassword", "()[C", nullptr, $PUBLIC, $virtualMethod(JPasswordField, getPassword, $chars*), nullptr, nullptr, getPasswordmethodAnnotations$$},
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JPasswordField, getText, $String*), nullptr, nullptr, getTextmethodAnnotations$$},
		{"getText", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JPasswordField, getText, $String*, int32_t, int32_t), "javax.swing.text.BadLocationException", nullptr, getTextmethodAnnotations$$$1},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JPasswordField, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JPasswordField, paramString, $String*)},
		{"setEchoChar", "(C)V", nullptr, $PUBLIC, $virtualMethod(JPasswordField, setEchoChar, void, char16_t), nullptr, nullptr, setEchoCharmethodAnnotations$$},
		{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JPasswordField, setText, void, $String*), nullptr, nullptr, setTextmethodAnnotations$$},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JPasswordField, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JPasswordField, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JPasswordField$AccessibleJPasswordField", "javax.swing.JPasswordField", "AccessibleJPasswordField", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"description", 's', "Allows the editing of a line of text but doesn\'t show the characters."},
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
		"javax.swing.JPasswordField",
		"javax.swing.JTextField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JPasswordField$AccessibleJPasswordField"
	};
	$loadClass(JPasswordField, name, initialize, &classInfo$$, JPasswordField::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JPasswordField));
	});
	return class$;
}

$Class* JPasswordField::class$ = nullptr;

	} // swing
} // javax