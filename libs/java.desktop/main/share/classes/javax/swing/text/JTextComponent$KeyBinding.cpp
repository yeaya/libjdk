#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$KeyBinding::init$($KeyStroke* key, $String* actionName) {
	$set(this, key, key);
	$set(this, actionName, actionName);
}

JTextComponent$KeyBinding::JTextComponent$KeyBinding() {
}

$Class* JTextComponent$KeyBinding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $field(JTextComponent$KeyBinding, key)},
		{"actionName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JTextComponent$KeyBinding, actionName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/KeyStroke;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JTextComponent$KeyBinding, init$, void, $KeyStroke*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$KeyBinding", "javax.swing.text.JTextComponent", "KeyBinding", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.JTextComponent$KeyBinding",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$KeyBinding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$KeyBinding);
	});
	return class$;
}

$Class* JTextComponent$KeyBinding::class$ = nullptr;

		} // text
	} // swing
} // javax