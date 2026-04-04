#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void NumberEditor::init$() {
	$PropertyEditorSupport::init$();
}

$String* NumberEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? value->toString() : "null"_s;
}

NumberEditor::NumberEditor() {
}

$Class* NumberEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NumberEditor, init$, void)},
		{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NumberEditor, getJavaInitializationString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.beans.editors.NumberEditor",
		"java.beans.PropertyEditorSupport",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NumberEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NumberEditor);
	});
	return class$;
}

$Class* NumberEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com