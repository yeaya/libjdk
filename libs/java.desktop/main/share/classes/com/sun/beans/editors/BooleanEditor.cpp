#include <com/sun/beans/editors/BooleanEditor.h>

#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _BooleanEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BooleanEditor, init$, void)},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BooleanEditor, getAsText, $String*)},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BooleanEditor, getJavaInitializationString, $String*)},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BooleanEditor, getTags, $StringArray*)},
	{"getValidName", "(Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(BooleanEditor, getValidName, $String*, bool)},
	{"isValidName", "(ZLjava/lang/String;)Z", nullptr, $PRIVATE, $method(BooleanEditor, isValidName, bool, bool, $String*)},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BooleanEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _BooleanEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.BooleanEditor",
	"java.beans.PropertyEditorSupport",
	nullptr,
	nullptr,
	_BooleanEditor_MethodInfo_
};

$Object* allocate$BooleanEditor($Class* clazz) {
	return $of($alloc(BooleanEditor));
}

void BooleanEditor::init$() {
	$PropertyEditorSupport::init$();
}

$String* BooleanEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $nc($of(value))->toString() : "null"_s;
}

$String* BooleanEditor::getAsText() {
	$var($Object, value, getValue());
	return ($instanceOf($Boolean, value)) ? getValidName($nc(($cast($Boolean, value)))->booleanValue()) : ($String*)nullptr;
}

void BooleanEditor::setAsText($String* text) {
	if (text == nullptr) {
		setValue(nullptr);
	} else if (isValidName(true, text)) {
		$init($Boolean);
		setValue($Boolean::TRUE);
	} else if (isValidName(false, text)) {
		$init($Boolean);
		setValue($Boolean::FALSE);
	} else {
		$throwNew($IllegalArgumentException, text);
	}
}

$StringArray* BooleanEditor::getTags() {
	$useLocalCurrentObjectStackCache();
	return $new($StringArray, {
		$(getValidName(true)),
		$(getValidName(false))
	});
}

$String* BooleanEditor::getValidName(bool value) {
	return value ? "True"_s : "False"_s;
}

bool BooleanEditor::isValidName(bool value, $String* name) {
	return $nc($(getValidName(value)))->equalsIgnoreCase(name);
}

BooleanEditor::BooleanEditor() {
}

$Class* BooleanEditor::load$($String* name, bool initialize) {
	$loadClass(BooleanEditor, name, initialize, &_BooleanEditor_ClassInfo_, allocate$BooleanEditor);
	return class$;
}

$Class* BooleanEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com