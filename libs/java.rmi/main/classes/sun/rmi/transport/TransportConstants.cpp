#include <sun/rmi/transport/TransportConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace transport {

void TransportConstants::init$() {
}

TransportConstants::TransportConstants() {
}

$Class* TransportConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"Magic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, Magic)},
		{"Version", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, Version)},
		{"StreamProtocol", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, StreamProtocol)},
		{"SingleOpProtocol", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, SingleOpProtocol)},
		{"MultiplexProtocol", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, MultiplexProtocol)},
		{"ProtocolAck", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, ProtocolAck)},
		{"ProtocolNack", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, ProtocolNack)},
		{"Call", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, Call)},
		{"Return", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, Return)},
		{"Ping", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, Ping)},
		{"PingAck", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, PingAck)},
		{"DGCAck", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, DGCAck)},
		{"NormalReturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, NormalReturn)},
		{"ExceptionalReturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransportConstants, ExceptionalReturn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransportConstants, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.transport.TransportConstants",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TransportConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportConstants);
	});
	return class$;
}

$Class* TransportConstants::class$ = nullptr;

		} // transport
	} // rmi
} // sun