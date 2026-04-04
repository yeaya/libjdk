#include <javax/swing/text/MaskFormatter$HexCharacter.h>
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

void MaskFormatter$HexCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$HexCharacter::isValidCharacter(char16_t aChar) {
	return ((aChar == u'0' || aChar == u'1' || aChar == u'2' || aChar == u'3' || aChar == u'4' || aChar == u'5' || aChar == u'6' || aChar == u'7' || aChar == u'8' || aChar == u'9' || aChar == u'a' || aChar == u'A' || aChar == u'b' || aChar == u'B' || aChar == u'c' || aChar == u'C' || aChar == u'd' || aChar == u'D' || aChar == u'e' || aChar == u'E' || aChar == u'f' || aChar == u'F') && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

char16_t MaskFormatter$HexCharacter::getChar(char16_t aChar) {
	if ($Character::isDigit(aChar)) {
		return aChar;
	}
	return $Character::toUpperCase(aChar);
}

MaskFormatter$HexCharacter::MaskFormatter$HexCharacter() {
}

$Class* MaskFormatter$HexCharacter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$HexCharacter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(MaskFormatter$HexCharacter, init$, void, $MaskFormatter*)},
		{"getChar", "(C)C", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$HexCharacter, getChar, char16_t, char16_t)},
		{"isValidCharacter", "(C)Z", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$HexCharacter, isValidCharacter, bool, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.MaskFormatter$HexCharacter", "javax.swing.text.MaskFormatter", "HexCharacter", $PRIVATE},
		{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.MaskFormatter$HexCharacter",
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
	$loadClass(MaskFormatter$HexCharacter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskFormatter$HexCharacter);
	});
	return class$;
}

$Class* MaskFormatter$HexCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax