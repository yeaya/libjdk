#include <javax/swing/JSpinner$ListEditor$ListFormatter$Filter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$ListEditor$ListFormatter.h>
#include <javax/swing/JSpinner$ListEditor.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSpinner$ListEditor$ListFormatter = ::javax::swing::JSpinner$ListEditor$ListFormatter;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {

void JSpinner$ListEditor$ListFormatter$Filter::init$($JSpinner$ListEditor$ListFormatter* this$1) {
	$set(this, this$1, this$1);
	$DocumentFilter::init$();
}

void JSpinner$ListEditor$ListFormatter$Filter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* string, $AttributeSet* attrs) {
	$useLocalObjectStack();
	if (string != nullptr && (offset + length) == $$nc($nc(fb)->getDocument())->getLength()) {
		$var($Object, next, $$nc($nc(this->this$1->this$0)->getModel())->findNextMatch($$str({$($$nc(fb->getDocument())->getText(0, offset)), string})));
		$var($String, value, (next != nullptr) ? next->toString() : ($String*)nullptr);
		if (value != nullptr) {
			fb->remove(0, offset + length);
			fb->insertString(0, value, nullptr);
			int32_t var$0 = offset + string->length();
			$$nc(this->this$1->getFormattedTextField())->select(var$0, value->length());
			return;
		}
	}
	$DocumentFilter::replace(fb, offset, length, string, attrs);
}

void JSpinner$ListEditor$ListFormatter$Filter::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, $AttributeSet* attr) {
	replace(fb, offset, 0, string, attr);
}

JSpinner$ListEditor$ListFormatter$Filter::JSpinner$ListEditor$ListFormatter$Filter() {
}

$Class* JSpinner$ListEditor$ListFormatter$Filter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JSpinner$ListEditor$ListFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(JSpinner$ListEditor$ListFormatter$Filter, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JSpinner$ListEditor$ListFormatter;)V", nullptr, $PRIVATE, $method(JSpinner$ListEditor$ListFormatter$Filter, init$, void, $JSpinner$ListEditor$ListFormatter*)},
		{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$ListEditor$ListFormatter$Filter, insertString, void, $DocumentFilter$FilterBypass*, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$ListEditor$ListFormatter$Filter, replace, void, $DocumentFilter$FilterBypass*, int32_t, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSpinner$ListEditor", "javax.swing.JSpinner", "ListEditor", $PUBLIC | $STATIC},
		{"javax.swing.JSpinner$ListEditor$ListFormatter", "javax.swing.JSpinner$ListEditor", "ListFormatter", $PRIVATE},
		{"javax.swing.JSpinner$ListEditor$ListFormatter$Filter", "javax.swing.JSpinner$ListEditor$ListFormatter", "Filter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSpinner$ListEditor$ListFormatter$Filter",
		"javax.swing.text.DocumentFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSpinner"
	};
	$loadClass(JSpinner$ListEditor$ListFormatter$Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinner$ListEditor$ListFormatter$Filter);
	});
	return class$;
}

$Class* JSpinner$ListEditor$ListFormatter$Filter::class$ = nullptr;

	} // swing
} // javax