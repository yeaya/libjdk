#include <javax/swing/text/AbstractDocument$DefaultFilterBypass.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace text {

void AbstractDocument$DefaultFilterBypass::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
	$DocumentFilter$FilterBypass::init$();
}

$Document* AbstractDocument$DefaultFilterBypass::getDocument() {
	return this->this$0;
}

void AbstractDocument$DefaultFilterBypass::remove(int32_t offset, int32_t length) {
	this->this$0->handleRemove(offset, length);
}

void AbstractDocument$DefaultFilterBypass::insertString(int32_t offset, $String* string, $AttributeSet* attr) {
	this->this$0->handleInsertString(offset, string, attr);
}

void AbstractDocument$DefaultFilterBypass::replace(int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	this->this$0->handleRemove(offset, length);
	this->this$0->handleInsertString(offset, text, attrs);
}

AbstractDocument$DefaultFilterBypass::AbstractDocument$DefaultFilterBypass() {
}

$Class* AbstractDocument$DefaultFilterBypass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$DefaultFilterBypass, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, $PRIVATE, $method(AbstractDocument$DefaultFilterBypass, init$, void, $AbstractDocument*)},
		{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultFilterBypass, getDocument, $Document*)},
		{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultFilterBypass, insertString, void, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{"remove", "(II)V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultFilterBypass, remove, void, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"replace", "(IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$DefaultFilterBypass, replace, void, int32_t, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$DefaultFilterBypass", "javax.swing.text.AbstractDocument", "DefaultFilterBypass", $PRIVATE},
		{"javax.swing.text.DocumentFilter$FilterBypass", "javax.swing.text.DocumentFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AbstractDocument$DefaultFilterBypass",
		"javax.swing.text.DocumentFilter$FilterBypass",
		nullptr,
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
	$loadClass(AbstractDocument$DefaultFilterBypass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocument$DefaultFilterBypass);
	});
	return class$;
}

$Class* AbstractDocument$DefaultFilterBypass::class$ = nullptr;

		} // text
	} // swing
} // javax