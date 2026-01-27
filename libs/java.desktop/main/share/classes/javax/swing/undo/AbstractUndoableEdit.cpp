#include <javax/swing/undo/AbstractUndoableEdit.h>

#include <javax/swing/UIManager.h>
#include <javax/swing/undo/CannotRedoException.h>
#include <javax/swing/undo/CannotUndoException.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $CannotRedoException = ::javax::swing::undo::CannotRedoException;
using $CannotUndoException = ::javax::swing::undo::CannotUndoException;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace undo {

$FieldInfo _AbstractUndoableEdit_FieldInfo_[] = {
	{"UndoName", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractUndoableEdit, UndoName)},
	{"RedoName", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractUndoableEdit, RedoName)},
	{"hasBeenDone", "Z", nullptr, 0, $field(AbstractUndoableEdit, hasBeenDone)},
	{"alive", "Z", nullptr, 0, $field(AbstractUndoableEdit, alive)},
	{}
};

$MethodInfo _AbstractUndoableEdit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractUndoableEdit, init$, void)},
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, addEdit, bool, $UndoableEdit*)},
	{"canRedo", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, canRedo, bool)},
	{"canUndo", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, canUndo, bool)},
	{"die", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, die, void)},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, getPresentationName, $String*)},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, getRedoPresentationName, $String*)},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, getUndoPresentationName, $String*)},
	{"isSignificant", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, isSignificant, bool)},
	{"redo", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, redo, void), "javax.swing.undo.CannotRedoException"},
	{"replaceEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, replaceEdit, bool, $UndoableEdit*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, toString, $String*)},
	{"undo", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractUndoableEdit, undo, void), "javax.swing.undo.CannotUndoException"},
	{}
};

$ClassInfo _AbstractUndoableEdit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.undo.AbstractUndoableEdit",
	"java.lang.Object",
	"javax.swing.undo.UndoableEdit,java.io.Serializable",
	_AbstractUndoableEdit_FieldInfo_,
	_AbstractUndoableEdit_MethodInfo_
};

$Object* allocate$AbstractUndoableEdit($Class* clazz) {
	return $of($alloc(AbstractUndoableEdit));
}

int32_t AbstractUndoableEdit::hashCode() {
	 return this->$UndoableEdit::hashCode();
}

bool AbstractUndoableEdit::equals(Object$* arg0) {
	 return this->$UndoableEdit::equals(arg0);
}

$Object* AbstractUndoableEdit::clone() {
	 return this->$UndoableEdit::clone();
}

void AbstractUndoableEdit::finalize() {
	this->$UndoableEdit::finalize();
}

$String* AbstractUndoableEdit::UndoName = nullptr;
$String* AbstractUndoableEdit::RedoName = nullptr;

void AbstractUndoableEdit::init$() {
	this->hasBeenDone = true;
	this->alive = true;
}

void AbstractUndoableEdit::die() {
	this->alive = false;
}

void AbstractUndoableEdit::undo() {
	if (!canUndo()) {
		$throwNew($CannotUndoException);
	}
	this->hasBeenDone = false;
}

bool AbstractUndoableEdit::canUndo() {
	return this->alive && this->hasBeenDone;
}

void AbstractUndoableEdit::redo() {
	if (!canRedo()) {
		$throwNew($CannotRedoException);
	}
	this->hasBeenDone = true;
}

bool AbstractUndoableEdit::canRedo() {
	return this->alive && !this->hasBeenDone;
}

bool AbstractUndoableEdit::addEdit($UndoableEdit* anEdit) {
	return false;
}

bool AbstractUndoableEdit::replaceEdit($UndoableEdit* anEdit) {
	return false;
}

bool AbstractUndoableEdit::isSignificant() {
	return true;
}

$String* AbstractUndoableEdit::getPresentationName() {
	return ""_s;
}

$String* AbstractUndoableEdit::getUndoPresentationName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getPresentationName());
	if (!""_s->equals(name)) {
		$assign(name, $str({$($UIManager::getString("AbstractUndoableEdit.undoText"_s)), " "_s, name}));
	} else {
		$assign(name, $UIManager::getString("AbstractUndoableEdit.undoText"_s));
	}
	return name;
}

$String* AbstractUndoableEdit::getRedoPresentationName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getPresentationName());
	if (!""_s->equals(name)) {
		$assign(name, $str({$($UIManager::getString("AbstractUndoableEdit.redoText"_s)), " "_s, name}));
	} else {
		$assign(name, $UIManager::getString("AbstractUndoableEdit.redoText"_s));
	}
	return name;
}

$String* AbstractUndoableEdit::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($UndoableEdit::toString()), " hasBeenDone: "_s, $$str(this->hasBeenDone), " alive: "_s, $$str(this->alive)});
}

AbstractUndoableEdit::AbstractUndoableEdit() {
}

void clinit$AbstractUndoableEdit($Class* class$) {
	$assignStatic(AbstractUndoableEdit::UndoName, "Undo"_s);
	$assignStatic(AbstractUndoableEdit::RedoName, "Redo"_s);
}

$Class* AbstractUndoableEdit::load$($String* name, bool initialize) {
	$loadClass(AbstractUndoableEdit, name, initialize, &_AbstractUndoableEdit_ClassInfo_, clinit$AbstractUndoableEdit, allocate$AbstractUndoableEdit);
	return class$;
}

$Class* AbstractUndoableEdit::class$ = nullptr;

		} // undo
	} // swing
} // javax