#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace text {

void DefaultFormatter$ReplaceHolder::init$() {
}

void DefaultFormatter$ReplaceHolder::reset($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	$set(this, fb, fb);
	this->offset = offset;
	this->length = length;
	$set(this, text, text);
	$set(this, attrs, attrs);
	$set(this, value, nullptr);
	this->cursorPosition = -1;
}

DefaultFormatter$ReplaceHolder::DefaultFormatter$ReplaceHolder() {
}

$Class* DefaultFormatter$ReplaceHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fb", "Ljavax/swing/text/DocumentFilter$FilterBypass;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, fb)},
		{"offset", "I", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, offset)},
		{"length", "I", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, length)},
		{"text", "Ljava/lang/String;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, text)},
		{"attrs", "Ljavax/swing/text/AttributeSet;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, attrs)},
		{"value", "Ljava/lang/Object;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, value)},
		{"cursorPosition", "I", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, cursorPosition)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultFormatter$ReplaceHolder, init$, void)},
		{"reset", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, 0, $virtualMethod(DefaultFormatter$ReplaceHolder, reset, void, $DocumentFilter$FilterBypass*, int32_t, int32_t, $String*, $AttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultFormatter$ReplaceHolder", "javax.swing.text.DefaultFormatter", "ReplaceHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultFormatter$ReplaceHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultFormatter"
	};
	$loadClass(DefaultFormatter$ReplaceHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultFormatter$ReplaceHolder);
	});
	return class$;
}

$Class* DefaultFormatter$ReplaceHolder::class$ = nullptr;

		} // text
	} // swing
} // javax