#include <java/sql/SQLTransientConnectionException.h>
#include <java/sql/SQLTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLTransientException = ::java::sql::SQLTransientException;

namespace java {
	namespace sql {

void SQLTransientConnectionException::init$() {
	$SQLTransientException::init$();
}

void SQLTransientConnectionException::init$($String* reason) {
	$SQLTransientException::init$(reason);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState) {
	$SQLTransientException::init$(reason, SQLState);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLTransientException::init$(reason, SQLState, vendorCode);
}

void SQLTransientConnectionException::init$($Throwable* cause) {
	$SQLTransientException::init$(cause);
}

void SQLTransientConnectionException::init$($String* reason, $Throwable* cause) {
	$SQLTransientException::init$(reason, cause);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, cause);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLTransientConnectionException::SQLTransientConnectionException() {
}

SQLTransientConnectionException::SQLTransientConnectionException(const SQLTransientConnectionException& e) : $SQLTransientException(e) {
}

void SQLTransientConnectionException::throw$() {
	throw *this;
}

$Class* SQLTransientConnectionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLTransientConnectionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $String*, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientConnectionException, init$, void, $String*, $String*, int32_t, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.SQLTransientConnectionException",
		"java.sql.SQLTransientException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLTransientConnectionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLTransientConnectionException));
	});
	return class$;
}

$Class* SQLTransientConnectionException::class$ = nullptr;

	} // sql
} // java