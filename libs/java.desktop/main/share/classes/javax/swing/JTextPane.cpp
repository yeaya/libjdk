#include <javax/swing/JTextPane.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Math.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $UIManager = ::javax::swing::UIManager;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

namespace javax {
	namespace swing {

$String* JTextPane::uiClassID = nullptr;

void JTextPane::init$() {
	$useLocalObjectStack();
	$JEditorPane::init$();
	$var($EditorKit, editorKit, createDefaultEditorKit());
	$var($String, contentType, $nc(editorKit)->getContentType());
	bool var$0 = contentType != nullptr;
	if (var$0) {
		$init($JEditorPane);
		var$0 = $equals(getEditorKitClassNameForContentType(contentType), $nc($JEditorPane::defaultEditorKitMap)->get(contentType));
	}
	if (var$0) {
		setEditorKitForContentType(contentType, editorKit);
	}
	setEditorKit(editorKit);
}

void JTextPane::init$($StyledDocument* doc) {
	JTextPane::init$();
	setStyledDocument(doc);
}

$String* JTextPane::getUIClassID() {
	return JTextPane::uiClassID;
}

void JTextPane::setDocument($Document* doc) {
	if ($instanceOf($StyledDocument, doc)) {
		$JEditorPane::setDocument(doc);
	} else {
		$throwNew($IllegalArgumentException, "Model must be StyledDocument"_s);
	}
}

void JTextPane::setStyledDocument($StyledDocument* doc) {
	$JEditorPane::setDocument(doc);
}

$StyledDocument* JTextPane::getStyledDocument() {
	return $cast($StyledDocument, getDocument());
}

void JTextPane::replaceSelection($String* content) {
	replaceSelection(content, true);
}

void JTextPane::replaceSelection($String* content, bool checkEditable) {
	$useLocalObjectStack();
	if (checkEditable && !isEditable()) {
		$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
		return;
	}
	$var($Document, doc, getStyledDocument());
	if (doc != nullptr) {
		try {
			$var($Caret, caret, getCaret());
			bool composedTextSaved = saveComposedText($nc(caret)->getDot());
			int32_t var$0 = caret->getDot();
			int32_t p0 = $Math::min(var$0, caret->getMark());
			int32_t var$1 = caret->getDot();
			int32_t p1 = $Math::max(var$1, caret->getMark());
			$var($AttributeSet, attr, $$nc(getInputAttributes())->copyAttributes());
			if ($instanceOf($AbstractDocument, doc)) {
				$cast($AbstractDocument, doc)->replace(p0, p1 - p0, content, attr);
			} else {
				if (p0 != p1) {
					doc->remove(p0, p1 - p0);
				}
				if (content != nullptr && content->length() > 0) {
					doc->insertString(p0, content, attr);
				}
			}
			if (composedTextSaved) {
				restoreComposedText();
			}
		} catch ($BadLocationException& e) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
		}
	}
}

void JTextPane::insertComponent($Component* c) {
	$var($MutableAttributeSet, inputAttributes, getInputAttributes());
	$nc(inputAttributes)->removeAttributes(inputAttributes);
	$StyleConstants::setComponent(inputAttributes, c);
	replaceSelection(" "_s, false);
	inputAttributes->removeAttributes(inputAttributes);
}

void JTextPane::insertIcon($Icon* g) {
	$var($MutableAttributeSet, inputAttributes, getInputAttributes());
	$nc(inputAttributes)->removeAttributes(inputAttributes);
	$StyleConstants::setIcon(inputAttributes, g);
	replaceSelection(" "_s, false);
	inputAttributes->removeAttributes(inputAttributes);
}

$Style* JTextPane::addStyle($String* nm, $Style* parent) {
	$var($StyledDocument, doc, getStyledDocument());
	return $nc(doc)->addStyle(nm, parent);
}

void JTextPane::removeStyle($String* nm) {
	$var($StyledDocument, doc, getStyledDocument());
	$nc(doc)->removeStyle(nm);
}

$Style* JTextPane::getStyle($String* nm) {
	$var($StyledDocument, doc, getStyledDocument());
	return $nc(doc)->getStyle(nm);
}

void JTextPane::setLogicalStyle($Style* s) {
	$var($StyledDocument, doc, getStyledDocument());
	$nc(doc)->setLogicalStyle(getCaretPosition(), s);
}

$Style* JTextPane::getLogicalStyle() {
	$var($StyledDocument, doc, getStyledDocument());
	return $nc(doc)->getLogicalStyle(getCaretPosition());
}

$AttributeSet* JTextPane::getCharacterAttributes() {
	$useLocalObjectStack();
	$var($StyledDocument, doc, getStyledDocument());
	$var($Element, run, $nc(doc)->getCharacterElement(getCaretPosition()));
	if (run != nullptr) {
		return run->getAttributes();
	}
	return nullptr;
}

void JTextPane::setCharacterAttributes($AttributeSet* attr, bool replace) {
	$useLocalObjectStack();
	int32_t p0 = getSelectionStart();
	int32_t p1 = getSelectionEnd();
	if (p0 != p1) {
		$var($StyledDocument, doc, getStyledDocument());
		$nc(doc)->setCharacterAttributes(p0, p1 - p0, attr, replace);
	} else {
		$var($MutableAttributeSet, inputAttributes, getInputAttributes());
		if (replace) {
			$nc(inputAttributes)->removeAttributes(inputAttributes);
		}
		$nc(inputAttributes)->addAttributes(attr);
	}
}

$AttributeSet* JTextPane::getParagraphAttributes() {
	$useLocalObjectStack();
	$var($StyledDocument, doc, getStyledDocument());
	$var($Element, paragraph, $nc(doc)->getParagraphElement(getCaretPosition()));
	if (paragraph != nullptr) {
		return paragraph->getAttributes();
	}
	return nullptr;
}

void JTextPane::setParagraphAttributes($AttributeSet* attr, bool replace) {
	int32_t p0 = getSelectionStart();
	int32_t p1 = getSelectionEnd();
	$var($StyledDocument, doc, getStyledDocument());
	$nc(doc)->setParagraphAttributes(p0, p1 - p0, attr, replace);
}

$MutableAttributeSet* JTextPane::getInputAttributes() {
	return $$nc(getStyledEditorKit())->getInputAttributes();
}

$StyledEditorKit* JTextPane::getStyledEditorKit() {
	return $cast($StyledEditorKit, getEditorKit());
}

void JTextPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JTextPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$EditorKit* JTextPane::createDefaultEditorKit() {
	return $new($StyledEditorKit);
}

void JTextPane::setEditorKit($EditorKit* kit) {
	if ($instanceOf($StyledEditorKit, kit)) {
		$JEditorPane::setEditorKit(kit);
	} else {
		$throwNew($IllegalArgumentException, "Must be StyledEditorKit"_s);
	}
}

$String* JTextPane::paramString() {
	return $JEditorPane::paramString();
}

JTextPane::JTextPane() {
}

void JTextPane::clinit$($Class* clazz) {
	$assignStatic(JTextPane::uiClassID, "TextPaneUI"_s);
}

$Class* JTextPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextPane, uiClassID)},
		{}
	};
	$NamedAttribute getCharacterAttributesmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getCharacterAttributesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getCharacterAttributesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getInputAttributesmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getInputAttributesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getInputAttributesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getParagraphAttributesmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getParagraphAttributesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getParagraphAttributesmethodAnnotations$$$namedAttribute},
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextPane, init$, void)},
		{"<init>", "(Ljavax/swing/text/StyledDocument;)V", nullptr, $PUBLIC, $method(JTextPane, init$, void, $StyledDocument*)},
		{"addStyle", "(Ljava/lang/String;Ljavax/swing/text/Style;)Ljavax/swing/text/Style;", nullptr, $PUBLIC, $virtualMethod(JTextPane, addStyle, $Style*, $String*, $Style*)},
		{"createDefaultEditorKit", "()Ljavax/swing/text/EditorKit;", nullptr, $PROTECTED, $virtualMethod(JTextPane, createDefaultEditorKit, $EditorKit*)},
		{"getCharacterAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getCharacterAttributes, $AttributeSet*), nullptr, nullptr, getCharacterAttributesmethodAnnotations$$},
		{"getInputAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getInputAttributes, $MutableAttributeSet*), nullptr, nullptr, getInputAttributesmethodAnnotations$$},
		{"getLogicalStyle", "()Ljavax/swing/text/Style;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getLogicalStyle, $Style*)},
		{"getParagraphAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getParagraphAttributes, $AttributeSet*), nullptr, nullptr, getParagraphAttributesmethodAnnotations$$},
		{"getStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getStyle, $Style*, $String*)},
		{"getStyledDocument", "()Ljavax/swing/text/StyledDocument;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getStyledDocument, $StyledDocument*)},
		{"getStyledEditorKit", "()Ljavax/swing/text/StyledEditorKit;", nullptr, $PROTECTED | $FINAL, $method(JTextPane, getStyledEditorKit, $StyledEditorKit*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextPane, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"insertComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, insertComponent, void, $Component*)},
		{"insertIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, insertIcon, void, $Icon*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JTextPane, paramString, $String*)},
		{"removeStyle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, removeStyle, void, $String*)},
		{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, replaceSelection, void, $String*)},
		{"replaceSelection", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(JTextPane, replaceSelection, void, $String*, bool)},
		{"setCharacterAttributes", "(Ljavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, setCharacterAttributes, void, $AttributeSet*, bool)},
		{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, setDocument, void, $Document*)},
		{"setEditorKit", "(Ljavax/swing/text/EditorKit;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextPane, setEditorKit, void, $EditorKit*)},
		{"setLogicalStyle", "(Ljavax/swing/text/Style;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, setLogicalStyle, void, $Style*)},
		{"setParagraphAttributes", "(Ljavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, setParagraphAttributes, void, $AttributeSet*, bool)},
		{"setStyledDocument", "(Ljavax/swing/text/StyledDocument;)V", nullptr, $PUBLIC, $virtualMethod(JTextPane, setStyledDocument, void, $StyledDocument*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JTextPane, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"description", 's', "A text component that can be marked up with attributes that are graphically represented."},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTextPane",
		"javax.swing.JEditorPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(JTextPane, name, initialize, &classInfo$$, JTextPane::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextPane));
	});
	return class$;
}

$Class* JTextPane::class$ = nullptr;

	} // swing
} // javax