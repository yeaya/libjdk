#include <javax/swing/text/InternationalFormatter$ExtendedReplaceHolder.h>
#include <java/text/ParseException.h>
#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $DefaultFormatter$ReplaceHolder = ::javax::swing::text::DefaultFormatter$ReplaceHolder;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;

namespace javax {
	namespace swing {
		namespace text {

void InternationalFormatter$ExtendedReplaceHolder::init$() {
	$DefaultFormatter$ReplaceHolder::init$();
}

void InternationalFormatter$ExtendedReplaceHolder::resetFromValue($InternationalFormatter* formatter) {
	this->offset = 0;
	try {
		$set(this, text, $nc(formatter)->valueToString(this->value));
	} catch ($ParseException& pe) {
		$set(this, text, ""_s);
	}
	this->length = $$nc($nc(this->fb)->getDocument())->getLength();
}

InternationalFormatter$ExtendedReplaceHolder::InternationalFormatter$ExtendedReplaceHolder() {
}

$Class* InternationalFormatter$ExtendedReplaceHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endOffset", "I", nullptr, 0, $field(InternationalFormatter$ExtendedReplaceHolder, endOffset)},
		{"endTextLength", "I", nullptr, 0, $field(InternationalFormatter$ExtendedReplaceHolder, endTextLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InternationalFormatter$ExtendedReplaceHolder, init$, void)},
		{"resetFromValue", "(Ljavax/swing/text/InternationalFormatter;)V", nullptr, 0, $virtualMethod(InternationalFormatter$ExtendedReplaceHolder, resetFromValue, void, $InternationalFormatter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.InternationalFormatter$ExtendedReplaceHolder", "javax.swing.text.InternationalFormatter", "ExtendedReplaceHolder", $STATIC},
		{"javax.swing.text.DefaultFormatter$ReplaceHolder", "javax.swing.text.DefaultFormatter", "ReplaceHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.InternationalFormatter$ExtendedReplaceHolder",
		"javax.swing.text.DefaultFormatter$ReplaceHolder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.InternationalFormatter"
	};
	$loadClass(InternationalFormatter$ExtendedReplaceHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternationalFormatter$ExtendedReplaceHolder);
	});
	return class$;
}

$Class* InternationalFormatter$ExtendedReplaceHolder::class$ = nullptr;

		} // text
	} // swing
} // javax