#include <javax/swing/text/JTextComponent$InputMethodRequestsHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

int32_t JTextComponent$InputMethodRequestsHandler::hashCode() {
	return this->$InputMethodRequests::hashCode();
}

bool JTextComponent$InputMethodRequestsHandler::equals(Object$* arg0) {
	return this->$InputMethodRequests::equals(arg0);
}

$Object* JTextComponent$InputMethodRequestsHandler::clone() {
	return this->$InputMethodRequests::clone();
}

$String* JTextComponent$InputMethodRequestsHandler::toString() {
	return this->$InputMethodRequests::toString();
}

void JTextComponent$InputMethodRequestsHandler::finalize() {
	this->$InputMethodRequests::finalize();
}

void JTextComponent$InputMethodRequestsHandler::init$($JTextComponent* this$0) {
	$set(this, this$0, this$0);
}

$AttributedCharacterIterator* JTextComponent$InputMethodRequestsHandler::cancelLatestCommittedText($AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalObjectStack();
	$var($Document, doc, this->this$0->getDocument());
	if ((doc != nullptr) && (this->this$0->latestCommittedTextStart != nullptr) && (!this->this$0->latestCommittedTextStart->equals(this->this$0->latestCommittedTextEnd))) {
		try {
			int32_t startIndex = this->this$0->latestCommittedTextStart->getOffset();
			int32_t endIndex = $nc(this->this$0->latestCommittedTextEnd)->getOffset();
			$var($String, latestCommittedText, doc->getText(startIndex, endIndex - startIndex));
			doc->remove(startIndex, endIndex - startIndex);
			return $$new($AttributedString, latestCommittedText)->getIterator();
		} catch ($BadLocationException& ble) {
		}
	}
	return nullptr;
}

$AttributedCharacterIterator* JTextComponent$InputMethodRequestsHandler::getCommittedText(int32_t beginIndex, int32_t endIndex, $AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalObjectStack();
	int32_t composedStartIndex = 0;
	int32_t composedEndIndex = 0;
	if (this->this$0->composedTextExists()) {
		composedStartIndex = $nc(this->this$0->composedTextStart)->getOffset();
		composedEndIndex = $nc(this->this$0->composedTextEnd)->getOffset();
	}
	$var($String, committed, nullptr);
	try {
		if (beginIndex < composedStartIndex) {
			if (endIndex <= composedStartIndex) {
				$assign(committed, this->this$0->getText(beginIndex, endIndex - beginIndex));
			} else {
				int32_t firstPartLength = composedStartIndex - beginIndex;
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append($(this->this$0->getText(beginIndex, firstPartLength)));
				var$0->append($(this->this$0->getText(composedEndIndex, endIndex - beginIndex - firstPartLength)));
				$assign(committed, $str(var$0));
			}
		} else {
			$assign(committed, this->this$0->getText(beginIndex + (composedEndIndex - composedStartIndex), endIndex - beginIndex));
		}
	} catch ($BadLocationException& ble) {
		$throwNew($IllegalArgumentException, "Invalid range"_s);
	}
	return $$new($AttributedString, committed)->getIterator();
}

int32_t JTextComponent$InputMethodRequestsHandler::getCommittedTextLength() {
	$var($Document, doc, this->this$0->getDocument());
	int32_t length = 0;
	if (doc != nullptr) {
		length = doc->getLength();
		if (this->this$0->composedTextContent != nullptr) {
			if (this->this$0->composedTextEnd == nullptr || this->this$0->composedTextStart == nullptr) {
				length -= this->this$0->composedTextContent->length();
			} else {
				int32_t var$0 = this->this$0->composedTextEnd->getOffset();
				length -= var$0 - this->this$0->composedTextStart->getOffset();
			}
		}
	}
	return length;
}

int32_t JTextComponent$InputMethodRequestsHandler::getInsertPositionOffset() {
	int32_t composedStartIndex = 0;
	int32_t composedEndIndex = 0;
	if (this->this$0->composedTextExists()) {
		composedStartIndex = $nc(this->this$0->composedTextStart)->getOffset();
		composedEndIndex = $nc(this->this$0->composedTextEnd)->getOffset();
	}
	int32_t caretIndex = this->this$0->getCaretPosition();
	if (caretIndex < composedStartIndex) {
		return caretIndex;
	} else if (caretIndex < composedEndIndex) {
		return composedStartIndex;
	} else {
		return caretIndex - (composedEndIndex - composedStartIndex);
	}
}

$TextHitInfo* JTextComponent$InputMethodRequestsHandler::getLocationOffset(int32_t x, int32_t y) {
	if (this->this$0->composedTextAttribute == nullptr) {
		return nullptr;
	} else {
		$var($Point, p, this->this$0->getLocationOnScreen());
		$nc(p)->x = x - $nc(p)->x;
		p->y = y - p->y;
		int32_t pos = this->this$0->viewToModel(p);
		bool var$0 = pos >= $nc(this->this$0->composedTextStart)->getOffset();
		if (var$0 && (pos <= $nc(this->this$0->composedTextEnd)->getOffset())) {
			return $TextHitInfo::leading(pos - $nc(this->this$0->composedTextStart)->getOffset());
		} else {
			return nullptr;
		}
	}
}

$Rectangle* JTextComponent$InputMethodRequestsHandler::getTextLocation($TextHitInfo* offset) {
	$useLocalObjectStack();
	$var($Rectangle, r, nullptr);
	try {
		$assign(r, this->this$0->modelToView(this->this$0->getCaretPosition()));
		if (r != nullptr) {
			$var($Point, p, this->this$0->getLocationOnScreen());
			r->translate($nc(p)->x, $nc(p)->y);
		}
	} catch ($BadLocationException& ble) {
		$assign(r, nullptr);
	}
	if (r == nullptr) {
		$assign(r, $new($Rectangle));
	}
	return r;
}

$AttributedCharacterIterator* JTextComponent$InputMethodRequestsHandler::getSelectedText($AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalObjectStack();
	$var($String, selection, this->this$0->getSelectedText());
	if (selection != nullptr) {
		return $$new($AttributedString, selection)->getIterator();
	} else {
		return nullptr;
	}
}

void JTextComponent$InputMethodRequestsHandler::changedUpdate($DocumentEvent* e) {
	$set(this->this$0, latestCommittedTextStart, $set(this->this$0, latestCommittedTextEnd, nullptr));
}

void JTextComponent$InputMethodRequestsHandler::insertUpdate($DocumentEvent* e) {
	$set(this->this$0, latestCommittedTextStart, $set(this->this$0, latestCommittedTextEnd, nullptr));
}

void JTextComponent$InputMethodRequestsHandler::removeUpdate($DocumentEvent* e) {
	$set(this->this$0, latestCommittedTextStart, $set(this->this$0, latestCommittedTextEnd, nullptr));
}

JTextComponent$InputMethodRequestsHandler::JTextComponent$InputMethodRequestsHandler() {
}

$Class* JTextComponent$InputMethodRequestsHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$InputMethodRequestsHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(JTextComponent$InputMethodRequestsHandler, init$, void, $JTextComponent*)},
		{"cancelLatestCommittedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, cancelLatestCommittedText, $AttributedCharacterIterator*, $AttributedCharacterIterator$AttributeArray*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, changedUpdate, void, $DocumentEvent*)},
		{"getCommittedText", "(II[Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, getCommittedText, $AttributedCharacterIterator*, int32_t, int32_t, $AttributedCharacterIterator$AttributeArray*)},
		{"getCommittedTextLength", "()I", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, getCommittedTextLength, int32_t)},
		{"getInsertPositionOffset", "()I", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, getInsertPositionOffset, int32_t)},
		{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, getLocationOffset, $TextHitInfo*, int32_t, int32_t)},
		{"getSelectedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, getSelectedText, $AttributedCharacterIterator*, $AttributedCharacterIterator$AttributeArray*)},
		{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, getTextLocation, $Rectangle*, $TextHitInfo*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$InputMethodRequestsHandler, removeUpdate, void, $DocumentEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$InputMethodRequestsHandler", "javax.swing.text.JTextComponent", "InputMethodRequestsHandler", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$InputMethodRequestsHandler",
		"java.lang.Object",
		"java.awt.im.InputMethodRequests,javax.swing.event.DocumentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$InputMethodRequestsHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextComponent$InputMethodRequestsHandler));
	});
	return class$;
}

$Class* JTextComponent$InputMethodRequestsHandler::class$ = nullptr;

		} // text
	} // swing
} // javax