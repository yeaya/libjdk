#include <HandshakeFailureTest$ExpectedExceptionType.h>
#include <HandshakeFailureTest.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef WSAECONNABORTED

using $HandshakeFailureTest$ExpectedExceptionTypeArray = $Array<HandshakeFailureTest$ExpectedExceptionType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE = nullptr;
HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED = nullptr;
$HandshakeFailureTest$ExpectedExceptionTypeArray* HandshakeFailureTest$ExpectedExceptionType::$VALUES = nullptr;

$HandshakeFailureTest$ExpectedExceptionTypeArray* HandshakeFailureTest$ExpectedExceptionType::$values() {
	$init(HandshakeFailureTest$ExpectedExceptionType);
	return $new($HandshakeFailureTest$ExpectedExceptionTypeArray, {
		HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE,
		HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED
	});
}

$HandshakeFailureTest$ExpectedExceptionTypeArray* HandshakeFailureTest$ExpectedExceptionType::values() {
	$init(HandshakeFailureTest$ExpectedExceptionType);
	return $cast($HandshakeFailureTest$ExpectedExceptionTypeArray, HandshakeFailureTest$ExpectedExceptionType::$VALUES->clone());
}

HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest$ExpectedExceptionType::valueOf($String* name) {
	$init(HandshakeFailureTest$ExpectedExceptionType);
	return $cast(HandshakeFailureTest$ExpectedExceptionType, $Enum::valueOf(HandshakeFailureTest$ExpectedExceptionType::class$, name));
}

void HandshakeFailureTest$ExpectedExceptionType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void HandshakeFailureTest$ExpectedExceptionType::clinit$($Class* clazz) {
	$assignStatic(HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE, $new(HandshakeFailureTest$ExpectedExceptionType, "HANDSHAKE_FAILURE"_s, 0));
	$assignStatic(HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED, $new(HandshakeFailureTest$ExpectedExceptionType, "WSAECONNABORTED"_s, 1));
	$assignStatic(HandshakeFailureTest$ExpectedExceptionType::$VALUES, HandshakeFailureTest$ExpectedExceptionType::$values());
}

HandshakeFailureTest$ExpectedExceptionType::HandshakeFailureTest$ExpectedExceptionType() {
}

$Class* HandshakeFailureTest$ExpectedExceptionType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HANDSHAKE_FAILURE", "LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HandshakeFailureTest$ExpectedExceptionType, HANDSHAKE_FAILURE)},
		{"WSAECONNABORTED", "LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HandshakeFailureTest$ExpectedExceptionType, WSAECONNABORTED)},
		{"$VALUES", "[LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(HandshakeFailureTest$ExpectedExceptionType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HandshakeFailureTest$ExpectedExceptionType, $values, $HandshakeFailureTest$ExpectedExceptionTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(HandshakeFailureTest$ExpectedExceptionType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC, $staticMethod(HandshakeFailureTest$ExpectedExceptionType, valueOf, HandshakeFailureTest$ExpectedExceptionType*, $String*)},
		{"values", "()[LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC, $staticMethod(HandshakeFailureTest$ExpectedExceptionType, values, $HandshakeFailureTest$ExpectedExceptionTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandshakeFailureTest$ExpectedExceptionType", "HandshakeFailureTest", "ExpectedExceptionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"HandshakeFailureTest$ExpectedExceptionType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LHandshakeFailureTest$ExpectedExceptionType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HandshakeFailureTest"
	};
	$loadClass(HandshakeFailureTest$ExpectedExceptionType, name, initialize, &classInfo$$, HandshakeFailureTest$ExpectedExceptionType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(HandshakeFailureTest$ExpectedExceptionType));
	});
	return class$;
}

$Class* HandshakeFailureTest$ExpectedExceptionType::class$ = nullptr;