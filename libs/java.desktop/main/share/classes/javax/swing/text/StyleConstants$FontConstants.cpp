#include <javax/swing/text/StyleConstants$FontConstants.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$String* StyleConstants$FontConstants::toString() {
	 return this->$StyleConstants::toString();
}

int32_t StyleConstants$FontConstants::hashCode() {
	 return this->$StyleConstants::hashCode();
}

bool StyleConstants$FontConstants::equals(Object$* arg0) {
	 return this->$StyleConstants::equals(arg0);
}

$Object* StyleConstants$FontConstants::clone() {
	 return this->$StyleConstants::clone();
}

void StyleConstants$FontConstants::finalize() {
	this->$StyleConstants::finalize();
}

void StyleConstants$FontConstants::init$($String* representation) {
	$StyleConstants::init$(representation);
}

StyleConstants$FontConstants::StyleConstants$FontConstants() {
}

$Class* StyleConstants$FontConstants::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(StyleConstants$FontConstants, init$, void, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyleConstants$FontConstants", "javax.swing.text.StyleConstants", "FontConstants", $PUBLIC | $STATIC},
		{"javax.swing.text.AttributeSet$FontAttribute", "javax.swing.text.AttributeSet", "FontAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyleConstants$FontConstants",
		"javax.swing.text.StyleConstants",
		"javax.swing.text.AttributeSet$FontAttribute,javax.swing.text.AttributeSet$CharacterAttribute",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.StyleConstants"
	};
	$loadClass(StyleConstants$FontConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyleConstants$FontConstants));
	});
	return class$;
}

$Class* StyleConstants$FontConstants::class$ = nullptr;

		} // text
	} // swing
} // javax