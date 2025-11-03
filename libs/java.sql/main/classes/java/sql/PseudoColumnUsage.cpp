#include <java/sql/PseudoColumnUsage.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NO_USAGE_RESTRICTIONS
#undef SELECT_LIST_ONLY
#undef USAGE_UNKNOWN
#undef WHERE_CLAUSE_ONLY

using $PseudoColumnUsageArray = $Array<::java::sql::PseudoColumnUsage>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _PseudoColumnUsage_FieldInfo_[] = {
	{"SELECT_LIST_ONLY", "Ljava/sql/PseudoColumnUsage;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PseudoColumnUsage, SELECT_LIST_ONLY)},
	{"WHERE_CLAUSE_ONLY", "Ljava/sql/PseudoColumnUsage;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PseudoColumnUsage, WHERE_CLAUSE_ONLY)},
	{"NO_USAGE_RESTRICTIONS", "Ljava/sql/PseudoColumnUsage;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PseudoColumnUsage, NO_USAGE_RESTRICTIONS)},
	{"USAGE_UNKNOWN", "Ljava/sql/PseudoColumnUsage;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PseudoColumnUsage, USAGE_UNKNOWN)},
	{"$VALUES", "[Ljava/sql/PseudoColumnUsage;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PseudoColumnUsage, $VALUES)},
	{}
};

$MethodInfo _PseudoColumnUsage_MethodInfo_[] = {
	{"$values", "()[Ljava/sql/PseudoColumnUsage;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PseudoColumnUsageArray*(*)()>(&PseudoColumnUsage::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PseudoColumnUsage::*)($String*,int32_t)>(&PseudoColumnUsage::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/sql/PseudoColumnUsage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PseudoColumnUsage*(*)($String*)>(&PseudoColumnUsage::valueOf))},
	{"values", "()[Ljava/sql/PseudoColumnUsage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PseudoColumnUsageArray*(*)()>(&PseudoColumnUsage::values))},
	{}
};

$ClassInfo _PseudoColumnUsage_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.sql.PseudoColumnUsage",
	"java.lang.Enum",
	nullptr,
	_PseudoColumnUsage_FieldInfo_,
	_PseudoColumnUsage_MethodInfo_,
	"Ljava/lang/Enum<Ljava/sql/PseudoColumnUsage;>;"
};

$Object* allocate$PseudoColumnUsage($Class* clazz) {
	return $of($alloc(PseudoColumnUsage));
}

PseudoColumnUsage* PseudoColumnUsage::SELECT_LIST_ONLY = nullptr;
PseudoColumnUsage* PseudoColumnUsage::WHERE_CLAUSE_ONLY = nullptr;
PseudoColumnUsage* PseudoColumnUsage::NO_USAGE_RESTRICTIONS = nullptr;
PseudoColumnUsage* PseudoColumnUsage::USAGE_UNKNOWN = nullptr;
$PseudoColumnUsageArray* PseudoColumnUsage::$VALUES = nullptr;

$PseudoColumnUsageArray* PseudoColumnUsage::$values() {
	$init(PseudoColumnUsage);
	return $new($PseudoColumnUsageArray, {
		PseudoColumnUsage::SELECT_LIST_ONLY,
		PseudoColumnUsage::WHERE_CLAUSE_ONLY,
		PseudoColumnUsage::NO_USAGE_RESTRICTIONS,
		PseudoColumnUsage::USAGE_UNKNOWN
	});
}

$PseudoColumnUsageArray* PseudoColumnUsage::values() {
	$init(PseudoColumnUsage);
	return $cast($PseudoColumnUsageArray, PseudoColumnUsage::$VALUES->clone());
}

PseudoColumnUsage* PseudoColumnUsage::valueOf($String* name) {
	$init(PseudoColumnUsage);
	return $cast(PseudoColumnUsage, $Enum::valueOf(PseudoColumnUsage::class$, name));
}

void PseudoColumnUsage::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$PseudoColumnUsage($Class* class$) {
	$assignStatic(PseudoColumnUsage::SELECT_LIST_ONLY, $new(PseudoColumnUsage, "SELECT_LIST_ONLY"_s, 0));
	$assignStatic(PseudoColumnUsage::WHERE_CLAUSE_ONLY, $new(PseudoColumnUsage, "WHERE_CLAUSE_ONLY"_s, 1));
	$assignStatic(PseudoColumnUsage::NO_USAGE_RESTRICTIONS, $new(PseudoColumnUsage, "NO_USAGE_RESTRICTIONS"_s, 2));
	$assignStatic(PseudoColumnUsage::USAGE_UNKNOWN, $new(PseudoColumnUsage, "USAGE_UNKNOWN"_s, 3));
	$assignStatic(PseudoColumnUsage::$VALUES, PseudoColumnUsage::$values());
}

PseudoColumnUsage::PseudoColumnUsage() {
}

$Class* PseudoColumnUsage::load$($String* name, bool initialize) {
	$loadClass(PseudoColumnUsage, name, initialize, &_PseudoColumnUsage_ClassInfo_, clinit$PseudoColumnUsage, allocate$PseudoColumnUsage);
	return class$;
}

$Class* PseudoColumnUsage::class$ = nullptr;

	} // sql
} // java