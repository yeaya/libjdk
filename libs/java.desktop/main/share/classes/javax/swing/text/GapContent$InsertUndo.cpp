#include <javax/swing/text/GapContent$InsertUndo.h>
#include <java/util/Vector.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CannotRedoException.h>
#include <javax/swing/undo/CannotUndoException.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $GapContent = ::javax::swing::text::GapContent;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CannotRedoException = ::javax::swing::undo::CannotRedoException;
using $CannotUndoException = ::javax::swing::undo::CannotUndoException;

namespace javax {
	namespace swing {
		namespace text {

void GapContent$InsertUndo::init$($GapContent* this$0, int32_t offset, int32_t length) {
	$set(this, this$0, this$0);
	$AbstractUndoableEdit::init$();
	this->offset = offset;
	this->length = length;
}

void GapContent$InsertUndo::undo() {
	$AbstractUndoableEdit::undo();
	try {
		$set(this, posRefs, this->this$0->getPositionsInRange(nullptr, this->offset, this->length));
		$set(this, string, this->this$0->getString(this->offset, this->length));
		this->this$0->remove(this->offset, this->length);
	} catch ($BadLocationException& bl) {
		$throwNew($CannotUndoException);
	}
}

void GapContent$InsertUndo::redo() {
	$AbstractUndoableEdit::redo();
	try {
		this->this$0->insertString(this->offset, this->string);
		$set(this, string, nullptr);
		if (this->posRefs != nullptr) {
			this->this$0->updateUndoPositions(this->posRefs, this->offset, this->length);
			$set(this, posRefs, nullptr);
		}
	} catch ($BadLocationException& bl) {
		$throwNew($CannotRedoException);
	}
}

GapContent$InsertUndo::GapContent$InsertUndo() {
}

$Class* GapContent$InsertUndo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$InsertUndo, this$0)},
		{"offset", "I", nullptr, $PROTECTED, $field(GapContent$InsertUndo, offset)},
		{"length", "I", nullptr, $PROTECTED, $field(GapContent$InsertUndo, length)},
		{"string", "Ljava/lang/String;", nullptr, $PROTECTED, $field(GapContent$InsertUndo, string)},
		{"posRefs", "Ljava/util/Vector;", nullptr, $PROTECTED, $field(GapContent$InsertUndo, posRefs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/GapContent;II)V", nullptr, $PROTECTED, $method(GapContent$InsertUndo, init$, void, $GapContent*, int32_t, int32_t)},
		{"redo", "()V", nullptr, $PUBLIC, $virtualMethod(GapContent$InsertUndo, redo, void), "javax.swing.undo.CannotRedoException"},
		{"undo", "()V", nullptr, $PUBLIC, $virtualMethod(GapContent$InsertUndo, undo, void), "javax.swing.undo.CannotUndoException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.GapContent$InsertUndo", "javax.swing.text.GapContent", "InsertUndo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.GapContent$InsertUndo",
		"javax.swing.undo.AbstractUndoableEdit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.GapContent"
	};
	$loadClass(GapContent$InsertUndo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GapContent$InsertUndo));
	});
	return class$;
}

$Class* GapContent$InsertUndo::class$ = nullptr;

		} // text
	} // swing
} // javax