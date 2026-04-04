#include <com/sun/beans/editors/LongEditor.h>
#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void LongEditor::init$() {
	$NumberEditor::init$();
}

$String* LongEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({value, "L"_s}) : "null"_s;
}

void LongEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Long*)nullptr : $($Long::decode(text)));
}

LongEditor::LongEditor() {
}

$Class* LongEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LongEditor, init$, void)},
		{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LongEditor, getJavaInitializationString, $String*)},
		{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LongEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.editors.LongEditor",
		"com.sun.beans.editors.NumberEditor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LongEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongEditor);
	});
	return class$;
}

$Class* LongEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com