#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace text {

void DocumentFilter::init$() {
}

void DocumentFilter::remove($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) {
	$nc(fb)->remove(offset, length);
}

void DocumentFilter::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, $AttributeSet* attr) {
	$nc(fb)->insertString(offset, string, attr);
}

void DocumentFilter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	$nc(fb)->replace(offset, length, text, attrs);
}

DocumentFilter::DocumentFilter() {
}

$Class* DocumentFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DocumentFilter, init$, void)},
		{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(DocumentFilter, insertString, void, $DocumentFilter$FilterBypass*, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{"remove", "(Ljavax/swing/text/DocumentFilter$FilterBypass;II)V", nullptr, $PUBLIC, $virtualMethod(DocumentFilter, remove, void, $DocumentFilter$FilterBypass*, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(DocumentFilter, replace, void, $DocumentFilter$FilterBypass*, int32_t, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DocumentFilter$FilterBypass", "javax.swing.text.DocumentFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DocumentFilter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.DocumentFilter$FilterBypass"
	};
	$loadClass(DocumentFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentFilter);
	});
	return class$;
}

$Class* DocumentFilter::class$ = nullptr;

		} // text
	} // swing
} // javax