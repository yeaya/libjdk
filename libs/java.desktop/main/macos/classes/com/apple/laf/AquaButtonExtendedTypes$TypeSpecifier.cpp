#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$TypeSpecifier::init$($String* name, bool setIconFont) {
	$set(this, name, name);
	this->setIconFont = setIconFont;
}

AquaButtonExtendedTypes$TypeSpecifier::AquaButtonExtendedTypes$TypeSpecifier() {
}

$Class* AquaButtonExtendedTypes$TypeSpecifier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaButtonExtendedTypes$TypeSpecifier, name)},
		{"setIconFont", "Z", nullptr, $FINAL, $field(AquaButtonExtendedTypes$TypeSpecifier, setIconFont)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(AquaButtonExtendedTypes$TypeSpecifier, init$, void, $String*, bool)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $ABSTRACT, $virtualMethod(AquaButtonExtendedTypes$TypeSpecifier, getBorder, $Border*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
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
		"com.apple.laf.AquaButtonExtendedTypes"
	};
	$loadClass(AquaButtonExtendedTypes$TypeSpecifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$TypeSpecifier);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$TypeSpecifier::class$ = nullptr;

		} // laf
	} // apple
} // com