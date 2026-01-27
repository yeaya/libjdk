#include <javax/swing/undo/UndoableEdit.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace undo {

$MethodInfo _UndoableEdit_MethodInfo_[] = {
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, addEdit, bool, UndoableEdit*)},
	{"canRedo", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, canRedo, bool)},
	{"canUndo", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, canUndo, bool)},
	{"die", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, die, void)},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, getPresentationName, $String*)},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, getRedoPresentationName, $String*)},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, getUndoPresentationName, $String*)},
	{"isSignificant", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, isSignificant, bool)},
	{"redo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, redo, void), "javax.swing.undo.CannotRedoException"},
	{"replaceEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, replaceEdit, bool, UndoableEdit*)},
	{"undo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEdit, undo, void), "javax.swing.undo.CannotUndoException"},
	{}
};

$ClassInfo _UndoableEdit_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.undo.UndoableEdit",
	nullptr,
	nullptr,
	nullptr,
	_UndoableEdit_MethodInfo_
};

$Object* allocate$UndoableEdit($Class* clazz) {
	return $of($alloc(UndoableEdit));
}

$Class* UndoableEdit::load$($String* name, bool initialize) {
	$loadClass(UndoableEdit, name, initialize, &_UndoableEdit_ClassInfo_, allocate$UndoableEdit);
	return class$;
}

$Class* UndoableEdit::class$ = nullptr;

		} // undo
	} // swing
} // javax