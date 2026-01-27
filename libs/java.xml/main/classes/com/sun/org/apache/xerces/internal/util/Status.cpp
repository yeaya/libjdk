#include <com/sun/org/apache/xerces/internal/util/Status.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NOT_ALLOWED
#undef NOT_RECOGNIZED
#undef NOT_SUPPORTED
#undef RECOGNIZED
#undef SET
#undef UNKNOWN

using $StatusArray = $Array<::com::sun::org::apache::xerces::internal::util::Status>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _Status_FieldInfo_[] = {
	{"SET", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Status, SET)},
	{"UNKNOWN", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Status, UNKNOWN)},
	{"RECOGNIZED", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Status, RECOGNIZED)},
	{"NOT_SUPPORTED", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Status, NOT_SUPPORTED)},
	{"NOT_RECOGNIZED", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Status, NOT_RECOGNIZED)},
	{"NOT_ALLOWED", "Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Status, NOT_ALLOWED)},
	{"$VALUES", "[Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Status, $VALUES)},
	{"type", "S", nullptr, $PRIVATE | $FINAL, $field(Status, type)},
	{"isExceptional", "Z", nullptr, $PRIVATE, $field(Status, isExceptional$)},
	{}
};

$MethodInfo _Status_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Status, $values, $StatusArray*)},
	{"<init>", "(Ljava/lang/String;ISZ)V", "(SZ)V", $PRIVATE, $method(Status, init$, void, $String*, int32_t, int16_t, bool)},
	{"getType", "()S", nullptr, $PUBLIC, $method(Status, getType, int16_t)},
	{"isExceptional", "()Z", nullptr, $PUBLIC, $method(Status, isExceptional, bool)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC, $staticMethod(Status, valueOf, Status*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xerces/internal/util/Status;", nullptr, $PUBLIC | $STATIC, $staticMethod(Status, values, $StatusArray*)},
	{}
};

$ClassInfo _Status_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xerces.internal.util.Status",
	"java.lang.Enum",
	nullptr,
	_Status_FieldInfo_,
	_Status_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xerces/internal/util/Status;>;"
};

$Object* allocate$Status($Class* clazz) {
	return $of($alloc(Status));
}

Status* Status::SET = nullptr;
Status* Status::UNKNOWN = nullptr;
Status* Status::RECOGNIZED = nullptr;
Status* Status::NOT_SUPPORTED = nullptr;
Status* Status::NOT_RECOGNIZED = nullptr;
Status* Status::NOT_ALLOWED = nullptr;
$StatusArray* Status::$VALUES = nullptr;

$StatusArray* Status::$values() {
	$init(Status);
	return $new($StatusArray, {
		Status::SET,
		Status::UNKNOWN,
		Status::RECOGNIZED,
		Status::NOT_SUPPORTED,
		Status::NOT_RECOGNIZED,
		Status::NOT_ALLOWED
	});
}

$StatusArray* Status::values() {
	$init(Status);
	return $cast($StatusArray, Status::$VALUES->clone());
}

Status* Status::valueOf($String* name) {
	$init(Status);
	return $cast(Status, $Enum::valueOf(Status::class$, name));
}

void Status::init$($String* $enum$name, int32_t $enum$ordinal, int16_t type, bool isExceptional) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->type = type;
	this->isExceptional$ = isExceptional;
}

int16_t Status::getType() {
	return this->type;
}

bool Status::isExceptional() {
	return this->isExceptional$;
}

void clinit$Status($Class* class$) {
	$assignStatic(Status::SET, $new(Status, "SET"_s, 0, (int16_t)-3, false));
	$assignStatic(Status::UNKNOWN, $new(Status, "UNKNOWN"_s, 1, (int16_t)-2, false));
	$assignStatic(Status::RECOGNIZED, $new(Status, "RECOGNIZED"_s, 2, (int16_t)-1, false));
	$assignStatic(Status::NOT_SUPPORTED, $new(Status, "NOT_SUPPORTED"_s, 3, (int16_t)0, true));
	$assignStatic(Status::NOT_RECOGNIZED, $new(Status, "NOT_RECOGNIZED"_s, 4, (int16_t)1, true));
	$assignStatic(Status::NOT_ALLOWED, $new(Status, "NOT_ALLOWED"_s, 5, (int16_t)2, true));
	$assignStatic(Status::$VALUES, Status::$values());
}

Status::Status() {
}

$Class* Status::load$($String* name, bool initialize) {
	$loadClass(Status, name, initialize, &_Status_ClassInfo_, clinit$Status, allocate$Status);
	return class$;
}

$Class* Status::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com