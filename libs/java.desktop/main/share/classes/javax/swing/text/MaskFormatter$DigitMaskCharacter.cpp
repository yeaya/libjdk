#include <javax/swing/text/MaskFormatter$DigitMaskCharacter.h>
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

void MaskFormatter$DigitMaskCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$DigitMaskCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isDigit(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

MaskFormatter$DigitMaskCharacter::MaskFormatter$DigitMaskCharacter() {
}

$Class* MaskFormatter$DigitMaskCharacter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$DigitMaskCharacter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(MaskFormatter$DigitMaskCharacter, init$, void, $MaskFormatter*)},
		{"isValidCharacter", "(C)Z", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$DigitMaskCharacter, isValidCharacter, bool, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.MaskFormatter$DigitMaskCharacter", "javax.swing.text.MaskFormatter", "DigitMaskCharacter", $PRIVATE},
		{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.MaskFormatter$DigitMaskCharacter",
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
	$loadClass(MaskFormatter$DigitMaskCharacter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskFormatter$DigitMaskCharacter);
	});
	return class$;
}

$Class* MaskFormatter$DigitMaskCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax