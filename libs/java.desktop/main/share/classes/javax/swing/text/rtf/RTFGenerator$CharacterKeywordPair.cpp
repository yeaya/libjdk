#include <javax/swing/text/rtf/RTFGenerator$CharacterKeywordPair.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFGenerator$CharacterKeywordPair::init$() {
}

RTFGenerator$CharacterKeywordPair::RTFGenerator$CharacterKeywordPair() {
}

$Class* RTFGenerator$CharacterKeywordPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"character", "C", nullptr, $PUBLIC, $field(RTFGenerator$CharacterKeywordPair, character)},
		{"keyword", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RTFGenerator$CharacterKeywordPair, keyword)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RTFGenerator$CharacterKeywordPair, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair", "javax.swing.text.rtf.RTFGenerator", "CharacterKeywordPair", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair",
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
		"javax.swing.text.rtf.RTFGenerator"
	};
	$loadClass(RTFGenerator$CharacterKeywordPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFGenerator$CharacterKeywordPair);
	});
	return class$;
}

$Class* RTFGenerator$CharacterKeywordPair::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax