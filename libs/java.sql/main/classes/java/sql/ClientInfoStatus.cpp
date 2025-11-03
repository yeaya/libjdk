#include <java/sql/ClientInfoStatus.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef REASON_UNKNOWN
#undef REASON_UNKNOWN_PROPERTY
#undef REASON_VALUE_INVALID
#undef REASON_VALUE_TRUNCATED

using $ClientInfoStatusArray = $Array<::java::sql::ClientInfoStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _ClientInfoStatus_FieldInfo_[] = {
	{"REASON_UNKNOWN", "Ljava/sql/ClientInfoStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientInfoStatus, REASON_UNKNOWN)},
	{"REASON_UNKNOWN_PROPERTY", "Ljava/sql/ClientInfoStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientInfoStatus, REASON_UNKNOWN_PROPERTY)},
	{"REASON_VALUE_INVALID", "Ljava/sql/ClientInfoStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientInfoStatus, REASON_VALUE_INVALID)},
	{"REASON_VALUE_TRUNCATED", "Ljava/sql/ClientInfoStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientInfoStatus, REASON_VALUE_TRUNCATED)},
	{"$VALUES", "[Ljava/sql/ClientInfoStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ClientInfoStatus, $VALUES)},
	{}
};

$MethodInfo _ClientInfoStatus_MethodInfo_[] = {
	{"$values", "()[Ljava/sql/ClientInfoStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClientInfoStatusArray*(*)()>(&ClientInfoStatus::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ClientInfoStatus::*)($String*,int32_t)>(&ClientInfoStatus::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClientInfoStatus*(*)($String*)>(&ClientInfoStatus::valueOf))},
	{"values", "()[Ljava/sql/ClientInfoStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClientInfoStatusArray*(*)()>(&ClientInfoStatus::values))},
	{}
};

$ClassInfo _ClientInfoStatus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.sql.ClientInfoStatus",
	"java.lang.Enum",
	nullptr,
	_ClientInfoStatus_FieldInfo_,
	_ClientInfoStatus_MethodInfo_,
	"Ljava/lang/Enum<Ljava/sql/ClientInfoStatus;>;"
};

$Object* allocate$ClientInfoStatus($Class* clazz) {
	return $of($alloc(ClientInfoStatus));
}

ClientInfoStatus* ClientInfoStatus::REASON_UNKNOWN = nullptr;
ClientInfoStatus* ClientInfoStatus::REASON_UNKNOWN_PROPERTY = nullptr;
ClientInfoStatus* ClientInfoStatus::REASON_VALUE_INVALID = nullptr;
ClientInfoStatus* ClientInfoStatus::REASON_VALUE_TRUNCATED = nullptr;
$ClientInfoStatusArray* ClientInfoStatus::$VALUES = nullptr;

$ClientInfoStatusArray* ClientInfoStatus::$values() {
	$init(ClientInfoStatus);
	return $new($ClientInfoStatusArray, {
		ClientInfoStatus::REASON_UNKNOWN,
		ClientInfoStatus::REASON_UNKNOWN_PROPERTY,
		ClientInfoStatus::REASON_VALUE_INVALID,
		ClientInfoStatus::REASON_VALUE_TRUNCATED
	});
}

$ClientInfoStatusArray* ClientInfoStatus::values() {
	$init(ClientInfoStatus);
	return $cast($ClientInfoStatusArray, ClientInfoStatus::$VALUES->clone());
}

ClientInfoStatus* ClientInfoStatus::valueOf($String* name) {
	$init(ClientInfoStatus);
	return $cast(ClientInfoStatus, $Enum::valueOf(ClientInfoStatus::class$, name));
}

void ClientInfoStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ClientInfoStatus($Class* class$) {
	$assignStatic(ClientInfoStatus::REASON_UNKNOWN, $new(ClientInfoStatus, "REASON_UNKNOWN"_s, 0));
	$assignStatic(ClientInfoStatus::REASON_UNKNOWN_PROPERTY, $new(ClientInfoStatus, "REASON_UNKNOWN_PROPERTY"_s, 1));
	$assignStatic(ClientInfoStatus::REASON_VALUE_INVALID, $new(ClientInfoStatus, "REASON_VALUE_INVALID"_s, 2));
	$assignStatic(ClientInfoStatus::REASON_VALUE_TRUNCATED, $new(ClientInfoStatus, "REASON_VALUE_TRUNCATED"_s, 3));
	$assignStatic(ClientInfoStatus::$VALUES, ClientInfoStatus::$values());
}

ClientInfoStatus::ClientInfoStatus() {
}

$Class* ClientInfoStatus::load$($String* name, bool initialize) {
	$loadClass(ClientInfoStatus, name, initialize, &_ClientInfoStatus_ClassInfo_, clinit$ClientInfoStatus, allocate$ClientInfoStatus);
	return class$;
}

$Class* ClientInfoStatus::class$ = nullptr;

	} // sql
} // java