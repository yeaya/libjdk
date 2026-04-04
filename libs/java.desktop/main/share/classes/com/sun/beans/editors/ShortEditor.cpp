#include <com/sun/beans/editors/ShortEditor.h>
#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void ShortEditor::init$() {
	$NumberEditor::init$();
}

$String* ShortEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({"((short)"_s, value, ")"_s}) : "null"_s;
}

void ShortEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Short*)nullptr : $($Short::decode(text)));
}

ShortEditor::ShortEditor() {
}

$Class* ShortEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShortEditor, init$, void)},
		{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ShortEditor, getJavaInitializationString, $String*)},
		{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ShortEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.editors.ShortEditor",
		"com.sun.beans.editors.NumberEditor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ShortEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortEditor);
	});
	return class$;
}

$Class* ShortEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com