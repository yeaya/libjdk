#include <javax/swing/text/StyleConstants$CharacterConstants.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$String* StyleConstants$CharacterConstants::toString() {
	return this->$StyleConstants::toString();
}

int32_t StyleConstants$CharacterConstants::hashCode() {
	return this->$StyleConstants::hashCode();
}

bool StyleConstants$CharacterConstants::equals(Object$* arg0) {
	return this->$StyleConstants::equals(arg0);
}

$Object* StyleConstants$CharacterConstants::clone() {
	return this->$StyleConstants::clone();
}

void StyleConstants$CharacterConstants::finalize() {
	this->$StyleConstants::finalize();
}

void StyleConstants$CharacterConstants::init$($String* representation) {
	$StyleConstants::init$(representation);
}

StyleConstants$CharacterConstants::StyleConstants$CharacterConstants() {
}

$Class* StyleConstants$CharacterConstants::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(StyleConstants$CharacterConstants, init$, void, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyleConstants$CharacterConstants", "javax.swing.text.StyleConstants", "CharacterConstants", $PUBLIC | $STATIC},
		{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyleConstants$CharacterConstants",
		"javax.swing.text.StyleConstants",
		"javax.swing.text.AttributeSet$CharacterAttribute",
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
	$loadClass(StyleConstants$CharacterConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyleConstants$CharacterConstants));
	});
	return class$;
}

$Class* StyleConstants$CharacterConstants::class$ = nullptr;

		} // text
	} // swing
} // javax