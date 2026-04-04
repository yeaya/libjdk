#include <javax/swing/colorchooser/ValueFormatter$1.h>
#include <java/util/Locale.h>
#include <javax/swing/colorchooser/ValueFormatter.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ValueFormatter = ::javax::swing::colorchooser::ValueFormatter;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace colorchooser {

void ValueFormatter$1::init$($ValueFormatter* this$0) {
	$set(this, this$0, this$0);
	$DocumentFilter::init$();
}

void ValueFormatter$1::remove($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) {
	if (this->this$0->isValid($$nc($nc(fb)->getDocument())->getLength() - length)) {
		fb->remove(offset, length);
	}
}

void ValueFormatter$1::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* set) {
	$useLocalObjectStack();
	int32_t var$1 = $$nc($nc(fb)->getDocument())->getLength();
	bool var$0 = this->this$0->isValid(var$1 + $nc(text)->length() - length);
	if (var$0 && this->this$0->isValid(text)) {
		$init($Locale);
		fb->replace(offset, length, $(text->toUpperCase($Locale::ENGLISH)), set);
	}
}

void ValueFormatter$1::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* text, $AttributeSet* set) {
	$useLocalObjectStack();
	int32_t var$1 = $$nc($nc(fb)->getDocument())->getLength();
	bool var$0 = this->this$0->isValid(var$1 + $nc(text)->length());
	if (var$0 && this->this$0->isValid(text)) {
		$init($Locale);
		fb->insertString(offset, $(text->toUpperCase($Locale::ENGLISH)), set);
	}
}

ValueFormatter$1::ValueFormatter$1() {
}

$Class* ValueFormatter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/colorchooser/ValueFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(ValueFormatter$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/colorchooser/ValueFormatter;)V", nullptr, 0, $method(ValueFormatter$1, init$, void, $ValueFormatter*)},
		{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(ValueFormatter$1, insertString, void, $DocumentFilter$FilterBypass*, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{"remove", "(Ljavax/swing/text/DocumentFilter$FilterBypass;II)V", nullptr, $PUBLIC, $virtualMethod(ValueFormatter$1, remove, void, $DocumentFilter$FilterBypass*, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(ValueFormatter$1, replace, void, $DocumentFilter$FilterBypass*, int32_t, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.colorchooser.ValueFormatter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.ValueFormatter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.colorchooser.ValueFormatter$1",
		"javax.swing.text.DocumentFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.colorchooser.ValueFormatter"
	};
	$loadClass(ValueFormatter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValueFormatter$1);
	});
	return class$;
}

$Class* ValueFormatter$1::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax