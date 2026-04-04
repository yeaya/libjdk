#include <java/sql/SQLNonTransientConnectionException.h>
#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

void SQLNonTransientConnectionException::init$() {
	$SQLNonTransientException::init$();
}

void SQLNonTransientConnectionException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLNonTransientConnectionException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLNonTransientConnectionException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLNonTransientConnectionException::SQLNonTransientConnectionException() {
}

SQLNonTransientConnectionException::SQLNonTransientConnectionException(const SQLNonTransientConnectionException& e) : $SQLNonTransientException(e) {
}

void SQLNonTransientConnectionException::throw$() {
	throw *this;
}

$Class* SQLNonTransientConnectionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLNonTransientConnectionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $String*, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientConnectionException, init$, void, $String*, $String*, int32_t, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.SQLNonTransientConnectionException",
		"java.sql.SQLNonTransientException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLNonTransientConnectionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLNonTransientConnectionException));
	});
	return class$;
}

$Class* SQLNonTransientConnectionException::class$ = nullptr;

	} // sql
} // java