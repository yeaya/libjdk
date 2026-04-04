#include <javax/swing/text/html/HTMLDocument$FixedLengthDocument.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$FixedLengthDocument::init$(int32_t maxLength) {
	$PlainDocument::init$();
	this->maxLength = maxLength;
}

void HTMLDocument$FixedLengthDocument::insertString(int32_t offset, $String* str, $AttributeSet* a) {
	bool var$0 = str != nullptr;
	if (var$0) {
		int32_t var$1 = str->length();
		var$0 = var$1 + getLength() <= this->maxLength;
	}
	if (var$0) {
		$PlainDocument::insertString(offset, str, a);
	}
}

HTMLDocument$FixedLengthDocument::HTMLDocument$FixedLengthDocument() {
}

$Class* HTMLDocument$FixedLengthDocument::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"maxLength", "I", nullptr, $PRIVATE, $field(HTMLDocument$FixedLengthDocument, maxLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(HTMLDocument$FixedLengthDocument, init$, void, int32_t)},
		{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$FixedLengthDocument, insertString, void, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$FixedLengthDocument", "javax.swing.text.html.HTMLDocument", "FixedLengthDocument", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$FixedLengthDocument",
		"javax.swing.text.PlainDocument",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.HTMLDocument"
	};
	$loadClass(HTMLDocument$FixedLengthDocument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HTMLDocument$FixedLengthDocument));
	});
	return class$;
}

$Class* HTMLDocument$FixedLengthDocument::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax