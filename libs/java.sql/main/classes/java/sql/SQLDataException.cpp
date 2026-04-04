#include <java/sql/SQLDataException.h>
#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

void SQLDataException::init$() {
	$SQLNonTransientException::init$();
}

void SQLDataException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLDataException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLDataException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLDataException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLDataException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLDataException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLDataException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLDataException::SQLDataException() {
}

SQLDataException::SQLDataException(const SQLDataException& e) : $SQLNonTransientException(e) {
}

void SQLDataException::throw$() {
	throw *this;
}

$Class* SQLDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLDataException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SQLDataException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $String*, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLDataException, init$, void, $String*, $String*, int32_t, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.SQLDataException",
		"java.sql.SQLNonTransientException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLDataException));
	});
	return class$;
}

$Class* SQLDataException::class$ = nullptr;

	} // sql
} // java