#include <java/sql/RowIdLifetime.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ROWID_UNSUPPORTED
#undef ROWID_VALID_FOREVER
#undef ROWID_VALID_OTHER
#undef ROWID_VALID_SESSION
#undef ROWID_VALID_TRANSACTION

using $RowIdLifetimeArray = $Array<::java::sql::RowIdLifetime>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _RowIdLifetime_FieldInfo_[] = {
	{"ROWID_UNSUPPORTED", "Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowIdLifetime, ROWID_UNSUPPORTED)},
	{"ROWID_VALID_OTHER", "Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowIdLifetime, ROWID_VALID_OTHER)},
	{"ROWID_VALID_SESSION", "Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowIdLifetime, ROWID_VALID_SESSION)},
	{"ROWID_VALID_TRANSACTION", "Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowIdLifetime, ROWID_VALID_TRANSACTION)},
	{"ROWID_VALID_FOREVER", "Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowIdLifetime, ROWID_VALID_FOREVER)},
	{"$VALUES", "[Ljava/sql/RowIdLifetime;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RowIdLifetime, $VALUES)},
	{}
};

$MethodInfo _RowIdLifetime_MethodInfo_[] = {
	{"$values", "()[Ljava/sql/RowIdLifetime;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RowIdLifetime, $values, $RowIdLifetimeArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(RowIdLifetime, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC, $staticMethod(RowIdLifetime, valueOf, RowIdLifetime*, $String*)},
	{"values", "()[Ljava/sql/RowIdLifetime;", nullptr, $PUBLIC | $STATIC, $staticMethod(RowIdLifetime, values, $RowIdLifetimeArray*)},
	{}
};

$ClassInfo _RowIdLifetime_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.sql.RowIdLifetime",
	"java.lang.Enum",
	nullptr,
	_RowIdLifetime_FieldInfo_,
	_RowIdLifetime_MethodInfo_,
	"Ljava/lang/Enum<Ljava/sql/RowIdLifetime;>;"
};

$Object* allocate$RowIdLifetime($Class* clazz) {
	return $of($alloc(RowIdLifetime));
}

RowIdLifetime* RowIdLifetime::ROWID_UNSUPPORTED = nullptr;
RowIdLifetime* RowIdLifetime::ROWID_VALID_OTHER = nullptr;
RowIdLifetime* RowIdLifetime::ROWID_VALID_SESSION = nullptr;
RowIdLifetime* RowIdLifetime::ROWID_VALID_TRANSACTION = nullptr;
RowIdLifetime* RowIdLifetime::ROWID_VALID_FOREVER = nullptr;
$RowIdLifetimeArray* RowIdLifetime::$VALUES = nullptr;

$RowIdLifetimeArray* RowIdLifetime::$values() {
	$init(RowIdLifetime);
	return $new($RowIdLifetimeArray, {
		RowIdLifetime::ROWID_UNSUPPORTED,
		RowIdLifetime::ROWID_VALID_OTHER,
		RowIdLifetime::ROWID_VALID_SESSION,
		RowIdLifetime::ROWID_VALID_TRANSACTION,
		RowIdLifetime::ROWID_VALID_FOREVER
	});
}

$RowIdLifetimeArray* RowIdLifetime::values() {
	$init(RowIdLifetime);
	return $cast($RowIdLifetimeArray, RowIdLifetime::$VALUES->clone());
}

RowIdLifetime* RowIdLifetime::valueOf($String* name) {
	$init(RowIdLifetime);
	return $cast(RowIdLifetime, $Enum::valueOf(RowIdLifetime::class$, name));
}

void RowIdLifetime::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$RowIdLifetime($Class* class$) {
	$assignStatic(RowIdLifetime::ROWID_UNSUPPORTED, $new(RowIdLifetime, "ROWID_UNSUPPORTED"_s, 0));
	$assignStatic(RowIdLifetime::ROWID_VALID_OTHER, $new(RowIdLifetime, "ROWID_VALID_OTHER"_s, 1));
	$assignStatic(RowIdLifetime::ROWID_VALID_SESSION, $new(RowIdLifetime, "ROWID_VALID_SESSION"_s, 2));
	$assignStatic(RowIdLifetime::ROWID_VALID_TRANSACTION, $new(RowIdLifetime, "ROWID_VALID_TRANSACTION"_s, 3));
	$assignStatic(RowIdLifetime::ROWID_VALID_FOREVER, $new(RowIdLifetime, "ROWID_VALID_FOREVER"_s, 4));
	$assignStatic(RowIdLifetime::$VALUES, RowIdLifetime::$values());
}

RowIdLifetime::RowIdLifetime() {
}

$Class* RowIdLifetime::load$($String* name, bool initialize) {
	$loadClass(RowIdLifetime, name, initialize, &_RowIdLifetime_ClassInfo_, clinit$RowIdLifetime, allocate$RowIdLifetime);
	return class$;
}

$Class* RowIdLifetime::class$ = nullptr;

	} // sql
} // java