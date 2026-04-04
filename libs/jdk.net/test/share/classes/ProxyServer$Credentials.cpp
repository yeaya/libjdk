#include <ProxyServer$Credentials.h>
#include <ProxyServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ProxyServer$Credentials::init$($String* name, $String* password) {
	$set(this, name$, name);
	$set(this, password$, password);
}

$String* ProxyServer$Credentials::name() {
	return this->name$;
}

$String* ProxyServer$Credentials::password() {
	return this->password$;
}

ProxyServer$Credentials::ProxyServer$Credentials() {
}

$Class* ProxyServer$Credentials::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProxyServer$Credentials, name$)},
		{"password", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProxyServer$Credentials, password$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ProxyServer$Credentials, init$, void, $String*, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Credentials, name, $String*)},
		{"password", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Credentials, password, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProxyServer$Credentials", "ProxyServer", "Credentials", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ProxyServer$Credentials",
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
		"ProxyServer"
	};
	$loadClass(ProxyServer$Credentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Credentials);
	});
	return class$;
}

$Class* ProxyServer$Credentials::class$ = nullptr;