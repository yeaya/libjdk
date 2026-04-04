#include <javax/swing/text/MaskFormatter$LiteralCharacter.h>
#include <javax/swing/text/MaskFormatter$MaskCharacter.h>
#include <javax/swing/text/MaskFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MaskFormatter = ::javax::swing::text::MaskFormatter;
using $MaskFormatter$MaskCharacter = ::javax::swing::text::MaskFormatter$MaskCharacter;

namespace javax {
	namespace swing {
		namespace text {

void MaskFormatter$LiteralCharacter::init$($MaskFormatter* this$0, char16_t fixedChar) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
	this->fixedChar = fixedChar;
}

bool MaskFormatter$LiteralCharacter::isLiteral() {
	return true;
}

char16_t MaskFormatter$LiteralCharacter::getChar(char16_t aChar) {
	return this->fixedChar;
}

MaskFormatter$LiteralCharacter::MaskFormatter$LiteralCharacter() {
}

$Class* MaskFormatter$LiteralCharacter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$LiteralCharacter, this$0)},
		{"fixedChar", "C", nullptr, $PRIVATE, $field(MaskFormatter$LiteralCharacter, fixedChar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/MaskFormatter;C)V", nullptr, $PUBLIC, $method(MaskFormatter$LiteralCharacter, init$, void, $MaskFormatter*, char16_t)},
		{"getChar", "(C)C", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$LiteralCharacter, getChar, char16_t, char16_t)},
		{"isLiteral", "()Z", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$LiteralCharacter, isLiteral, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.MaskFormatter$LiteralCharacter", "javax.swing.text.MaskFormatter", "LiteralCharacter", $PRIVATE},
		{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.MaskFormatter$LiteralCharacter",
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
	$loadClass(MaskFormatter$LiteralCharacter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskFormatter$LiteralCharacter);
	});
	return class$;
}

$Class* MaskFormatter$LiteralCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax