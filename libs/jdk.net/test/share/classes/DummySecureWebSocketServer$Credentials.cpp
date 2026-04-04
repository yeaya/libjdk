#include <DummySecureWebSocketServer$Credentials.h>
#include <DummySecureWebSocketServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DummySecureWebSocketServer$Credentials::init$($String* name, $String* password) {
	$set(this, name$, name);
	$set(this, password$, password);
}

$String* DummySecureWebSocketServer$Credentials::name() {
	return this->name$;
}

$String* DummySecureWebSocketServer$Credentials::password() {
	return this->password$;
}

DummySecureWebSocketServer$Credentials::DummySecureWebSocketServer$Credentials() {
}

$Class* DummySecureWebSocketServer$Credentials::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer$Credentials, name$)},
		{"password", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer$Credentials, password$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DummySecureWebSocketServer$Credentials, init$, void, $String*, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$Credentials, name, $String*)},
		{"password", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$Credentials, password, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$Credentials", "DummySecureWebSocketServer", "Credentials", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DummySecureWebSocketServer$Credentials",
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
		"DummySecureWebSocketServer"
	};
	$loadClass(DummySecureWebSocketServer$Credentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$Credentials);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$Credentials::class$ = nullptr;