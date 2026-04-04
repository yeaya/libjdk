#include <sun/lwawt/macosx/CAccessibleText$12.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

#undef WORD

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$12::init$($Accessible* val$a, int32_t val$index) {
	$set(this, val$a, val$a);
	this->val$index = val$index;
}

$Object* CAccessibleText$12::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $new($ints, 2);
	}
	$var($AccessibleEditableText, aet, $nc(ac)->getAccessibleEditableText());
	if (aet == nullptr) {
		return $new($ints, 2);
	}
	int32_t charCount = $nc(aet)->getCharCount();
	if (this->val$index >= charCount) {
		return $new($ints, 2);
	}
	$var($String, foundWord, aet->getAtIndex($AccessibleText::WORD, this->val$index));
	int32_t foundWordLength = $nc(foundWord)->length();
	$var($String, wholeString, aet->getTextRange(0, charCount - 1));
	int32_t foundWordIndex = -1;
	int32_t offset = 0;
	while ((foundWordIndex == -1) && (offset < foundWordLength)) {
		if ($nc(wholeString)->regionMatches(true, this->val$index - offset, foundWord, 0, foundWordLength)) {
			foundWordIndex = this->val$index - offset;
		}
		if (wholeString->regionMatches(true, this->val$index + offset, foundWord, 0, foundWordLength)) {
			foundWordIndex = this->val$index + offset;
		}
		++offset;
	}
	$var($ints, ret, $new($ints, 2));
	ret->set(0, foundWordIndex);
	ret->set(1, foundWordIndex + foundWordLength);
	return ret;
}

CAccessibleText$12::CAccessibleText$12() {
}

$Class* CAccessibleText$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$12, val$index)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$12, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(CAccessibleText$12, init$, void, $Accessible*, int32_t)},
		{"call", "()[I", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$12, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getRangeForIndex",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)[I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$12",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<[I>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$12);
	});
	return class$;
}

$Class* CAccessibleText$12::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun