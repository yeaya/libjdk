#include <java/sql/SQLInvalidAuthorizationSpecException.h>
#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

void SQLInvalidAuthorizationSpecException::init$() {
	$SQLNonTransientException::init$();
}

void SQLInvalidAuthorizationSpecException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLInvalidAuthorizationSpecException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException() {
}

SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const SQLInvalidAuthorizationSpecException& e) : $SQLNonTransientException(e) {
}

void SQLInvalidAuthorizationSpecException::throw$() {
	throw *this;
}

$Class* SQLInvalidAuthorizationSpecException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLInvalidAuthorizationSpecException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $String*, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLInvalidAuthorizationSpecException, init$, void, $String*, $String*, int32_t, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.SQLInvalidAuthorizationSpecException",
		"java.sql.SQLNonTransientException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLInvalidAuthorizationSpecException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLInvalidAuthorizationSpecException));
	});
	return class$;
}

$Class* SQLInvalidAuthorizationSpecException::class$ = nullptr;

	} // sql
} // java