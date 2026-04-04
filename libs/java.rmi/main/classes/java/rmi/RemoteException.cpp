#include <java/rmi/RemoteException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {

void RemoteException::init$() {
	$IOException::init$();
	initCause(nullptr);
}

void RemoteException::init$($String* s) {
	$IOException::init$(s);
	initCause(nullptr);
}

void RemoteException::init$($String* s, $Throwable* cause) {
	$IOException::init$(s);
	initCause(nullptr);
	$set(this, detail, cause);
}

$String* RemoteException::getMessage() {
	$useLocalObjectStack();
	if (this->detail == nullptr) {
		return $IOException::getMessage();
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($IOException::getMessage()));
		var$0->append("; nested exception is: \n\t"_s);
		var$0->append($(this->detail->toString()));
		return $str(var$0);
	}
}

$Throwable* RemoteException::getCause() {
	return this->detail;
}

RemoteException::RemoteException() {
}

RemoteException::RemoteException(const RemoteException& e) : $IOException(e) {
}

void RemoteException::throw$() {
	throw *this;
}

$Class* RemoteException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RemoteException, serialVersionUID)},
		{"detail", "Ljava/lang/Throwable;", nullptr, $PUBLIC, $field(RemoteException, detail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RemoteException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RemoteException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(RemoteException, init$, void, $String*, $Throwable*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(RemoteException, getCause, $Throwable*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RemoteException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.RemoteException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RemoteException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RemoteException);
	});
	return class$;
}

$Class* RemoteException::class$ = nullptr;

	} // rmi
} // java