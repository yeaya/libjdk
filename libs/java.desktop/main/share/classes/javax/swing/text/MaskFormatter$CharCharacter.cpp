#include <javax/swing/text/MaskFormatter$CharCharacter.h>
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

void MaskFormatter$CharCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$CharCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isLetter(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

MaskFormatter$CharCharacter::MaskFormatter$CharCharacter() {
}

$Class* MaskFormatter$CharCharacter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$CharCharacter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(MaskFormatter$CharCharacter, init$, void, $MaskFormatter*)},
		{"isValidCharacter", "(C)Z", nullptr, $PUBLIC, $virtualMethod(MaskFormatter$CharCharacter, isValidCharacter, bool, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.MaskFormatter$CharCharacter", "javax.swing.text.MaskFormatter", "CharCharacter", $PRIVATE},
		{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.MaskFormatter$CharCharacter",
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
	$loadClass(MaskFormatter$CharCharacter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskFormatter$CharCharacter);
	});
	return class$;
}

$Class* MaskFormatter$CharCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax