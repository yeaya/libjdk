#include <javax/swing/text/AbstractDocument$UndoRedoDocumentEvent.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

#undef INSERT
#undef REMOVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

void AbstractDocument$UndoRedoDocumentEvent::init$($AbstractDocument* this$0, $AbstractDocument$DefaultDocumentEvent* src, bool isUndo) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, src, nullptr);
	$set(this, type, nullptr);
	$set(this, src, src);
	if (isUndo) {
		$init($DocumentEvent$EventType);
		if ($$nc($nc(src)->getType())->equals($DocumentEvent$EventType::INSERT)) {
			$set(this, type, $DocumentEvent$EventType::REMOVE);
		} else if ($$nc(src->getType())->equals($DocumentEvent$EventType::REMOVE)) {
			$set(this, type, $DocumentEvent$EventType::INSERT);
		} else {
			$set(this, type, src->getType());
		}
	} else {
		$set(this, type, $nc(src)->getType());
	}
}

$AbstractDocument$DefaultDocumentEvent* AbstractDocument$UndoRedoDocumentEvent::getSource() {
	return this->src;
}

int32_t AbstractDocument$UndoRedoDocumentEvent::getOffset() {
	return $nc(this->src)->getOffset();
}

int32_t AbstractDocument$UndoRedoDocumentEvent::getLength() {
	return $nc(this->src)->getLength();
}

$Document* AbstractDocument$UndoRedoDocumentEvent::getDocument() {
	return $nc(this->src)->getDocument();
}

$DocumentEvent$EventType* AbstractDocument$UndoRedoDocumentEvent::getType() {
	return this->type;
}

$DocumentEvent$ElementChange* AbstractDocument$UndoRedoDocumentEvent::getChange($Element* elem) {
	return $nc(this->src)->getChange(elem);
}

AbstractDocument$UndoRedoDocumentEvent::AbstractDocument$UndoRedoDocumentEvent() {
}

$Class* AbstractDocument$UndoRedoDocumentEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$UndoRedoDocumentEvent, this$0)},
		{"src", "Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;", nullptr, $PRIVATE, $field(AbstractDocument$UndoRedoDocumentEvent, src)},
		{"type", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PRIVATE, $field(AbstractDocument$UndoRedoDocumentEvent, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Z)V", nullptr, $PUBLIC, $method(AbstractDocument$UndoRedoDocumentEvent, init$, void, $AbstractDocument*, $AbstractDocument$DefaultDocumentEvent*, bool)},
		{"getChange", "(Ljavax/swing/text/Element;)Ljavax/swing/event/DocumentEvent$ElementChange;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$UndoRedoDocumentEvent, getChange, $DocumentEvent$ElementChange*, $Element*)},
		{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$UndoRedoDocumentEvent, getDocument, $Document*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$UndoRedoDocumentEvent, getLength, int32_t)},
		{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$UndoRedoDocumentEvent, getOffset, int32_t)},
		{"getSource", "()Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$UndoRedoDocumentEvent, getSource, $AbstractDocument$DefaultDocumentEvent*)},
		{"getType", "()Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$UndoRedoDocumentEvent, getType, $DocumentEvent$EventType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$UndoRedoDocumentEvent", "javax.swing.text.AbstractDocument", "UndoRedoDocumentEvent", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AbstractDocument$UndoRedoDocumentEvent",
		"java.lang.Object",
		"javax.swing.event.DocumentEvent",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AbstractDocument"
	};
	$loadClass(AbstractDocument$UndoRedoDocumentEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocument$UndoRedoDocumentEvent);
	});
	return class$;
}

$Class* AbstractDocument$UndoRedoDocumentEvent::class$ = nullptr;

		} // text
	} // swing
} // javax