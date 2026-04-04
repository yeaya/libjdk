#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DOUBLE
#undef EMPTY
#undef SINGLE
#undef UNQUOTED

using $AttributeTree$ValueKindArray = $Array<::com::sun::source::doctree::AttributeTree$ValueKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

AttributeTree$ValueKind* AttributeTree$ValueKind::EMPTY = nullptr;
AttributeTree$ValueKind* AttributeTree$ValueKind::UNQUOTED = nullptr;
AttributeTree$ValueKind* AttributeTree$ValueKind::SINGLE = nullptr;
AttributeTree$ValueKind* AttributeTree$ValueKind::DOUBLE = nullptr;
$AttributeTree$ValueKindArray* AttributeTree$ValueKind::$VALUES = nullptr;

$AttributeTree$ValueKindArray* AttributeTree$ValueKind::$values() {
	$init(AttributeTree$ValueKind);
	return $new($AttributeTree$ValueKindArray, {
		AttributeTree$ValueKind::EMPTY,
		AttributeTree$ValueKind::UNQUOTED,
		AttributeTree$ValueKind::SINGLE,
		AttributeTree$ValueKind::DOUBLE
	});
}

$AttributeTree$ValueKindArray* AttributeTree$ValueKind::values() {
	$init(AttributeTree$ValueKind);
	return $cast($AttributeTree$ValueKindArray, AttributeTree$ValueKind::$VALUES->clone());
}

AttributeTree$ValueKind* AttributeTree$ValueKind::valueOf($String* name) {
	$init(AttributeTree$ValueKind);
	return $cast(AttributeTree$ValueKind, $Enum::valueOf(AttributeTree$ValueKind::class$, name));
}

void AttributeTree$ValueKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void AttributeTree$ValueKind::clinit$($Class* clazz) {
	$assignStatic(AttributeTree$ValueKind::EMPTY, $new(AttributeTree$ValueKind, "EMPTY"_s, 0));
	$assignStatic(AttributeTree$ValueKind::UNQUOTED, $new(AttributeTree$ValueKind, "UNQUOTED"_s, 1));
	$assignStatic(AttributeTree$ValueKind::SINGLE, $new(AttributeTree$ValueKind, "SINGLE"_s, 2));
	$assignStatic(AttributeTree$ValueKind::DOUBLE, $new(AttributeTree$ValueKind, "DOUBLE"_s, 3));
	$assignStatic(AttributeTree$ValueKind::$VALUES, AttributeTree$ValueKind::$values());
}

AttributeTree$ValueKind::AttributeTree$ValueKind() {
}

$Class* AttributeTree$ValueKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, EMPTY)},
		{"UNQUOTED", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, UNQUOTED)},
		{"SINGLE", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, SINGLE)},
		{"DOUBLE", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, DOUBLE)},
		{"$VALUES", "[Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AttributeTree$ValueKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AttributeTree$ValueKind, $values, $AttributeTree$ValueKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AttributeTree$ValueKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(AttributeTree$ValueKind, valueOf, AttributeTree$ValueKind*, $String*)},
		{"values", "()[Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(AttributeTree$ValueKind, values, $AttributeTree$ValueKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.doctree.AttributeTree$ValueKind", "com.sun.source.doctree.AttributeTree", "ValueKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.source.doctree.AttributeTree$ValueKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/source/doctree/AttributeTree$ValueKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.doctree.AttributeTree"
	};
	$loadClass(AttributeTree$ValueKind, name, initialize, &classInfo$$, AttributeTree$ValueKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AttributeTree$ValueKind));
	});
	return class$;
}

$Class* AttributeTree$ValueKind::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com