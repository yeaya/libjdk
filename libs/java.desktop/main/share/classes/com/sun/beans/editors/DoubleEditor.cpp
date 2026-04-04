#include <com/sun/beans/editors/DoubleEditor.h>
#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void DoubleEditor::init$() {
	$NumberEditor::init$();
}

void DoubleEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Double*)nullptr : $($Double::valueOf(text)));
}

DoubleEditor::DoubleEditor() {
}

$Class* DoubleEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DoubleEditor, init$, void)},
		{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DoubleEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.editors.DoubleEditor",
		"com.sun.beans.editors.NumberEditor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DoubleEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleEditor);
	});
	return class$;
}

$Class* DoubleEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com