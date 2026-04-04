#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/CaseTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef RULE
#undef STATEMENT

using $CaseTree$CaseKindArray = $Array<::com::sun::source::tree::CaseTree$CaseKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

CaseTree$CaseKind* CaseTree$CaseKind::STATEMENT = nullptr;
CaseTree$CaseKind* CaseTree$CaseKind::RULE = nullptr;
$CaseTree$CaseKindArray* CaseTree$CaseKind::$VALUES = nullptr;

$CaseTree$CaseKindArray* CaseTree$CaseKind::$values() {
	$init(CaseTree$CaseKind);
	return $new($CaseTree$CaseKindArray, {
		CaseTree$CaseKind::STATEMENT,
		CaseTree$CaseKind::RULE
	});
}

$CaseTree$CaseKindArray* CaseTree$CaseKind::values() {
	$init(CaseTree$CaseKind);
	return $cast($CaseTree$CaseKindArray, CaseTree$CaseKind::$VALUES->clone());
}

CaseTree$CaseKind* CaseTree$CaseKind::valueOf($String* name) {
	$init(CaseTree$CaseKind);
	return $cast(CaseTree$CaseKind, $Enum::valueOf(CaseTree$CaseKind::class$, name));
}

void CaseTree$CaseKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void CaseTree$CaseKind::clinit$($Class* clazz) {
	$assignStatic(CaseTree$CaseKind::STATEMENT, $new(CaseTree$CaseKind, "STATEMENT"_s, 0));
	$assignStatic(CaseTree$CaseKind::RULE, $new(CaseTree$CaseKind, "RULE"_s, 1));
	$assignStatic(CaseTree$CaseKind::$VALUES, CaseTree$CaseKind::$values());
}

CaseTree$CaseKind::CaseTree$CaseKind() {
}

$Class* CaseTree$CaseKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"STATEMENT", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CaseTree$CaseKind, STATEMENT)},
		{"RULE", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CaseTree$CaseKind, RULE)},
		{"$VALUES", "[Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CaseTree$CaseKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CaseTree$CaseKind, $values, $CaseTree$CaseKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CaseTree$CaseKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(CaseTree$CaseKind, valueOf, CaseTree$CaseKind*, $String*)},
		{"values", "()[Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(CaseTree$CaseKind, values, $CaseTree$CaseKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.tree.CaseTree$CaseKind", "com.sun.source.tree.CaseTree", "CaseKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.source.tree.CaseTree$CaseKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/source/tree/CaseTree$CaseKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.tree.CaseTree"
	};
	$loadClass(CaseTree$CaseKind, name, initialize, &classInfo$$, CaseTree$CaseKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CaseTree$CaseKind));
	});
	return class$;
}

$Class* CaseTree$CaseKind::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com