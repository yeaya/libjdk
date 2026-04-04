#include <javax/swing/text/MaskFormatter$UpperCaseCharacter.h>
#include <javax/swing/text/MaskFormatter$MaskCharacter.h>
#include <javax/swing/text/MaskFormatter.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MaskFormatter = ::javax::swing::text::MaskFormatter;
using $MaskFormatter$MaskCharacter = ::javax::swing::text::MaskFormatter$MaskCharacter;

namespace javax {
	namespace swing {
		namespace text {

void MaskFormatter$UpperCaseCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$UpperCaseCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isLetter(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

char16_t MaskFormatter$UpperCaseCharacter::getChar(char16_t aChar) {
	return $Character::toUpperCase(aChar);
}

MaskFormatter$UpperCaseCharacter::MaskFormatter$UpperCaseCharacter() {
}

$Class* MaskFormatter$UpperCaseCharacter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$UpperCaseCharacter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(MaskFormatter$UpperCaseCharacter, init$, void, $MaskFormatter*)},
		{"getChar", "(C)C", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$UpperCaseCharacter, getChar, char16_t, char16_t)},
		{"isValidCharacter", "(C)Z", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$UpperCaseCharacter, isValidCharacter, bool, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.MaskFormatter$UpperCaseCharacter", "javax.swing.text.MaskFormatter", "UpperCaseCharacter", $PRIVATE},
		{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.MaskFormatter$UpperCaseCharacter",
		"javax.swing.text.MaskFormatter$MaskCharacter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.MaskFormatter"
	};
	$loadClass(MaskFormatter$UpperCaseCharacter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskFormatter$UpperCaseCharacter);
	});
	return class$;
}

$Class* MaskFormatter$UpperCaseCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax