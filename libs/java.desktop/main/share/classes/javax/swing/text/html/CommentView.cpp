#include <javax/swing/text/html/CommentView.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CommentView$CommentBorder.h>
#include <javax/swing/text/html/EditableView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HiddenTagView.h>
#include <jcpp.h>

#undef COMMENT

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $Border = ::javax::swing::border::Border;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $CommentView$CommentBorder = ::javax::swing::text::html::CommentView$CommentBorder;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$Border* CommentView::CBorder = nullptr;

void CommentView::init$($Element* e) {
	$HiddenTagView::init$(e);
}

$Component* CommentView::createComponent() {
	$useLocalObjectStack();
	$var($Container, host, getContainer());
	if (host != nullptr && !$cast($JTextComponent, host)->isEditable()) {
		return nullptr;
	}
	$var($JTextArea, ta, $new($JTextArea, $(getRepresentedText())));
	$var($Document, doc, getDocument());
	$var($Font, font, nullptr);
	if ($instanceOf($StyledDocument, doc)) {
		$assign(font, $cast($StyledDocument, doc)->getFont($(getAttributes())));
		ta->setFont(font);
	} else {
		$assign(font, ta->getFont());
	}
	updateYAlign(font);
	ta->setBorder(CommentView::CBorder);
	$$nc(ta->getDocument())->addDocumentListener(this);
	ta->setFocusable(isVisible());
	return ta;
}

void CommentView::resetBorder() {
}

void CommentView::_updateModelFromText() {
	$useLocalObjectStack();
	$var($JTextComponent, textC, getTextComponent());
	$var($Document, doc, getDocument());
	if (textC != nullptr && doc != nullptr) {
		$var($String, text, textC->getText());
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		this->isSettingAttributes = true;
		$var($Throwable, var$0, nullptr);
		try {
			$init($HTML$Attribute);
			sas->addAttribute($HTML$Attribute::COMMENT, text);
			int32_t var$1 = getStartOffset();
			int32_t var$2 = getEndOffset();
			$cast($StyledDocument, doc)->setCharacterAttributes(var$1, var$2 - getStartOffset(), sas, false);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			this->isSettingAttributes = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$JTextComponent* CommentView::getTextComponent() {
	return $cast($JTextComponent, getComponent());
}

$String* CommentView::getRepresentedText() {
	$useLocalObjectStack();
	$var($AttributeSet, as, $$nc(getElement())->getAttributes());
	if (as != nullptr) {
		$init($HTML$Attribute);
		$var($Object, comment, as->getAttribute($HTML$Attribute::COMMENT));
		if ($instanceOf($String, comment)) {
			return $cast($String, comment);
		}
	}
	return ""_s;
}

void CommentView::clinit$($Class* clazz) {
	$assignStatic(CommentView::CBorder, $new($CommentView$CommentBorder));
}

CommentView::CommentView() {
}

$Class* CommentView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(CommentView, CBorder)},
		{"commentPadding", "I", nullptr, $STATIC | $FINAL, $constField(CommentView, commentPadding)},
		{"commentPaddingD", "I", nullptr, $STATIC | $FINAL, $constField(CommentView, commentPaddingD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(CommentView, init$, void, $Element*)},
		{"_updateModelFromText", "()V", nullptr, 0, $virtualMethod(CommentView, _updateModelFromText, void)},
		{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED, $virtualMethod(CommentView, createComponent, $Component*)},
		{"getRepresentedText", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(CommentView, getRepresentedText, $String*)},
		{"getTextComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, 0, $virtualMethod(CommentView, getTextComponent, $JTextComponent*)},
		{"resetBorder", "()V", nullptr, 0, $virtualMethod(CommentView, resetBorder, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CommentView$CommentBorder", "javax.swing.text.html.CommentView", "CommentBorder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CommentView",
		"javax.swing.text.html.HiddenTagView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.html.CommentView$CommentBorder"
	};
	$loadClass(CommentView, name, initialize, &classInfo$$, CommentView::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CommentView));
	});
	return class$;
}

$Class* CommentView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax