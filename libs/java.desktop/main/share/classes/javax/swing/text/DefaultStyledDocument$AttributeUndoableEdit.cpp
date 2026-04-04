#include <javax/swing/text/DefaultStyledDocument$AttributeUndoableEdit.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

void DefaultStyledDocument$AttributeUndoableEdit::init$($Element* element, $AttributeSet* newAttributes, bool isReplacing) {
	$AbstractUndoableEdit::init$();
	$set(this, element, element);
	$set(this, newAttributes, newAttributes);
	this->isReplacing = isReplacing;
	$set(this, copy, $$nc($nc(element)->getAttributes())->copyAttributes());
}

void DefaultStyledDocument$AttributeUndoableEdit::redo() {
	$AbstractUndoableEdit::redo();
	$var($MutableAttributeSet, as, $cast($MutableAttributeSet, $nc(this->element)->getAttributes()));
	if (this->isReplacing) {
		$nc(as)->removeAttributes(as);
	}
	$nc(as)->addAttributes(this->newAttributes);
}

void DefaultStyledDocument$AttributeUndoableEdit::undo() {
	$AbstractUndoableEdit::undo();
	$var($MutableAttributeSet, as, $cast($MutableAttributeSet, $nc(this->element)->getAttributes()));
	$nc(as)->removeAttributes(as);
	as->addAttributes(this->copy);
}

DefaultStyledDocument$AttributeUndoableEdit::DefaultStyledDocument$AttributeUndoableEdit() {
}

$Class* DefaultStyledDocument$AttributeUndoableEdit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"newAttributes", "Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED, $field(DefaultStyledDocument$AttributeUndoableEdit, newAttributes)},
		{"copy", "Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED, $field(DefaultStyledDocument$AttributeUndoableEdit, copy)},
		{"isReplacing", "Z", nullptr, $PROTECTED, $field(DefaultStyledDocument$AttributeUndoableEdit, isReplacing)},
		{"element", "Ljavax/swing/text/Element;", nullptr, $PROTECTED, $field(DefaultStyledDocument$AttributeUndoableEdit, element)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC, $method(DefaultStyledDocument$AttributeUndoableEdit, init$, void, $Element*, $AttributeSet*, bool)},
		{"redo", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$AttributeUndoableEdit, redo, void), "javax.swing.undo.CannotRedoException"},
		{"undo", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$AttributeUndoableEdit, undo, void), "javax.swing.undo.CannotUndoException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$AttributeUndoableEdit", "javax.swing.text.DefaultStyledDocument", "AttributeUndoableEdit", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DefaultStyledDocument$AttributeUndoableEdit",
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
	$loadClass(DefaultStyledDocument$AttributeUndoableEdit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultStyledDocument$AttributeUndoableEdit));
	});
	return class$;
}

$Class* DefaultStyledDocument$AttributeUndoableEdit::class$ = nullptr;

		} // text
	} // swing
} // javax