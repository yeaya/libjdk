#include <java/awt/PageAttributes$ColorType.h>
#include <java/awt/AttributeValue.h>
#include <java/awt/PageAttributes.h>
#include <jcpp.h>

#undef COLOR
#undef I_COLOR
#undef I_MONOCHROME
#undef MONOCHROME
#undef NAMES

using $AttributeValue = ::java::awt::AttributeValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$StringArray* PageAttributes$ColorType::NAMES = nullptr;
PageAttributes$ColorType* PageAttributes$ColorType::COLOR = nullptr;
PageAttributes$ColorType* PageAttributes$ColorType::MONOCHROME = nullptr;

void PageAttributes$ColorType::init$(int32_t type) {
	$AttributeValue::init$(type, PageAttributes$ColorType::NAMES);
}

$String* PageAttributes$ColorType::toString() {
	return $AttributeValue::toString();
}

int32_t PageAttributes$ColorType::hashCode() {
	return $AttributeValue::hashCode();
}

void PageAttributes$ColorType::clinit$($Class* clazz) {
	$assignStatic(PageAttributes$ColorType::NAMES, $new($StringArray, {
		"color"_s,
		"monochrome"_s
	}));
	$assignStatic(PageAttributes$ColorType::COLOR, $new(PageAttributes$ColorType, PageAttributes$ColorType::I_COLOR));
	$assignStatic(PageAttributes$ColorType::MONOCHROME, $new(PageAttributes$ColorType, PageAttributes$ColorType::I_MONOCHROME));
}

PageAttributes$ColorType::PageAttributes$ColorType() {
}

$Class* PageAttributes$ColorType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"I_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$ColorType, I_COLOR)},
		{"I_MONOCHROME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$ColorType, I_MONOCHROME)},
		{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PageAttributes$ColorType, NAMES)},
		{"COLOR", "Ljava/awt/PageAttributes$ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$ColorType, COLOR)},
		{"MONOCHROME", "Ljava/awt/PageAttributes$ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$ColorType, MONOCHROME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(PageAttributes$ColorType, init$, void, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PageAttributes$ColorType, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PageAttributes$ColorType, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.PageAttributes$ColorType", "java.awt.PageAttributes", "ColorType", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.PageAttributes$ColorType",
		"java.awt.AttributeValue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.PageAttributes"
	};
	$loadClass(PageAttributes$ColorType, name, initialize, &classInfo$$, PageAttributes$ColorType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PageAttributes$ColorType);
	});
	return class$;
}

$Class* PageAttributes$ColorType::class$ = nullptr;

	} // awt
} // java