#include <DummyWebSocketServer$Credentials.h>
#include <DummyWebSocketServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DummyWebSocketServer$Credentials::init$($String* name, $String* password) {
	$set(this, name$, name);
	$set(this, password$, password);
}

$String* DummyWebSocketServer$Credentials::name() {
	return this->name$;
}

$String* DummyWebSocketServer$Credentials::password() {
	return this->password$;
}

DummyWebSocketServer$Credentials::DummyWebSocketServer$Credentials() {
}

$Class* DummyWebSocketServer$Credentials::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummyWebSocketServer$Credentials, name$)},
		{"password", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummyWebSocketServer$Credentials, password$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DummyWebSocketServer$Credentials, init$, void, $String*, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyWebSocketServer$Credentials, name, $String*)},
		{"password", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummyWebSocketServer$Credentials, password, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummyWebSocketServer$Credentials", "DummyWebSocketServer", "Credentials", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DummyWebSocketServer$Credentials",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DummyWebSocketServer"
	};
	$loadClass(DummyWebSocketServer$Credentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummyWebSocketServer$Credentials);
	});
	return class$;
}

$Class* DummyWebSocketServer$Credentials::class$ = nullptr;