#include <javax/swing/text/DefaultStyledDocument$StyleChangeUndoableEdit.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $Style = ::javax::swing::text::Style;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

void DefaultStyledDocument$StyleChangeUndoableEdit::init$($AbstractDocument$AbstractElement* element, $Style* newStyle) {
	$AbstractUndoableEdit::init$();
	$set(this, element, element);
	$set(this, newStyle, newStyle);
	$set(this, oldStyle, $nc(element)->getResolveParent());
}

void DefaultStyledDocument$StyleChangeUndoableEdit::redo() {
	$AbstractUndoableEdit::redo();
	$nc(this->element)->setResolveParent(this->newStyle);
}

void DefaultStyledDocument$StyleChangeUndoableEdit::undo() {
	$AbstractUndoableEdit::undo();
	$nc(this->element)->setResolveParent(this->oldStyle);
}

DefaultStyledDocument$StyleChangeUndoableEdit::DefaultStyledDocument$StyleChangeUndoableEdit() {
}

$Class* DefaultStyledDocument$StyleChangeUndoableEdit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"element", "Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PROTECTED, $field(DefaultStyledDocument$StyleChangeUndoableEdit, element)},
		{"newStyle", "Ljavax/swing/text/Style;", nullptr, $PROTECTED, $field(DefaultStyledDocument$StyleChangeUndoableEdit, newStyle)},
		{"oldStyle", "Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED, $field(DefaultStyledDocument$StyleChangeUndoableEdit, oldStyle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument$AbstractElement;Ljavax/swing/text/Style;)V", nullptr, $PUBLIC, $method(DefaultStyledDocument$StyleChangeUndoableEdit, init$, void, $AbstractDocument$AbstractElement*, $Style*)},
		{"redo", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$StyleChangeUndoableEdit, redo, void), "javax.swing.undo.CannotRedoException"},
		{"undo", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$StyleChangeUndoableEdit, undo, void), "javax.swing.undo.CannotUndoException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit", "javax.swing.text.DefaultStyledDocument", "StyleChangeUndoableEdit", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit",
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
		"javax.swing.text.DefaultStyledDocument"
	};
	$loadClass(DefaultStyledDocument$StyleChangeUndoableEdit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultStyledDocument$StyleChangeUndoableEdit));
	});
	return class$;
}

$Class* DefaultStyledDocument$StyleChangeUndoableEdit::class$ = nullptr;

		} // text
	} // swing
} // javax