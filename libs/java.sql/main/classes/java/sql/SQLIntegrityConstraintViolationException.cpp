#include <java/sql/SQLIntegrityConstraintViolationException.h>
#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

void SQLIntegrityConstraintViolationException::init$() {
	$SQLNonTransientException::init$();
}

void SQLIntegrityConstraintViolationException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLIntegrityConstraintViolationException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException() {
}

SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const SQLIntegrityConstraintViolationException& e) : $SQLNonTransientException(e) {
}

void SQLIntegrityConstraintViolationException::throw$() {
	throw *this;
}

$Class* SQLIntegrityConstraintViolationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLIntegrityConstraintViolationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $String*, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLIntegrityConstraintViolationException, init$, void, $String*, $String*, int32_t, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.SQLIntegrityConstraintViolationException",
		"java.sql.SQLNonTransientException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLIntegrityConstraintViolationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLIntegrityConstraintViolationException));
	});
	return class$;
}

$Class* SQLIntegrityConstraintViolationException::class$ = nullptr;

	} // sql
} // java