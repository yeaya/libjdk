#include <javax/swing/text/AbstractDocument$DefaultDocumentEventUndoableWrapper.h>

#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$DefaultDocumentEventUndoableWrapper_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$DefaultDocumentEventUndoableWrapper, this$0)},
	{"dde", "Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;", nullptr, $FINAL, $field(AbstractDocument$DefaultDocumentEventUndoableWrapper, dde)},
	{}
};

$MethodInfo _AbstractDocument$DefaultDocumentEventUndoableWrapper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PUBLIC, $method(AbstractDocument$DefaultDocumentEventUndoableWrapper, init$, void, $AbstractDocument*, $AbstractDocument$DefaultDocumentEvent*)},
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, addEdit, bool, $UndoableEdit*)},
	{"canRedo", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, canRedo, bool)},
	{"canUndo", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, canUndo, bool)},
	{"die", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, die, void)},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, getPresentationName, $String*)},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, getRedoPresentationName, $String*)},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, getUndoPresentationName, $String*)},
	{"isSignificant", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, isSignificant, bool)},
	{"lockEdit", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, lockEdit, void)},
	{"redo", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, redo, void), "javax.swing.undo.CannotRedoException"},
	{"replaceEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, replaceEdit, bool, $UndoableEdit*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undo", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, undo, void), "javax.swing.undo.CannotUndoException"},
	{"unlockEdit", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultDocumentEventUndoableWrapper, unlockEdit, void)},
	{}
};

$InnerClassInfo _AbstractDocument$DefaultDocumentEventUndoableWrapper_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$DefaultDocumentEventUndoableWrapper", "javax.swing.text.AbstractDocument", "DefaultDocumentEventUndoableWrapper", 0},
	{"javax.swing.text.AbstractDocument$DefaultDocumentEvent", "javax.swing.text.AbstractDocument", "DefaultDocumentEvent", $PUBLIC},
	{}
};

$ClassInfo _AbstractDocument$DefaultDocumentEventUndoableWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$DefaultDocumentEventUndoableWrapper",
	"javax.swing.text.AbstractDocument$DefaultDocumentEvent",
	"sun.swing.text.UndoableEditLockSupport",
	_AbstractDocument$DefaultDocumentEventUndoableWrapper_FieldInfo_,
	_AbstractDocument$DefaultDocumentEventUndoableWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$DefaultDocumentEventUndoableWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$DefaultDocumentEventUndoableWrapper($Class* clazz) {
	return $of($alloc(AbstractDocument$DefaultDocumentEventUndoableWrapper));
}

$String* AbstractDocument$DefaultDocumentEventUndoableWrapper::toString() {
	 return this->$AbstractDocument$DefaultDocumentEvent::toString();
}

int32_t AbstractDocument$DefaultDocumentEventUndoableWrapper::hashCode() {
	 return this->$AbstractDocument$DefaultDocumentEvent::hashCode();
}

bool AbstractDocument$DefaultDocumentEventUndoableWrapper::equals(Object$* arg0) {
	 return this->$AbstractDocument$DefaultDocumentEvent::equals(arg0);
}

$Object* AbstractDocument$DefaultDocumentEventUndoableWrapper::clone() {
	 return this->$AbstractDocument$DefaultDocumentEvent::clone();
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::finalize() {
	this->$AbstractDocument$DefaultDocumentEvent::finalize();
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::init$($AbstractDocument* this$0, $AbstractDocument$DefaultDocumentEvent* dde) {
	$set(this, this$0, this$0);
	$var($AbstractDocument, var$0, this$0);
	int32_t var$1 = $nc(dde)->getOffset();
	$AbstractDocument$DefaultDocumentEvent::init$(var$0, var$1, dde->getLength(), dde->type);
	$set(this, dde, dde);
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::undo() {
	$nc(this->dde)->undo();
}

bool AbstractDocument$DefaultDocumentEventUndoableWrapper::canUndo() {
	return $nc(this->dde)->canUndo();
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::redo() {
	$nc(this->dde)->redo();
}

bool AbstractDocument$DefaultDocumentEventUndoableWrapper::canRedo() {
	return $nc(this->dde)->canRedo();
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::die() {
	$nc(this->dde)->die();
}

bool AbstractDocument$DefaultDocumentEventUndoableWrapper::addEdit($UndoableEdit* anEdit) {
	return $nc(this->dde)->addEdit(anEdit);
}

bool AbstractDocument$DefaultDocumentEventUndoableWrapper::replaceEdit($UndoableEdit* anEdit) {
	return $nc(this->dde)->replaceEdit(anEdit);
}

bool AbstractDocument$DefaultDocumentEventUndoableWrapper::isSignificant() {
	return $nc(this->dde)->isSignificant();
}

$String* AbstractDocument$DefaultDocumentEventUndoableWrapper::getPresentationName() {
	return $nc(this->dde)->getPresentationName();
}

$String* AbstractDocument$DefaultDocumentEventUndoableWrapper::getUndoPresentationName() {
	return $nc(this->dde)->getUndoPresentationName();
}

$String* AbstractDocument$DefaultDocumentEventUndoableWrapper::getRedoPresentationName() {
	return $nc(this->dde)->getRedoPresentationName();
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::lockEdit() {
	$nc(($cast($AbstractDocument, $($nc(this->dde)->getDocument()))))->writeLock();
}

void AbstractDocument$DefaultDocumentEventUndoableWrapper::unlockEdit() {
	$nc(($cast($AbstractDocument, $($nc(this->dde)->getDocument()))))->writeUnlock();
}

AbstractDocument$DefaultDocumentEventUndoableWrapper::AbstractDocument$DefaultDocumentEventUndoableWrapper() {
}

$Class* AbstractDocument$DefaultDocumentEventUndoableWrapper::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$DefaultDocumentEventUndoableWrapper, name, initialize, &_AbstractDocument$DefaultDocumentEventUndoableWrapper_ClassInfo_, allocate$AbstractDocument$DefaultDocumentEventUndoableWrapper);
	return class$;
}

$Class* AbstractDocument$DefaultDocumentEventUndoableWrapper::class$ = nullptr;

		} // text
	} // swing
} // javax