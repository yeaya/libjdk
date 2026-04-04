#include <com/sun/xml/internal/stream/events/DummyEvent$DummyLocation.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

void DummyEvent$DummyLocation::init$() {
}

int32_t DummyEvent$DummyLocation::getCharacterOffset() {
	return -1;
}

int32_t DummyEvent$DummyLocation::getColumnNumber() {
	return -1;
}

int32_t DummyEvent$DummyLocation::getLineNumber() {
	return -1;
}

$String* DummyEvent$DummyLocation::getPublicId() {
	return nullptr;
}

$String* DummyEvent$DummyLocation::getSystemId() {
	return nullptr;
}

DummyEvent$DummyLocation::DummyEvent$DummyLocation() {
}

$Class* DummyEvent$DummyLocation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DummyEvent$DummyLocation, init$, void)},
		{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(DummyEvent$DummyLocation, getCharacterOffset, int32_t)},
		{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DummyEvent$DummyLocation, getColumnNumber, int32_t)},
		{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DummyEvent$DummyLocation, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyEvent$DummyLocation, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyEvent$DummyLocation, getSystemId, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.xml.internal.stream.events.DummyEvent$DummyLocation", "com.sun.xml.internal.stream.events.DummyEvent", "DummyLocation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.xml.internal.stream.events.DummyEvent$DummyLocation",
		"java.lang.Object",
		"javax.xml.stream.Location",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.xml.internal.stream.events.DummyEvent"
	};
	$loadClass(DummyEvent$DummyLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummyEvent$DummyLocation);
	});
	return class$;
}

$Class* DummyEvent$DummyLocation::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com