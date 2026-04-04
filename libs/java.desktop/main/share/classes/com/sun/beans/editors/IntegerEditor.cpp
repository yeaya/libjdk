#include <com/sun/beans/editors/IntegerEditor.h>
#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void IntegerEditor::init$() {
	$NumberEditor::init$();
}

void IntegerEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Integer*)nullptr : $($Integer::decode(text)));
}

IntegerEditor::IntegerEditor() {
}

$Class* IntegerEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegerEditor, init$, void)},
		{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IntegerEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.editors.IntegerEditor",
		"com.sun.beans.editors.NumberEditor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IntegerEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegerEditor);
	});
	return class$;
}

$Class* IntegerEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com