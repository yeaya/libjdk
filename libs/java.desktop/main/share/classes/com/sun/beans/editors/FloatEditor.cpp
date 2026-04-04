#include <com/sun/beans/editors/FloatEditor.h>
#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void FloatEditor::init$() {
	$NumberEditor::init$();
}

$String* FloatEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({value, "F"_s}) : "null"_s;
}

void FloatEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Float*)nullptr : $($Float::valueOf(text)));
}

FloatEditor::FloatEditor() {
}

$Class* FloatEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FloatEditor, init$, void)},
		{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatEditor, getJavaInitializationString, $String*)},
		{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FloatEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.editors.FloatEditor",
		"com.sun.beans.editors.NumberEditor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FloatEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatEditor);
	});
	return class$;
}

$Class* FloatEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com